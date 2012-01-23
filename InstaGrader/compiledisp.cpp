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
void compiledisp::addTextToBox(QString &text)
{
    ui->compilinglineedit->appendPlainText(text);
}
