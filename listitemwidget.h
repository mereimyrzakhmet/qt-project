#ifndef LISTITEMWIDGET_H
#define LISTITEMWIDGET_H

#include <QWidget>

namespace Ui {
class ListItemWidget;
}

class ListItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListItemWidget(const QString &word, const QString &definition, QWidget *parent = nullptr);
    ~ListItemWidget();

    QString getWord() const;
    QString getDefinition() const;

signals:
    void editRequested(const QString &word);
    void deleteRequested(const QString &word);

private slots:
    void on_buttonEdit_clicked();
    void on_buttonDelete_clicked();

private:
    Ui::ListItemWidget *ui;
    QString word;
    QString definition;
};

#endif // LISTITEMWIDGET_H
