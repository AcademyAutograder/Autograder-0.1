#include "createnewquiz.h"
#include "ui_createnewquiz.h"
#include "mainwindow.h"
#include <ui_mainwindow.h>
#include <QFileDialog>
#include <QTextStream>




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
   //dir = "../Autograder-0.1/MyQuizFiles/Quiz1/StudentInput";    Here is where i tried to access a file i don;t know the whole extension of
    MainWindow &instance();

    filemodel->setRootPath(dir);
    instance().ui -> Homestudentlist ->setModel(filemodel);
    instance().ui->Homestudentlist->setRootIndex(filemodel->index(dir));

        QFile read(ans);
        read.open(QIODevice::ReadOnly);
        QTextStream in(&read);    // read the data serialized from the file
        QString ansstr;
        ansstr = in.readAll();
        instance().ui->HomeAnstxt->setPlainText(ansstr);

}
