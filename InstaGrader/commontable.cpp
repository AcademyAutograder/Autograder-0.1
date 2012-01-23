#include "commontable.h"
#include "ui_commontable.h"

commontable::commontable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commontable)
{
    ui->setupUi(this);
}

commontable::~commontable()
{
    delete ui;
}
