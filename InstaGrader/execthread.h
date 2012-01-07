#ifndef EXECTHREAD_H
#define EXECTHREAD_H
#include <QThread>
#include <QString>
#include <stdlib.h>

class ExecThread : public QThread
{
public:
    void run(QString &, const QString &);
};

#endif // EXECTHREAD_H
