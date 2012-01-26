#ifndef STUDENTDB_H
#define STUDENTDB_H
#include <QString>
#include <QVector>
#include <QStringList>
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
    StudentDB();
    void openDB(int);
    void newStudent(QString &);
    void deleteStudent(QString &);
    QStringList getNames();
    QStringList getQuizzes();
    QString generateID(QString &, QString &);
    void newQuiz(QString, QVector<StudentQuiz>);
    void deleteQuiz(QString &);
    bool studentExist(QString &);
    void closeDB();
};

#endif // STUDENTDB_H
