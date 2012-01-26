#ifndef COMMONTABLE_H
#define COMMONTABLE_H

#include <QDialog>
#include <QString>
#include <QSqlQueryModel>

namespace Ui {
class commontable;
}

class commontable : public QDialog
{
    Q_OBJECT
    
public:
    explicit commontable(QWidget *parent = 0);
    void dispTable(QString &,int);
    ~commontable();
    
private slots:
    void on_CreateQuizCancelbutton_clicked();

private:
    Ui::commontable *ui;
    QSqlQueryModel *model;
};

#endif // COMMONTABLE_H
