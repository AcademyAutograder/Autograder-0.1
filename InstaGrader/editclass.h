#ifndef EDITCLASS_H
#define EDITCLASS_H

#include <QDialog>
#include <QStringListModel>




namespace Ui {
class EditClass;
}

class EditClass : public QDialog
{
    Q_OBJECT
    
public:
    explicit EditClass(QWidget *parent = 0);
    ~EditClass();
    //QStringListModel *nineclassmodel, *tenclassmodel, *elevenclassmodel, *twelveclassmodel;
    QStringListModel *model[4];
    QStringList editclasslist;
    
private slots:
    void on_addstudbutton_clicked();

    void on_gradecomboBox_activated(int index);

    void on_insertstudbutton_clicked();

    void on_deletestudbutton_clicked();

    void on_savebutton_clicked();

private:
    Ui::EditClass *ui;
    int modelnum;



};

#endif // EDITCLASS_H
