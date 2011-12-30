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
    QStringListModel *nineclassmodel, *tenclassmodel, *elevenclassmodel, *twelveclassmodel;
    QStringList editclasslist;
    
private slots:
    void on_addstudbutton_clicked();

private:
    Ui::EditClass *ui;

};

#endif // EDITCLASS_H
