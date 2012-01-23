#include "quizhistorywindow.h"
#include "ui_quizhistorywindow.h"


QuizHistorywindow::QuizHistorywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuizHistorywindow)
{

    ui->setupUi(this);
    listmodel = new QStringListModel (this);
    list = database.getQuizzes();
    //listmodel->setStringList(list);
    listmodel->setStringList(database.getQuizzes());
    ui->listView->setModel(listmodel);
    ui->listView->setEditTriggers (QAbstractItemView::NoEditTriggers);
}

QuizHistorywindow::~QuizHistorywindow()
{
    delete ui;
}


void QuizHistorywindow::on_listView_activated(const QModelIndex &index)
{
    QString name = index.data().toString();
    tablecommon = new commontable;
    tablecommon->show();
}
