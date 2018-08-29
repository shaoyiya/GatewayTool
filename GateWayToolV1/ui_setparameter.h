/********************************************************************************
** Form generated from reading UI file 'setparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPARAMETER_H
#define UI_SETPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetParameter
{
public:
    QFrame *line_2;
    QFrame *line_3;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditGateway;
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditMask;
    QLabel *label_14;
    QFrame *line_4;
    QFrame *line;
    QWidget *layoutWidget_10;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *ModificationParameter;

    void setupUi(QDialog *SetParameter)
    {
        if (SetParameter->objectName().isEmpty())
            SetParameter->setObjectName(QStringLiteral("SetParameter"));
        SetParameter->resize(285, 236);
        line_2 = new QFrame(SetParameter);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(90, 30, 171, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(SetParameter);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(250, 40, 20, 151));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget_4 = new QWidget(SetParameter);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(50, 90, 189, 22));
        gridLayout_2 = new QGridLayout(layoutWidget_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(layoutWidget_4);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout_2->addWidget(lineEditIP, 0, 1, 1, 1);

        layoutWidget_7 = new QWidget(SetParameter);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(60, 150, 177, 22));
        gridLayout_4 = new QGridLayout(layoutWidget_7);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        lineEditGateway = new QLineEdit(layoutWidget_7);
        lineEditGateway->setObjectName(QStringLiteral("lineEditGateway"));

        gridLayout_4->addWidget(lineEditGateway, 0, 1, 1, 1);

        layoutWidget_9 = new QWidget(SetParameter);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(40, 120, 201, 22));
        gridLayout_3 = new QGridLayout(layoutWidget_9);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_9);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        lineEditMask = new QLineEdit(layoutWidget_9);
        lineEditMask->setObjectName(QStringLiteral("lineEditMask"));

        gridLayout_3->addWidget(lineEditMask, 0, 1, 1, 1);

        label_14 = new QLabel(SetParameter);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 30, 54, 12));
        line_4 = new QFrame(SetParameter);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 40, 20, 151));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line = new QFrame(SetParameter);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 180, 231, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget_10 = new QWidget(SetParameter);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(40, 60, 201, 22));
        gridLayout = new QGridLayout(layoutWidget_10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_10);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget_10);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        ModificationParameter = new QPushButton(SetParameter);
        ModificationParameter->setObjectName(QStringLiteral("ModificationParameter"));
        ModificationParameter->setGeometry(QRect(30, 200, 75, 23));

        retranslateUi(SetParameter);

        QMetaObject::connectSlotsByName(SetParameter);
    } // setupUi

    void retranslateUi(QDialog *SetParameter)
    {
        SetParameter->setWindowTitle(QApplication::translate("SetParameter", "\344\277\256\346\224\271IP\345\267\245\345\205\267V0.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetParameter", "IP\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("SetParameter", "\347\275\221\345\205\263\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetParameter", "\345\255\220\347\275\221\346\216\251\347\240\201\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("SetParameter", "\345\270\270\350\247\204\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("SetParameter", "\350\256\276\345\244\207\345\210\253\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("SetParameter", "\345\202\273\351\200\274", Q_NULLPTR));
        ModificationParameter->setText(QApplication::translate("SetParameter", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetParameter: public Ui_SetParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPARAMETER_H
