/********************************************************************************
** Form generated from reading UI file 'listitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTITEMWIDGET_H
#define UI_LISTITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListItemWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWord;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonDelete;
    QPushButton *buttonEdit;

    void setupUi(QWidget *ListItemWidget)
    {
        if (ListItemWidget->objectName().isEmpty())
            ListItemWidget->setObjectName(QString::fromUtf8("ListItemWidget"));
        ListItemWidget->resize(400, 46);
        horizontalLayout_2 = new QHBoxLayout(ListItemWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelWord = new QLabel(ListItemWidget);
        labelWord->setObjectName(QString::fromUtf8("labelWord"));

        horizontalLayout_2->addWidget(labelWord);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonDelete = new QPushButton(ListItemWidget);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));

        horizontalLayout->addWidget(buttonDelete);

        buttonEdit = new QPushButton(ListItemWidget);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        horizontalLayout->addWidget(buttonEdit);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ListItemWidget);

        QMetaObject::connectSlotsByName(ListItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ListItemWidget)
    {
        ListItemWidget->setWindowTitle(QCoreApplication::translate("ListItemWidget", "Form", nullptr));
        labelWord->setText(QCoreApplication::translate("ListItemWidget", "TextLabel", nullptr));
        buttonDelete->setText(QCoreApplication::translate("ListItemWidget", "Delete", nullptr));
        buttonEdit->setText(QCoreApplication::translate("ListItemWidget", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListItemWidget: public Ui_ListItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTITEMWIDGET_H
