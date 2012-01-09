#ifndef STUDENTDB_H
#define STUDENTDB_H
#include <QString>
#include <QVector>
#include <QStringList>
#include "student.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QVariant>
#include <QDebug>

class StudentDB
{
private:
    QVector<Student> studentVector;
    int grade;
    QStringList quizlist9;
    QStringList quizlist10;
    QStringList quizlist11;
    QStringList quizlist12;
    int quizGrade;
public:
    StudentDB(int);
    void newStudent(QString &);
    void deleteStudent(QString &);
    QStringList getNames();
    void pushDB(int);
    void pullDB(int);
    void newQuiz(QString &);


};

#endif // STUDENTDB_H
