#ifndef STUDENTDB_H
#define STUDENTDB_H
#include <QString>
#include <QVector>
#include <QStringList>
#include "student.h"

class StudentDB
{
private:
    QVector<Student> studentVector;
    int grade;
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
