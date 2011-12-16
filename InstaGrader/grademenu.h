#ifndef GRADEMENU_H
#define GRADEMENU_H

#include <QMainWindow>
//#include "ui_grademenu.h"//we do have to include this

namespace Ui {
    class grademenu;
}

class grademenu : public QMainWindow//, Ui_grademenu
{
    Q_OBJECT

public:
    explicit grademenu(QWidget *parent = 0);
    ~grademenu();

private slots:
    void on_cppselect_clicked();

    void on_txtselect_clicked();

    void on_opengradebutton_clicked();

    void on_openback_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    QString fileName, dir;
   // Ui_grademenu f;
    Ui::grademenu *ui;
};

#endif // GRADEMENU_H
