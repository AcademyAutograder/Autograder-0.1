#include <QFileDialog>
#include <QProcess>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog.h"
#include "ui_dialog.h"
#include <QObject>
#include <QWidget>
//#include <QtGui/QApplication>
//#include "mainwindow.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_openbackhome_clicked()
{
//need to add code for saving the file address

    close();

}
/*
void on_txtselect_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, QObject::tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));
}
*/
/*
void on_cppselect_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(Dialog, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
}
*/

void Dialog::on_openback_clicked()
{

    close();

}

void Dialog::on_Dialog_destroyed(QObject *arg1)
{
    show();
}
