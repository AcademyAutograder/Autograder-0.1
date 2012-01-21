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
    void newStudent(QString &);
    void deleteStudent(QString &);
    QStringList getNames();
<<<<<<< HEAD
    //void pushDB(int);
    //void pullDB(int);
=======
>>>>>>> 23cad37b229bf85d6958100bb8bb3a508a75f63a
    //void newQuiz(QString &, QVector<int>, QVector<QString>);
    void newQuiz(QString, QVector<StudentQuiz>);
    bool studentExist(QString &);
    //void closeDB();



};

#endif // STUDENTDB_H
