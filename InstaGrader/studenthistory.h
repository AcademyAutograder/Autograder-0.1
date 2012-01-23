#ifndef STUDENTHISTORY_H
#define STUDENTHISTORY_H

#include <QDialog>
#include "commontable.h"

namespace Ui {
class studenthistory;
}

class studenthistory : public QDialog
{
    Q_OBJECT
    
public:
    explicit studenthistory(QWidget *parent = 0);
    ~studenthistory();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::studenthistory *ui;
    commontable *tablecommonstudent;
};

#endif // STUDENTHISTORY_H
