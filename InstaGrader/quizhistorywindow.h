#ifndef QUIZHISTORYWINDOW_H
#define QUIZHISTORYWINDOW_H

#include <QDialog>
#include "commontable.h"
#include <QStringListModel>

namespace Ui {
class QuizHistorywindow;
}

class QuizHistorywindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit QuizHistorywindow(QWidget *parent = 0);
    ~QuizHistorywindow();
    
private slots:

    void on_pushButton_5_clicked();

private:
    Ui::QuizHistorywindow *ui;
    commontable *tablecommon;
    QStringList list;
    QStringListModel *listmodel;
};

#endif // QUIZHISTORYWINDOW_H