/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
<<<<<<< HEAD
** Created: Mon Dec 19 12:46:17 2011
=======
** Created: Sun Dec 18 18:36:07 2011
>>>>>>> 90cd6d990315043acb03b81ff32de187ff8e673e
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHome;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionGrade;
    QAction *actionOptions;
    QAction *actionHelp;
    QWidget *centralWidget;
<<<<<<< HEAD
=======
    QPushButton *homeopen;
    QPushButton *homehome;
    QPushButton *homehelp;
    QPushButton *homegrade;
    QPushButton *homeoptions;
    QPushButton *homesave;
    QListView *listView;
>>>>>>> 90cd6d990315043acb03b81ff32de187ff8e673e
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 800);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Floppy Disk (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionGrade = new QAction(MainWindow);
        actionGrade->setObjectName(QString::fromUtf8("actionGrade"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/A plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrade->setIcon(icon3);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon4);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Question Mark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
<<<<<<< HEAD
=======
        homeopen = new QPushButton(centralWidget);
        homeopen->setObjectName(QString::fromUtf8("homeopen"));
        homeopen->setGeometry(QRect(0, 50, 75, 41));
        homeopen->setIcon(icon1);
        homeopen->setIconSize(QSize(35, 35));
        homehome = new QPushButton(centralWidget);
        homehome->setObjectName(QString::fromUtf8("homehome"));
        homehome->setGeometry(QRect(0, 0, 75, 41));
        homehome->setIcon(icon);
        homehome->setIconSize(QSize(45, 45));
        homehelp = new QPushButton(centralWidget);
        homehelp->setObjectName(QString::fromUtf8("homehelp"));
        homehelp->setGeometry(QRect(0, 250, 75, 41));
        homehelp->setIcon(icon5);
        homehelp->setIconSize(QSize(50, 50));
        homegrade = new QPushButton(centralWidget);
        homegrade->setObjectName(QString::fromUtf8("homegrade"));
        homegrade->setGeometry(QRect(0, 150, 75, 41));
        homegrade->setIcon(icon3);
        homegrade->setIconSize(QSize(70, 70));
        homeoptions = new QPushButton(centralWidget);
        homeoptions->setObjectName(QString::fromUtf8("homeoptions"));
        homeoptions->setGeometry(QRect(0, 200, 75, 41));
        homeoptions->setIcon(icon4);
        homeoptions->setIconSize(QSize(40, 40));
        homesave = new QPushButton(centralWidget);
        homesave->setObjectName(QString::fromUtf8("homesave"));
        homesave->setGeometry(QRect(0, 100, 75, 41));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Floppy Disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        homesave->setIcon(icon6);
        homesave->setIconSize(QSize(35, 35));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEnabled(true);
        listView->setGeometry(QRect(770, 0, 231, 581));
        listView->setMaximumSize(QSize(16777215, 751));
        listView->setLineWidth(0);
>>>>>>> 90cd6d990315043acb03b81ff32de187ff8e673e
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionHome->setText(QApplication::translate("MainWindow", "home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHome->setToolTip(QApplication::translate("MainWindow", "go home", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "go to openui", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "savedoc", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGrade->setText(QApplication::translate("MainWindow", "grade", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGrade->setToolTip(QApplication::translate("MainWindow", "grade", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOptions->setText(QApplication::translate("MainWindow", "options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOptions->setToolTip(QApplication::translate("MainWindow", "options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("MainWindow", "help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("MainWindow", "help", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
<<<<<<< HEAD
=======
        homeopen->setText(QString());
        homehome->setText(QString());
        homehelp->setText(QString());
        homegrade->setText(QString());
        homeoptions->setText(QString());
        homesave->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
>>>>>>> 90cd6d990315043acb03b81ff32de187ff8e673e
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
