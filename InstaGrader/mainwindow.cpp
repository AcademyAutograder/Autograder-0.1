#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_createnewquiz.h"
#include "ui_editclass.h"
#include "ui_results.h"
#include <QTextStream>
#include "displaytable.h"
#include "studenthistory.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    classedit = new EditClass;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Quiz_triggered()
{
    one = new CreateNewQuiz;
    one -> exec();

}

void MainWindow::on_actionEdit_class_triggered()
{
    classedit -> exec();
}

void MainWindow::on_Homeresultbutton_clicked()
{
    resultobj = new Results;
    resultobj -> exec();
}

void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_Homestudentlist_activated(const QModelIndex &index)
{
    QFile read(one->filemodel->filePath(index));
    read.open(QIODevice::ReadOnly);
    QTextStream in(&read);    // read the data serialized from the file
    QString ansstr;
    ansstr = in.readAll();
    ui->HomeStudentAnstxt->setPlainText(ansstr);

}



void MainWindow::on_actionOpen_class_records_triggered()
{
    disptable = new DisplayTable(this);
    disptable->show();
}

void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionQuiz_History_triggered()
{
    historystudent = new studenthistory;
    historystudent->exec();
}

void MainWindow::on_actionResults_triggered()
{
    windowhistory = new  QuizHistorywindow;
    windowhistory->exec();
}
