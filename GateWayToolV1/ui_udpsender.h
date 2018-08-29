/********************************************************************************
** Form generated from reading UI file 'udpsender.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSENDER_H
#define UI_UDPSENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UdpSender
{
public:
    QTableWidget *tableWidget;
    QPushButton *startButton;

    void setupUi(QDialog *UdpSender)
    {
        if (UdpSender->objectName().isEmpty())
            UdpSender->setObjectName(QStringLiteral("UdpSender"));
        UdpSender->resize(419, 272);
        tableWidget = new QTableWidget(UdpSender);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 381, 221));
        startButton = new QPushButton(UdpSender);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(10, 240, 191, 23));

        retranslateUi(UdpSender);

        QMetaObject::connectSlotsByName(UdpSender);
    } // setupUi

    void retranslateUi(QDialog *UdpSender)
    {
        UdpSender->setWindowTitle(QApplication::translate("UdpSender", "\346\220\234\347\264\242\345\267\245\345\205\267V0.0", Q_NULLPTR));
        startButton->setText(QApplication::translate("UdpSender", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UdpSender: public Ui_UdpSender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSENDER_H
