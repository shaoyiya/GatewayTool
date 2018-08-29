/********************************************************************************
** Form generated from reading UI file 'DebugGateWay.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGATEWAY_H
#define UI_DEBUGGATEWAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugGateWay
{
public:
    QFrame *line_13;
    QFrame *line_12;
    QLabel *label_3;
    QComboBox *comboBox;
    QFrame *line_11;
    QFrame *line_3;
    QPushButton *mode_restart;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QPushButton *clear_data;
    QPlainTextEdit *plainTextEdit;
    QPushButton *temperature_IntervalI;
    QPushButton *mode_initialize;
    QFrame *line_5;
    QLabel *label_4;
    QFrame *line_14;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ip_lineEdit;
    QLabel *label_2;
    QLineEdit *port_lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *connect;
    QPushButton *disconnect;
    QFrame *line;
    QFrame *line_8;
    QFrame *line_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QFrame *line_2;
    QPushButton *mode_quit;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *query_all_EUI;
    QPushButton *query_all_online;
    QPushButton *Add_Eui_funtion;
    QPushButton *RemoteUpgrate;
    QPushButton *btn_delete;
    QPushButton *database_1_funtion;
    QFrame *line_6;
    QPushButton *single_query;
    QFrame *line_7;
    QFrame *line_9;
    QComboBox *comboBox_2;
    QLabel *message_Label;
    QLabel *xiaoxilan_Label;
    QComboBox *comboBox_3;
    QPushButton *AlarmClock;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_Send;
    QPushButton *SendDataToTermial;
    QLineEdit *point_lineEdit;
    QPushButton *point_funtion;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Baud_Rate;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QPushButton *SetType;
    QPushButton *GainFuntion;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *QueryDb;
    QComboBox *QueryType;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *GainTimeFFuntion;
    QLineEdit *lineEditGainTime;
    QLabel *label_6;
    QLineEdit *Time;
    QPushButton *pushButton;
    QPushButton *CollectTime;
    QPushButton *SetRoute;
    QLineEdit *lineEdit_2;
    QPushButton *SetSleepTime;
    QComboBox *comboBox_Time;
    QPushButton *Setbotel;
    QComboBox *comboBox_botel;
    QComboBox *comboBox_V;
    QPushButton *QueryNetwork;
    QComboBox *comboBox_6;
    QPushButton *StartmodulFuntion;
    QPushButton *StopmoFuntion;
    QCheckBox *checkBox;
    QPushButton *gateway_mode;
    QPushButton *equipment_restart;
    QPushButton *start_echo;
    QPushButton *mcu_mode;
    QPushButton *AllowNetwork;
    QPushButton *equipment_initialize;
    QPushButton *off_echo;
    QPushButton *query_equipment;
    QPushButton *StopNetwork;
    QPushButton *VersionFuntion;

    void setupUi(QDialog *DebugGateWay)
    {
        if (DebugGateWay->objectName().isEmpty())
            DebugGateWay->setObjectName(QStringLiteral("DebugGateWay"));
        DebugGateWay->resize(877, 742);
        line_13 = new QFrame(DebugGateWay);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(470, 150, 381, 31));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(DebugGateWay);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(448, 20, 41, 331));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(DebugGateWay);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(58, 120, 54, 12));
        comboBox = new QComboBox(DebugGateWay);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(616, 240, 201, 20));
        line_11 = new QFrame(DebugGateWay);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(830, 20, 41, 331));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(DebugGateWay);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(436, 20, 20, 71));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        mode_restart = new QPushButton(DebugGateWay);
        mode_restart->setObjectName(QStringLiteral("mode_restart"));
        mode_restart->setEnabled(false);
        mode_restart->setGeometry(QRect(618, 31, 75, 23));
        layoutWidget = new QWidget(DebugGateWay);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(48, 360, 781, 331));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 1, 0, 1, 1);

        clear_data = new QPushButton(layoutWidget);
        clear_data->setObjectName(QStringLiteral("clear_data"));

        gridLayout_6->addWidget(clear_data, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_6->addWidget(plainTextEdit, 0, 1, 2, 1);

        temperature_IntervalI = new QPushButton(DebugGateWay);
        temperature_IntervalI->setObjectName(QStringLiteral("temperature_IntervalI"));
        temperature_IntervalI->setEnabled(false);
        temperature_IntervalI->setGeometry(QRect(620, 60, 80, 23));
        mode_initialize = new QPushButton(DebugGateWay);
        mode_initialize->setObjectName(QStringLiteral("mode_initialize"));
        mode_initialize->setEnabled(false);
        mode_initialize->setGeometry(QRect(520, 60, 91, 23));
        line_5 = new QFrame(DebugGateWay);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(48, 85, 401, 31));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(DebugGateWay);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(471, 30, 31, 16));
        line_14 = new QFrame(DebugGateWay);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(466, 340, 381, 21));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        layoutWidget_2 = new QWidget(DebugGateWay);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(76, 31, 337, 50));
        gridLayout_5 = new QGridLayout(layoutWidget_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ip_lineEdit = new QLineEdit(layoutWidget_2);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(ip_lineEdit->sizePolicy().hasHeightForWidth());
        ip_lineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ip_lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        port_lineEdit = new QLineEdit(layoutWidget_2);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));

        gridLayout->addWidget(port_lineEdit, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        connect = new QPushButton(layoutWidget_2);
        connect->setObjectName(QStringLiteral("connect"));

        horizontalLayout->addWidget(connect);

        disconnect = new QPushButton(layoutWidget_2);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setEnabled(false);
        disconnect->setIconSize(QSize(16, 25));

        horizontalLayout->addWidget(disconnect);


        gridLayout_5->addLayout(horizontalLayout, 0, 1, 1, 1);

        line = new QFrame(DebugGateWay);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(45, 10, 401, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(DebugGateWay);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(433, 100, 31, 251));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(DebugGateWay);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(36, 20, 20, 71));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(DebugGateWay);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(710, 60, 31, 20));
        label_5 = new QLabel(DebugGateWay);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(476, 170, 31, 16));
        line_2 = new QFrame(DebugGateWay);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(45, 80, 401, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        mode_quit = new QPushButton(DebugGateWay);
        mode_quit->setObjectName(QStringLiteral("mode_quit"));
        mode_quit->setEnabled(false);
        mode_quit->setGeometry(QRect(521, 31, 91, 23));
        layoutWidget_3 = new QWidget(DebugGateWay);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(507, 173, 311, 63));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        query_all_EUI = new QPushButton(layoutWidget_3);
        query_all_EUI->setObjectName(QStringLiteral("query_all_EUI"));
        query_all_EUI->setEnabled(false);

        gridLayout_4->addWidget(query_all_EUI, 1, 0, 1, 1);

        query_all_online = new QPushButton(layoutWidget_3);
        query_all_online->setObjectName(QStringLiteral("query_all_online"));
        query_all_online->setEnabled(false);

        gridLayout_4->addWidget(query_all_online, 1, 1, 1, 1);

        Add_Eui_funtion = new QPushButton(layoutWidget_3);
        Add_Eui_funtion->setObjectName(QStringLiteral("Add_Eui_funtion"));
        Add_Eui_funtion->setEnabled(false);

        gridLayout_4->addWidget(Add_Eui_funtion, 0, 2, 1, 1);

        RemoteUpgrate = new QPushButton(layoutWidget_3);
        RemoteUpgrate->setObjectName(QStringLiteral("RemoteUpgrate"));
        RemoteUpgrate->setEnabled(false);

        gridLayout_4->addWidget(RemoteUpgrate, 0, 1, 1, 1);

        btn_delete = new QPushButton(layoutWidget_3);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setEnabled(false);

        gridLayout_4->addWidget(btn_delete, 1, 2, 1, 1);

        database_1_funtion = new QPushButton(layoutWidget_3);
        database_1_funtion->setObjectName(QStringLiteral("database_1_funtion"));
        database_1_funtion->setEnabled(false);

        gridLayout_4->addWidget(database_1_funtion, 0, 0, 1, 1);

        line_6 = new QFrame(DebugGateWay);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(34, 100, 31, 251));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        single_query = new QPushButton(DebugGateWay);
        single_query->setObjectName(QStringLiteral("single_query"));
        single_query->setEnabled(false);
        single_query->setGeometry(QRect(510, 240, 101, 21));
        line_7 = new QFrame(DebugGateWay);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(50, 340, 401, 21));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(DebugGateWay);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(468, 5, 381, 31));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        comboBox_2 = new QComboBox(DebugGateWay);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(698, 30, 141, 20));
        message_Label = new QLabel(DebugGateWay);
        message_Label->setObjectName(QStringLiteral("message_Label"));
        message_Label->setGeometry(QRect(164, 710, 80, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        message_Label->setFont(font);
        xiaoxilan_Label = new QLabel(DebugGateWay);
        xiaoxilan_Label->setObjectName(QStringLiteral("xiaoxilan_Label"));
        xiaoxilan_Label->setGeometry(QRect(520, 710, 161, 20));
        xiaoxilan_Label->setFont(font);
        comboBox_3 = new QComboBox(DebugGateWay);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(240, 260, 111, 20));
        AlarmClock = new QPushButton(DebugGateWay);
        AlarmClock->setObjectName(QStringLiteral("AlarmClock"));
        AlarmClock->setEnabled(false);
        AlarmClock->setGeometry(QRect(340, 200, 101, 23));
        layoutWidget1 = new QWidget(DebugGateWay);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 234, 361, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_Send = new QLineEdit(layoutWidget1);
        lineEdit_Send->setObjectName(QStringLiteral("lineEdit_Send"));

        horizontalLayout_3->addWidget(lineEdit_Send);

        SendDataToTermial = new QPushButton(layoutWidget1);
        SendDataToTermial->setObjectName(QStringLiteral("SendDataToTermial"));
        SendDataToTermial->setEnabled(false);

        horizontalLayout_3->addWidget(SendDataToTermial);

        point_lineEdit = new QLineEdit(DebugGateWay);
        point_lineEdit->setObjectName(QStringLiteral("point_lineEdit"));
        point_lineEdit->setGeometry(QRect(80, 260, 151, 20));
        point_funtion = new QPushButton(DebugGateWay);
        point_funtion->setObjectName(QStringLiteral("point_funtion"));
        point_funtion->setEnabled(false);
        point_funtion->setGeometry(QRect(360, 260, 81, 23));
        layoutWidget2 = new QWidget(DebugGateWay);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(200, 170, 231, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Baud_Rate = new QPushButton(layoutWidget2);
        Baud_Rate->setObjectName(QStringLiteral("Baud_Rate"));
        Baud_Rate->setEnabled(false);

        horizontalLayout_2->addWidget(Baud_Rate);

        comboBox_4 = new QComboBox(layoutWidget2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_2->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_2->addWidget(comboBox_5);

        SetType = new QPushButton(DebugGateWay);
        SetType->setObjectName(QStringLiteral("SetType"));
        SetType->setEnabled(false);
        SetType->setGeometry(QRect(670, 270, 75, 23));
        GainFuntion = new QPushButton(DebugGateWay);
        GainFuntion->setObjectName(QStringLiteral("GainFuntion"));
        GainFuntion->setEnabled(false);
        GainFuntion->setGeometry(QRect(736, 310, 81, 23));
        layoutWidget3 = new QWidget(DebugGateWay);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(506, 270, 152, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        QueryDb = new QPushButton(layoutWidget3);
        QueryDb->setObjectName(QStringLiteral("QueryDb"));
        QueryDb->setEnabled(false);

        horizontalLayout_4->addWidget(QueryDb);

        QueryType = new QComboBox(layoutWidget3);
        QueryType->setObjectName(QStringLiteral("QueryType"));

        horizontalLayout_4->addWidget(QueryType);

        layoutWidget4 = new QWidget(DebugGateWay);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(486, 310, 234, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        GainTimeFFuntion = new QPushButton(layoutWidget4);
        GainTimeFFuntion->setObjectName(QStringLiteral("GainTimeFFuntion"));
        GainTimeFFuntion->setEnabled(false);

        horizontalLayout_5->addWidget(GainTimeFFuntion);

        lineEditGainTime = new QLineEdit(layoutWidget4);
        lineEditGainTime->setObjectName(QStringLiteral("lineEditGainTime"));

        horizontalLayout_5->addWidget(lineEditGainTime);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        Time = new QLineEdit(DebugGateWay);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(240, 290, 91, 20));
        pushButton = new QPushButton(DebugGateWay);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(160, 290, 75, 23));
        CollectTime = new QPushButton(DebugGateWay);
        CollectTime->setObjectName(QStringLiteral("CollectTime"));
        CollectTime->setEnabled(false);
        CollectTime->setGeometry(QRect(520, 90, 101, 31));
        SetRoute = new QPushButton(DebugGateWay);
        SetRoute->setObjectName(QStringLiteral("SetRoute"));
        SetRoute->setEnabled(false);
        SetRoute->setGeometry(QRect(110, 200, 81, 23));
        lineEdit_2 = new QLineEdit(DebugGateWay);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 200, 131, 20));
        SetSleepTime = new QPushButton(DebugGateWay);
        SetSleepTime->setObjectName(QStringLiteral("SetSleepTime"));
        SetSleepTime->setEnabled(false);
        SetSleepTime->setGeometry(QRect(630, 90, 81, 31));
        comboBox_Time = new QComboBox(DebugGateWay);
        comboBox_Time->setObjectName(QStringLiteral("comboBox_Time"));
        comboBox_Time->setGeometry(QRect(720, 100, 91, 21));
        Setbotel = new QPushButton(DebugGateWay);
        Setbotel->setObjectName(QStringLiteral("Setbotel"));
        Setbotel->setEnabled(false);
        Setbotel->setGeometry(QRect(520, 130, 75, 23));
        comboBox_botel = new QComboBox(DebugGateWay);
        comboBox_botel->setObjectName(QStringLiteral("comboBox_botel"));
        comboBox_botel->setGeometry(QRect(610, 130, 101, 22));
        comboBox_V = new QComboBox(DebugGateWay);
        comboBox_V->setObjectName(QStringLiteral("comboBox_V"));
        comboBox_V->setGeometry(QRect(720, 130, 69, 22));
        QueryNetwork = new QPushButton(DebugGateWay);
        QueryNetwork->setObjectName(QStringLiteral("QueryNetwork"));
        QueryNetwork->setEnabled(false);
        QueryNetwork->setGeometry(QRect(80, 290, 75, 23));
        comboBox_6 = new QComboBox(DebugGateWay);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(750, 60, 41, 22));
        StartmodulFuntion = new QPushButton(DebugGateWay);
        StartmodulFuntion->setObjectName(QStringLiteral("StartmodulFuntion"));
        StartmodulFuntion->setEnabled(false);
        StartmodulFuntion->setGeometry(QRect(80, 320, 81, 23));
        StopmoFuntion = new QPushButton(DebugGateWay);
        StopmoFuntion->setObjectName(QStringLiteral("StopmoFuntion"));
        StopmoFuntion->setEnabled(false);
        StopmoFuntion->setGeometry(QRect(170, 320, 81, 23));
        checkBox = new QCheckBox(DebugGateWay);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(470, 60, 41, 16));
        gateway_mode = new QPushButton(DebugGateWay);
        gateway_mode->setObjectName(QStringLiteral("gateway_mode"));
        gateway_mode->setEnabled(false);
        gateway_mode->setGeometry(QRect(111, 111, 75, 23));
        equipment_restart = new QPushButton(DebugGateWay);
        equipment_restart->setObjectName(QStringLiteral("equipment_restart"));
        equipment_restart->setEnabled(false);
        equipment_restart->setGeometry(QRect(197, 111, 75, 23));
        start_echo = new QPushButton(DebugGateWay);
        start_echo->setObjectName(QStringLiteral("start_echo"));
        start_echo->setEnabled(false);
        start_echo->setGeometry(QRect(278, 111, 75, 23));
        mcu_mode = new QPushButton(DebugGateWay);
        mcu_mode->setObjectName(QStringLiteral("mcu_mode"));
        mcu_mode->setEnabled(false);
        mcu_mode->setGeometry(QRect(111, 140, 75, 23));
        AllowNetwork = new QPushButton(DebugGateWay);
        AllowNetwork->setObjectName(QStringLiteral("AllowNetwork"));
        AllowNetwork->setEnabled(false);
        AllowNetwork->setGeometry(QRect(359, 111, 80, 23));
        equipment_initialize = new QPushButton(DebugGateWay);
        equipment_initialize->setObjectName(QStringLiteral("equipment_initialize"));
        equipment_initialize->setEnabled(false);
        equipment_initialize->setGeometry(QRect(197, 140, 75, 23));
        off_echo = new QPushButton(DebugGateWay);
        off_echo->setObjectName(QStringLiteral("off_echo"));
        off_echo->setEnabled(false);
        off_echo->setGeometry(QRect(278, 140, 75, 23));
        query_equipment = new QPushButton(DebugGateWay);
        query_equipment->setObjectName(QStringLiteral("query_equipment"));
        query_equipment->setEnabled(false);
        query_equipment->setGeometry(QRect(111, 169, 80, 23));
        StopNetwork = new QPushButton(DebugGateWay);
        StopNetwork->setObjectName(QStringLiteral("StopNetwork"));
        StopNetwork->setEnabled(false);
        StopNetwork->setGeometry(QRect(359, 140, 80, 23));
        VersionFuntion = new QPushButton(DebugGateWay);
        VersionFuntion->setObjectName(QStringLiteral("VersionFuntion"));
        VersionFuntion->setEnabled(false);
        VersionFuntion->setGeometry(QRect(270, 320, 81, 23));

        retranslateUi(DebugGateWay);

        QMetaObject::connectSlotsByName(DebugGateWay);
    } // setupUi

    void retranslateUi(QDialog *DebugGateWay)
    {
        DebugGateWay->setWindowTitle(QApplication::translate("DebugGateWay", "\350\260\203\350\257\225\345\267\245\345\205\267Ver0.0", Q_NULLPTR));
        label_3->setText(QApplication::translate("DebugGateWay", "\345\215\217\350\260\203\345\231\250", Q_NULLPTR));
        mode_restart->setText(QApplication::translate("DebugGateWay", "\346\250\241\345\235\227\351\207\215\345\220\257", Q_NULLPTR));
        clear_data->setText(QApplication::translate("DebugGateWay", "\346\270\205\351\231\244\346\225\260\346\215\256", Q_NULLPTR));
        temperature_IntervalI->setText(QApplication::translate("DebugGateWay", "\351\207\207\351\233\206\346\270\251\345\272\246\351\227\264\351\232\224", Q_NULLPTR));
        mode_initialize->setText(QApplication::translate("DebugGateWay", "\346\250\241\345\235\227\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        label_4->setText(QApplication::translate("DebugGateWay", "\350\212\202\347\202\271", Q_NULLPTR));
        label->setText(QApplication::translate("DebugGateWay", "Ip:", Q_NULLPTR));
        ip_lineEdit->setText(QApplication::translate("DebugGateWay", "211.66.3.32", Q_NULLPTR));
        label_2->setText(QApplication::translate("DebugGateWay", "Port:", Q_NULLPTR));
        port_lineEdit->setText(QApplication::translate("DebugGateWay", "8084", Q_NULLPTR));
        connect->setText(QApplication::translate("DebugGateWay", "\350\277\236\346\216\245", Q_NULLPTR));
        disconnect->setText(QApplication::translate("DebugGateWay", "\346\226\255\345\274\200", Q_NULLPTR));
        label_5->setText(QApplication::translate("DebugGateWay", "\347\275\221\345\205\263", Q_NULLPTR));
        mode_quit->setText(QApplication::translate("DebugGateWay", "\346\250\241\345\235\227\351\200\200\347\275\221", Q_NULLPTR));
        query_all_EUI->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\345\205\250\351\203\250EUI\344\277\241\346\201\257", Q_NULLPTR));
        query_all_online->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\345\234\250\347\272\277EUI", Q_NULLPTR));
        Add_Eui_funtion->setText(QApplication::translate("DebugGateWay", "\346\267\273\345\212\240EUI", Q_NULLPTR));
        RemoteUpgrate->setText(QApplication::translate("DebugGateWay", "\350\277\234\347\250\213\345\215\207\347\272\247", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("DebugGateWay", "\345\210\240\351\231\244EUI", Q_NULLPTR));
        database_1_funtion->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\345\205\250\351\203\250EUI", Q_NULLPTR));
        single_query->setText(QApplication::translate("DebugGateWay", "\345\215\225\344\270\252\350\256\276\345\244\207\344\277\241\346\201\257", Q_NULLPTR));
        message_Label->setText(QApplication::translate("DebugGateWay", "\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        xiaoxilan_Label->setText(QApplication::translate("DebugGateWay", "\350\257\267\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        AlarmClock->setText(QApplication::translate("DebugGateWay", "\351\227\271\351\222\237\350\256\276\347\275\256", Q_NULLPTR));
        SendDataToTermial->setText(QApplication::translate("DebugGateWay", "\351\200\217\344\274\240\345\210\260\345\215\217\350\260\203\345\231\250", Q_NULLPTR));
        point_funtion->setText(QApplication::translate("DebugGateWay", "\347\202\271\344\274\240\346\225\260\346\215\256", Q_NULLPTR));
        Baud_Rate->setText(QApplication::translate("DebugGateWay", "\344\277\256\346\224\271\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        SetType->setText(QApplication::translate("DebugGateWay", "\350\256\276\347\275\256\350\256\276\345\244\207\347\261\273\345\236\213", Q_NULLPTR));
        GainFuntion->setText(QApplication::translate("DebugGateWay", "\350\216\267\345\217\226\351\207\207\351\233\206\346\227\266\351\227\264", Q_NULLPTR));
        QueryDb->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        GainTimeFFuntion->setText(QApplication::translate("DebugGateWay", "\350\256\276\345\244\207\351\207\207\351\233\206\346\227\266\351\227\264", Q_NULLPTR));
        label_6->setText(QApplication::translate("DebugGateWay", "ms", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DebugGateWay", "\350\275\256\350\257\242\345\274\200\345\205\263", Q_NULLPTR));
        CollectTime->setText(QApplication::translate("DebugGateWay", "\350\216\267\345\217\226\346\270\251\345\272\246\351\207\207\351\233\206\351\227\264\351\232\224", Q_NULLPTR));
        SetRoute->setText(QApplication::translate("DebugGateWay", "\350\256\276\347\275\256\347\275\221\347\273\234\344\277\241\351\201\223", Q_NULLPTR));
        SetSleepTime->setText(QApplication::translate("DebugGateWay", "\350\256\276\347\275\256\347\235\241\347\234\240\351\227\264\351\232\224", Q_NULLPTR));
        Setbotel->setText(QApplication::translate("DebugGateWay", "\344\277\256\346\224\271\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        QueryNetwork->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\347\275\221\347\273\234\346\213\223\346\211\221", Q_NULLPTR));
        StartmodulFuntion->setText(QApplication::translate("DebugGateWay", "\345\274\200\345\220\257\345\205\250\351\200\217\346\250\241\345\274\217", Q_NULLPTR));
        StopmoFuntion->setText(QApplication::translate("DebugGateWay", "\345\205\263\351\227\255\345\205\250\351\200\217\346\250\241\345\274\217", Q_NULLPTR));
        checkBox->setText(QApplication::translate("DebugGateWay", "\345\271\277\346\222\255", Q_NULLPTR));
        gateway_mode->setText(QApplication::translate("DebugGateWay", "\347\275\221\345\205\263\346\250\241\345\274\217", Q_NULLPTR));
        equipment_restart->setText(QApplication::translate("DebugGateWay", "\350\256\276\345\244\207\351\207\215\345\220\257", Q_NULLPTR));
        start_echo->setText(QApplication::translate("DebugGateWay", "\345\274\200\345\220\257\345\233\236\346\230\276", Q_NULLPTR));
        mcu_mode->setText(QApplication::translate("DebugGateWay", "MCU\346\250\241\345\274\217", Q_NULLPTR));
        AllowNetwork->setText(QApplication::translate("DebugGateWay", "\345\205\201\350\256\270\350\256\276\345\244\207\345\205\245\347\275\221", Q_NULLPTR));
        equipment_initialize->setText(QApplication::translate("DebugGateWay", "\350\256\276\345\244\207\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        off_echo->setText(QApplication::translate("DebugGateWay", "\345\205\263\351\227\255\345\233\236\346\230\276", Q_NULLPTR));
        query_equipment->setText(QApplication::translate("DebugGateWay", "\346\237\245\350\257\242\350\256\276\345\244\207\344\277\241\346\201\257", Q_NULLPTR));
        StopNetwork->setText(QApplication::translate("DebugGateWay", "\347\246\201\346\255\242\350\256\276\345\244\207\345\205\245\347\275\221", Q_NULLPTR));
        VersionFuntion->setText(QApplication::translate("DebugGateWay", "\345\215\217\350\260\203\345\231\250\346\234\254\347\211\210\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DebugGateWay: public Ui_DebugGateWay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGATEWAY_H
