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
