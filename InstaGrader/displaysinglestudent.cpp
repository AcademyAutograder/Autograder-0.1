#include "displaysinglestudent.h"
#include "ui_displaysinglestudent.h"
#include "viewstudentrecords.h"

DisplaySingleStudent::DisplaySingleStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplaySingleStudent)
{
    ui->setupUi(this);
    this->model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM gradetable");
    ui->tableView->setModel(model);
}

DisplaySingleStudent::~DisplaySingleStudent()
{
    delete ui;
}
