/********************************************************************************
** Form generated from reading UI file 'updataorvpn.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATAORVPN_H
#define UI_UPDATAORVPN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UPdataOrVPN
{
public:
    QLabel *clientStatusLabel;
    QPushButton *ClearVpn;
    QPushButton *sendButton;
    QPushButton *OpenVpnFile;
    QLineEdit *lineEdit;
    QLineEdit *HostLineEdit;
    QProgressBar *clientProgressBar;
    QLineEdit *lineEditVpn;
    QLabel *label;
    QPushButton *openButton;

    void setupUi(QDialog *UPdataOrVPN)
    {
        if (UPdataOrVPN->objectName().isEmpty())
            UPdataOrVPN->setObjectName(QStringLiteral("UPdataOrVPN"));
        UPdataOrVPN->resize(353, 147);
        clientStatusLabel = new QLabel(UPdataOrVPN);
        clientStatusLabel->setObjectName(QStringLiteral("clientStatusLabel"));
        clientStatusLabel->setGeometry(QRect(30, 120, 291, 16));
        ClearVpn = new QPushButton(UPdataOrVPN);
        ClearVpn->setObjectName(QStringLiteral("ClearVpn"));
        ClearVpn->setGeometry(QRect(260, 10, 75, 23));
        sendButton = new QPushButton(UPdataOrVPN);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(10, 94, 75, 23));
        OpenVpnFile = new QPushButton(UPdataOrVPN);
        OpenVpnFile->setObjectName(QStringLiteral("OpenVpnFile"));
        OpenVpnFile->setGeometry(QRect(10, 65, 75, 23));
        lineEdit = new QLineEdit(UPdataOrVPN);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(104, 37, 231, 20));
        HostLineEdit = new QLineEdit(UPdataOrVPN);
        HostLineEdit->setObjectName(QStringLiteral("HostLineEdit"));
        HostLineEdit->setGeometry(QRect(58, 10, 133, 20));
        clientProgressBar = new QProgressBar(UPdataOrVPN);
        clientProgressBar->setObjectName(QStringLiteral("clientProgressBar"));
        clientProgressBar->setGeometry(QRect(108, 95, 221, 20));
        clientProgressBar->setValue(0);
        lineEditVpn = new QLineEdit(UPdataOrVPN);
        lineEditVpn->setObjectName(QStringLiteral("lineEditVpn"));
        lineEditVpn->setGeometry(QRect(104, 66, 231, 20));
        label = new QLabel(UPdataOrVPN);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 42, 16));
        openButton = new QPushButton(UPdataOrVPN);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(10, 36, 75, 23));

        retranslateUi(UPdataOrVPN);

        QMetaObject::connectSlotsByName(UPdataOrVPN);
    } // setupUi

    void retranslateUi(QDialog *UPdataOrVPN)
    {
        UPdataOrVPN->setWindowTitle(QApplication::translate("UPdataOrVPN", "\346\233\264\346\215\242\350\257\201\344\271\246\345\222\214\345\215\207\347\272\247\345\267\245\345\205\267V0.0", Q_NULLPTR));
        clientStatusLabel->setText(QApplication::translate("UPdataOrVPN", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        ClearVpn->setText(QApplication::translate("UPdataOrVPN", "\346\270\205\351\231\244VPN\350\257\201\344\271\246", Q_NULLPTR));
        sendButton->setText(QApplication::translate("UPdataOrVPN", "\345\217\221\351\200\201", Q_NULLPTR));
        OpenVpnFile->setText(QApplication::translate("UPdataOrVPN", "\346\211\223\345\274\200VPN\350\257\201\344\271\246", Q_NULLPTR));
        HostLineEdit->setText(QString());
        label->setText(QApplication::translate("UPdataOrVPN", "\344\270\273\346\234\272IP:", Q_NULLPTR));
        openButton->setText(QApplication::translate("UPdataOrVPN", "\346\211\223\345\274\200\345\215\207\347\272\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UPdataOrVPN: public Ui_UPdataOrVPN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATAORVPN_H
