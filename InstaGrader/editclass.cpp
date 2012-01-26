#include "editclass.h"
#include "ui_editclass.h"
#include <QMessageBox>
#include "studentdb.h"
#include "mainwindow.h"
//QStringList EditClass::editclasslist = (QStringList() << "");

EditClass::EditClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditClass)
{
    ui->setupUi(this);
    modelnum = 0;
    model = new QStringListModel (this);
    model->setStringList(editclasslist);
    model->setStringList(database.getNames());
    ui->editclasslistView->setModel(model);
    ui->editclasslistView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

EditClass::~EditClass()
{
    delete ui;
}

void EditClass::on_addstudbutton_clicked()
{
    int row = model->rowCount();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);

    ui->editclasslistView->setCurrentIndex(index);
    ui->editclasslistView->edit(index);
}

void EditClass::on_insertstudbutton_clicked()
{

    int row = ui->editclasslistView->currentIndex().row();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);

    ui->editclasslistView->setCurrentIndex(index);
    ui->editclasslistView->edit(index);

}

void EditClass::on_deletestudbutton_clicked()
{
    QString delStud = model->stringList().at(ui->editclasslistView->currentIndex().row());
    database.deleteStudent(delStud);
    model->removeRows(ui->editclasslistView->currentIndex().row(),1);

}
void EditClass::on_savebutton_clicked()
{
    for(int x = 0; x < model->stringList().size(); x++)
    {
        QString stName = model->stringList().at(x);
        if(!database.studentExist(stName))
            database.newStudent(stName);
    }

    model->setStringList(database.getNames());

}
