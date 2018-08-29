#ifndef DEBUGGATEWAY_H
#define DEBUGGATEWAY_H

#include <QDialog>
#include <QMainWindow>
#include<QtNetwork>
#include <QAction>
#include <QtNetwork/QTcpSocket>
#include<QMenu>
#include<QMenuBar>
#include <QFileDialog>
#include <QTime>
#include <QStackedLayout>
#include "addeui.h"
#include "dialogdelete.h"
#include <QTextCodec>
namespace Ui {
class DebugGateWay;
}

class DebugGateWay : public QDialog
{
    Q_OBJECT

public:
    explicit DebugGateWay(QWidget *parent = 0);
    ~DebugGateWay();


    QTimer *receive_timer = new QTimer(this);

    QTimer *point_timer = new QTimer(this);

    QTimer *DF_timer = new QTimer(this);


    void dealdata();

    void init();

    char ConvertHexChar(char ch);

    QByteArray QString2Hex(QString str);

    QString Validation_And(QString str);

    bool DealDataVerify(QString str);

    void DealDataF0(QString str);

    void DealDataF1(QString str);

    void DealDataF2(QString str);

    void DealDataF3(QString str);

    void DealDataE0(QString str);

    void DealDataE5(QString str);

    void sleep(int i);

     void closeEvent(QCloseEvent *event);

     qint16 GetCrc(QByteArray Data);

     void RemoteFuntion(QString str);

     void RemoteSendDataFuntion();

     void RemoteSendEndFuntion();

     void SendDataFuntion(QString str);

     void SendDataFuntionNoShow(QString str);

private:
    Ui::DebugGateWay *ui;

signals:

    void SendPackDealData(QString);

private slots:

    void on_connect_clicked();

    void on_disconnect_clicked();

    void displayError(QAbstractSocket::SocketError);

    void revData(); //接收来自服务端的数据

    void restrtimer();

    void on_point_funtion_clicked();

    void on_database_1_funtion_clicked();

    void on_Add_Eui_funtion_clicked();

    void StateUpdateEui(QString str);

    void on_btn_delete_clicked();

    void StateDeleteEui();

    void DeleteEui(QString str);

    void on_query_all_EUI_clicked();

    void on_query_all_online_clicked();

    void on_single_query_clicked();

    void on_query_equipment_clicked();

    void on_equipment_restart_clicked();

    void on_equipment_initialize_clicked();

    void on_start_echo_clicked();

    void on_off_echo_clicked();

    void on_gateway_mode_clicked();

    void on_mcu_mode_clicked();

    void on_clear_data_clicked();

    void on_mode_quit_clicked();

    void on_mode_restart_clicked();

    void on_mode_initialize_clicked();

    void on_temperature_IntervalI_clicked();

    void on_RemoteUpgrate_clicked();

    void XmodemFuntion();


    void on_SendDataToTermial_clicked();

    void on_Baud_Rate_clicked();

    void on_AlarmClock_clicked();

    void AlarmClockTransmitFuntion(QString str);

    void GainAlarmClockTransmitFuntion();

    void on_QueryDb_clicked();

    void on_SetType_clicked();

    void TypeSendFuntion(QString);

    void SetTypeSendFuntion();

    void on_GainTimeFFuntion_clicked();

    void on_GainFuntion_clicked();

    void PointimerFuntion();

    void on_pushButton_clicked();

    void on_AllowNetwork_clicked();

    void on_StopNetwork_clicked();

    void on_CollectTime_clicked();

    void on_SetRoute_clicked();

    void on_SetSleepTime_clicked();

    void on_Setbotel_clicked();

    void on_QueryNetwork_clicked();

    void DF_FUntion();

    void on_StartmodulFuntion_clicked();

    void on_StopmoFuntion_clicked();

    void on_VersionFuntion_clicked();

private:

     QTcpSocket *tcpSocket;

    // void closeEvent(QCloseEvent *event);





};


extern bool deletestart ;
extern QString stbuffer[200];
extern QString E0stbuffer[200];

typedef struct deal_xmodem{
     QByteArray FileData;               //文件内容
     qint32  PackNumber;
     qint32  PackSize;
     bool Open;
     QString EUI;
     QString Upgrate;
     int prograde;
}btn_deal_xmodem;

extern btn_deal_xmodem XmodemParameter ;

typedef struct deal_xmodem1{
    QByteArray Pack;
    int Step;
    quint8 cnt ;
    QByteArray TxData;
    quint16 ValidLen ;
    quint16 SendLen ;
      qint32 PackCnt ;
}btn_deal_xmodem1;
#endif // DEBUGGATEWAY_H
