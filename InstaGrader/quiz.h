#ifndef QUIZ_H
#define QUIZ_H

#include <QString>
#include <QFile>


class Quiz
{
protected:
    QString name;
    float runTime;
public:
    Quiz();
    Quiz(QString &);
    void compile();
    void execute(const QString &) ;
    QString getName();
    void setName(const QString &);

};
class StudentQuiz : public Quiz
{
protected:
    bool status;
    QString failReason;
public:
    StudentQuiz ();
    StudentQuiz(QString &);
    bool getStatus();
    void overrideStat();
    void grade(QString &);
    float getRunTime();
    QString getFailReason();
    ~StudentQuiz();
};


#endif // QUIZ_H
