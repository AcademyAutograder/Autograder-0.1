#ifndef CREATENEWQUIZ_H
#define CREATENEWQUIZ_H

#include <QDialog>
#include <QStringListModel>


namespace Ui {
class CreateNewQuiz;
}

class CreateNewQuiz : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateNewQuiz(QWidget *parent = 0);
    ~CreateNewQuiz();
    Ui::CreateNewQuiz *ui;
    
private slots:
    void on_CreateQuizCancelbutton_clicked();

    void on_BrowseDirButton_clicked();

    void on_ChooseDirlineedit_textChanged(const QString &arg1);

    void on_BrowseTestcasebutton_clicked();

    void on_ChooseTestcaselineedit_textChanged(const QString &arg1);

    void on_ChooseAnswerbutton_clicked();

    void on_ChooseAnswerlineedit_textChanged(const QString &arg1);

    void on_CreateQuizOkbutton_clicked();

private:
    QString dir, testcase, ans;
    QStringList dirName;
    QStringListModel *dirmodel;
};

#endif // CREATENEWQUIZ_H
