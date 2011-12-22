/********************************************************************************
** Form generated from reading UI file 'grademenu.ui'
**
** Created: Sun Dec 18 18:36:07 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEMENU_H
#define UI_GRADEMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grademenu
{
public:
    QWidget *centralwidget;
    QPushButton *opensave;
    QPushButton *openhelp;
    QPushButton *openopen;
    QPushButton *openhome;
    QPushButton *opengrade;
    QPushButton *openoptions;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openback;
    QPushButton *opengradebutton;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QPushButton *txtselect;
    QLabel *label_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *cppselect;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *grademenu)
    {
        if (grademenu->objectName().isEmpty())
            grademenu->setObjectName(QString::fromUtf8("grademenu"));
        grademenu->resize(477, 346);
        centralwidget = new QWidget(grademenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        opensave = new QPushButton(centralwidget);
        opensave->setObjectName(QString::fromUtf8("opensave"));
        opensave->setGeometry(QRect(0, 100, 75, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Floppy Disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        opensave->setIcon(icon);
        opensave->setIconSize(QSize(35, 35));
        openhelp = new QPushButton(centralwidget);
        openhelp->setObjectName(QString::fromUtf8("openhelp"));
        openhelp->setGeometry(QRect(0, 250, 75, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Question Mark.png"), QSize(), QIcon::Normal, QIcon::Off);
        openhelp->setIcon(icon1);
        openhelp->setIconSize(QSize(50, 50));
        openopen = new QPushButton(centralwidget);
        openopen->setObjectName(QString::fromUtf8("openopen"));
        openopen->setGeometry(QRect(0, 50, 75, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        openopen->setIcon(icon2);
        openopen->setIconSize(QSize(35, 35));
        openhome = new QPushButton(centralwidget);
        openhome->setObjectName(QString::fromUtf8("openhome"));
        openhome->setGeometry(QRect(0, 0, 75, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        openhome->setIcon(icon3);
        openhome->setIconSize(QSize(45, 45));
        opengrade = new QPushButton(centralwidget);
        opengrade->setObjectName(QString::fromUtf8("opengrade"));
        opengrade->setGeometry(QRect(0, 150, 75, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/A plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        opengrade->setIcon(icon4);
        opengrade->setIconSize(QSize(70, 70));
        openoptions = new QPushButton(centralwidget);
        openoptions->setObjectName(QString::fromUtf8("openoptions"));
        openoptions->setGeometry(QRect(0, 200, 75, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        openoptions->setIcon(icon5);
        openoptions->setIconSize(QSize(40, 40));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 230, 181, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        openback = new QPushButton(layoutWidget);
        openback->setObjectName(QString::fromUtf8("openback"));

        horizontalLayout_3->addWidget(openback);

        opengradebutton = new QPushButton(layoutWidget);
        opengradebutton->setObjectName(QString::fromUtf8("opengradebutton"));
        opengradebutton->setEnabled(false);

        horizontalLayout_3->addWidget(opengradebutton);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(133, 30, 271, 31));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(138, 160, 271, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        txtselect = new QPushButton(layoutWidget_2);
        txtselect->setObjectName(QString::fromUtf8("txtselect"));

        horizontalLayout_2->addWidget(txtselect);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 140, 261, 20));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(133, 70, 271, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        cppselect = new QPushButton(layoutWidget_3);
        cppselect->setObjectName(QString::fromUtf8("cppselect"));
        cppselect->setEnabled(true);

        horizontalLayout->addWidget(cppselect);

        grademenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(grademenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 477, 21));
        grademenu->setMenuBar(menubar);
        statusbar = new QStatusBar(grademenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        grademenu->setStatusBar(statusbar);

        retranslateUi(grademenu);

        QMetaObject::connectSlotsByName(grademenu);
    } // setupUi

    void retranslateUi(QMainWindow *grademenu)
    {
        grademenu->setWindowTitle(QApplication::translate("grademenu", "MainWindow", 0, QApplication::UnicodeUTF8));
        opensave->setText(QString());
        openhelp->setText(QString());
        openopen->setText(QString());
        openhome->setText(QString());
        opengrade->setText(QString());
        openoptions->setText(QString());
        openback->setText(QApplication::translate("grademenu", "Back", 0, QApplication::UnicodeUTF8));
        opengradebutton->setText(QApplication::translate("grademenu", "Grade", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("grademenu", "       Please select a folder containing the cpp files you \n"
"                              would like to grade:", 0, QApplication::UnicodeUTF8));
        txtselect->setText(QApplication::translate("grademenu", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("grademenu", "Then, select a text file containing the answers:", 0, QApplication::UnicodeUTF8));
        cppselect->setText(QApplication::translate("grademenu", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class grademenu: public Ui_grademenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEMENU_H
