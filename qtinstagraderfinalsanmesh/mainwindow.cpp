#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_createnewquiz.h"
#include "ui_editclass.h"
#include "ui_results.h"

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
