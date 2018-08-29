#include "AlarmClock.h"
#include "ui_AlarmClock.h"
QString AlarmData;
AlarmClock::AlarmClock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlarmClock)
{
    ui->setupUi(this);

    ui->verticalSliderOpen->setMinimum(0);
    ui->verticalSliderOpen->setMaximum(23);
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(23);

    ui->verticalSlider_2->setMinimum(0);
    ui->verticalSlider_2->setMaximum(60);
    ui->spinBox_2->setMinimum(0);
    ui->spinBox_2->setMaximum(60);

    ui->verticalSlider_3->setMinimum(0);
    ui->verticalSlider_3->setMaximum(23);
    ui->spinBox_3->setMinimum(0);
    ui->spinBox_3->setMaximum(23);

    ui->verticalSlider_4->setMinimum(0);
    ui->verticalSlider_4->setMaximum(60);
    ui->spinBox_4->setMinimum(0);
    ui->spinBox_4->setMaximum(60);
    connect(receive_timer,SIGNAL(timeout()),this,SLOT(UPdatafuntion()));
    on_GainAlarm_clicked();
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);

}

AlarmClock::~AlarmClock()
{
    delete ui;
}

void AlarmClock::on_verticalSliderOpen_valueChanged(int value)
{
    qDebug("value::%d\n",value);
    ui->spinBox->setValue(value);
}

void AlarmClock::on_spinBox_valueChanged(int arg1)
{
    ui->verticalSliderOpen->setValue(arg1);
}

void AlarmClock::on_verticalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}

void AlarmClock::on_spinBox_2_valueChanged(int arg1)
{
    ui->verticalSlider_2->setValue(arg1);
}

void AlarmClock::on_verticalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
}

void AlarmClock::on_spinBox_4_valueChanged(int arg1)
{
     ui->verticalSlider_4->setValue(arg1);
}

void AlarmClock::on_verticalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
}

void AlarmClock::on_spinBox_3_valueChanged(int arg1)
{
     ui->verticalSlider_3->setValue(arg1);
}

void AlarmClock::on_SendAlarmData_clicked()
{
    QString str="";
    int i1= 0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0;
    QString str1 = ui->spinBox->text();
    if(str1.length()==1)
        str1="0"+str1;

    QString str2 = ui->spinBox_2->text();
    if(str2.length()==1)
        str2="0"+str2;

    QString str3 = ui->spinBox_3->text();
    if(str3.length()==1)
        str3="0"+str3;

    QString str4 = ui->spinBox_4->text();
    if(str4.length()==1)
        str4="0"+str4;
    str = str1+str2+str3+str4;
     qDebug()<<str;

     if( ui->checkBox->checkState() == Qt::Checked)
     {
        i1=0x02;
     }
     if( ui->checkBox_2->checkState() == Qt::Checked)
     {
        i2=0x04;
     }
     if( ui->checkBox_3->checkState() == Qt::Checked)
     {
        i3=0x08;
     }
     if( ui->checkBox_4->checkState() == Qt::Checked)
     {
        i4=0x10;
     }
     if( ui->checkBox_5->checkState() == Qt::Checked)
     {
        i5=0x20;
     }
     if( ui->checkBox_6->checkState() == Qt::Checked)
     {
        i6=0x40;
     }
     if( ui->checkBox_7->checkState() == Qt::Checked)
     {
        i7=0x01;
     }
     i8=i1+i2+i3+i4+i5+i6+i7;
      QString t = QString::number(i8, 16);
      if(t.length() == 1)
          t="0"+t;
     qDebug("i8::%d\n",i8);
     qDebug()<<t;
     emit(this->SendPack(str+t.toUpper()));
     receive_timer->start(100);
}

void AlarmClock::on_GainAlarm_clicked()
{
     emit(this->SendPack1());
    receive_timer->start(100);
}

void AlarmClock::UPdatafuntion()
{
    if(AlarmData.length()==10)
    {
        int num1 = AlarmData.mid(0,2).toInt();
        ui->spinBox->setValue(num1);
        int num2 = AlarmData.mid(2,2).toInt();
        ui->spinBox_2->setValue(num2);
        int num3 = AlarmData.mid(4,2).toInt();
        ui->spinBox_3->setValue(num3);
        int num4 = AlarmData.mid(6,2).toInt();
        ui->spinBox_4->setValue(num4);
        bool ok;
        int num5=AlarmData.mid(8,2).toInt(&ok,16);
        if(num5&2)
            ui->checkBox->setCheckState(Qt::Checked);
       if(num5&1)
            ui->checkBox_7->setCheckState(Qt::Checked);

       if(num5&4)
            ui->checkBox_2->setCheckState(Qt::Checked);

       if(num5&8)
            ui->checkBox_3->setCheckState(Qt::Checked);

       if(num5&16)
            ui->checkBox_4->setCheckState(Qt::Checked);
       if(num5&32)
            ui->checkBox_5->setCheckState(Qt::Checked);
       if(num5&64)
            ui->checkBox_6->setCheckState(Qt::Checked);

         receive_timer->stop();
         AlarmData.clear();

    }
}
