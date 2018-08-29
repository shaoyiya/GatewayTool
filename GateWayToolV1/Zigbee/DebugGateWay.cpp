#include "Zigbee/DebugGateWay.h"
#include "ui_DebugGateWay.h"
#include "UdpSender.h"
#include "RemoteUpgrade.h"
#include "AlarmClock.h"
#include "SetType.h"
QString allhexstring[4094];
QStringList DFStr;
int recnum = 0;
bool recflag = true;
QString flag = "";
bool TcpState =false;

btn_deal_xmodem XmodemParameter;
btn_deal_xmodem1 XmodemParameter1={"",0,1,"",0,0,0};

QString stbuffer[200];
QString E0stbuffer[200];
bool deleteflag = false;
bool deletestart=false;

DebugGateWay::DebugGateWay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebugGateWay)
{
    ui->setupUi(this);
    ui->ip_lineEdit->setText(DebugGatewayIp);
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
    init();
   // ui->ip_lineEdit->setEnabled(false);
  //  ui->port_lineEdit->setEnabled(false);


}

DebugGateWay::~DebugGateWay()
{
    delete ui;
}




//功能:进行TCP连接函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::on_connect_clicked()
{
    this->tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    tcpSocket->connectToHost(ui->ip_lineEdit->text(),ui->port_lineEdit->text().toInt());//主机IP，端口


    //这里我是采用程序启动就自访问服务端（也可根据实际情况采用手动连接手动输入服务端ip的方式。）
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(revData()));

    //readyRead()表示服务端发送数据过来即发动信号，接着revData()进行处理。
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(displayError(QAbstractSocket::SocketError)));

    if(tcpSocket->waitForConnected(1000))//最大等待msec毫秒或者等待一个新连接可用。如果一个连接可用，返回真，否则返回假。如果msec不等于0，那么超时将会被调用
    {
        TcpState = true;
        ui->connect->setEnabled(false);
        ui->disconnect->setEnabled(true);

        ui->query_equipment->setEnabled(true);
        ui->gateway_mode->setEnabled(true);
        ui->equipment_restart->setEnabled(true);
        ui->mcu_mode->setEnabled(true);
        ui->equipment_initialize->setEnabled(true);
        ui->RemoteUpgrate->setEnabled(true);
        ui->start_echo->setEnabled(true);

        ui->off_echo->setEnabled(true);
        ui->mode_quit->setEnabled(true);
        ui->mode_initialize->setEnabled(true);
        ui->mode_restart->setEnabled(true);
        ui->temperature_IntervalI->setEnabled(true);
        ui->database_1_funtion->setEnabled(true);
        ui->query_all_EUI->setEnabled(true);
        ui->Baud_Rate->setEnabled(true);

        ui->query_all_online->setEnabled(true);
        ui->Add_Eui_funtion->setEnabled(true);
        ui->btn_delete->setEnabled(true);
        ui->single_query->setEnabled(true);

        ui->AllowNetwork->setEnabled(true);
        ui->StopNetwork->setEnabled(true);
        ui->SetRoute->setEnabled(true);
        ui->SendDataToTermial->setEnabled(true);
        ui->point_funtion->setEnabled(true);
        ui->QueryNetwork->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->StartmodulFuntion->setEnabled(true);
        ui->StopmoFuntion->setEnabled(true);
        ui->VersionFuntion->setEnabled(true);
        ui->CollectTime->setEnabled(true);

        ui->SetSleepTime->setEnabled(true);
        ui->Setbotel->setEnabled(true);
        ui->QueryDb->setEnabled(true);
        ui->SetType->setEnabled(true);
        ui->GainTimeFFuntion->setEnabled(true);
        ui->GainFuntion->setEnabled(true);
        ui->AlarmClock->setEnabled(true);


         ui->xiaoxilan_Label->setText("连接成功!");
         //on_AllowNetwork_clicked();
    }
    else
    {
        TcpState = false;
        ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        ui->plainTextEdit->insertPlainText("连接失败");
        ui->plainTextEdit->insertPlainText("\n");
        ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        ui->xiaoxilan_Label->setText("连接失败,未能连接远程服务器");
    }

}


//功能:断开TCP连接函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::on_disconnect_clicked()
{
    TcpState = false;
    tcpSocket->close();
    ui->connect->setEnabled(true);
    ui->disconnect->setEnabled(false);

    ui->query_equipment->setEnabled(false);
    ui->gateway_mode->setEnabled(false);
    ui->equipment_restart->setEnabled(false);
    ui->mcu_mode->setEnabled(false);
    ui->equipment_initialize->setEnabled(false);
    ui->RemoteUpgrate->setEnabled(false);
    ui->start_echo->setEnabled(false);

    ui->off_echo->setEnabled(false);
    ui->mode_quit->setEnabled(false);
    ui->mode_initialize->setEnabled(false);
    ui->mode_restart->setEnabled(false);
    ui->temperature_IntervalI->setEnabled(false);
    ui->database_1_funtion->setEnabled(false);
    ui->query_all_EUI->setEnabled(false);
    ui->Baud_Rate->setEnabled(false);

    ui->query_all_online->setEnabled(false);
    ui->Add_Eui_funtion->setEnabled(false);
    ui->btn_delete->setEnabled(false);
    ui->single_query->setEnabled(false);

    ui->AllowNetwork->setEnabled(false);
    ui->StopNetwork->setEnabled(false);
    ui->SetRoute->setEnabled(false);
    ui->SendDataToTermial->setEnabled(false);
    ui->point_funtion->setEnabled(false);
    ui->QueryNetwork->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->StartmodulFuntion->setEnabled(false);
    ui->StopmoFuntion->setEnabled(false);
    ui->VersionFuntion->setEnabled(false);
    ui->CollectTime->setEnabled(false);

    ui->SetSleepTime->setEnabled(false);
    ui->Setbotel->setEnabled(false);
    ui->QueryDb->setEnabled(false);
    ui->SetType->setEnabled(false);
    ui->GainTimeFFuntion->setEnabled(false);
    ui->GainFuntion->setEnabled(false);
    ui->AlarmClock->setEnabled(false);

    ui->xiaoxilan_Label->setText("连接已断开");
}

//功能:TCP连接错误函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::displayError(QAbstractSocket::SocketError)
{
   qDebug()<<tcpSocket->errorString();
   ui->xiaoxilan_Label->setText(tcpSocket->errorString());
   tcpSocket->close();
}


//功能:TCP接收数据函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::revData()
{
    if(recflag == true )//允许接收
    {
       QByteArray  recc = tcpSocket->readAll();//读TCP包
       allhexstring[recnum] = recc.toHex();//rec数组中内容接收到allhexstring全局数组中
       qDebug()<<"allhexstring[recnum]::"+allhexstring[recnum];
       recnum++;
       if(recnum>2047)//越界
       {
            receive_timer->start(0);
       }
        receive_timer->start(50);//开接收超时函数
    }

}


//功能:数据接收到数据处理中间开关
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::restrtimer()
{
    receive_timer->stop();//100ms接收超时定时器关闭，接收数据部分完成。
    recflag = false; //关接收
    dealdata(); //数据处理函数
    recflag = true ; //开接收
}

//功能:相关链接函数的聚合
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::init()
{
    connect(receive_timer,SIGNAL(timeout()),this,SLOT(restrtimer()));
     connect(point_timer,SIGNAL(timeout()),this,SLOT(PointimerFuntion()));
      connect(DF_timer,SIGNAL(timeout()),this,SLOT(DF_FUntion()));
    ui->comboBox_4->addItem("波特率9600");
    ui->comboBox_4->addItem("波特率19200");
    ui->comboBox_4->addItem("波特率38400");
    ui->comboBox_4->addItem("波特率57600");
    ui->comboBox_4->addItem("波特率115200");

    ui->comboBox_5->addItem("奇校验");
    ui->comboBox_5->addItem("偶校验");
     ui->comboBox_5->addItem("无校验");

     ui->QueryType->addItem("液晶温控器");
      ui->QueryType->addItem("分体空调");
      ui->comboBox_Time->addItem("1");
      ui->comboBox_Time->addItem("2");
      ui->comboBox_Time->addItem("3");
      ui->comboBox_Time->addItem("4");
      ui->comboBox_Time->addItem("5");

      ui->comboBox_botel->addItem("波特率9600");
      ui->comboBox_botel->addItem("波特率19200");
      ui->comboBox_botel->addItem("波特率38400");
      ui->comboBox_botel->addItem("波特率57600");
      ui->comboBox_botel->addItem("波特率115200");

      ui->comboBox_V->addItem("奇校验");
      ui->comboBox_V->addItem("偶校验");
       ui->comboBox_V->addItem("无校验");

       ui->comboBox_6->addItem("s");
       ui->comboBox_6->addItem("min");

       QFile file("./IP.txt");
       if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
           qDebug()<<"Can't open the file!"<<endl;
       }
       while(!file.atEnd()) {
           QByteArray line = file.readLine();
           QString str(line);
           ui->ip_lineEdit->setText(str);
       }
}


//功能:处理数据函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::dealdata()
{
    QString hexstring="";
    for(int i=0;i<recnum;i++)
    {
        hexstring += allhexstring[i];//从allhexstring全局数组中取出报文
    }

    if(hexstring.length()>5000)
        hexstring.clear();
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式

    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- " +hexstring.toUpper()+"\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    if(hexstring.toUpper()=="EEEEAABBCCDDEE")
    {
         ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 开启全透模式成功\n");
          ui->plainTextEdit->insertPlainText("\n");
    }
    else if(hexstring.toUpper()=="EEEEAABBCCDDEEEE")
    {
        ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 关闭全透模式成功\n");
        ui->plainTextEdit->insertPlainText("\n");
    }
    qDebug("hexstring.leng:::%d\n",hexstring.length()/52);
    for(int i=0;i<hexstring.length()/52;i++)
    {
        QString strFD = hexstring.mid(i*0,52);
        qDebug()<<"---------------------strFD"+strFD;
        if(strFD.mid(8,2).toUpper() == "DF" )
        {
            DF_timer->stop();
            DF_timer->start(15000);
            qDebug()<<"DF::"+strFD.toUpper().mid(10,40);
            DFStr<< strFD.toUpper().mid(10,40);
        }
    }

    if(DealDataVerify(hexstring))
    {
        qDebug()<<"-----------------------------------";
        if(hexstring.toUpper().mid(8,2) == "F0" )
        {
            if( !deleteflag)
            {
                DealDataF0(hexstring);

            }
            else
            {
                 ui->plainTextEdit->insertPlainText("\n");                  
                 DealDataF2(hexstring);
            }

             hexstring = "";

        }

        if(hexstring.toUpper().mid(8,2) == "F1" )
        {
              DealDataF1(hexstring);
              hexstring="";
        }

        if(hexstring.toUpper().mid(8,2) == "F3" )
        {

              DealDataF3(hexstring);
              hexstring="";
        }

        if(hexstring.toUpper().mid(8,2) == "E0" )
        {
              DealDataE0(hexstring);
              hexstring="";
        }

        if(hexstring.toUpper().mid(8,2) == "E5" )
        {
              DealDataE5(hexstring);
              hexstring="";
        }
         if(hexstring.toUpper().mid(8,2) == "D2" )
         {
            AlarmData=   hexstring.toUpper().mid(10,10);
         }
         if(hexstring.toUpper().mid(8,2) == "D5" )
         {
             qDebug()<<hexstring;
             QueryData = hexstring.mid(10,hexstring.length()-12);
              ui->plainTextEdit->insertPlainText( QueryData+"45\n");
         }

        if(hexstring.toUpper().mid(8,2) == "B0"||hexstring.toUpper().mid(8,2) == "B2" )
        {
            ui->plainTextEdit->insertPlainText("\n");
        }

        if(hexstring.toUpper().mid(8,2) == "FF"&&XmodemParameter.Open )
        {

            //qDebug()<< hexstring.toUpper().mid(10);
            //qDebug()<<hexstring.toUpper().mid(26,2);
            sleep(1000);
           if(XmodemParameter.Open)
               RemoteFuntion(hexstring.toUpper().mid(26,2));
        }
        if(hexstring.toUpper().mid(8,2) == "D7" )
         {
            QString str =  hexstring.toUpper().mid(10,4);
            if(str=="0000")
            {
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText("采集时间为：Stop\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
            else
            {
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText("采集时间为："+str+"ms\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }


         }
        if(hexstring.toUpper().mid(10,2) == "A1" )
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 校验成功\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
        if(hexstring.toUpper().mid(10,2) == "A2" )
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 校验失败\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
        if(hexstring.toUpper().mid(10,2) == "A3" )
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 长度不符合\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
        if(hexstring.toUpper().mid(10,2) == "A4" )
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 串口繁忙\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
        if(hexstring.toUpper().mid(10,2) == "A5" )
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 状态错误\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
        if(hexstring.toUpper().mid(8,2) == "DB" )
        {
            QString NumStr= hexstring.toUpper().mid(10,2);
            qDebug()<<"----------"+NumStr;
            bool ok;
            int _num = NumStr.toInt(&ok,16);
            qDebug("_num::%d\n",_num);
            if(_num>=1 &&_num<=59)
            {
                NumStr= QString::number(_num,10);
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 采集时间:"+NumStr+"s\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
            else if(_num>=60 &&_num<=119)
            {
                NumStr= QString::number(_num-59,10);
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 采集时间:"+NumStr+"min\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
        }
        if(hexstring.toUpper().mid(8,2) == "F8" )
        {
            if(hexstring.toUpper().mid(10,2)=="CC")
            {
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 进入透传模式成功\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
            if(hexstring.toUpper().mid(10,2)=="DD")
            {
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 进入网关模式成功\n");
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
        }
#if 0
        if(hexstring.toUpper().mid(8,2) == "DF" )
        {
            DF_timer->stop();
            DF_timer->start(15000);
            qDebug()<<"DF::"+hexstring.toUpper().mid(10,40);
            DFStr<< hexstring.toUpper().mid(10,40);
        }
#endif
        if(hexstring.toUpper().mid(8,2) == "C1")
        {
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->plainTextEdit->insertPlainText(timestr + " (收)<<--- 版本号:"+hexstring.toUpper().mid(10,2)+"."+hexstring.toUpper().mid(12,2)+"."+hexstring.toUpper().mid(14,2)+"\n");
            ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        }
    }

    recnum = 0;
     ui->plainTextEdit->insertPlainText("\n");

}


//功能:点传数据函数
//参数：没有参数
//返回值：没有返回值
void DebugGateWay::on_point_funtion_clicked()
{


    QString str ="FF"+ui->comboBox_3->currentText().toUpper()+ ui->point_lineEdit->text().toUpper();
    if(str.length()%2)
        str = str.mid(0,str.length()-1);
        // QMessageBox::information(NULL, "填写错误", "请重新输入个数是偶数");
    SendDataFuntion(str);
}


//功能:字符表转换函数
//参数：转换的参数
//返回值：转换参数对应那个位
char DebugGateWay::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}


//功能:字符串转换函数
//参数：字符串
//返回值：字符串对应的位数
QByteArray DebugGateWay::QString2Hex(QString str)
{
    QByteArray senddata;
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        hstr=str[i].toLatin1();
        if(hstr == ' ')
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == -1) || (lowhexdata == -1)){
            qDebug()<<"000000";
            return NULL;\
        }
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);
    return senddata;
}


//功能:查询数据库表1函数
//参数：没有
//返回值：没有
void DebugGateWay::on_database_1_funtion_clicked()
{
   SendDataFuntion("F0");
}


//功能:进入添加EUI函数接口
//参数：没有
//返回值：没有
void DebugGateWay::on_Add_Eui_funtion_clicked()
{
    addeui *dw = new addeui(this);
    connect(dw, SIGNAL(SendPack(QString)), this, SLOT(StateUpdateEui(QString)));
    dw->exec();
}


//功能:添加EUI发送函数
//参数：添加EUI字符串
//返回值：没有
void DebugGateWay::StateUpdateEui(QString str)
{
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式

    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(timestr + " (发)--->> " +str.toUpper()+"\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}


//功能:计算数据的和
//参数：字符串
//返回值：结果和字符串参数
QString DebugGateWay::Validation_And(QString str)
{
     bool ok = true;
     int j =0,result = 0;
     int addd[2000] = {};
     for(int i =0;i<2000;i++)
     {
          addd[i]=0;
     }
     QString two= "";
     str.replace(" ", "");
     for(int i =0;i<str.length()+1;i=i+2)
     {
          two ="";
          two= str.mid(i,2);
          addd[j] = two.toInt(&ok,16);
          result =result +addd[j];
          j++;
     }
     QString t = QString::number(result, 16).toUpper().right(2);

     return t;
}


//功能:认证数据是不是对的
//参数：认证的数据，数据是字符串
//返回值：对和错
 bool DebugGateWay::DealDataVerify(QString str)
 {
    if(str.toUpper().mid(0,4) == "EEEE"  )
    {
         bool ok =true;
         QString strleng = str.toUpper().mid(4,4);
         int dec= strleng.toInt(&ok,16); //dec=255 ; ok=rue
         QString Verify = str.toUpper().mid(2+dec*2,2);
         //qDebug()<<"Verify::"+Verify;
         //qDebug()<<"Validation_And(str.mid(4,str.length()-6))::"+Validation_And(str.mid(4,str.length()-6));
         if(Verify == Validation_And(str.mid(4,dec*2-2)))
            return true;
         else
             return false;
    }
    else
        return false;
 }


 //功能:处理命令是F0的数据
 //参数：数据字符串
 //返回值：没有
 void DebugGateWay::DealDataF0(QString str)
 {

   bool ok =true;
   QString strleng = str.toUpper().mid(4,4);
   int dec= strleng.toInt(&ok,16);
   str = str.mid(10,dec*2-8);

   for(int i = 0; i<str.length()/16; i++)
   {
       ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
         QString t = QString::number(i+1, 10);
         QString str1 = str.mid(i*16,16).toUpper();
       ui->plainTextEdit->insertPlainText("序号"+ t+": "+str1+"\n");

       ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
   }
    ui->plainTextEdit->insertPlainText("\n");
 }


 //功能:处理命令是F1的数据
 //参数：数据字符串
 //返回值：没有
 void DebugGateWay::DealDataF1(QString str)
 {
     bool ok =true;
     QString strleng = str.toUpper().mid(4,4);
     int dec= strleng.toInt(&ok,16);


      QString strleng1 = str.toUpper().mid(10,4);
      int dec1= strleng1.toInt(&ok,16);
      if(dec1>0)
      {
            //qDebug()<<"2";
            QString  str2 = str.mid(14,dec1*2);
            for(int i = 0; i<str2.length()/16; i++)
            {
                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                QString t = QString::number(i+1, 10);
                QString str1 = str2.mid(i*16,16).toUpper();
                ui->plainTextEdit->insertPlainText("添加成功EUI序号"+ t+": "+str1+"\n");

                ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            }
            ui->plainTextEdit->insertPlainText("\n");
       }

       if(dec*2-dec1*2-12>0)
       {

           QString str2 = str.mid(14+dec1*2,dec*2-12-dec1*2);

           for(int i = 0; i<str2.length()/16; i++)
           {
               ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               QString t = QString::number(i+1, 10);
               QString str1 = str2.mid(i*16,16).toUpper();
               ui->plainTextEdit->insertPlainText("添加失败EUI序号"+ t+": "+str1+"\n");

               ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
           }
            ui->plainTextEdit->insertPlainText("\n");
       }
 }


 //功能:进入删除EUI接口函数
 //参数：没有
 //返回值：没有
void DebugGateWay::on_btn_delete_clicked()
{

     dialogdelete *de = new dialogdelete(this);
     deleteflag = true;
     connect(de, SIGNAL(SendPack()), this, SLOT(StateDeleteEui()));
     connect(de, SIGNAL(SendPack_1(QString)), this, SLOT(DeleteEui(QString)));
     de->exec();
     deleteflag = false;
}

//功能:发送查询EUI字符串函数
//参数：查询命令
//返回值：没有
void DebugGateWay::StateDeleteEui()
{
    SendDataFuntion("F0");
}


//功能:发送删除EUI函数
//参数：删除的EUI字符串
//返回值：没有
void DebugGateWay::DeleteEui(QString str)
{

    for(int i=0;i<str.length()/16; i++)
    {

        QString str1 ="";
        str1="F2"+str.mid(i*16,16);
        SendDataFuntion(str1);
        sleep(1000);
    }
}


//功能:处理命令是F2的数据
//参数：数据字符串
//返回值：没有
void DebugGateWay::DealDataF2(QString str)
{
  bool ok =true;
  QString strleng = str.toUpper().mid(4,4);
  int dec= strleng.toInt(&ok,16);
  str = str.mid(10,dec*2-8);

  for(int i = 0; i<str.length()/16; i++)
  {
        QString str1 = str.mid(i*16,16).toUpper();
        stbuffer[i+1] = str1;
  }
  deletestart=true;
}


//功能:查询数据库表2数据函数
//参数：没有
//返回值：没有
void DebugGateWay::on_query_all_EUI_clicked()
{   
    SendDataFuntion("F3");
}


//功能:处理命令是F3的数据
//参数：数据字符串
//返回值：没有
void DebugGateWay::DealDataF3(QString str)
 {
     bool ok =true;
     QString strleng = str.toUpper().mid(4,4);
     int dec= strleng.toInt(&ok,16);
     str = str.mid(10,dec*2-8);
    qDebug()<<"---------"+str;
     ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
     ui->plainTextEdit->insertPlainText("序号        EUI          短地址   父短地址         类型        信号     温度    电池(V)    时间 \n");
     ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

     for(int i = 0; i<str.length()/50; i++)
     {

          ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
          QString t = QString::number(i+1, 10);
          QString str1 = str.mid(i*50,50).toUpper();

          int dec= str1.mid(26,2).toInt(&ok,16); //dec=255 ; ok=rue//信号强度
          QString s2 = QString::number(dec, 10);
          QString s3 ="";
          QString s4 ="";
          if(str1.mid(28,4).toUpper() == "FFFF")
          {
               s3 =str1.mid(28,4).toUpper();
          }
          else
          {
               int dec1= str1.mid(28,4).toInt(&ok,16); //dec=255 ; ok=rue//温度值
               s3 = QString::number(dec1, 10);
               s3 =s3.mid(0,s3.length()-1)+"."+s3.right(1);

           }


          if(str1.mid(32,4).toUpper() == "FFFF")
          {
               s4 =str1.mid(32,4).toUpper();
          }
          else
          {
              int dec1= str1.mid(32,4).toInt(&ok,16); //dec=255 ; ok=rue//电池
              s4 = QString::number(dec1, 10);
              s4 =s4.mid(0,s4.length()-2)+"."+s4.right(2);
          }

          if(t.length()==1)
              t = "0"+t;
          if(s2.length()==1)
              s2 = "0"+s2;

          QString m_type="";
          if(str1.mid(24,2)=="05")
              m_type = "05/非低功耗";
           else if(str1.mid(24,2)=="03")
               m_type = "  03/低功耗";
          else if(str1.mid(24,2)=="01")
              m_type  = "   01/路由";
          else
              m_type = str1.mid(24,2);

          ui->plainTextEdit->insertPlainText(" "+t+"    "+str1.mid(0,16)+ "    "+ str1.mid(16,4)+ "      "+ str1.mid(20,4)+ "       "+ m_type+ "     -"+ s2+ "     "+ s3+ "    "+ s4+"    "+str1.mid(36,4)+"/"+str1.mid(40,2)+"/"+str1.mid(42,2)+" "+str1.mid(44,2)+":"+str1.mid(46,2)+"\n");
          ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
     }
      ui->plainTextEdit->insertPlainText("\n");
 }


//功能:查询在线EUI
//参数：没有
//返回值：没有
void DebugGateWay::on_query_all_online_clicked()
{      
    SendDataFuntion("E0");
}


//功能:处理命令是E0的数据
//参数：数据字符串
//返回值：没有
void DebugGateWay::DealDataE0(QString str)
 {
     bool ok =true;
     QString strleng = str.toUpper().mid(4,4);
     int dec= strleng.toInt(&ok,16);
     str = str.mid(10,dec*2-8);
     ui->comboBox->clear();
     ui->comboBox_2->clear();
      ui->comboBox_3->clear();
     for(int i =0;i<200;i++)
     {
          E0stbuffer[i].clear();
     }
     int Num=0;

     for(int i = 0; i<str.length()/18; i++)
     {
         ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

         QString str1 = str.mid(i*18,18).toUpper();

         if(str1.mid(0,2).toUpper() == "00")
         {
             QString t = QString::number(Num+1, 10);

             if(t.length()==1)
                 t = "0"+t;
             ui->comboBox->addItem(str1.mid(2,16));
             ui->comboBox_2->addItem(str1.mid(2,16));
             ui->comboBox_3->addItem(str1.mid(2,16));
             E0stbuffer[i]=str1.mid(2,16);
             ui->plainTextEdit->insertPlainText("序号"+ t+": "+str1+"   在线\n");
             ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
             Num++;
         }

     }
      ui->plainTextEdit->insertPlainText("\n");

     int NoNum=0;
     for(int i = 0; i<str.length()/18; i++)
     {
          ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

          QString str1 = str.mid(i*18,18).toUpper();
           if(str1.mid(0,2).toUpper() == "01")
           {

               QString t = QString::number(NoNum+1, 10);
               if(t.length()==1)
                   t = "0"+t;
               ui->plainTextEdit->insertPlainText("序号"+ t+": "+str1+"   不在线\n");
               ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                NoNum++;
           }
      }
      ui->plainTextEdit->insertPlainText("\n");
 }


//功能:查询单个EUI信息
//参数：没有
//返回值：没有
void DebugGateWay::on_single_query_clicked()
{    
    QString str = " E1 " +ui->comboBox->currentText().toUpper();
    SendDataFuntion(str);
}


//功能:查询设备相关的信息
//参数：没有
//返回值：没有
void DebugGateWay::on_query_equipment_clicked()
{   
    QString str = " F4 FF FF 03 F2 F5 ";
    SendDataFuntion(str);
}


//功能:处理命令是E5的数据
//参数：数据字符串
//返回值：没有
void DebugGateWay::DealDataE5(QString str)
{
    bool ok =true;
    QString strleng = str.toUpper().mid(4,4);
    int dec= strleng.toInt(&ok,16);
    str = str.mid(10,dec*2-8).toUpper();

    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText("短地址           EUI           父短地址           父EUI       设备类型     网络频道        网络PanID     \n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    int m_munl= str.mid(42,2).toInt(&ok,16);
    QString m_str= QString::number(m_munl,10);

    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(" "+str.mid(0,4)+"      "+str.mid(4,16)+"      "+str.mid(20,4)+"      "+str.mid(24,16)+"      "+str.mid(40,2)+"           "+ m_str+"             "+str.mid(44,4)+"\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

     ui->plainTextEdit->insertPlainText("\n");
}


//功能:设备重启函数
//参数：没有
//返回值：没有
void DebugGateWay::on_equipment_restart_clicked()
{    
    QString str = " F5 FF FF 03 F3 F6 ";
    SendDataFuntion(str);
}


//功能:设备初始化函数
//参数：没有
//返回值：没有
void DebugGateWay::on_equipment_initialize_clicked()
{   
    QString str = "F6 FF FF 03 F4 F7";
    SendDataFuntion(str);
}


//功能:设备开回显函数
//参数：没有
//返回值：没有
void DebugGateWay::on_start_echo_clicked()
{   
    QString str = " F9 FF FF 03 FC FF ";
    SendDataFuntion(str);
}


//功能:设备关回显函数
//参数：没有
//返回值：没有
void DebugGateWay::on_off_echo_clicked()
{ 
    QString str = " FA FF FF 03 FD 00 ";
    SendDataFuntion(str);
}


//功能:网关开启函数
//参数：没有
//返回值：没有
void DebugGateWay::on_gateway_mode_clicked()
{    
    QString str = " F8 11 12 13 14 ";
    SendDataFuntion(str);
}


//功能:MCU开启函数
//参数：没有
//返回值：没有
void DebugGateWay::on_mcu_mode_clicked()
{   
   QString str = " F7 FF FF 03 FA FD ";
   SendDataFuntion(str);
}


//功能:清除数据信息函数
//参数：没有
//返回值：没有
void DebugGateWay::on_clear_data_clicked()
{
    ui->plainTextEdit->clear();
}


//功能:设备退网功能
//参数：没有
//返回值：没有
void DebugGateWay::on_mode_quit_clicked()
{  
    if(ui->checkBox->checkState() == Qt::Unchecked)
    {
        if(ui->comboBox_2->count()>1)
        {
            QString str = "FB " +ui->comboBox_2->currentText().toUpper();
            SendDataFuntion(str);
        }
        else
            QMessageBox::information(NULL, "填写错误", "没有在线节点");
    }
    else
    {
        QString str = "FB EEEE EEEE EEEE EEEE";
        SendDataFuntion(str);
    }
}


//功能:设备重启功能
//参数：没有
//返回值：没有
void DebugGateWay::on_mode_restart_clicked()
{    
    if(ui->checkBox->checkState() == Qt::Unchecked)
    {
        if(ui->comboBox_2->count()>=1)
        {
            QString str = "FC " +ui->comboBox_2->currentText().toUpper();
            SendDataFuntion(str);
        }
        else
            QMessageBox::information(NULL, "填写错误", "没有在线节点");
    }
    else
    {
        QString str = "FC EEEE EEEE EEEE EEEE";
        SendDataFuntion(str);
    }
}


//功能:设备初始化功能
//参数：没有
//返回值：没有
void DebugGateWay::on_mode_initialize_clicked()
{    
    if(ui->checkBox->checkState() == Qt::Unchecked)
    {
        if(ui->comboBox_2->count()>=1)
        {
            QString str = "FD " +ui->comboBox_2->currentText().toUpper();
            SendDataFuntion(str);
        }
        else
            QMessageBox::information(NULL, "填写错误", "没有在线节点");
    }
    else
    {
        QString str = "FD EEEE EEEE EEEE EEEE";
        SendDataFuntion(str);
    }


}


//功能:温度点采集时间间隔
//参数：没有
//返回值：没有
void DebugGateWay::on_temperature_IntervalI_clicked()
{   
    QString str = ui->lineEdit->text();
    if(ui->comboBox_2->count()>1&&ui->checkBox->checkState() == Qt::Unchecked)
    {
        if(str.length()>=1)
        {
            bool ok;
            int num = str.toInt(&ok,10);
            if(ui->comboBox_6->currentIndex()==0)
            {
                if(num>=0 &&num<=59)
                {
                    str = QString::number(num,16);
                    if(str.length()==1)
                            str ="0"+str;

                }
                else
                    QMessageBox::information(NULL, "填写错误", "请重新输入");
            }
            else
            {
                if(num>=0 &&num<=59)
                {
                    str = QString::number(num+59,16);

                }
                else
                    QMessageBox::information(NULL, "填写错误", "请重新输入");

            }


            QString str1 = " FE " +ui->comboBox_2->currentText().toUpper()+str;
            SendDataFuntion(str1);
        }
    }
    else if(ui->checkBox->checkState() == Qt::Checked)
    {
        QString str1 = " FE EEEEEEEEEEEEEEEE" +str;
        SendDataFuntion(str1);
    }
    else
        QMessageBox::information(NULL, "填写错误", "没有在线节点");


}


//功能:时间间隔函数
//参数：设置时间参数
//返回值：没有
void DebugGateWay::sleep(int m)
{
    QTime reachTime = QTime::currentTime().addMSecs(m);

    while(QTime::currentTime() < reachTime)
        QCoreApplication::processEvents(\
                    QEventLoop::AllEvents, 100);
}


//功能:重写关闭函数
//参数：没有
//返回值：没有
void DebugGateWay::closeEvent(QCloseEvent *event)
{
   if(TcpState)
   {
     tcpSocket->close();
     TcpState =false;
   }
   QFile data("./IP.txt");
   if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
       QTextStream out(&data);
      QString strrr = ui->ip_lineEdit->text();
      out << strrr;
   }

}


void DebugGateWay::on_RemoteUpgrate_clicked()
{
    XmodemParameter.Open = true;
    RemoteUpgrade *dw = new RemoteUpgrade(this);
    connect(dw, SIGNAL(SendPack()), this, SLOT(XmodemFuntion()));
    dw->exec();
    XmodemParameter.Open= false;
}


void DebugGateWay::XmodemFuntion()
{
  // btn_deal_xmodem1 XmodemParameter1={"",0,1,"",0,0,0};
   XmodemParameter.prograde =0;
   XmodemParameter1.TxData = XmodemParameter.FileData;
   XmodemParameter.Open= true;

   QString str = "FF"+ XmodemParameter.EUI+XmodemParameter.Upgrate;
   SendDataFuntion(str);

}


//多项是为0x1021的CRC算法
qint16 DebugGateWay::GetCrc(QByteArray Data)
{
   quint16 mCrc = 0;
   quint16 sLen = Data.size();
   for(quint32 j = 0; j < sLen; j++){
       mCrc = mCrc^(quint16)(Data.at(j)) << 8;
       for (quint32 i=8; i!=0; i--){
           if (mCrc & 0x8000)
               mCrc = mCrc << 1 ^ 0x1021;
           else
               mCrc = mCrc << 1;
       }
   }
   return mCrc;
}


void DebugGateWay::RemoteFuntion(QString str)
{
    qDebug("Step::%d\n",XmodemParameter1.Step);
    qDebug("XmodemParameter.PackNumber::%d\n",XmodemParameter.PackNumber);
    str = str.toUpper();
    switch(XmodemParameter1.Step){
        case 0:
            if("43" == str)
            {
                qDebug("43 == str");
                XmodemParameter1.Step = 1;
                RemoteSendDataFuntion();
            }
            break;

        case 1:
            if( str == "06")
            {
              //  qDebug("%d\n",XmodemParameter1.SendLen);
                XmodemParameter1.TxData.remove(0, XmodemParameter1.SendLen);     //回复正确删除已发的长度
                XmodemParameter1.PackCnt++;                     //进度条的包号增加
                XmodemParameter1.cnt++;                         //发送包好增加
                XmodemParameter.prograde=(100*XmodemParameter1.cnt)/XmodemParameter.PackNumber;

                 RemoteSendDataFuntion();
            }

            if( str == "15")
            {
                 RemoteSendDataFuntion();
            }

            if( str == "18")
            {
                btn_deal_xmodem1 XmodemParameter1={"",0,1,"",0,0,0};
                XmodemParameter1.TxData = XmodemParameter.FileData;
                XmodemParameter.prograde=0;
            }

            if("43" == str)
            {
                RemoteSendDataFuntion();
            }

             qDebug("XmodemParameter1.PackCnt::%d\n",XmodemParameter1.PackCnt);
            if(XmodemParameter1.cnt >XmodemParameter.PackNumber)
            {         //发送完成
                qDebug("XmodemParameter1.PackCnt::%d   XmodemParameter.PackNumber::%d\n",XmodemParameter1.PackCnt,XmodemParameter.PackNumber);
                XmodemParameter1.Step = 2;
                XmodemParameter1.cnt = 1;
                XmodemParameter.prograde=0;
                btn_deal_xmodem1 XmodemParameter1={"",0,1,"",0,0,0};
                XmodemParameter1.TxData = XmodemParameter.FileData;
                RemoteSendEndFuntion();
            }
            break;

        case 2:
            if(str.length()>0)
            {
                XmodemParameter1.cnt++;
                RemoteSendEndFuntion();
            }

            if(XmodemParameter1.cnt == 2){                     //发送两次结束符
                XmodemParameter1.Step = 0;
                XmodemParameter1.cnt = 1;
            }

            break;
     }

}

void DebugGateWay::RemoteSendDataFuntion()
{
    QByteArray Data="";
    quint16 Crc=0;
    quint32 PackSize =128;
    XmodemParameter1.Pack[0] = 0x01;                     //目前只用128byte类型
    XmodemParameter1.Pack[1] = XmodemParameter1.cnt;                      //包号
   // qDebug("cnt:%d\n",XmodemParameter1.cnt);
    XmodemParameter1.Pack[2] = ~XmodemParameter1.cnt;                     //包号取反
    XmodemParameter1.ValidLen = XmodemParameter1.TxData.size();           //有效数据长度
    if(XmodemParameter1.ValidLen >= PackSize){           //大于包长
        Data = XmodemParameter1.TxData.left(PackSize);   //从TxData的左侧取出PackSize长
        XmodemParameter1.SendLen = PackSize;             //已发长度
    }else{
        QByteArray zero(PackSize -XmodemParameter1.ValidLen, 0x1a); //不足部分填充0x1a
        Data = XmodemParameter1.TxData.left(XmodemParameter1.ValidLen);   //不足一包
        Data += zero;                   //填充其它数据
        XmodemParameter1.SendLen = XmodemParameter1.ValidLen;             //已发长度
        qDebug()<<"Data::"+Data.toHex();
    }
    Crc = GetCrc(Data);                 //CRC
    XmodemParameter1.Pack += Data;                       //填入数据
    XmodemParameter1.Pack += (quint8)(Crc >> 8);         //先发高位
    XmodemParameter1.Pack += (quint8)(Crc & 0xff);       //后发低位

    QString str = "FF"+XmodemParameter.EUI+XmodemParameter1.Pack.toHex();
    // qDebug("str.length()::%d\n",str.length());
    SendDataFuntionNoShow(str);



    XmodemParameter1.Pack.clear();                       //清buf
    Data.clear();                       //清buf
}

void DebugGateWay::RemoteSendEndFuntion()
{
    XmodemParameter1.Pack.clear();                      //清除buf
    XmodemParameter1.Pack += 0x04;                      //发送结束符
    QString str = "FF"+XmodemParameter.EUI+XmodemParameter1.Pack.toHex();

    SendDataFuntionNoShow(str);
    XmodemParameter1.Pack.clear();
}

void DebugGateWay::SendDataFuntion(QString str)
{
    QString str1= QString::number(str.length()/2+2,16);
    if(str1.length()==1)
        str1 ="0"+str1;
    str = str1+str;
    str ="EEEE" +str+ Validation_And(str);
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(timestr + " (发)--->> " +str.toUpper()+"\n");
   // ui->plainTextEdit->insertPlainText("\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}


void DebugGateWay::SendDataFuntionNoShow(QString str)
{
    QString str1= QString::number(str.length()/2+2,16);
    if(str1.length()==1)
        str1 ="0"+str1;
    str1= str1.toUpper();
    str = str1.mid(0,2)+str;
     qDebug()<<"Validation_And(str);;;"+Validation_And(str);

    str ="EEEE" +str+ Validation_And(str);
     qDebug("str.length()::%d\n",str.length());
     qDebug()<<str;
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}


void DebugGateWay::on_SendDataToTermial_clicked()
{
    QString str = ui->lineEdit_Send->text();
    str = "D0"+str;
    if(str.length()%2 )
    {
         QMessageBox::information(NULL, "填写错误", "请重新输入个数是偶数");
    }
    SendDataFuntion(str.toUpper());

}

void DebugGateWay::on_Baud_Rate_clicked()
{
    QString str="",str1="",str3="";
    if(ui->comboBox_4->currentIndex()==0)
        str="00";
    else if(ui->comboBox_4->currentIndex()==1)
        str="01";
    else if(ui->comboBox_4->currentIndex()==2)
        str="02";
    else if(ui->comboBox_4->currentIndex()==3)
        str="03";
    else if(ui->comboBox_4->currentIndex()==4)
        str="04";

    if(ui->comboBox_5->currentIndex()==0)
        str1="00";
    else if(ui->comboBox_5->currentIndex()==1)
        str1="01";
    else if(ui->comboBox_5->currentIndex()==2)
        str1="02";

    str3="D1"+str+str1;
    qDebug()<<str3;
     SendDataFuntion(str3);

}

void DebugGateWay::on_AlarmClock_clicked()
{
    AlarmClock *dw = new AlarmClock(this);
    connect(dw, SIGNAL(SendPack(QString)), this, SLOT(AlarmClockTransmitFuntion(QString)));
    connect(dw, SIGNAL(SendPack1()), this, SLOT(GainAlarmClockTransmitFuntion()));
    dw->exec();
}


void DebugGateWay::AlarmClockTransmitFuntion(QString str)
{
     SendDataFuntion("D2"+str);
}


void DebugGateWay::GainAlarmClockTransmitFuntion()
{
    SendDataFuntion("D8");
}

void DebugGateWay::on_QueryDb_clicked()
{
    if(ui->QueryType->currentText()=="液晶温控器")
    {
        QString str ="D401";
         SendDataFuntion(str);
    }
    else  if(ui->QueryType->currentText()=="分体空调")
    {
        QString str ="D402";
         SendDataFuntion(str);
    }

}

void DebugGateWay::on_SetType_clicked()
{
    SetType *dw = new SetType(this);
     connect(dw, SIGNAL(SendPack()), this, SLOT(SetTypeSendFuntion()));
      connect(dw, SIGNAL(SendPack1(QString)), this, SLOT(TypeSendFuntion(QString)));
     dw->exec();
}
 void  DebugGateWay::SetTypeSendFuntion()
 {

     SendDataFuntion("D5");
 }
 void DebugGateWay::TypeSendFuntion(QString str)
 {
     SendDataFuntion("D3"+str);
 }

void DebugGateWay::on_GainTimeFFuntion_clicked()
{
    QString str =ui->lineEditGainTime->text();
    int num = str.toInt();
    qDebug("ttt:::%d\n",num);
    if(str =="0000")
    {
         SendDataFuntion("D60000");
    }
    else if( num<200||num>9000 )
        QMessageBox::information(NULL, "填写错误", "请重新输入200ms与9000ms之间");

    else
    {
        if(str.length()==3)
            str = "0"+str;
        else if(str.length() ==2)
            str = "00"+str;
        SendDataFuntion("D6"+str);
    }
}

void DebugGateWay::on_GainFuntion_clicked()
{
    SendDataFuntion("D7");
}

void DebugGateWay::PointimerFuntion()
{
    static int i=1;
    int Num= ui->comboBox_3->count();
    QString str="";

    ui->comboBox_3->setCurrentIndex(i);
    i++;
    str ="FF"+ui->comboBox_3->currentText().toUpper()+ ui->point_lineEdit->text().toUpper();
    if(i==Num)
        i=1;

   // QString str ="FF"+ui->comboBox_3->currentText().toUpper()+ ui->point_lineEdit->text().toUpper();
    if(str.length()%2)
        str = str.mid(0,str.length()-1);
        // QMessageBox::information(NULL, "填写错误", "请重新输入个数是偶数");
    SendDataFuntion(str);
}

void DebugGateWay::on_pushButton_clicked()
{
    static int PointNum=0;
    PointNum++;
    if(PointNum%2)
        point_timer->stop();
     else
    {
        QString y = ui->Time->text();
        bool ok;
        int dec=y.toInt(&ok,10);
        point_timer->start(dec);
    }
}

void DebugGateWay::on_AllowNetwork_clicked()
{
    SendDataFuntion("D9");
}

void DebugGateWay::on_StopNetwork_clicked()
{
    SendDataFuntion("DA");
}

void DebugGateWay::on_CollectTime_clicked()
{
    SendDataFuntion("DB");
}



void DebugGateWay::on_SetRoute_clicked()
{
   QString str = ui->lineEdit_2->text();
   if(str.length()==2)
   {
       bool ok;
       int num = str.toInt(&ok,10);
       if(num>=11 &&num<=26)
       {
           str = QString::number(num,16);
            SendDataFuntion("DC"+str);
       }
       else
           QMessageBox::information(NULL, "填写错误", "请重新输入");
   }
   else
       QMessageBox::information(NULL, "填写错误", "请重新输入");


}

void DebugGateWay::on_SetSleepTime_clicked()
{

    QString _EUi= ui->comboBox_2->currentText();
   QString str = ui->comboBox_Time->currentText();
   str = "0"+str;
   if(ui->checkBox->checkState() == Qt::Unchecked)
   {
       if(_EUi.length()==16&& str.length()==2)
            SendDataFuntion("DD"+_EUi+str);
       else  QMessageBox::information(NULL, "填写错误", "请点击在线节点");
   }
   else
   {
    if(str.length()==2)
        SendDataFuntion("DDEEEEEEEEEEEEEEEE"+str);
    else  QMessageBox::information(NULL, "填写错误", "请填写");
   }
}

void DebugGateWay::on_Setbotel_clicked()
{
    QString str="",str1="",str3="";
    if(ui->comboBox_4->currentIndex()==0)
        str="00";
    else if(ui->comboBox_4->currentIndex()==1)
        str="01";
    else if(ui->comboBox_4->currentIndex()==2)
        str="02";
    else if(ui->comboBox_4->currentIndex()==3)
        str="03";
    else if(ui->comboBox_4->currentIndex()==4)
        str="04";

    if(ui->comboBox_5->currentIndex()==0)
        str1="00";
    else if(ui->comboBox_5->currentIndex()==1)
        str1="01";
    else if(ui->comboBox_5->currentIndex()==2)
        str1="02";
    QString _EUi= ui->comboBox_2->currentText();
    str3="DE"+_EUi+str+str1;
    if(ui->checkBox->checkState() == Qt::Unchecked)
    {
        if(_EUi.length()==16)
             SendDataFuntion(str3);
        else  QMessageBox::information(NULL, "填写错误", "请点击在线节点");
    }
    else
    {

             SendDataFuntion("DEEEEEEEEEEEEEEEEE"+str+str1);
    }
    qDebug()<<str3;
}

void DebugGateWay::on_QueryNetwork_clicked()
{
    SendDataFuntion("DF");
}

void DebugGateWay::DF_FUntion()
{
   DF_timer->stop();
   qDebug()<<"---------------------------------------------------------------------------------------";
   ui->plainTextEdit->insertPlainText("父节点:协调器 ");
   QStringList List01;
   //int i_num=0;
   foreach (const QString &str22, DFStr)
  {
        if(str22.mid(0,16)=="FFFFFFFFFFFFFFFF")
        {
            ui->plainTextEdit->insertPlainText("("+str22.mid(16,16)+" "+str22.mid(36,2)+")");
        }
        if((str22.mid(0,16)!="FFFFFFFFFFFFFFFF"))
        {


             bool m_01= false;
            foreach (const QString &str23, List01)
            {
                if(str22.mid(0,16) ==str23)
                {
                    m_01=true;
                }
            }
            if(!m_01)
            {
                List01<<str22.mid(0,16);
            }
        }

   }
   foreach (const QString &str78, List01)
   {
        qDebug()<<"---------------------List01::"+str78+"-----------------------------";
   }

   ui->plainTextEdit->insertPlainText("\n");
   foreach (const QString &str22, List01)
   {
       ui->plainTextEdit->insertPlainText("\n");
        ui->plainTextEdit->insertPlainText("父节点:"+str22);
       foreach (const QString &str23, DFStr)
       {
           qDebug()<<"----89898---------------------------------------------------------------------------";
           qDebug()<<"str22:::"+str22;
           qDebug()<<"str23.mid(0.16):::"+str23.mid(0,16);
           if(str22==str23.mid(0,16))
            {
                ui->plainTextEdit->insertPlainText("("+str23.mid(16,16)+" "+str23.mid(36,2)+")");
            }
       }
       ui->plainTextEdit->insertPlainText("\n");
   }
    DFStr.clear();
}

void DebugGateWay::on_StartmodulFuntion_clicked()
{
    QString str="EEEEAABBCCDD";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(timestr + " (发)--->> " +str.toUpper()+"\n");
   // ui->plainTextEdit->insertPlainText("\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void DebugGateWay::on_StopmoFuntion_clicked()
{
    QString str="EEEEAABBCCEE";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->plainTextEdit->insertPlainText(timestr + " (发)--->> " +str.toUpper()+"\n");
   // ui->plainTextEdit->insertPlainText("\n");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void DebugGateWay::on_VersionFuntion_clicked()
{
    SendDataFuntion("C1");
}

