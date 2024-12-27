#ifndef ADDEDITDIALOG_H
#define ADDEDITDIALOG_H

#include <QDialog>

namespace Ui {
class AddEditDialog;
}

class AddEditDialog : public QDialog {
    Q_OBJECT

public:
    explicit AddEditDialog(QWidget *parent = nullptr, const QString &word = "", const QString &definition = "");
    ~AddEditDialog();

    QString getWord() const;
    QString getDefinition() const;

private slots:
    void on_buttonSave_clicked();
    void on_buttonCancel_clicked();

private:
    Ui::AddEditDialog *ui;
};

#endif // ADDEDITDIALOG_H
