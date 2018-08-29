#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UdpSender.h"
#include "change485.h"
#include "Zigbee/DebugGateWay.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_ChangeIpAddress_clicked()
{
   ChangeIp *ad = new  ChangeIp(this);
    ad->exec();
}

void MainWindow::on_updataOrVpn_clicked()
{
    UPdataOrVPN *ad = new  UPdataOrVPN(this);
    ad->exec();
}

void MainWindow::on_ScanIpFuntion_clicked()
{
    UdpSender *ad = new UdpSender(this);
    ad->exec();
}

void MainWindow::on_pushButton_3_clicked()
{
   // QProcess::execute(".\tcp-client.exe");
    QProcess pro;
    QString strPath = "./tcp-client.exe";
    pro.startDetached(strPath);
}

void MainWindow::on_Chage485Funtion_clicked()
{
    Change485 *ad = new Change485(this);
    ad->exec();
}

void MainWindow::on_NewZigbeeFuntion_clicked()
{
    DebugGateWay *ad = new DebugGateWay(this);
    ad->exec();
}
