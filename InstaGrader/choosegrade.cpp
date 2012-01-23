#include "choosegrade.h"
#include "ui_choosegrade.h"
#include "mainwindow.h"
#include "studentdb.h"

ChooseGrade::ChooseGrade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseGrade)
{
    ui->setupUi(this);
    ui->comboBox->addItem("9th Grade");
    ui->comboBox->addItem("10th Grade");
    ui->comboBox->addItem("11th Grade");
    ui->comboBox->addItem("12th Grade");
}

ChooseGrade::~ChooseGrade()
{
    delete ui;
}

void ChooseGrade::on_pushButton_clicked()
{
    MainWindow &instance();
    instance().grade = ui->comboBox->currentIndex();
    database.closeDB();
    database.openDB(instance().grade + 9);
    close();
}
