#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createnewquiz.h"
#include <QStringListModel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    model = new QStringListModel (this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Quiz_triggered()
{
   // CreateNewQuiz *one;
    one = new CreateNewQuiz;
  //  one->setParent(this);//////////////////////////////////////////////////////////////////// The frame just disapears
    one -> exec();
    QStringList listcopy; //////////////////////////////
    //one = new CreateNewQuiz;///////////////////////////////////////////////////////
    listcopy = one->sendlist();//////////////////////////////

    model->setStringList(listcopy);
    ui -> Homestudentlist ->setModel(model);//////////////////////////////
   // ui ->Homestudentlist->show();

}
