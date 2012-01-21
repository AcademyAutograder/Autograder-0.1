#include "student.h"
#include <QDateTime>

Student::Student()
{

}

Student::Student(QString &name)
    : studentName(name)
{

}

Student::Student(QString &name, QString &id)
    : studentName(name),
      studentID(id)
{

}

void Student::setName(QString &name)
{
   studentName = name;
}

QString Student::getName()
{
    return studentName;
}

void Student::editQuiz(QString &, StudentQuiz &)
{

}

void Student::newQuiz(StudentQuiz &)
{

}

Student::~Student()
{

}
