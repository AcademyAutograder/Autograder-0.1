#include <QString>
#include <QProcess>
#include <QTime>
#include <stdlib.h>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "mainwindow.h"

#include "quiz.h"


#define CL "\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\bin\\cl.exe\""

Quiz::Quiz()
{
}
Quiz::Quiz(QString &fName)
{
    name = fName;
}
void Quiz::compile(QString &cppFileName)
{
    QProcess comp;
    comp.setStandardOutputFile("compileOutput.txt");
    QStringList f;
    f << cppFileName;
    QString compProg = "\"../InstaGrader/HiddenCompile.exe\"";
    comp.start(compProg, f);
    if (!comp.waitForStarted())
             return;
    if(!comp.waitForFinished())
        return;
}
void Quiz::execute(const QString &testCases,int execTime)
{

    QTime t;
    QProcess exec;
    exec.setStandardInputFile(testCases);
    exec.setStandardOutputFile("../MyQuizFiles/Quiz1/StudentOutput/" + name + ".txt");

    exec.start(name + ".exe");
    if (!exec.waitForStarted())
             return;
    t.start();

    if (!exec.waitForFinished(execTime*1000))
    {
        this->runTime = 0;
        failReason = "HANG";
    }
    else
    {
        runTime = t.elapsed();
        runTime /= 1000;
    }
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
QString StudentQuiz::getStatus()
{
    return status;
}

void StudentQuiz::grade(QString &anFileName)
{
    QMessageBox g;
    QString ans,stud;

    QString stFName = "../MyQuizFiles/Quiz1/StudentOutput/" + name + ".txt";
    QFile anFile(anFileName);
    anFile.open(QIODevice::ReadOnly);
    QFile textFile(stFName);
    textFile.open(QIODevice::ReadOnly);
    QTextStream in1(&textFile);
    QTextStream in2(&anFile);

    bool mistake = 1;
    if(in1.atEnd())
        mistake = false;
    while(!in1.atEnd() && !in2.atEnd())
    {
        stud = in1.readLine(100);
        ans = in2.readLine(100);
        if(stud != ans)
        {
            mistake = false;
            failReason = "INCORRECT OUTPUT";
        }
    }
    if(mistake)
    {
        status = "PASS";
        failReason = "N/A";
    }
    else if(failReason != "INCORRECT OUTPUT")
    {
        status = "FAIL";
        failReason = "DID NOT COMPILE";
    }
    else
        status = "FAIL";
}
void StudentQuiz::overrideStat()
{
    if(status == "PASS")
        status = "FAIL";
    else
        status = "PASS";
}
float StudentQuiz::getRunTime()
{
    return StudentQuiz::runTime;
}
QString StudentQuiz::getFailReason()
{
    return StudentQuiz::failReason;
}
void StudentQuiz::setStatus(bool s)
{
    if(s)
        status = "PASS";
    else
        status = "FAIL";
}
QDateTime StudentQuiz::getTOD()
{
    return timeOfDelivery;
}

void StudentQuiz::setTOD(QDateTime tOD)
{
    timeOfDelivery = tOD;
}
QString StudentQuiz::getTimeString()
{
    return timeOfDelivery.toString();
}

uint StudentQuiz::getTimeInt()
{
    return timeOfDelivery.toTime_t();
}
QString StudentQuiz::getStudentName()
{
    return studentName;
}
void StudentQuiz::setStudentName(QString &n)
{
    studentName = n;
}
QString StudentQuiz::getRunTimeString()
{
    QString str = QString::number(runTime);
    return str;
}

StudentQuiz::~StudentQuiz()
{
    QString ex,ob;
    ex = name + ".exe";
    ob = name + ".obj";
    remove(ex.toStdString().c_str());
    remove(ob.toStdString().c_str());
}
