#include "editclass.h"
#include "ui_editclass.h"
#include <QMessageBox>
#include "student.h"
#include "studentdb.h"
//QStringList EditClass::editclasslist = (QStringList() << "");

EditClass::EditClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditClass)
{
    ui->setupUi(this);

    /*
    nineclassmodel = new QStringListModel(this);
    tenclassmodel = new QStringListModel(this);
    elevenclassmodel = new QStringListModel(this);
    twelveclassmodel = new QStringListModel(this);

    nineclassmodel->setStringList(editclasslist);
    tenclassmodel->setStringList(editclasslist);
    elevenclassmodel->setStringList(editclasslist);
    twelveclassmodel->setStringList(editclasslist);
    */

    modelnum = 0;

    model[0]= new QStringListModel (this);
    model[1] = new QStringListModel (this);
    model[2] = new QStringListModel (this);
    model[3] = new QStringListModel (this);

    ui->gradecomboBox->addItem("9th Grade");
    ui->gradecomboBox->addItem("10th Grade");
    ui->gradecomboBox->addItem("11th Grade");
    ui->gradecomboBox->addItem("12th Grade");

    editclasslist << "Type here";
    model[0]->setStringList(editclasslist);
    model[1]->setStringList(editclasslist);
    model[2]->setStringList(editclasslist);
    model[3]->setStringList(editclasslist);



    ui->editclasslistView->setModel(model[modelnum]);
    ui->editclasslistView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);


    // ui->gradecomboBox->
}

EditClass::~EditClass()
{
    delete ui;
}


void EditClass::on_addstudbutton_clicked()
{
    int row = model[modelnum]->rowCount();
    model[modelnum]->insertRows(row,1);

    QModelIndex index = model[modelnum]->index(row);

    ui->editclasslistView->setCurrentIndex(index);
    ui->editclasslistView->edit(index);
}

void EditClass::on_gradecomboBox_activated(int index)
{
    modelnum = index;
    ui->editclasslistView->setModel(model[modelnum]);
}

void EditClass::on_insertstudbutton_clicked()
{

    int row = ui->editclasslistView->currentIndex().row();
    model[modelnum]->insertRows(row,1);

    QModelIndex index = model[modelnum]->index(row);

    ui->editclasslistView->setCurrentIndex(index);
    ui->editclasslistView->edit(index);

}

void EditClass::on_deletestudbutton_clicked()
{
    model[modelnum]->removeRows(ui->editclasslistView->currentIndex().row(),1);
}
void EditClass::on_savebutton_clicked()
{
    //Here goes the creating new student part. I don't know how to open the database though.
    /*
    StudentDB database(9);


    for(int x = 0; x < model[0]->stringList().size(); x++)
    {
        QString stName = model[0]->stringList().at(x);
        if(database.studentExist(stName))
            database.newStudent(stName);
    }
    */


}
