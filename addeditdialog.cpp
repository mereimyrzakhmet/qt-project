#include "addeditdialog.h"
#include "ui_addeditdialog.h"

AddEditDialog::AddEditDialog(QWidget *parent, const QString &word, const QString &definition)
    : QDialog(parent), ui(new Ui::AddEditDialog)
{
    ui->setupUi(this);
    ui->lineEditWord->setText(word);
    ui->textEditDefinition->setText(definition);
}

AddEditDialog::~AddEditDialog() {
    delete ui;
}

QString AddEditDialog::getWord() const {
    return ui->lineEditWord->text();
}

QString AddEditDialog::getDefinition() const {
    return ui->textEditDefinition->toPlainText();
}

void AddEditDialog::on_buttonSave_clicked() {
    accept();
}

void AddEditDialog::on_buttonCancel_clicked() {
    reject();
}
