#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dictionarymanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddWord();
    void refreshDictionaryList();
    void onEditWord(const QString &word);
    void onDeleteWord(const QString &word);

private:
    Ui::MainWindow *ui;
    DictionaryManager dictionaryManager;
};

#endif // MAINWINDOW_H
