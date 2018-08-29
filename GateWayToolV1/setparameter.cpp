#include "SetParameter.h"
#include "ui_SetParameter.h"
#include "UdpSender.h"
SetParameter::SetParameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetParameter)
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


    ui->lineEditIP->setText( SetParameterData1[1]);
    ui->lineEditMask->setText( SetParameterData1[2]);
    ui->lineEditGateway->setText( SetParameterData1[3]);
    foreach (const btn_deal_Set &str, list)
    {

        if(SetParameterData1[0]==str.MAC)
        {

            ui->lineEdit->setText(str.TYPE);
        }
    }





}

SetParameter::~SetParameter()
{
    delete ui;
}



//功能:设置设备相关参数进行通信
//参数：没有参数
//返回值：没有返回值
void SetParameter::on_ModificationParameter_clicked()
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
       //QString::number(dec1, 10);
        QString str  = "AABBCCDDFF03"+ SetParameterData1[0]+ "IP:"+ui->lineEditIP->text()+"MASK:"+ ui->lineEditMask->text()+ "GATEWAY:"+ ui->lineEditGateway->text()+\
                       "name:"+ui->lineEdit->text();
        qDebug()<<str;
        emit(this->SendPack(str));
    }
    else
         QMessageBox::information(NULL, "选择错误", "没有IP，请重新填写!");


}





