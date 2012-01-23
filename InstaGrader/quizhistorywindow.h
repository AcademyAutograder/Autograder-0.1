#ifndef QUIZHISTORYWINDOW_H
#define QUIZHISTORYWINDOW_H

#include <QDialog>
#include "commontable.h"

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::QuizHistorywindow *ui;
    commontable *tablecommon;
};

#endif // QUIZHISTORYWINDOW_H
