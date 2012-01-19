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
    QSqlDatabase db;
    int grade;
    QStringList quizlist9;
    QStringList quizlist10;
    QStringList quizlist11;
    QStringList quizlist12;
    int quizGrade;
public:
    QVector<Student> studentVector;
    StudentDB(int);
    void newStudent(QString &);
    void deleteStudent(QString &);
    QStringList getNames();
    void pushDB(int);
    void pullDB(int);
    void newQuiz(QString &, QVector<int>, QVector<QString>);


};

#endif // STUDENTDB_H
