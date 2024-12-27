/********************************************************************************
** Form generated from reading UI file 'addeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITDIALOG_H
#define UI_ADDEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditWord;
    QLabel *label_2;
    QTextEdit *textEditDefinition;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonCancel;
    QPushButton *buttonSave;

    void setupUi(QDialog *AddEditDialog)
    {
        if (AddEditDialog->objectName().isEmpty())
            AddEditDialog->setObjectName(QString::fromUtf8("AddEditDialog"));
        AddEditDialog->resize(407, 300);
        verticalLayout = new QVBoxLayout(AddEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEditWord = new QLineEdit(AddEditDialog);
        lineEditWord->setObjectName(QString::fromUtf8("lineEditWord"));

        verticalLayout->addWidget(lineEditWord);

        label_2 = new QLabel(AddEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textEditDefinition = new QTextEdit(AddEditDialog);
        textEditDefinition->setObjectName(QString::fromUtf8("textEditDefinition"));

        verticalLayout->addWidget(textEditDefinition);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonCancel = new QPushButton(AddEditDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);

        buttonSave = new QPushButton(AddEditDialog);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        horizontalLayout->addWidget(buttonSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddEditDialog);

        QMetaObject::connectSlotsByName(AddEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditDialog)
    {
        AddEditDialog->setWindowTitle(QCoreApplication::translate("AddEditDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddEditDialog", "Word", nullptr));
        label_2->setText(QCoreApplication::translate("AddEditDialog", "Definition", nullptr));
        buttonCancel->setText(QCoreApplication::translate("AddEditDialog", "Cancel", nullptr));
        buttonSave->setText(QCoreApplication::translate("AddEditDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditDialog: public Ui_AddEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITDIALOG_H
