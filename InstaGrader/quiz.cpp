#include <QString>
#include <QProcess>
#include <QTime>
#include <stdlib.h>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

#include "quiz.h"

Quiz::Quiz()
{
}
Quiz::Quiz(QString &fName)
{
    name = fName;

}
void Quiz::compile()
{
    QString hComp = ("\"C:/Users/Ben/Autograder-0.1/InstaGrader/HiddenCompile.exe\"");
    QString command = "\"" + hComp + " \"" + name + ".cpp\"\"";
    system(command.toStdString().c_str());
}
void Quiz::execute(const QString &testCases)
{
    QTime t;
    t.start();
    QString ex = "\""+ name + ".exe<" + testCases + ">C:/Users/Ben/Autograder-0.1/MyQuizFiles/Quiz1/StudentOutput/" + name + ".txt\"";
    system(ex.toStdString().c_str());
    this->runTime = t.elapsed();
}
QString Quiz::getName()
{
    return name;
}
void Quiz::setName(const QString &n)
{
    name = n;
}
StudentQuiz::StudentQuiz()
{
}
StudentQuiz::StudentQuiz(QString &fName)
{
    name = fName;
}
bool StudentQuiz::getStatus()
{
    return status;
}

void StudentQuiz::grade(QString &anFileName)
{
    QMessageBox g;
    QString ans,stud;
    QString stFName = "C:/Users/Ben/Autograder-0.1/MyQuizFiles/Quiz1/StudentOutput/" + name + ".txt";
    QFile anFile(anFileName);
    anFile.open(QIODevice::ReadOnly);
    QFile textFile(stFName);
    textFile.open(QIODevice::ReadOnly);
    QTextStream in1(&textFile);
    QTextStream in2(&anFile);

    bool mistake = 1;
    while(!in1.atEnd() && !in2.atEnd())
    {
        stud = in1.readLine(100);
        ans = in2.readLine(100);
        if(stud != ans)
        {
            mistake = false;
            //break;
        }
    }
    if(mistake)
    {
        status = true;
        failReason = "N/A";
    }
    else
    {
        status = false;
        failReason = "INCORRECT OUTPUT";
    }
}
void StudentQuiz::overrideStat()
{
    if(status)
        status = 0;
    else
        status = 1;
}
float StudentQuiz::getRunTime()
{
    return StudentQuiz::runTime;
}
QString StudentQuiz::getFailReason()
{
    return StudentQuiz::failReason;
}
StudentQuiz::~StudentQuiz()
{
    QString ex,ob;
    ex = name + ".exe";
    ob = name + ".obj";
    remove(ex.toStdString().c_str());
    remove(ob.toStdString().c_str());
}
