#ifndef CHANGEIP_H
#define CHANGEIP_H

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
class ChangeIp;
}

class ChangeIp : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeIp(QWidget *parent = 0);
    ~ChangeIp();

    QByteArray QString2Hex(const QString str);

      char ConvertHexChar(const char ch);

private slots:
    void on_ModificationParameter_clicked();

     void revData(); //接收来自服务端的数据



      void on_connect_clicked();

      void on_disconnect_clicked();

      void on_GainFuntion_clicked();

      void on_Strength4G_clicked();

      void on_Memory_clicked();

      void on_Set4G_clicked();

      void on_ONlin_clicked();

      void on_GainVPNIp_clicked();

      void on_CllearFuntion_clicked();

      void on_VersionFuntion_clicked();

      void on_rebootFuntion_clicked();

      void on_OldZigbee_clicked();

      void on_NewZigbee_clicked();

private:
    Ui::ChangeIp *ui;

private:

     QTcpSocket *tcpSocket;

     void closeEvent(QCloseEvent *event);

};

#endif // CHANGEIP_H
