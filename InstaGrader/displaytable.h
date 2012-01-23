#ifndef DISPLAYTABLE_H
#define DISPLAYTABLE_H

#include <QDialog>
#include <QtGui>
#include <QtSql>
#include <QtCore>

namespace Ui {
class DisplayTable;
}

class DisplayTable : public QDialog
{
    Q_OBJECT
    
public:
    explicit DisplayTable(QWidget *parent = 0);
    ~DisplayTable();
    
private slots:
    void on_pushButton9_clicked();

    void on_pushButton10_clicked();

    void on_pushButton11_clicked();

    void on_pushButton12_clicked();



private:
    Ui::DisplayTable *ui;
    QSqlQueryModel *model;

};

#endif // DISPLAYTABLE_H
