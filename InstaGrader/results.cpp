#include "results.h"
#include "ui_results.h"
#include <QSqlQueryModel>

Results::Results(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);

}
void Results::displayResults(QString &qName)
{
    this->model = new QSqlQueryModel;
    QString cm = "SELECT * FROM " + qName;
    model->setQuery(cm);
    ui->resultstable->setModel(model);
}

Results::~Results()
{
    delete ui;
}

void Results::on_CreateQuizCancelbutton_clicked()
{
    close();
}
