#include "quizhistorywindow.h"
#include "ui_quizhistorywindow.h"


QuizHistorywindow::QuizHistorywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuizHistorywindow)
{

    ui->setupUi(this);
<<<<<<< HEAD
    listmodel = new QStringListModel (this);
    list = database.getQuizzes();
    listmodel->setStringList(list);
    ui->listView->setModel(listmodel);
=======
    //listmodel = new QStringListModel (this);
    //listmodel->setStringList(list);
   // ui->listView->setModel(listmodel);
>>>>>>> 459fe1cc09af12aed696349bf703a0b65f1c416a
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
