#ifndef DIALOGDELETE_H
#define DIALOGDELETE_H

#include <QDialog>
#include <QTime>
#include <QtDebug>
#include <QTimer>
#include<QtNetwork>
#include <QAction>
#include <QtNetwork/QTcpSocket>
namespace Ui {
class dialogdelete;
}

class dialogdelete : public QDialog
{
    Q_OBJECT

public:
    explicit dialogdelete(QWidget *parent = 0);
    ~dialogdelete();

     QTimer *receive_timer = new QTimer(this);

     void sleep(unsigned int msec);

     void DealDataF0(QString str);

     QString Validation_And(QString str);

      void closeEvent(QCloseEvent *event);

private slots:

    void on_btn_query_clicked();

    void on_btn_delete_button_clicked();

    void UPdatafuntion();

    void on_CheakAllFuntion_clicked();

signals:

    void SendPack();

    void SendPack_1(QString);

private:
    Ui::dialogdelete *ui;
    QTcpSocket *tcpSocket;
};

#endif // DIALOGDELETE_H
