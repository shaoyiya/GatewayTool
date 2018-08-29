/********************************************************************************
** Form generated from reading UI file 'AlarmClock.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMCLOCK_H
#define UI_ALARMCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AlarmClock
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QSlider *verticalSliderOpen;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QSlider *verticalSlider_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *SendAlarmData;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_3;
    QPushButton *GainAlarm;

    void setupUi(QDialog *AlarmClock)
    {
        if (AlarmClock->objectName().isEmpty())
            AlarmClock->setObjectName(QStringLiteral("AlarmClock"));
        AlarmClock->resize(385, 286);
        checkBox = new QCheckBox(AlarmClock);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 170, 81, 16));
        checkBox_2 = new QCheckBox(AlarmClock);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(180, 170, 71, 16));
        checkBox_3 = new QCheckBox(AlarmClock);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(290, 170, 71, 16));
        checkBox_4 = new QCheckBox(AlarmClock);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(50, 200, 71, 16));
        checkBox_5 = new QCheckBox(AlarmClock);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(180, 200, 71, 16));
        checkBox_6 = new QCheckBox(AlarmClock);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(290, 196, 71, 20));
        checkBox_7 = new QCheckBox(AlarmClock);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(50, 230, 71, 16));
        verticalSliderOpen = new QSlider(AlarmClock);
        verticalSliderOpen->setObjectName(QStringLiteral("verticalSliderOpen"));
        verticalSliderOpen->setGeometry(QRect(50, 20, 22, 71));
        verticalSliderOpen->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(AlarmClock);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(90, 20, 22, 71));
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_3 = new QSlider(AlarmClock);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(230, 20, 22, 71));
        verticalSlider_3->setOrientation(Qt::Vertical);
        verticalSlider_4 = new QSlider(AlarmClock);
        verticalSlider_4->setObjectName(QStringLiteral("verticalSlider_4"));
        verticalSlider_4->setGeometry(QRect(270, 20, 22, 71));
        verticalSlider_4->setOrientation(Qt::Vertical);
        label = new QLabel(AlarmClock);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(53, 130, 61, 20));
        label_2 = new QLabel(AlarmClock);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(233, 130, 61, 20));
        SendAlarmData = new QPushButton(AlarmClock);
        SendAlarmData->setObjectName(QStringLiteral("SendAlarmData"));
        SendAlarmData->setGeometry(QRect(280, 250, 75, 23));
        spinBox = new QSpinBox(AlarmClock);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(30, 100, 41, 21));
        spinBox_2 = new QSpinBox(AlarmClock);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(80, 100, 42, 22));
        spinBox_4 = new QSpinBox(AlarmClock);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(270, 100, 42, 22));
        spinBox_3 = new QSpinBox(AlarmClock);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(220, 100, 41, 21));
        GainAlarm = new QPushButton(AlarmClock);
        GainAlarm->setObjectName(QStringLiteral("GainAlarm"));
        GainAlarm->setGeometry(QRect(24, 250, 91, 23));

        retranslateUi(AlarmClock);

        QMetaObject::connectSlotsByName(AlarmClock);
    } // setupUi

    void retranslateUi(QDialog *AlarmClock)
    {
        AlarmClock->setWindowTitle(QApplication::translate("AlarmClock", "Dialog", Q_NULLPTR));
        checkBox->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\344\270\200", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\344\272\214", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\344\270\211", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\345\233\233", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\344\272\224", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\345\205\255", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("AlarmClock", "\346\230\237\346\234\237\346\227\245", Q_NULLPTR));
        label->setText(QApplication::translate("AlarmClock", "\345\274\200\345\220\257\351\227\271\351\222\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("AlarmClock", "\345\205\263\351\227\255\351\227\271\351\222\237", Q_NULLPTR));
        SendAlarmData->setText(QApplication::translate("AlarmClock", "\345\217\221\351\200\201", Q_NULLPTR));
        GainAlarm->setText(QApplication::translate("AlarmClock", "\350\216\267\345\217\226\351\227\271\351\222\237\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlarmClock: public Ui_AlarmClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMCLOCK_H
