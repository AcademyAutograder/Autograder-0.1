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
    static QStringListModel *nineclassmodel, *tenclassmodel, *elevenclassmodel, *twelveclassmodel;
    static QStringList editclasslist;
    
private:
    Ui::EditClass *ui;

};

#endif // EDITCLASS_H
