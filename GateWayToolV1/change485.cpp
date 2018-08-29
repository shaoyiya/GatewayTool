#include "change485.h"
#include "ui_change485.h"
 btn_deal Dealdata ;
Change485::Change485(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Change485)
{
    ui->setupUi(this);
    connect(TcpReceive_timer,SIGNAL(timeout()),this,SLOT(TcpReceiveFuntion()));
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
    ui->comboBox->addItem("1200");
    ui->comboBox->addItem("2400");
    ui->comboBox->addItem("4800");
    ui->comboBox->addItem("9600");
    ui->comboBox->addItem("19600");
    ui->comboBox->addItem("38400");
    ui->comboBox->addItem("115200");
     ui->comboBox_2->addItem("None");
    ui->comboBox_2->addItem("Even");
    ui->comboBox_2->addItem("Odd");

    ui->comboBox_3->addItem("1");
    ui->comboBox_3->addItem("2");
    QFile file("./IP.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        QString str(line);
        ui->lineEdit->setText(str);
    }
}

Change485::~Change485()
{
    delete ui;
}

void Change485::on_ConnectFuntion_clicked()
{
    this->tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    tcpSocket->connectToHost(ui->lineEdit->text(),8082);//主机IP，端口


    //这里我是采用程序启动就自访问服务端（也可根据实际情况采用手动连接手动输入服务端ip的方式。）
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(revData()));



    if(tcpSocket->waitForConnected(1000))//最大等待msec毫秒或者等待一个新连接可用。如果一个连接可用，返回真，否则返回假。如果msec不等于0，那么超时将会被调用
    {


         ui->ConnectFuntion->setEnabled(false);
         ui->DisConnectFuntion->setEnabled(true);
         ui->SetBaud->setEnabled(true);
         ui->SendFuntion->setEnabled(true);
         ui->GainBuad->setEnabled(true);

         ui->xiaoxilan_Label->setText("连接成功!");
         on_GainBuad_clicked();

    }
    else
    {

       ui->xiaoxilan_Label->setText("连接失败,未能连接远程服务器");

    }
}

void Change485::on_DisConnectFuntion_clicked()
{
    tcpSocket->close();
    ui->ConnectFuntion->setEnabled(true);
    ui->DisConnectFuntion->setEnabled(false);
    ui->SetBaud->setEnabled(false);
    ui->SendFuntion->setEnabled(false);
    ui->GainBuad->setEnabled(false);
    ui->xiaoxilan_Label->setText("连接已断开");

}
//功能:字符串转换函数
//参数：字符串
//返回值：字符串对应的位数
QByteArray Change485::QString2Hex(const QString str)
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
char Change485::ConvertHexChar(const char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}
//功能:TCP接收数据函数
//参数：没有参数
//返回值：没有返回值
void Change485::revData()
{

    if(Dealdata.TcpRecflag)
    {
        QByteArray recc = tcpSocket->readAll();//读TCP包

        Dealdata.TcpAllhexstring[Dealdata.Recnum] = recc.toHex();
        Dealdata.Recnum++;
        if(Dealdata.Recnum>1024)//越界
        {
            TcpReceive_timer->start(0);
        }
        TcpReceive_timer->start(50);//开接收超时函数
    }

}
void Change485::TcpReceiveFuntion()
{

    TcpReceive_timer->stop();//100ms接收超时定时器关闭，接收数据部分完成。
    Dealdata.TcpRecflag = false; //关接收
    TcpDataDeal();
}
void Change485::TcpDataDeal()
{
    QString hexstring="";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    for(int i=0;i<Dealdata.Recnum;i++)
    {
        hexstring += Dealdata.TcpAllhexstring[i];//从allhexstring全局数组中取出报文
        if(hexstring.length()>600)
            hexstring.clear();
    }
    if(hexstring.mid(0,6).toUpper()=="EEEEEC")
    {
        QString Baud = hexstring.mid(6).toUpper();
        QString B="",V="",S="";
        if(Baud.mid(0,2)=="01")
            B="1200";
        else if(Baud.mid(0,2)=="02")
            B="2400";
        else if(Baud.mid(0,2)=="03")
            B="4800";
        else if(Baud.mid(0,2)=="04")
            B="9600";
        else if(Baud.mid(0,2)=="05")
            B="19200";
        else if(Baud.mid(0,2)=="06")
            B="38400";
        else if(Baud.mid(0,2)=="07")
            B="115200";
        bool ok;
        int Bi= Baud.mid(0,2).toInt(&ok,10);
        ui->comboBox->setCurrentIndex(Bi-1);

        if(Baud.mid(2,2)=="01")
            V="None";
        else if(Baud.mid(2,2)=="02")
            V="Even";
        else if(Baud.mid(2,2)=="03")
            V="Odd";
        int Bi1= Baud.mid(2,2).toInt(&ok,10);
        ui->comboBox_2->setCurrentIndex(Bi1-1);

        if(Baud.mid(4,2)=="01")
            S="1";
        else if(Baud.mid(2,2)=="02")
            S="2";
        int Bi2= Baud.mid(4,2).toInt(&ok,10);
        ui->comboBox_3->setCurrentIndex(Bi2-1);
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        ui->search_textEdit->insertPlainText(timestr + " (收)<<--- 波特率:" + B +", 检验位:"+V+",停止位:"+S+ "\n");
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    }

    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (收)<<--- " + hexstring.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
     ui->search_textEdit->insertPlainText("\n");
    hexstring.clear();
    Dealdata.Recnum = 0;
    Dealdata.TcpRecflag = true ; //开接收
}

void Change485::on_SendFuntion_clicked()
{
      QString str = ui->lineEdit_2->text();
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

void Change485::on_SetBaud_clicked()
{
    QString Baud = "";
    if(ui->comboBox->currentText()=="1200")
        Baud = "01";
    else  if(ui->comboBox->currentText()=="2400")
        Baud = "02";
    else  if(ui->comboBox->currentText()=="4800")
        Baud = "03";
    else  if(ui->comboBox->currentText()=="9600")
        Baud = "04";
    else  if(ui->comboBox->currentText()=="19200")
        Baud = "05";
    else  if(ui->comboBox->currentText()=="38400")
        Baud = "06";
    else  if(ui->comboBox->currentText()=="115200")
        Baud = "07";

    QString verify="";
    if(ui->comboBox_2->currentText()=="None")
        verify="01";
    else if(ui->comboBox_2->currentText()=="Even")
        verify="02";
    else if(ui->comboBox_2->currentText()=="Odd")
        verify="03";

    QString Stop="";
    if(ui->comboBox_3->currentText()=="1")
        Stop="01";
    else if(ui->comboBox_3->currentText()=="2")
        Stop="02";
    QString Send="EEEEEB"+Baud+verify+Stop;
    qDebug()<<"4654654546546544";
    if(Send.length()==12)
    {
        QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
        QString timestr = time.toString("hh:mm:ss"); //设置显示格式
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + Send.toUpper() + "\n");
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！

        QByteArray ba = Send.toLatin1();
        char *sendtext = ba.data();
        QByteArray senddata = QString2Hex(sendtext);
        tcpSocket->write(senddata);
    }
    else
    {
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
        ui->search_textEdit->insertPlainText(" 请重新选择\n");
        ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    }



}

void Change485::on_GainBuad_clicked()
{
    QString Send ="EEEEEC";
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString timestr = time.toString("hh:mm:ss"); //设置显示格式
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！
    ui->search_textEdit->insertPlainText(timestr + " (发)--->> " + Send.toUpper() + "\n");
    ui->search_textEdit->moveCursor(QTextCursor::End);//光标移动到最后！

    QByteArray ba = Send.toLatin1();
    char *sendtext = ba.data();
    QByteArray senddata = QString2Hex(sendtext);
    tcpSocket->write(senddata);
}

void Change485::on_CllearFuntion_clicked()
{
    ui->search_textEdit->clear();
}
void Change485::closeEvent(QCloseEvent *event)
{
    //tcpSocket->close();
    QFile data("./IP.txt");
    if (data.open(QFile::WriteOnly | QIODevice::Truncate)) {
        QTextStream out(&data);
       QString strrr = ui->lineEdit->text();
       out << strrr;
    }
}
