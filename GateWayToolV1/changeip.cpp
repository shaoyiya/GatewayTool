#include "changeip.h"
#include "ui_changeip.h"
#include<QMessageBox>
ChangeIp::ChangeIp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeIp)
{
    ui->setupUi(this);   
    QRegExp rx("^((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)$");
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
    QRegExpValidator v(rx, 0);

    ui->lineEditIP->setValidator(&v);
    ui->lineEditIP->setInputMask("000.000.000.000");

    ui->lineEditMask->setValidator(&v);
    ui->lineEditMask->setInputMask("000.000.000.000");

    ui->lineEditGateway->setValidator(&v);
    ui->lineEditGateway->setInputMask("000.000.000.000");


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

ChangeIp::~ChangeIp()
{
    delete ui;
}

void ChangeIp::on_ModificationParameter_clicked()
{
    int nn =ui->lineEditIP->text().length();
    QString IP=ui->lineEditIP->text();
    int mm = IP.indexOf(".");
    int mm1 = IP.mid(mm+1).indexOf(".");
    int mm2 = IP.mid(mm1+mm+2).indexOf(".");
    qDebug()<<"IP.mid(mm1+mm)"+IP.mid(mm1+mm+2);
    int mm3 = IP.mid(mm2+mm+mm1+3).length();
     qDebug()<<"IP.mid(mm31+mm)"+IP.mid(mm2+mm+mm1+3);
    qDebug("%d\n",nn);
     qDebug("mm::%d\n",mm);
      qDebug("mm1::%d\n",mm1);
      qDebug("mm2::%d\n",mm2);
       qDebug("mm3::%d\n",mm3);
    if(nn>=7 &&mm>=1&&mm1>=1&&mm2>=1&&mm3>=1)
    {
        QString str  = "AABBCCDDFF02IP:"+ui->lineEditIP->text()+"MASK:"+ ui->lineEditMask->text()+ "GATEWAY:"+ ui->lineEditGateway->text()+\
                   "name:" +ui->lineEdit->text();
     qDebug()<<str;
     tcpSocket->write(str.toLocal8Bit());
    }
    else
         QMessageBox::information(NULL, "选择错误", "没有IP，请重新填写!");
    //
}
//功能:TCP接收数据函数
//参数：没有参数
//返回值：没有返回值
void ChangeIp::revData()
{




        QByteArray recc = tcpSocket->readAll();//读TCP包
        qDebug()<<"recc::"+recc.toHex();
        if(recc.toHex().mid(0,6).toUpper()=="EEEEE7")
        {
            bool ok;
            qint16 yy = recc.toHex().mid(6).toUpper().toInt(&ok,16);
             QString Value= QString::number(yy, 10);

            qDebug("yy::%d\n",yy);
            QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
            QString timestr = time.toString("hh:mm:ss"); //设置显示格式
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 4G信号强度:" + Value + "dB\n");
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText("\n");
            recc.clear();
        }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEE8")
        {
            QString Data =recc.toHex().toUpper();
            QString CPU = Data.mid(6,Data.length()-8);
            CPU = CPU.mid(0,CPU.length()-1)+"."+CPU.right(1);
            QString Men = Data.right(2);
            QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
            QString timestr = time.toString("hh:mm:ss"); //设置显示格式
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText(timestr + " (收)<<--- CPU占用率:" + CPU + "%  内存占用率:"+Men+"%\n");
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText("\n");
            recc.clear();
        }
         else if(recc.toHex().mid(0,6).toUpper()=="EEEEE9")
        {
            QString Data =recc.toHex().toUpper().mid(6);
            if(Data=="0000")
            {
                QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
                QString timestr = time.toString("hh:mm:ss"); //设置显示格式
                ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置4G成功，设备在重新启动\n");
                ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->search_textEdit->insertPlainText("\n");
            }
            else if(Data=="1111")
            {
                QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
                QString timestr = time.toString("hh:mm:ss"); //设置显示格式
                ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置4G失败，请重新设置\n");
                ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
                ui->search_textEdit->insertPlainText("\n");
                 recc.clear();
            }
        }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEEA")
       {
           QString Data =recc.toHex().toUpper().mid(6);
           if(Data=="0000")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置以太网通信成功，设备在重新启动\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
           }
           else if(Data=="1111")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
              ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置以太网通信失败，请重新设置\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
                recc.clear();
           }
       }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEEB")
        {
            QString Data =recc.toHex().toUpper().mid(6);
            QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
            QString timestr = time.toString("hh:mm:ss"); //设置显示格式
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            QString GVer = Data.mid(0,2)+"."+Data.mid(2,1);
            QString NP801Ver = Data.mid(3,2)+"."+Data.mid(5,1);
             QString Start4GVer = Data.mid(6,2)+"."+Data.mid(8,1);
            ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 服务本版号:"+ GVer+" 扫描本版号:"+NP801Ver+" 拨号本版号:"+Start4GVer+"\n");
             ui->search_textEdit->insertPlainText(timestr + " (收)<<--- "+Data.toUpper()+"\n");
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText("\n");
             recc.clear();
        }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEEC")
        {

            QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
            QString timestr = time.toString("hh:mm:ss"); //设置显示格式
            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！

            ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 重启成功\n");

            ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
            ui->search_textEdit->insertPlainText("\n");
        }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEEE")
       {
           QString Data =recc.toHex().toUpper().mid(6);
           if(Data=="0000")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置麦希Zigbee成功，设备在重新启动\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
           }
           else if(Data=="1111")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
              ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置麦希Zigbee失败，请重新设置\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
                recc.clear();
           }

       }
        else if(recc.toHex().mid(0,6).toUpper()=="EEEEED")
       {
           QString Data =recc.toHex().toUpper().mid(6);
           if(Data=="0000")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置新Zigbee成功，设备在重新启动\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
           }
           else if(Data=="1111")
           {
               QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
               QString timestr = time.toString("hh:mm:ss"); //设置显示格式
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
              ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 设置新Zigbee失败，请重新设置\n");
               ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
               ui->search_textEdit->insertPlainText("\n");
                recc.clear();
           }
       }

        //显示消息到UI界面
       QString msg;
       QTextCodec *coder = QTextCodec::codecForName("utf8");

       msg = coder->toUnicode(recc);
       qDebug()<<" msg::"+ msg;
       if(msg.toUpper().mid(0,4)=="FF03")
       {
           QString Data= msg.toUpper().mid(4);
           QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
           QString timestr = time.toString("hh:mm:ss"); //设置显示格式
           ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
          ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 网关VPN地址:"+ Data+"\n");
           ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
           ui->search_textEdit->insertPlainText("\n");
       }
       else
       {
           ui->lineEdit->setText(msg);
           int  i1 = msg.indexOf("//");
           ui->lineEditIP->setText( msg.mid(0,i1));
           int  i2 = msg.indexOf("\\");
           ui->lineEditMask->setText(msg.mid(i1+2,i2-i1-2));
           int  i3 = msg.indexOf("name:");
           ui->lineEditGateway->setText( msg.mid(i2+1,i3-i2-1));
           ui->lineEdit->setText(msg.mid(i3+5));
      }

}

void ChangeIp::on_connect_clicked()
{
    this->tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    tcpSocket->connectToHost(ui->ip_lineEdit->text(),8083);//主机IP，端口


    //这里我是采用程序启动就自访问服务端（也可根据实际情况采用手动连接手动输入服务端ip的方式。）
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(revData()));



    if(tcpSocket->waitForConnected(1000))//最大等待msec毫秒或者等待一个新连接可用。如果一个连接可用，返回真，否则返回假。如果msec不等于0，那么超时将会被调用
    {

         ui->xiaoxilan_Label->setText("连接成功!");
         ui->connect->setEnabled(false);
         ui->disconnect->setEnabled(true);
         ui->GainFuntion->setEnabled(true);
         ui->GainVPNIp->setEnabled(true);
         ui->ONlin->setEnabled(true);
         ui->Memory->setEnabled(true);
         ui->ModificationParameter->setEnabled(true);
         ui->Set4G->setEnabled(true);
         ui->Strength4G->setEnabled(true);
         ui->VersionFuntion->setEnabled(true);
         ui->rebootFuntion->setEnabled(true);
         ui->OldZigbee->setEnabled(true);
         ui->NewZigbee->setEnabled(true);
    }
    else
    {

        ui->xiaoxilan_Label->setText("连接失败,未能连接远程服务器");
    }
}

void ChangeIp::on_disconnect_clicked()
{
    tcpSocket->close();
    ui->connect->setEnabled(true);
    ui->disconnect->setEnabled(false);

    ui->GainFuntion->setEnabled(false);
    ui->GainVPNIp->setEnabled(false);
    ui->ONlin->setEnabled(false);
    ui->Memory->setEnabled(false);
    ui->ModificationParameter->setEnabled(false);
    ui->Set4G->setEnabled(false);
    ui->Strength4G->setEnabled(false);
    ui->VersionFuntion->setEnabled(false);
    ui->rebootFuntion->setEnabled(false);
    ui->OldZigbee->setEnabled(false);
    ui->NewZigbee->setEnabled(false);


    ui->xiaoxilan_Label->setText("连接已断开");
}

void ChangeIp::on_GainFuntion_clicked()
{
    QString str ="AABBCCDDFF01";
   // QByteArray ba = str.toLatin1();
   // char *sendtext = ba.data();
   // QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(str.toLocal8Bit());
}
//功能:字符串转换函数
//参数：字符串
//返回值：字符串对应的位数
QByteArray ChangeIp::QString2Hex(const QString str)
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


//功能:字符表转换函数
//参数：转换的参数
//返回值：转换参数对应那个位
char ChangeIp::ConvertHexChar(const char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}

void ChangeIp::on_Strength4G_clicked()
{
    QString str ="EEEEE7";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_Memory_clicked()
{
    QString str ="EEEEE8";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_Set4G_clicked()
{
    QString str ="EEEEE9";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_ONlin_clicked()
{

    QString str ="EEEEEA";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_GainVPNIp_clicked()
{
    QString str ="AABBCCDDFF03";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    tcpSocket->write(str.toLocal8Bit());
}

void ChangeIp::on_CllearFuntion_clicked()
{
    ui->search_textEdit->clear();
}
void ChangeIp::closeEvent(QCloseEvent *event)
{
   // tcpSocket->close();
    QFile data("./IP.txt");
    if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
        QTextStream out(&data);
       QString strrr = ui->ip_lineEdit->text();
       out << strrr;
    }
}

void ChangeIp::on_VersionFuntion_clicked()
{
    QString str ="EEEEEB";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_rebootFuntion_clicked()
{
    QString str ="EEEEEC";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_OldZigbee_clicked()
{
    QString str ="EEEEEE";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void ChangeIp::on_NewZigbee_clicked()
{
    QString str ="EEEEED";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + str.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    QByteArray ba = str.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}
