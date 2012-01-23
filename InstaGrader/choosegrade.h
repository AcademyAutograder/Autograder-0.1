#ifndef CHOOSEGRADE_H
#define CHOOSEGRADE_H
#include "studentdb.h"
#include <QDialog>

namespace Ui {
class ChooseGrade;
}

class ChooseGrade : public QDialog
{
    Q_OBJECT
    
public:
    explicit ChooseGrade(QWidget *parent = 0);
    ~ChooseGrade();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::ChooseGrade *ui;
    StudentDB database;
};

#endif // CHOOSEGRADE_H
