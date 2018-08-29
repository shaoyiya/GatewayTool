/********************************************************************************
** Form generated from reading UI file 'RemoteUpgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEUPGRADE_H
#define UI_REMOTEUPGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteUpgrade
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QProgressBar *progressBar;
    QLabel *label_3;
    QPushButton *FileFuntion;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *UpdataEUI;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Start;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *End;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *RemoteUpgrade)
    {
        if (RemoteUpgrade->objectName().isEmpty())
            RemoteUpgrade->setObjectName(QStringLiteral("RemoteUpgrade"));
        RemoteUpgrade->resize(400, 164);
        label = new QLabel(RemoteUpgrade);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 66, 16));
        comboBox = new QComboBox(RemoteUpgrade);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(101, 12, 171, 20));
        lineEdit = new QLineEdit(RemoteUpgrade);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 40, 271, 21));
        progressBar = new QProgressBar(RemoteUpgrade);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(100, 100, 301, 20));
        progressBar->setValue(24);
        label_3 = new QLabel(RemoteUpgrade);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(55, 100, 41, 20));
        FileFuntion = new QPushButton(RemoteUpgrade);
        FileFuntion->setObjectName(QStringLiteral("FileFuntion"));
        FileFuntion->setGeometry(QRect(20, 40, 75, 23));
        label_2 = new QLabel(RemoteUpgrade);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 21));
        lineEdit_2 = new QLineEdit(RemoteUpgrade);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 70, 271, 20));
        UpdataEUI = new QPushButton(RemoteUpgrade);
        UpdataEUI->setObjectName(QStringLiteral("UpdataEUI"));
        UpdataEUI->setGeometry(QRect(300, 10, 75, 23));
        widget = new QWidget(RemoteUpgrade);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 130, 321, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Start = new QPushButton(widget);
        Start->setObjectName(QStringLiteral("Start"));

        horizontalLayout->addWidget(Start);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        End = new QPushButton(widget);
        End->setObjectName(QStringLiteral("End"));

        horizontalLayout->addWidget(End);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        retranslateUi(RemoteUpgrade);

        QMetaObject::connectSlotsByName(RemoteUpgrade);
    } // setupUi

    void retranslateUi(QDialog *RemoteUpgrade)
    {
        RemoteUpgrade->setWindowTitle(QApplication::translate("RemoteUpgrade", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RemoteUpgrade", "\345\215\207\347\272\247\347\232\204EUI\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("RemoteUpgrade", "\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
        FileFuntion->setText(QApplication::translate("RemoteUpgrade", "\346\226\207\344\273\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("RemoteUpgrade", "\345\215\207\347\272\247\346\214\207\344\273\244\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("RemoteUpgrade", "1E06001500015BA1", Q_NULLPTR));
        UpdataEUI->setText(QApplication::translate("RemoteUpgrade", "\346\233\264\346\226\260", Q_NULLPTR));
        Start->setText(QApplication::translate("RemoteUpgrade", "\345\274\200\345\247\213", Q_NULLPTR));
        End->setText(QApplication::translate("RemoteUpgrade", "\347\273\223\346\235\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoteUpgrade: public Ui_RemoteUpgrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEUPGRADE_H
