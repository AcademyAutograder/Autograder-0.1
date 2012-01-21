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
#include "quiz.h"

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
    StudentDB();
    void openDB(int);
    void newStudent(QString &, QString &id);
    void deleteStudent(QString &);
    QStringList getNames();

    //void pushDB(int);
    //void pullDB(int);
    QString generateID(QString &, QString &);
    //void newQuiz(QString &, QVector<int>, QVector<QString>);
    void newQuiz(QString, QVector<StudentQuiz>);
    bool studentExist(QString &);
    void closeDB();



};

#endif // STUDENTDB_H
