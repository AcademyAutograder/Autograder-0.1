#include "grademenu.h"
#include "ui_grademenu.h"
#include <QFileDialog>
#include <QProcess>

grademenu::grademenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grademenu)
{
    ui->setupUi(this);
}

grademenu::~grademenu()
{
    delete ui;
}

void grademenu::on_opentxt_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));
}
