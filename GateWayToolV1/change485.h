#ifndef CHANGE485_H
#define CHANGE485_H

#include <QDialog>
#include<QtNetwork>
#include <QAction>
#include <QtNetwork/QTcpSocket>
#include<QMenu>
#include<QMenuBar>
#include <QFileDialog>
#include <QTime>
#include <QStackedLayout>
#include <QTextCodec>

namespace Ui {
class Change485;
}

class Change485 : public QDialog
{
    Q_OBJECT

public:
    explicit Change485(QWidget *parent = 0);
    ~Change485();

    QByteArray QString2Hex(const QString str);

    char ConvertHexChar(const char ch);

    void TcpDataDeal();

private slots:
    void on_ConnectFuntion_clicked();

    void on_DisConnectFuntion_clicked();

     void revData(); //接收来自服务端的数据

     void TcpReceiveFuntion();

     void on_SendFuntion_clicked();

     void on_SetBaud_clicked();

     void on_GainBuad_clicked();

     void on_CllearFuntion_clicked();

private:
    Ui::Change485 *ui;

    QTimer *TcpReceive_timer = new QTimer();

private:

     QTcpSocket *tcpSocket;

     void closeEvent(QCloseEvent *event);

};
typedef struct deal{
    bool TcpRecflag =true;
    int Recnum;
    QString TcpAllhexstring[2047];

    bool StartData = true;
}btn_deal;



#endif // CHANGE485_H
