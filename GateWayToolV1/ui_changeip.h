/********************************************************************************
** Form generated from reading UI file 'changeip.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEIP_H
#define UI_CHANGEIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeIp
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QFrame *line_3;
    QFrame *line_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditMask;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditGateway;
    QLabel *label_14;
    QFrame *line;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QFrame *line_4;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *ModificationParameter;
    QPushButton *GainFuntion;
    QPushButton *connect;
    QPushButton *disconnect;
    QLineEdit *ip_lineEdit;
    QLabel *label_15;
    QLabel *xiaoxilan_Label;
    QPushButton *Strength4G;
    QPlainTextEdit *search_textEdit;
    QPushButton *Memory;
    QPushButton *Set4G;
    QPushButton *ONlin;
    QFrame *line_5;
    QLabel *label_16;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QPushButton *CllearFuntion;
    QPushButton *GainVPNIp;
    QPushButton *VersionFuntion;
    QPushButton *rebootFuntion;
    QPushButton *OldZigbee;
    QPushButton *NewZigbee;

    void setupUi(QDialog *ChangeIp)
    {
        if (ChangeIp->objectName().isEmpty())
            ChangeIp->setObjectName(QStringLiteral("ChangeIp"));
        ChangeIp->resize(515, 532);
        layoutWidget = new QWidget(ChangeIp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 100, 189, 22));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(layoutWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout_2->addWidget(lineEditIP, 0, 1, 1, 1);

        line_3 = new QFrame(ChangeIp);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(240, 50, 20, 201));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ChangeIp);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(80, 40, 171, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget_2 = new QWidget(ChangeIp);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 130, 201, 22));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        lineEditMask = new QLineEdit(layoutWidget_2);
        lineEditMask->setObjectName(QStringLiteral("lineEditMask"));

        gridLayout_3->addWidget(lineEditMask, 0, 1, 1, 1);

        layoutWidget_3 = new QWidget(ChangeIp);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 160, 177, 22));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        lineEditGateway = new QLineEdit(layoutWidget_3);
        lineEditGateway->setObjectName(QStringLiteral("lineEditGateway"));

        gridLayout_4->addWidget(lineEditGateway, 0, 1, 1, 1);

        label_14 = new QLabel(ChangeIp);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 40, 54, 12));
        line = new QFrame(ChangeIp);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 240, 231, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget_4 = new QWidget(ChangeIp);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 70, 201, 22));
        gridLayout = new QGridLayout(layoutWidget_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        line_4 = new QFrame(ChangeIp);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 50, 20, 201));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget_5 = new QWidget(ChangeIp);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 210, 201, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ModificationParameter = new QPushButton(layoutWidget_5);
        ModificationParameter->setObjectName(QStringLiteral("ModificationParameter"));
        ModificationParameter->setEnabled(false);

        horizontalLayout->addWidget(ModificationParameter);

        GainFuntion = new QPushButton(layoutWidget_5);
        GainFuntion->setObjectName(QStringLiteral("GainFuntion"));
        GainFuntion->setEnabled(false);

        horizontalLayout->addWidget(GainFuntion);

        connect = new QPushButton(ChangeIp);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setGeometry(QRect(170, 10, 41, 23));
        disconnect = new QPushButton(ChangeIp);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setEnabled(false);
        disconnect->setGeometry(QRect(220, 10, 41, 23));
        ip_lineEdit = new QLineEdit(ChangeIp);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));
        ip_lineEdit->setGeometry(QRect(50, 10, 111, 20));
        label_15 = new QLabel(ChangeIp);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 10, 21, 21));
        xiaoxilan_Label = new QLabel(ChangeIp);
        xiaoxilan_Label->setObjectName(QStringLiteral("xiaoxilan_Label"));
        xiaoxilan_Label->setGeometry(QRect(180, 500, 171, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        xiaoxilan_Label->setFont(font);
        Strength4G = new QPushButton(ChangeIp);
        Strength4G->setObjectName(QStringLiteral("Strength4G"));
        Strength4G->setEnabled(false);
        Strength4G->setGeometry(QRect(280, 70, 81, 23));
        search_textEdit = new QPlainTextEdit(ChangeIp);
        search_textEdit->setObjectName(QStringLiteral("search_textEdit"));
        search_textEdit->setGeometry(QRect(20, 260, 471, 221));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(9);
        search_textEdit->setFont(font1);
        search_textEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        search_textEdit->setAcceptDrops(false);
        search_textEdit->setCenterOnScroll(false);
        Memory = new QPushButton(ChangeIp);
        Memory->setObjectName(QStringLiteral("Memory"));
        Memory->setEnabled(false);
        Memory->setGeometry(QRect(370, 70, 91, 23));
        Set4G = new QPushButton(ChangeIp);
        Set4G->setObjectName(QStringLiteral("Set4G"));
        Set4G->setEnabled(false);
        Set4G->setGeometry(QRect(280, 100, 81, 23));
        ONlin = new QPushButton(ChangeIp);
        ONlin->setObjectName(QStringLiteral("ONlin"));
        ONlin->setEnabled(false);
        ONlin->setGeometry(QRect(370, 100, 91, 23));
        line_5 = new QFrame(ChangeIp);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(330, 40, 141, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(ChangeIp);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(270, 40, 54, 12));
        line_6 = new QFrame(ChangeIp);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(260, 50, 20, 171));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(ChangeIp);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(460, 50, 20, 171));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(ChangeIp);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(270, 210, 201, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        CllearFuntion = new QPushButton(ChangeIp);
        CllearFuntion->setObjectName(QStringLiteral("CllearFuntion"));
        CllearFuntion->setGeometry(QRect(450, 230, 41, 23));
        GainVPNIp = new QPushButton(ChangeIp);
        GainVPNIp->setObjectName(QStringLiteral("GainVPNIp"));
        GainVPNIp->setEnabled(false);
        GainVPNIp->setGeometry(QRect(280, 130, 81, 23));
        VersionFuntion = new QPushButton(ChangeIp);
        VersionFuntion->setObjectName(QStringLiteral("VersionFuntion"));
        VersionFuntion->setEnabled(false);
        VersionFuntion->setGeometry(QRect(370, 130, 91, 23));
        rebootFuntion = new QPushButton(ChangeIp);
        rebootFuntion->setObjectName(QStringLiteral("rebootFuntion"));
        rebootFuntion->setEnabled(false);
        rebootFuntion->setGeometry(QRect(280, 160, 81, 23));
        OldZigbee = new QPushButton(ChangeIp);
        OldZigbee->setObjectName(QStringLiteral("OldZigbee"));
        OldZigbee->setEnabled(false);
        OldZigbee->setGeometry(QRect(370, 160, 91, 23));
        NewZigbee = new QPushButton(ChangeIp);
        NewZigbee->setObjectName(QStringLiteral("NewZigbee"));
        NewZigbee->setEnabled(false);
        NewZigbee->setGeometry(QRect(280, 190, 81, 23));

        retranslateUi(ChangeIp);

        QMetaObject::connectSlotsByName(ChangeIp);
    } // setupUi

    void retranslateUi(QDialog *ChangeIp)
    {
        ChangeIp->setWindowTitle(QApplication::translate("ChangeIp", "\347\275\221\345\205\263\350\260\203\350\257\225\345\267\245\345\205\267V0.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangeIp", "IP\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangeIp", "\345\255\220\347\275\221\346\216\251\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangeIp", "\347\275\221\345\205\263\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("ChangeIp", "\350\256\276\347\275\256\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeIp", "\350\256\276\345\244\207\345\210\253\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit->setText(QString());
        ModificationParameter->setText(QApplication::translate("ChangeIp", "\344\277\256\346\224\271", Q_NULLPTR));
        GainFuntion->setText(QApplication::translate("ChangeIp", "\350\216\267\345\217\226\345\217\202\346\225\260", Q_NULLPTR));
        connect->setText(QApplication::translate("ChangeIp", "\350\277\236\346\216\245", Q_NULLPTR));
        disconnect->setText(QApplication::translate("ChangeIp", "\346\226\255\345\274\200", Q_NULLPTR));
        ip_lineEdit->setText(QApplication::translate("ChangeIp", "192.168.22.66", Q_NULLPTR));
        label_15->setText(QApplication::translate("ChangeIp", "IP\357\274\232", Q_NULLPTR));
        xiaoxilan_Label->setText(QApplication::translate("ChangeIp", "\350\257\267\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        Strength4G->setText(QApplication::translate("ChangeIp", "4G\344\277\241\345\217\267\345\274\272\345\272\246", Q_NULLPTR));
        Memory->setText(QApplication::translate("ChangeIp", "\347\275\221\345\205\263\345\206\205\345\255\230\345\215\240\346\257\224", Q_NULLPTR));
        Set4G->setText(QApplication::translate("ChangeIp", "\350\256\276\347\275\2564G\351\200\232\344\277\241", Q_NULLPTR));
        ONlin->setText(QApplication::translate("ChangeIp", "\350\256\276\347\275\256\344\273\245\345\244\252\347\275\221\351\200\232\344\277\241", Q_NULLPTR));
        label_16->setText(QApplication::translate("ChangeIp", "\345\270\270\350\247\204\345\217\202\346\225\260", Q_NULLPTR));
        CllearFuntion->setText(QApplication::translate("ChangeIp", "\346\270\205\351\231\244", Q_NULLPTR));
        GainVPNIp->setText(QApplication::translate("ChangeIp", "\350\216\267\345\217\226VPN\345\234\260\345\235\200", Q_NULLPTR));
        VersionFuntion->setText(QApplication::translate("ChangeIp", "\347\211\210\346\234\254\345\217\267", Q_NULLPTR));
        rebootFuntion->setText(QApplication::translate("ChangeIp", "\347\275\221\345\205\263\351\207\215\346\226\260\345\220\257\345\212\250", Q_NULLPTR));
        OldZigbee->setText(QApplication::translate("ChangeIp", "\350\256\276\347\275\256\351\272\246\345\270\214Zigbee", Q_NULLPTR));
        NewZigbee->setText(QApplication::translate("ChangeIp", "\350\256\276\347\275\256\346\226\260Zigbee", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeIp: public Ui_ChangeIp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEIP_H
