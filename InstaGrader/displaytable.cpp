#include "displaytable.h"
#include "ui_displaytable.h"

DisplayTable::DisplayTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayTable)
{
    ui->setupUi(this);
    this->model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM gradetable");
    ui->tableView->setModel(model);
}

DisplayTable::~DisplayTable()
{
    delete ui;
}

void DisplayTable::on_pushButton9_clicked()
{

}

void DisplayTable::on_pushButton10_clicked()
{

}

void DisplayTable::on_pushButton11_clicked()
{

}

void DisplayTable::on_pushButton12_clicked()
{

}
