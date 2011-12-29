#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createnewquiz.h"
#include <QStringListModel>
#include "ui_createnewquiz.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
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
