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
    
private:
    Ui::DisplayTable *ui;
    QSqlQueryModel *model;

};

#endif // DISPLAYTABLE_H
