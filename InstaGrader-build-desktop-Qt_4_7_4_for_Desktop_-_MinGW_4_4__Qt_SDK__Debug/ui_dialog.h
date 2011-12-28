/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Tue Dec 27 21:35:54 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *opengrade;
    QPushButton *openopen;
    QPushButton *openhome;
    QPushButton *openoptions;
    QPushButton *opensave;
    QPushButton *openhelp;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *cppselect;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QPushButton *txtselect;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openback;
    QPushButton *openbackhome;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        opengrade = new QPushButton(Dialog);
        opengrade->setObjectName(QString::fromUtf8("opengrade"));
        opengrade->setGeometry(QRect(0, 150, 75, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/A plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        opengrade->setIcon(icon);
        opengrade->setIconSize(QSize(70, 70));
        openopen = new QPushButton(Dialog);
        openopen->setObjectName(QString::fromUtf8("openopen"));
        openopen->setGeometry(QRect(0, 50, 75, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        openopen->setIcon(icon1);
        openopen->setIconSize(QSize(35, 35));
        openhome = new QPushButton(Dialog);
        openhome->setObjectName(QString::fromUtf8("openhome"));
        openhome->setGeometry(QRect(0, 0, 75, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        openhome->setIcon(icon2);
        openhome->setIconSize(QSize(45, 45));
        openoptions = new QPushButton(Dialog);
        openoptions->setObjectName(QString::fromUtf8("openoptions"));
        openoptions->setGeometry(QRect(0, 200, 75, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        openoptions->setIcon(icon3);
        openoptions->setIconSize(QSize(40, 40));
        opensave = new QPushButton(Dialog);
        opensave->setObjectName(QString::fromUtf8("opensave"));
        opensave->setGeometry(QRect(0, 100, 75, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Floppy Disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        opensave->setIcon(icon4);
        opensave->setIconSize(QSize(35, 35));
        openhelp = new QPushButton(Dialog);
        openhelp->setObjectName(QString::fromUtf8("openhelp"));
        openhelp->setGeometry(QRect(0, 250, 75, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Question Mark.png"), QSize(), QIcon::Normal, QIcon::Off);
        openhelp->setIcon(icon5);
        openhelp->setIconSize(QSize(50, 50));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 271, 31));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 130, 261, 20));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 70, 271, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        cppselect = new QPushButton(widget);
        cppselect->setObjectName(QString::fromUtf8("cppselect"));

        horizontalLayout->addWidget(cppselect);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(125, 160, 271, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        txtselect = new QPushButton(widget1);
        txtselect->setObjectName(QString::fromUtf8("txtselect"));

        horizontalLayout_2->addWidget(txtselect);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(187, 230, 181, 25));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        openback = new QPushButton(widget2);
        openback->setObjectName(QString::fromUtf8("openback"));

        horizontalLayout_3->addWidget(openback);

        openbackhome = new QPushButton(widget2);
        openbackhome->setObjectName(QString::fromUtf8("openbackhome"));

        horizontalLayout_3->addWidget(openbackhome);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        opengrade->setText(QString());
        openopen->setText(QString());
        openhome->setText(QString());
        openoptions->setText(QString());
        opensave->setText(QString());
        openhelp->setText(QString());
        label->setText(QApplication::translate("Dialog", "       Please select a folder containing the cpp files you \n"
"                              would like to grade:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Then, select a text file containing the answers:", 0, QApplication::UnicodeUTF8));
        cppselect->setText(QApplication::translate("Dialog", "Browse", 0, QApplication::UnicodeUTF8));
        txtselect->setText(QApplication::translate("Dialog", "Browse", 0, QApplication::UnicodeUTF8));
        openback->setText(QApplication::translate("Dialog", "Back", 0, QApplication::UnicodeUTF8));
        openbackhome->setText(QApplication::translate("Dialog", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
