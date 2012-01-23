#include "studenthistory.h"
#include "ui_studenthistory.h"

studenthistory::studenthistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studenthistory)
{
    ui->setupUi(this);
    //listmodel = new QStringListModel (this);
    //listmodel->setStringList(list);
    //ui->listView->setModel(listmodel);
}

studenthistory::~studenthistory()
{
    delete ui;
}

void studenthistory::on_tableView_activated(const QModelIndex &index)
{
    tablecommonstudent = new commontable;
    tablecommonstudent -> show();
}
