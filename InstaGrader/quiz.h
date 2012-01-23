#ifndef QUIZ_H
#define QUIZ_H

#include <QString>
#include <QFile>
#include <QDateTime>


class Quiz
{
protected:
    QString name;
    float runTime;
    QString failReason;
public:
    Quiz();
    Quiz(QString &);
    void compile(QString &cppFileName);
    void execute(const QString &, int) ;
    QString getName();
    void setName(const QString &);

};
class StudentQuiz : public Quiz
{
protected:
    bool status;
    QDateTime timeOfDelivery;
    int rank;
    QString studentName;
public:
    StudentQuiz ();
    StudentQuiz(QString &);
    bool getStatus();
    void overrideStat();
    void grade(QString &);
    float getRunTime();
    void setStatus(bool);
    QString getFailReason();
    QDateTime getTOD();
    QString getTimeString();
    uint getTimeInt();
    void setStudentName(QString &);
    QString getStudentName();
    void setTOD(QDateTime);
    void setRank(int);
    int getRank();
    QString getRunTimeString();
    ~StudentQuiz();
};


#endif // QUIZ_H
