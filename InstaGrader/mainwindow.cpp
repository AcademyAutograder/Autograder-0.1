#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grademenu.h"
#include "ui_grademenu.h"
#include <QFileDialog>
#include <QProcess>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->showMaximized();
   //QMenu
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_homeopen_clicked()
{
    grademenu *one = new grademenu;
    one -> show();

}

void MainWindow::on_homehome_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));
}


void MainWindow::on_homehelp_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
}

void MainWindow::on_homegrade_clicked()
{
    grademenu *one = new grademenu;
    one -> show();
}
