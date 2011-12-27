#include <QtGui>
#include "grademenu.h"
#include "ui_grademenu.h"
#include <QFileDialog>
#include <QProcess>
#include <QVector>
#include <QMessageBox>
#include <vector>
#include "quiz.h"



grademenu::grademenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grademenu)
{
    //dir = "C:/Users/Ben/Autograder-0.1/InstaGrader/StudentFiles/";
    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->txtselect->hide();
    ui->label_2->hide();
}

grademenu::~grademenu()
{
    delete ui;
}

void grademenu::on_cppselect_clicked()
{

    dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    ui->lineEdit->setText(dir);


}

void grademenu::on_txtselect_clicked()
{
    fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));

    ui->lineEdit_2->setText(fileName);

}

void grademenu::on_opengradebutton_clicked()
{
    QVector<StudentQuiz> ve(1);
    QString fDir = dir;
    QDir directory(fDir);
    QStringList dirName;
    QString dirs;
    dirName = directory.entryList();
    for(int g = 2; g < dirName.size(); g++)
    {
        QString dInter = dirName.at(g);
        dInter.chop(4);
        ve[g-2].setName(dInter);
        dirs += fDir + "/" + dirName.at(g)+ " ";
    }
    //QString hComp = ("\"C:/Users/Ben/Autograder-0.1/InstaGrader/HiddenCompile.exe\"");
    QString hComp = ("\"../InstaGrader/HiddenCompile.exe\"");
    QString command = "\"" + hComp + " " + dirs + "\"";
    system(command.toStdString().c_str());
    QString f = fileName;
    for(int g = 0; g < ve.size(); g++)
        ve[g].execute(f);
    QMessageBox mes;
    QString answers = "../MyQuizFiles/Quiz1/Resources/answers.txt";
    //QString answers = "C:/Users/Ben/Autograder-0.1/MyQuizFiles/Quiz1/Resources/answers.txt";
    ve[0].grade(answers);
    if(ve[0].getStatus())
         mes.setText("Pass");
    else
         mes.setText("Fail");
    mes.exec();

    close();
}

void grademenu::on_openback_clicked()
{
    close();
}

void grademenu::on_lineEdit_textChanged(const QString &arg1)
{
    ui->lineEdit_2->show();
    ui->txtselect->show();
    ui->label_2->show();
}

void grademenu::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->opengradebutton->setEnabled(true);
}
