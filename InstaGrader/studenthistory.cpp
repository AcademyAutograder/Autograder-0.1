#include "studenthistory.h"
#include "ui_studenthistory.h"
#include "studentdb.h"


studenthistory::studenthistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studenthistory)
{
    ui->setupUi(this);
    listmodel = new QStringListModel (this);
    listmodel->setStringList(database.getNames());
    ui->listView->setModel(listmodel);
    ui->listView->setEditTriggers (QAbstractItemView::NoEditTriggers);
   //selection = ui->listView->selectionModel();
}

studenthistory::~studenthistory()
{
    delete ui;
}

void studenthistory::on_openpushButton_clicked()
{
    QModelIndex index = ui->listView->selectionModel()->currentIndex();
    QString name = index.data().toString();
    tablecommonstudent = new commontable;
    tablecommonstudent -> show();
}

void studenthistory::on_closeButton_clicked()
{
    close();
}
