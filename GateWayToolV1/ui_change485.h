/********************************************************************************
** Form generated from reading UI file 'change485.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE485_H
#define UI_CHANGE485_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Change485
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *SetBaud;
    QPushButton *GainBuad;
    QGridLayout *gridLayout;
    QPlainTextEdit *search_textEdit;
    QPushButton *CllearFuntion;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *ConnectFuntion;
    QPushButton *DisConnectFuntion;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_2;
    QPushButton *SendFuntion;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *xiaoxilan_Label;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Change485)
    {
        if (Change485->objectName().isEmpty())
            Change485->setObjectName(QStringLiteral("Change485"));
        Change485->resize(587, 436);
        gridLayout_2 = new QGridLayout(Change485);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox = new QComboBox(Change485);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(Change485);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(Change485);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        SetBaud = new QPushButton(Change485);
        SetBaud->setObjectName(QStringLiteral("SetBaud"));
        SetBaud->setEnabled(false);

        horizontalLayout->addWidget(SetBaud);

        GainBuad = new QPushButton(Change485);
        GainBuad->setObjectName(QStringLiteral("GainBuad"));
        GainBuad->setEnabled(false);

        horizontalLayout->addWidget(GainBuad);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        search_textEdit = new QPlainTextEdit(Change485);
        search_textEdit->setObjectName(QStringLiteral("search_textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        search_textEdit->setFont(font);
        search_textEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        search_textEdit->setAcceptDrops(false);
        search_textEdit->setCenterOnScroll(false);

        gridLayout->addWidget(search_textEdit, 0, 0, 2, 1);

        CllearFuntion = new QPushButton(Change485);
        CllearFuntion->setObjectName(QStringLiteral("CllearFuntion"));

        gridLayout->addWidget(CllearFuntion, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Change485);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(Change485);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        ConnectFuntion = new QPushButton(Change485);
        ConnectFuntion->setObjectName(QStringLiteral("ConnectFuntion"));

        horizontalLayout_2->addWidget(ConnectFuntion);

        DisConnectFuntion = new QPushButton(Change485);
        DisConnectFuntion->setObjectName(QStringLiteral("DisConnectFuntion"));
        DisConnectFuntion->setEnabled(false);

        horizontalLayout_2->addWidget(DisConnectFuntion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_2 = new QLineEdit(Change485);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        SendFuntion = new QPushButton(Change485);
        SendFuntion->setObjectName(QStringLiteral("SendFuntion"));
        SendFuntion->setEnabled(false);

        horizontalLayout_3->addWidget(SendFuntion);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        xiaoxilan_Label = new QLabel(Change485);
        xiaoxilan_Label->setObjectName(QStringLiteral("xiaoxilan_Label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        xiaoxilan_Label->setFont(font1);

        horizontalLayout_4->addWidget(xiaoxilan_Label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(Change485);

        QMetaObject::connectSlotsByName(Change485);
    } // setupUi

    void retranslateUi(QDialog *Change485)
    {
        Change485->setWindowTitle(QApplication::translate("Change485", "485\350\260\203\350\257\225\345\267\245\345\205\267V0.0", Q_NULLPTR));
        SetBaud->setText(QApplication::translate("Change485", "\350\256\276\347\275\256\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        GainBuad->setText(QApplication::translate("Change485", "\350\216\267\345\217\226\345\275\223\345\211\215\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        CllearFuntion->setText(QApplication::translate("Change485", "\346\270\205\351\231\244", Q_NULLPTR));
        label->setText(QApplication::translate("Change485", "IP:", Q_NULLPTR));
        ConnectFuntion->setText(QApplication::translate("Change485", "\350\277\236\346\216\245", Q_NULLPTR));
        DisConnectFuntion->setText(QApplication::translate("Change485", "\346\226\255\345\274\200", Q_NULLPTR));
        SendFuntion->setText(QApplication::translate("Change485", "\345\217\221\351\200\201", Q_NULLPTR));
        xiaoxilan_Label->setText(QApplication::translate("Change485", "\350\257\267\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Change485: public Ui_Change485 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE485_H
