#include "UdpSender.h"
#include "ui_UdpSender.h"
#include "setparameter.h"
#include <QHostAddress>
#include <QNetworkInterface>
QString SetParameterData="";
QString UpgrateGatewayData="";
 QString DebugGatewayIp ="";
 QString DebugGatewayPort="";
 QString SetParameterData1[4]={"","",""};
 QLinkedList<btn_deal_Set> list ;

UdpSender::UdpSender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UdpSender)
{
    ui->setupUi(this);
    ReceiverUdpSocket  = new QUdpSocket(this);
    udpSocked = new QUdpSocket(this);

    ui->tableWidget->setColumnCount(4);
    //设置表头内容
    QStringList header;
    header<<tr("MAC")<<tr("IP地址")<<tr("子网掩码")<<tr("网关");
    ui->tableWidget->setHorizontalHeaderLabels(header);
     ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式

   connect(ui->tableWidget, SIGNAL(doubleClicked(QModelIndex)), this,SLOT(SetUpFuntion()));//< 双击定位
   this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
}

UdpSender::~UdpSender()
{
    delete ui;
}

//功能:搜索在线网关设备函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::on_startButton_clicked()
{

     ui->tableWidget->clear();

     ui->tableWidget->setRowCount(0);

     ui->tableWidget->setColumnCount(4);

     list.clear();
       //设置表头内容
     QStringList header;
     header<<tr("MAC")<<tr("IP地址")<<tr("子网掩码")<<tr("网关");
     ui->tableWidget->setHorizontalHeaderLabels(header);


     ReceiverUdpSocket->close();
     qDebug("%s",__func__);
     //获取端口号
     quint16 port =17777;
     //获取广播消息字符串
     QString msg ="AABBCCDDFF01";
     qDebug() << msg;
#if 1
     QList<QHostAddress> list = QNetworkInterface::allAddresses();
     foreach (QHostAddress address, list) {
         if (!address.isNull())
         {

             if(address.toString().length()<15&&address.toString()!="127.0.0.1"&&address.toString().length()>4)
             {


                     QHostAddress add=address;
                     udpSocked->bind(add,port);
                     qDebug()<<"lll::---------------------------------------"+add.toString();

                     udpSocked->writeDatagram(msg.toLocal8Bit(),
                                 QHostAddress::Broadcast,port);
                     udpSocked->close();

                     ReceiverFuntion();
                    sleep(200);
                     udpSocked->close();

             }

         }
     }
#endif
   // QHostAddress yy= QHostAddress("211.66.3.23");
    //udpSocked->bind(yy,port);
   // qDebug()<<"||||:::"+yy.toString();
    // udpSocked->writeDatagram(msg.toLocal8Bit(),
       //          QHostAddress::Broadcast,port);
    // udpSocked->writeDatagram(msg.toLocal8Bit(),
         //        QHostAddress::AnyIPv4,port);
  //   udpSocked->close();
   //  ReceiverFuntion();


}

void UdpSender::sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);

    while(QTime::currentTime() < reachTime)
        QCoreApplication::processEvents(\
                    QEventLoop::AllEvents, 100);
}
//功能:设置PC接收端口号函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::ReceiverFuntion()
{



    Receiverport = 16666;
    QString y="211.66.3.198";

    ReceiverUdpSocket->bind(QHostAddress::AnyIPv4,Receiverport);

    //当套接口有数据到来时将发送readyRead信号
    connect(ReceiverUdpSocket,SIGNAL(readyRead()),
             this,SLOT(messageReceived()));
}


//功能:PC接收到数据进行处理函数
//参数：没有参数
//返回值：没有返回值
void  UdpSender::messageReceived()
{

    if( ReceiverUdpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        //获取数据包大小
        datagram.resize(
                ReceiverUdpSocket->pendingDatagramSize());
          QHostAddress a;
        //读取数据
        ReceiverUdpSocket->readDatagram(
                 datagram.data(),datagram.size(),&a);
        qDebug()<<"000::"+a.toString();

        //显示消息到UI界面
        QString msg = datagram.data();
        qDebug()<<"msg::"+msg;


        if(CommandFuntion(msg) == "FF02")
        {
            qDebug()<<"sssssssssyyyyyyyyyyyyyy77777777777777";

             bool open= true;

            foreach (btn_deal_Set address, list) {
                    if(address.MAC==msg.mid(12,17))
                    {
                        qDebug()<<"LLLLLLLLLLLLLLLLLLLLL";
                        open=false;
                    }
              }
            if(open)
            {
                   list<<SaveDataFuntion(msg);
                   qDebug()<<"11111111111111---------------------------";
                 int row_count =  ui->tableWidget->rowCount(); //获取表单行数
                 qDebug("row_count::%d\n",row_count);
                 ui->tableWidget->insertRow(row_count); //插入新行

                 QTableWidgetItem *item = new QTableWidgetItem();
                 item->setText(msg.mid(12,17));
                 ui->tableWidget->setItem(row_count, 0, item);

                 int  i1 = msg.indexOf("//");
                 QTableWidgetItem *item1 = new QTableWidgetItem();
                 item1->setText(msg.mid(29,i1-29));
                 ui->tableWidget->setItem(row_count, 1, item1);

                 int  i2 = msg.indexOf("\\");
                 QTableWidgetItem *item2 = new QTableWidgetItem();
                 item2->setText(msg.mid(i1+2,i2-i1-2));
                 ui->tableWidget->setItem(row_count, 2, item2);

                 int  i3 = msg.indexOf("name:");
                 QTableWidgetItem *item3 = new QTableWidgetItem();
                 item3->setText(msg.mid(i2+1,i3-i2-1));
                 ui->tableWidget->setItem(row_count, 3, item3);

                 ui->tableWidget->resizeColumnsToContents(); //根据内容调整列宽
             }
        }


    }
}


//功能:双击进入设备设置通信参数函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::SetUpFuntion()
{
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可修改
    QList<QTableWidgetItem*> items=ui->tableWidget->selectedItems();

    int count=items.count();
    qDebug("%d\n",count);
    QString name ="";

    for(int  i=0;i<count;i++)
    {
         QTableWidgetItem *item=items.at(i);
         SetParameterData1[i]=item->text();
         name +=item->text();//获取内容
    }
    qDebug()<<"name:"+name;
    SetParameterData = name;

    SetParameter *ad = new  SetParameter(this);
    connect(ad, SIGNAL(SendPack(QString)), this, SLOT(StateUpdate(QString)));
    ad->exec();
}


//功能:设备设置参数进行发送函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::StateUpdate(QString str)
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
      //设置表头内容
    QStringList header;
    header<<tr("MAC")<<tr("IP地址")<<tr("子网掩码")<<tr("网关");
    ui->tableWidget->setHorizontalHeaderLabels(header);


    ReceiverUdpSocket->close();
    qDebug("%s",__func__);
    //获取端口号
    quint16 port =17777;
    //获取广播消息字符串

    qDebug() << str;

    udpSocked->writeDatagram(str.toLocal8Bit(),
                QHostAddress::Broadcast,port);


    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list) {
        if (!address.isNull())
        {

            if(address.toString().length()<15&&address.toString()!="127.0.0.1"&&address.toString().length()>4)
            {
                udpSocked->close();

                    QHostAddress add=address;
                    udpSocked->bind(add,port);
                    qDebug()<<"lll::"+add.toString();

                    udpSocked->writeDatagram(str.toLocal8Bit(),
                                QHostAddress::Broadcast,port);
                    //udpSocked->close();

                   // ReceiverFuntion();
                   sleep(500);
                   // udpSocked->close();

            }

        }
    }

    //ReceiverFuntion();
}


//功能:进入网关升级函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::on_UpgradeGateway_clicked()
{
     QList<QTableWidgetItem*> items=ui->tableWidget->selectedItems();
     int count=items.count();
     qDebug("%d\n",count);
     QString name ="";

     for(int  i=1;i<count;i++)
     {
          QTableWidgetItem *item=items.at(i);
          name +=item->text();//获取内容
          if(i ==1)
               UpgrateGatewayData =name;
     }

     if(count>2)
     {
      //  UpgradeGateWay *ad = new UpgradeGateWay(this);
      //  ad->exec();
     }
     else
     {
         QMessageBox::information(NULL, "选择错误", "没有选择到设备IP，请重新选择!");
     }
}


//功能:进入网关调试函数
//参数：没有参数
//返回值：没有返回值
void UdpSender::on_DebugGateway_clicked()
{
    ReceiverUdpSocket->close();
    QList<QTableWidgetItem*> items=ui->tableWidget->selectedItems();
    int count=items.count();
    qDebug("%d\n",count);
    QString name ="";

    for(int  i=1;i<count;i++)
    {
         QTableWidgetItem *item=items.at(i);
         name +=item->text();//获取内容
         if(i ==1)
              DebugGatewayIp =name;
    }

  if(count>2)
   {
       //DebugGateWay *ad = new  DebugGateWay(this);
      // ad->exec();
  }
   else
  {
        QMessageBox::information(NULL, "选择错误", "没有选择到设备IP，请重新选择!");
   }
   ReceiverFuntion();
}


btn_deal_Set UdpSender::SaveDataFuntion(QString str)
{
    btn_deal_Set data={"","","","","","","","",""};

    int OTHERNUM = str.indexOf("name:");
  //  int ENDNUM = str.indexOf("END~");

     data.TYPE = str.mid(OTHERNUM+5);

     data.MAC =str.mid(12,17);
     return data;
}
QString  UdpSender::CommandFuntion(QString str)
{
   if(str.mid(0,8).toUpper() == "AABBCCDD")
   {
       return str.mid(8,4).toUpper();
   }
   else
   {
       str ="";
       return str;
   }
}
void UdpSender::closeEvent(QCloseEvent *event)
{
    ui->tableWidget->clear();

    ui->tableWidget->setRowCount(0);

    ui->tableWidget->setColumnCount(6);

    list.clear();
      //设置表头内容
    QStringList header;
    header<<tr("MAC")<<tr("IP地址")<<tr("子网掩码")<<tr("网关");
    ui->tableWidget->setHorizontalHeaderLabels(header);


    ReceiverUdpSocket->close();
    udpSocked->close();
}
