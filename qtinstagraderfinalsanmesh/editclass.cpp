#include "editclass.h"
#include "ui_editclass.h"

//QStringList EditClass::editclasslist = (QStringList() << "");

EditClass::EditClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditClass)
{
    ui->setupUi(this);

    editclasslist << "";
    nineclassmodel = new QStringListModel(this);
    tenclassmodel = new QStringListModel(this);
    elevenclassmodel = new QStringListModel(this);
    twelveclassmodel = new QStringListModel(this);

    nineclassmodel->setStringList(editclasslist);
    tenclassmodel->setStringList(editclasslist);
    elevenclassmodel->setStringList(editclasslist);
    twelveclassmodel->setStringList(editclasslist);
    ui->editclasslistView->setModel(nineclassmodel);
   // ui->gradecomboBox->
}

EditClass::~EditClass()
{
    delete ui;
}


void EditClass::on_addstudbutton_clicked()
{
    //Debugging purposes
}
