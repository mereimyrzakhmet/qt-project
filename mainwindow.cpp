#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addeditdialog.h"
#include "listitemwidget.h"
#include <QMessageBox>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dictionaryManager.loadDictionary("dictionary.txt");

    refreshDictionaryList();

    connect(ui->addWordButton, &QPushButton::clicked, this, &MainWindow::onAddWord);
}

MainWindow::~MainWindow()
{
    dictionaryManager.saveDictionary("dictionary.txt");
    delete ui;
}

void MainWindow::onAddWord()
{
    AddEditDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString word = dialog.getWord();
        QString definition = dialog.getDefinition();

        if (!word.isEmpty() && !definition.isEmpty()) {
            if (dictionaryManager.addWord(word, definition)) {
                QMessageBox::information(this, "Success", "Word added successfully!");
                refreshDictionaryList();
            } else {
                QMessageBox::warning(this, "Error", "Word already exists!");
            }
        } else {
            QMessageBox::warning(this, "Error", "Word or definition cannot be empty!");
        }
    }
}

void MainWindow::onEditWord(const QString &word)
{
    QString currentDefinition = dictionaryManager.searchWord(word);
    AddEditDialog dialog(this, word, currentDefinition);

    if (dialog.exec() == QDialog::Accepted) {
        QString newWord = dialog.getWord();
        QString newDefinition = dialog.getDefinition();

        if (!newWord.isEmpty() && !newDefinition.isEmpty()) {
            if (newWord != word) {
                if (dictionaryManager.getDictionary().contains(newWord)) {
                    QMessageBox::warning(this, "Error", "A word with the new name already exists!");
                    return;
                }

                dictionaryManager.deleteWord(word);
                dictionaryManager.addWord(newWord, newDefinition);
            } else {
                dictionaryManager.editWord(word, newDefinition);
            }

            QMessageBox::information(this, "Success", "Word updated successfully!");
            refreshDictionaryList();
        } else {
            QMessageBox::warning(this, "Error", "Word or definition cannot be empty!");
        }
    }
}


void MainWindow::onDeleteWord(const QString &word)
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirm Deletion",
                                                              "Are you sure you want to delete the word '" + word + "'?",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (dictionaryManager.deleteWord(word)) {
            QMessageBox::information(this, "Success", "Word deleted successfully!");
            refreshDictionaryList();
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete the word.");
        }
    }
}


void MainWindow::refreshDictionaryList()
{
    ui->dictionaryListWidget->clear();

    for (const QString &word : dictionaryManager.getDictionary().keys()) {
        QString definition = dictionaryManager.searchWord(word);

        auto *itemWidget = new ListItemWidget(word, definition, this);

        connect(itemWidget, &ListItemWidget::editRequested, this, &MainWindow::onEditWord);
        connect(itemWidget, &ListItemWidget::deleteRequested, this, &MainWindow::onDeleteWord);

        QListWidgetItem *listItem = new QListWidgetItem(ui->dictionaryListWidget);
        listItem->setSizeHint(itemWidget->sizeHint());
        ui->dictionaryListWidget->setItemWidget(listItem, itemWidget);
    }
}
