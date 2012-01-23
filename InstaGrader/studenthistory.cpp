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
}

studenthistory::~studenthistory()
{
    delete ui;
}

void studenthistory::on_listView_activated(const QModelIndex &index)
{
    tablecommonstudent = new commontable;
    tablecommonstudent -> show();
    QString name = index.data().toString();
}
