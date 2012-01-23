#ifndef STUDENTHISTORY_H
#define STUDENTHISTORY_H

#include <QDialog>
#include "commontable.h"
#include <QStringListModel>

namespace Ui {
class studenthistory;
}

class studenthistory : public QDialog
{
    Q_OBJECT
    
public:
    explicit studenthistory(QWidget *parent = 0);
    ~studenthistory();
    QStringList editclasslist;
    QStringList list;
    QStringListModel *listmodel;
private slots:

    void on_pushButton_5_clicked();

private:
    Ui::studenthistory *ui;
    commontable *tablecommonstudent;
};

#endif // STUDENTHISTORY_H