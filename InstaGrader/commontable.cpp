#include "commontable.h"
#include "ui_commontable.h"

commontable::commontable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commontable)
{
    ui->setupUi(this);
}

void commontable::dispTable(QString &name, int type)
{
    this->model = new QSqlQueryModel;
    QString cm = "SELECT * FROM " + name;
    model->setQuery(cm);
    ui->tableView->setModel(model);
}

commontable::~commontable()
{
    delete ui;
}

void commontable::on_CreateQuizCancelbutton_clicked()
{
    close();
}
