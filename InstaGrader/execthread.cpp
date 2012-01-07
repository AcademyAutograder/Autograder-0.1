#include "execthread.h"


void ExecThread::run(QString &fName, const QString &testCases)
{
    QString ex = "\""+ fName + ".exe<" + testCases + ">../MyQuizFiles/Quiz1/StudentOutput/" + fName + ".txt\"";
    system(ex.toStdString().c_str());
}
