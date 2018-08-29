#include "updataorvpn.h"
#include "ui_updataorvpn.h"
 QStringList files;
 int filesNum=0;
 bool openSendi= false;
UPdataOrVPN::UPdataOrVPN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UPdataOrVPN)
{
    ui->setupUi(this);
   // ui->HostLineEdit->setText(UpgrateGatewayData);
  //  ui->HostLineEdit->setEnabled(false);
    loadSize = 4*1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesToWrite = 0;
    tcpClient = new QTcpSocket(this);

    //当服务器连接成功时，发出connected()信号，我们开始传送文件
    connect(tcpClient,SIGNAL(connected()),this,SLOT(startTransfer()));
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);

    //当有数据发送成功时，我们更新进度条
    connect(tcpClient,SIGNAL(bytesWritten(qint64)),this,SLOT(updateClientProgress(qint64)));
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
    //开始使发送按钮不可用
    ui->sendButton->setEnabled(false);
      connect(TcpReceive_timerRoot,SIGNAL(timeout()),this,SLOT(TcpReceiveFuntionRoot()));
      TcpReceive_timerRoot->start(1000);
      QFile file("./IP.txt");
      if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
          qDebug()<<"Can't open the file!"<<endl;
      }
      while(!file.atEnd()) {
          QByteArray line = file.readLine();
          QString str(line);
          ui->HostLineEdit->setText(str);
      }
}

UPdataOrVPN::~UPdataOrVPN()
{
    delete ui;
}

void UPdataOrVPN::on_openButton_clicked()
{
   fileName = QFileDialog::getOpenFileName(this);



    if(!fileName.isEmpty())
    {
        ui->sendButton->setEnabled(true);
       // ui->clientStatusLabel->setText(tr("打开文件%1成功").arg(fileName));
        ui->lineEdit->setText(fileName);
    }
}

void UPdataOrVPN::on_sendButton_clicked()
{


    ui->sendButton->setEnabled(false);
    bytesWritten = 0;//初始化已发送字节为0
    ui->clientStatusLabel->setText(tr("连接中.."));
    tcpClient->connectToHost(ui->HostLineEdit->text(),6666);//连接
}
//功能:实现文件大小等信息的发送
//参数：没有参数
//返回值：没有返回值
void UPdataOrVPN::startTransfer()
{
    localFile = new QFile(fileName);
    if(!localFile->open(QFile::ReadOnly))
    {
        qDebug() << "open file error";
        return;
    }

    totalBytes = localFile->size();//文件总大小

    QDataStream sendOut(&outBlock,QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_5_0);
    QString currentFileName = fileName.right(fileName.size()-fileName.lastIndexOf('/')-1);
    qDebug() <<" currentFileName:::"+ currentFileName;
    //依次写入总大小信息空间，文件名信息大小空间，文件名
    sendOut << qint64(0) << qint64(0) << currentFileName;

    //这里总大小是文件名大小等信息和实际文件大小的总和
    totalBytes += outBlock.size();

    //返回outBlock开始，用实际信息代替两个qint64空间
    sendOut.device()->seek(0);
    sendOut << totalBytes << qint64(outBlock.size()-sizeof(qint64)*2);

    //发送数据，并计算发送完数据后剩余数据的大小
    bytesToWrite = totalBytes - tcpClient->write(outBlock);

    ui->clientStatusLabel->setText(tr("已连接"));
    outBlock.resize(0);
}

//功能:更新进度条，实现文件的传送
//参数：没有参数
//返回值：没有返回值
void UPdataOrVPN::updateClientProgress(qint64 numBytes)
{
    bytesWritten += (int)numBytes;//已经发送数据的大小

    if(bytesToWrite > 0)//如果已经发送了数据
    {
        //每次发送loadSize大小的数据，这里设置为4KB，如果剩余的数据不足4KB，就发送剩余数据的大小
        outBlock = localFile->read(qMin(bytesToWrite,loadSize));
        //发送完一次数据后剩余数据的大小
        bytesToWrite -= (int)tcpClient->write(outBlock);
        outBlock.resize(0);//清空发送缓冲区
    }
    else
    {
        localFile->close();//如果没有发送任何数据，则关闭文件
    }

    //更新进度条
    ui->clientProgressBar->setMaximum(totalBytes);
    ui->clientProgressBar->setValue(bytesWritten);

    if(bytesWritten == totalBytes)//发送完毕
    {
        qDebug()<<"-----------------------------------------------------------------------";
        filesNum++;
        if(fileName=="D:/qt_project/Clear")
             ui->clientStatusLabel->setText(" 清除VPN成功");
        else
            ui->clientStatusLabel->setText(tr("发送文件%1成功").arg(fileName));


        localFile->close();
        tcpClient->close();

        int i=0;
        fileName="";
        foreach (const QString &str, files)
        {
            i++;
            if(i==filesNum)
            {
                qDebug()<<"fileseNUm:::"+str;
                qDebug("fileseNum ii%d\n",i);
                fileName= str;
                openSendi= true;

            }
            if(files.count()==i&&i!=1)
            {
                ui->openButton->setEnabled(true);
                 ui->sendButton->setEnabled(false);
                 ui->OpenVpnFile->setEnabled(true);
                // if(fileName.right(9)=="corp.ovpn")
                // {
                 //   ui->clientStatusLabel->setText("导入VPN证书成功");
                // }
                // else
                  //   ui->clientStatusLabel->setText("导入VPN证书成失败，请重新导入");
            }
        }


    }
}

//功能:显示错误
//参数：没有参数
//返回值：没有返回值
void UPdataOrVPN::displayError(QAbstractSocket::SocketError)
{
    qDebug() << tcpClient->errorString();
    tcpClient->close();
    ui->clientProgressBar->reset();
    ui->clientStatusLabel->setText(tr("客户端就绪"));
    ui->sendButton->setEnabled(true);
}


void UPdataOrVPN::on_OpenVpnFile_clicked()
{
    tcpClient->close();
    filesNum=0;
    files.clear();
   //  ui->sendButton->setEnabled(false);
    ui->openButton->setEnabled(false);
     ui->sendButton->setEnabled(true);
    files = QFileDialog::getOpenFileNames(
                            this,
                            "Select one or more files to open",
                            ".",
                            "Images (*.*)");
    QString load = "";
    int i=0;
    QString name ="";
    foreach (const QString &str, files)
    {
        qDebug()<<"namefiles:::"+str;

        load += str+" ";
        i++;
        if(i==1)
        {
            QString currentFileName = str.right(str.size()-str.lastIndexOf('/')-1);
            if(currentFileName.right(3)=="key"||currentFileName.right(3)=="crt")
            {
                fileName= str;
                name = currentFileName.mid(0,currentFileName.length()-3);
            }

        }
    }
    if(name.length() !=0)
    {
        GainDataFuntion(name+"key", name+"crt");
        files<<"./corp.ovpn";
    }
    filesNum++;
    ui->lineEditVpn->setText(load);


}
//功能:时间间隔函数
//参数：设置时间参数
//返回值：没有
void UPdataOrVPN::sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);

    while(QTime::currentTime() < reachTime)
        QCoreApplication::processEvents(\
                    QEventLoop::AllEvents, 100);
}

 void  UPdataOrVPN::TcpReceiveFuntionRoot()
 {
    if(openSendi)
    {
        openSendi= false;
         ui->sendButton->setEnabled(true);
         on_sendButton_clicked();
    }
 }
void UPdataOrVPN::GainDataFuntion(QString str11, QString str22)
 {
qDebug()<<"78";
     QFile file("./corp.ovpn");
     //已读写方式打开文件，
     //如果文件不存在会自动创建文件
     if(!file.open(QIODevice::ReadWrite))
     {
          qDebug()<<"打开失败";
      }
     else
     {
         qDebug()<<"789";
          while(!file.atEnd())
          {
                QByteArray line = file.readAll();
                QString strr1(line);
                 file.close();
                file.open(QIODevice::ReadWrite|QIODevice::Truncate);
                //file.close();
                int ii =line.indexOf("# file can be used for all clients.");
                int iii =line.indexOf("# Verify server certificate by checking that the");

                QString str = " /home/pi/VPN/ca.crt\r\ncert /home/pi/VPN/"+str22+"\r\nkey /home/pi/VPN/"+str11;
                qDebug()<<strr1.mid(ii+34+5,iii-ii-34-8);

                strr1.replace(strr1.mid(ii+34+5,iii-ii-34-8),str);

                QTextStream out(&file);

                       out << strr1;
                       //关闭文件
                       file.close();



          }
     }

 }

void UPdataOrVPN::on_ClearVpn_clicked()
{
    fileName="./Clear";
    bytesWritten = 0;//初始化已发送字节为0
    ui->clientStatusLabel->setText(tr("连接中.."));
    tcpClient->connectToHost(ui->HostLineEdit->text(),6666);//连接
}
 void UPdataOrVPN::closeEvent(QCloseEvent *event)
{
     tcpClient->close();
     QFile data("./IP.txt");
     if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
         QTextStream out(&data);
        QString strrr = ui->HostLineEdit->text();
        out << strrr;
     }
}
