#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_openbackhome_clicked();
  //void on_txtselect_clicked();
   // void on_cppselect_clicked();

    void on_openback_clicked();

    void on_Dialog_destroyed(QObject *arg1);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
