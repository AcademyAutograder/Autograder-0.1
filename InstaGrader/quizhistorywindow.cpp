#include "quizhistorywindow.h"
#include "ui_quizhistorywindow.h"

QuizHistorywindow::QuizHistorywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuizHistorywindow)
{
    ui->setupUi(this);
    //listmodel = new QStringListModel (this);
    //listmodel->setStringList(list);
   // ui->listView->setModel(listmodel);
}

QuizHistorywindow::~QuizHistorywindow()
{
    delete ui;
}


void QuizHistorywindow::on_tableView_activated(const QModelIndex &index)
{
    tablecommon = new commontable;
    tablecommon->show();
}
