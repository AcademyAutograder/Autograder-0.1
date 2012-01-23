#include "createnewquiz.h"
#include "ui_createnewquiz.h"
#include "mainwindow.h"
#include <ui_mainwindow.h>
#include <QFileDialog>
#include <QTextStream>

#include <QProcess>
#include <QVector>
#include <QMessageBox>
#include <vector>
#include "quiz.h"
#include "studentdb.h"
#include <QDateTime>
#include "ui_compiledisp.h"

CreateNewQuiz::CreateNewQuiz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateNewQuiz)
{
    ui->setupUi(this);
    dir = "notempty";  //Initialzized so that there won't be any checking of if file with blank name exists
    testcase = "notempty"; //Initialzized so that there won't be any checking of if file with blank name exists
    ans = "notempty";//Initialzized so that there won't be any checking of if file with blank name exists
    filemodel = new QFileSystemModel (this);
}

CreateNewQuiz::~CreateNewQuiz()
{
    delete ui;
}

void CreateNewQuiz::on_CreateQuizCancelbutton_clicked()
{
    close();

}

void CreateNewQuiz::on_BrowseDirButton_clicked()
{
    dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    ui->ChooseDirlineedit->setText(dir);
}

void CreateNewQuiz::on_ChooseDirlineedit_textChanged(const QString &arg1)
{
    dir = arg1;
    if (QDir(dir).exists() == 1 && QFile(testcase).exists() == 1 && QFile(ans).exists() == 1 && dir != "" && testcase != "" && ans != "")
        ui->CreateQuizOkbutton ->setEnabled(true);
    else
        ui->CreateQuizOkbutton ->setEnabled(false);
}

void CreateNewQuiz::on_BrowseTestcasebutton_clicked()
{
    testcase = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));

    ui->ChooseTestcaselineedit->setText(testcase);

}

void CreateNewQuiz::on_ChooseTestcaselineedit_textChanged(const QString &arg1)
{
    testcase = arg1;
    if (QDir(dir).exists() == 1 && QFile(testcase).exists() == 1 && QFile(ans).exists() == 1 && dir != "" && testcase != "" && ans != "")
        ui -> CreateQuizOkbutton ->setEnabled(true);
    else
        ui -> CreateQuizOkbutton ->setEnabled(false);
}

void CreateNewQuiz::on_ChooseAnswerbutton_clicked()
{
    ans = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                    tr("Files (*.txt)"));

    ui->ChooseAnswerlineedit->setText(ans);
}

void CreateNewQuiz::on_ChooseAnswerlineedit_textChanged(const QString &arg1)
{
    ans = arg1;
    if (QDir(dir).exists() == 1 && QFile(testcase).exists() == 1 && QFile(ans).exists() == 1 && dir != "" && testcase != "" && ans != "")
        ui -> CreateQuizOkbutton -> setEnabled(true);
    else
        ui -> CreateQuizOkbutton ->setEnabled(false);
}

void CreateNewQuiz::on_CreateQuizOkbutton_clicked()
{

    exectime = ui->exectimeLineEdit->text().toInt();

    qDebug() << quizName;

    //StudentDB mainDB(11);
    // Need to acquire database number somehow
    MainWindow &instance();
    QString dir1 = "C:/Users/Ben/Autograder-0.1/MyQuizFiles/Quiz1/StudentOutput";

    QFile read(ans);
    read.open(QIODevice::ReadOnly);
    QTextStream in(&read);    // read the data serialized from the file
    QString ansstr;
    ansstr = in.readAll();

    QVector<StudentQuiz> ve;
    QString fDir = dir;
    QDir directory(fDir);
    QFileInfoList fileInfo = directory.entryInfoList();

    QStringList dirName;
    QString dirs;

    dirName = directory.entryList();
    for(int g = 2; g < dirName.size(); g++)
    {


        QString dInter = dirName.at(g);

        dInter.chop(4);
        StudentQuiz sQInter(dInter);
        sQInter.setTOD(fileInfo.at(g).lastModified());
        ve.push_back(sQInter);
        dirs += fDir + "/" + dirName.at(g)+ " ";
    }   

/*
    ***Old Compile Method***
    QString hComp = ("\"../InstaGrader/HiddenCompile.exe\"");
    QString command = "\"" + hComp + " " + dirs + "\"";
    system(command.toStdString().c_str());
*/

    for(int x = 0; x < ve.size(); x++)
    {
        QString compFile = fDir + "/" + dirName[x+2];
        ve[x].compile(compFile);
    }
    QMessageBox mes;
    for(int x = 0; x < ve.size(); x++)
    {
        QString timeHolder;
        ve[x].execute(testcase);
        ve[x].grade(ans);
        timeHolder.setNum(ve[x].getRunTime());
        if(ve[x].getStatus())
            mes.setText(ve[x].getName() + ": Pass : " + timeHolder + " seconds");
        else
            mes.setText(ve[x].getName() + ": Fail : " + timeHolder + " seconds");
        mes.exec();
        // newQuiz(quizName, ve);
    }


    filemodel->setRootPath(dir1);
    instance().ui -> Homestudentlist ->setModel(filemodel);
    instance().ui->Homestudentlist->setRootIndex(filemodel->index(dir1));
    instance().ui->HomeAnstxt->setPlainText(ansstr);
    close();

}

void CreateNewQuiz::on_EnterNamelineedit_textEdited(const QString &arg1)
{
    quizName = arg1;
}
