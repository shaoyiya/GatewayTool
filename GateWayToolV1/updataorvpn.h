#ifndef UPDATAORVPN_H
#define UPDATAORVPN_H

#include <QDialog>
#include <QtNetwork>
#include <QFileDialog>
#include <QTimer>
namespace Ui {
class UPdataOrVPN;
}

class UPdataOrVPN : public QDialog
{
    Q_OBJECT

public:
    explicit UPdataOrVPN(QWidget *parent = 0);
    ~UPdataOrVPN();

    void sleep(unsigned int msec);

    QTimer *TcpReceive_timerRoot = new QTimer();

    void GainDataFuntion(QString str11, QString str22);
signals:



private slots:


    void on_openButton_clicked();

    void on_sendButton_clicked();

    void startTransfer();//发送文件大小等信息

    void updateClientProgress(qint64);//发送数据，更新进度条

    void displayError(QAbstractSocket::SocketError);//显示错误

    void on_OpenVpnFile_clicked();

    void TcpReceiveFuntionRoot();

    void on_ClearVpn_clicked();
private:
     void closeEvent(QCloseEvent *event);
private:
    Ui::UPdataOrVPN *ui;

    QTcpSocket *tcpClient;

    QFile *localFile;//要发送的文件

    qint64 totalBytes;//数据总大小

    qint64 bytesWritten;//已经发送数据大小

    qint64 bytesToWrite;//剩余数据大小

    qint64 loadSize;//每次发送数据大小

    QString fileName;//保存文件路径

    QByteArray outBlock;//数据缓冲区，即存放每次要发送的数据
};

#endif // UPDATAORVPN_H
