#include "listitemwidget.h"
#include "ui_listitemwidget.h"

ListItemWidget::ListItemWidget(const QString &word, const QString &definition, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListItemWidget)
    , word(word)
    , definition(definition)
{
    ui->setupUi(this);
    ui->labelWord->setText(word + ": " + definition);
}

ListItemWidget::~ListItemWidget()
{
    delete ui;
}

QString ListItemWidget::getWord() const
{
    return word;
}

QString ListItemWidget::getDefinition() const
{
    return definition;
}

void ListItemWidget::on_buttonEdit_clicked()
{
    emit editRequested(word);
}

void ListItemWidget::on_buttonDelete_clicked()
{
    emit deleteRequested(word);
}
