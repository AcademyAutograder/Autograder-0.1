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
public:
    Quiz();
    Quiz(QString &);
    void compile(QString &cppFileName);
    void execute(const QString &) ;
    QString getName();
    void setName(const QString &);

};
class StudentQuiz : public Quiz
{
protected:
    bool status;
    QDateTime timeOfDelivery;
    QString failReason;
    int rank;
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
    void setTOD(QDateTime);
    void setRank(int);
    int getRank();
    ~StudentQuiz();
};


#endif // QUIZ_H
