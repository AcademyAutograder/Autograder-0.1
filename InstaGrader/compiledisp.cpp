#include "compiledisp.h"
#include "ui_compiledisp.h"

compiledisp::compiledisp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::compiledisp)
{
    ui->setupUi(this);
}

compiledisp::~compiledisp()
{
    delete ui;
}
