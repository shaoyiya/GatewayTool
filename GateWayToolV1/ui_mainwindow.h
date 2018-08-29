/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ScanIpFuntion;
    QPushButton *ChangeIpAddress;
    QPushButton *pushButton_3;
    QPushButton *updataOrVpn;
    QPushButton *Chage485Funtion;
    QPushButton *NewZigbeeFuntion;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(295, 180);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ScanIpFuntion = new QPushButton(centralWidget);
        ScanIpFuntion->setObjectName(QStringLiteral("ScanIpFuntion"));
        ScanIpFuntion->setGeometry(QRect(30, 10, 101, 31));
        ChangeIpAddress = new QPushButton(centralWidget);
        ChangeIpAddress->setObjectName(QStringLiteral("ChangeIpAddress"));
        ChangeIpAddress->setGeometry(QRect(30, 50, 101, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 10, 101, 31));
        updataOrVpn = new QPushButton(centralWidget);
        updataOrVpn->setObjectName(QStringLiteral("updataOrVpn"));
        updataOrVpn->setGeometry(QRect(170, 50, 101, 31));
        Chage485Funtion = new QPushButton(centralWidget);
        Chage485Funtion->setObjectName(QStringLiteral("Chage485Funtion"));
        Chage485Funtion->setGeometry(QRect(30, 90, 101, 31));
        NewZigbeeFuntion = new QPushButton(centralWidget);
        NewZigbeeFuntion->setObjectName(QStringLiteral("NewZigbeeFuntion"));
        NewZigbeeFuntion->setGeometry(QRect(170, 90, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 295, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\244\232\345\212\237\350\203\275\350\260\203\350\257\225\345\267\245\345\205\267V0.1", Q_NULLPTR));
        ScanIpFuntion->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\346\220\234\347\264\242", Q_NULLPTR));
        ChangeIpAddress->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263\351\205\215\347\275\256", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Zigbee\350\260\203\350\257\225", Q_NULLPTR));
        updataOrVpn->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263\345\215\207\347\272\247", Q_NULLPTR));
        Chage485Funtion->setText(QApplication::translate("MainWindow", "485\351\205\215\347\275\256", Q_NULLPTR));
        NewZigbeeFuntion->setText(QApplication::translate("MainWindow", "\346\226\260Zigbee", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
