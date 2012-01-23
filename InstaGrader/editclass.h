#ifndef EDITCLASS_H
#define EDITCLASS_H

#include <QDialog>
#include <QStringListModel>
#include "studentdb.h"




namespace Ui {
class EditClass;
}

class EditClass : public QDialog
{
    Q_OBJECT
    
public:
    explicit EditClass(QWidget *parent = 0);
    ~EditClass();
    //QStringListModel *nineclassmodel, *tenclassmodel, *elevenclassmodel, *twelveclassmodel;
    QStringListModel *model;
    QStringList editclasslist;

    
private slots:
    void on_addstudbutton_clicked();

    void on_insertstudbutton_clicked();

    void on_deletestudbutton_clicked();

    void on_savebutton_clicked();

private:
    Ui::EditClass *ui;
    int modelnum;
    StudentDB database;




};

#endif // EDITCLASS_H
