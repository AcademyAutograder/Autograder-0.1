#include "editclass.h"
#include "ui_editclass.h"

QStringListModel EditClass::*nineclassmodel, EditClass::*tenclassmodel, EditClass::*elevenclassmodel, EditClass::*twelveclassmodel;
QStringList EditClass::editclasslist = (QStringList() << "");

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
    */
    //editclasslist = "notempty";
    if (editclasslist == (QStringList() << ""))
    {
        /*
        nineclassmodel->setStringList(editclasslist);
        tenclassmodel->setStringList(editclasslist);
        elevenclassmodel->setStringList(editclasslist);
        twelveclassmodel->setStringList(editclasslist);
        editclasslist = (QStringList() << "notempty");
        */
    }
    else
        ;
}

EditClass::~EditClass()
{
    delete ui;
}

