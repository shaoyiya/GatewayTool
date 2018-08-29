#ifndef UDPSENDER_H
#define UDPSENDER_H

#include <QDialog>
#include <QUdpSocket>
#include <QTimer>
#include <QMessageBox>
#include <QLinkedList>
#include <QTime>
typedef struct deal_Set{
     QString SERVER;
     QString PORT;
     QString BAUDRATE;
     QString DATABITS;
     QString DATACHECK;
     QString STOPBITS;
     QString FLUIDCONTROL;
     QString TYPE;
     QString MAC;
}btn_deal_Set;

namespace Ui {
class UdpSender;
}

class UdpSender : public QDialog
{
    Q_OBJECT

public:
    explicit UdpSender(QWidget *parent = 0);
    ~UdpSender();

    void ReceiverFuntion();

    btn_deal_Set SaveDataFuntion(QString str);

    QString  CommandFuntion(QString str);

private slots:
    void on_startButton_clicked();

    void messageReceived();

    void SetUpFuntion();

    void StateUpdate(QString);

    void on_UpgradeGateway_clicked();

    void on_DebugGateway_clicked();

private:
    Ui::UdpSender *ui;

     void closeEvent(QCloseEvent *event);

     void sleep(unsigned int msec);
private:
    QUdpSocket* udpSocked;//UDP套接字

    quint16 Receiverport;

    QUdpSocket *ReceiverUdpSocket;
};

extern QString SetParameterData;
extern QString UpgrateGatewayData;
extern QString DebugGatewayIp;
extern QString DebugGatewayPort;

extern  QString SetParameterData1[4];

extern QLinkedList<btn_deal_Set> list;

#endif // UDPSENDER_H
