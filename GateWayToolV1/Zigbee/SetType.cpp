#include "SetType.h"
#include "ui_SetType.h"
 QString QueryData;
SetType::SetType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetType)
{
    ui->setupUi(this);
    StateFuntion();
    connect(receive_timer,SIGNAL(timeout()),this,SLOT(UPdatafuntion()));
    receive_timer->start(500);
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
}

SetType::~SetType()
{
    delete ui;
}

void SetType::on_GainTypeFuntion_clicked()
{
     emit(this->SendPack());
    receive_timer->start(500);
}
void  SetType::UPdatafuntion()
{
    qDebug()<<   QueryData;
    ShowFuntion();
}

//功能:定时功能函数
//参数：没有
//返回值：没有
void SetType::sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);

    while(QTime::currentTime() < reachTime)
        QCoreApplication::processEvents(\
                    QEventLoop::AllEvents, 100);
}

void SetType::ShowFuntion()
{
   QString Data[100]={};

   QString Data1[100]={};

   for(int i=0;i<100;i++)
   {
       Data[i].clear();
       Data1[i].clear();
   }

   int Num =0;
   for(int i=0;QueryData.mid(i*18,16)!="";i++)
   {
       Data[i]=QueryData.toUpper().mid(i*18,16);
       Data1[i]=QueryData.toUpper().mid(i*18+16,2);
       Num++;
   }
   ui->lineEdit->setText(Data[0]);
   ui->lineEdit2->setText(Data[1]);
   ui->lineEdit3->setText(Data[2]);
   ui->lineEdit4->setText(Data[3]);
   ui->lineEdit5->setText(Data[4]);
   ui->lineEdit6->setText(Data[5]);
   ui->lineEdit7->setText(Data[6]);
   ui->lineEdit8->setText(Data[7]);
   ui->lineEdit9->setText(Data[8]);
   ui->lineEdit10->setText(Data[9]);

   ui->lineEdit11->setText(Data[10]);
   ui->lineEdit12->setText(Data[11]);
   ui->lineEdit13->setText(Data[12]);
   ui->lineEdit14->setText(Data[13]);
   ui->lineEdit15->setText(Data[14]);
   ui->lineEdit16->setText(Data[15]);
   ui->lineEdit17->setText(Data[16]);
   ui->lineEdit18->setText(Data[17]);
   ui->lineEdit19->setText(Data[18]);
   ui->lineEdit20->setText(Data[19]);

   ui->lineEdit21->setText(Data[20]);
   ui->lineEdit22->setText(Data[21]);
   ui->lineEdit23->setText(Data[22]);
   ui->lineEdit24->setText(Data[23]);
   ui->lineEdit25->setText(Data[24]);
   ui->lineEdit26->setText(Data[25]);
   ui->lineEdit27->setText(Data[26]);
   ui->lineEdit28->setText(Data[27]);
   ui->lineEdit29->setText(Data[28]);
   ui->lineEdit30->setText(Data[29]);

   ui->lineEdit31->setText(Data[30]);
   ui->lineEdit32->setText(Data[31]);
   ui->lineEdit33->setText(Data[32]);
   ui->lineEdit34->setText(Data[33]);
   ui->lineEdit35->setText(Data[34]);
   ui->lineEdit36->setText(Data[35]);
   ui->lineEdit37->setText(Data[36]);
   ui->lineEdit38->setText(Data[37]);
   ui->lineEdit39->setText(Data[38]);
   ui->lineEdit40->setText(Data[39]);

   ui->lineEdit41->setText(Data[40]);
   ui->lineEdit42->setText(Data[41]);
   ui->lineEdit43->setText(Data[42]);
   ui->lineEdit44->setText(Data[43]);
   ui->lineEdit45->setText(Data[44]);
   ui->lineEdit46->setText(Data[45]);
   ui->lineEdit47->setText(Data[46]);
   ui->lineEdit48->setText(Data[47]);
   ui->lineEdit49->setText(Data[48]);
   ui->lineEdit50->setText(Data[49]);

   ui->lineEdit51->setText(Data[50]);
   ui->lineEdit52->setText(Data[51]);
   ui->lineEdit53->setText(Data[52]);
   ui->lineEdit54->setText(Data[53]);
   ui->lineEdit55->setText(Data[54]);
   ui->lineEdit56->setText(Data[55]);
   ui->lineEdit57->setText(Data[56]);
   ui->lineEdit58->setText(Data[57]);
   ui->lineEdit59->setText(Data[58]);
   ui->lineEdit60->setText(Data[59]);

   ui->lineEdit60->setText(Data[60]);
   ui->lineEdit62->setText(Data[61]);
   ui->lineEdit63->setText(Data[62]);
   ui->lineEdit64->setText(Data[63]);
   ui->lineEdit65->setText(Data[64]);
   ui->lineEdit66->setText(Data[65]);
   ui->lineEdit67->setText(Data[66]);
   ui->lineEdit68->setText(Data[67]);
   ui->lineEdit69->setText(Data[68]);
   ui->lineEdit70->setText(Data[69]);

   ui->lineEdit71->setText(Data[70]);
   ui->lineEdit72->setText(Data[71]);
   ui->lineEdit73->setText(Data[72]);
   ui->lineEdit74->setText(Data[73]);
   ui->lineEdit75->setText(Data[74]);
   ui->lineEdit76->setText(Data[75]);
   ui->lineEdit77->setText(Data[76]);
   ui->lineEdit78->setText(Data[77]);
   ui->lineEdit79->setText(Data[78]);
   ui->lineEdit80->setText(Data[79]);

   ui->lineEdit81->setText(Data[80]);
   ui->lineEdit82->setText(Data[81]);
   ui->lineEdit83->setText(Data[82]);
   ui->lineEdit84->setText(Data[83]);
   ui->lineEdit85->setText(Data[84]);
   ui->lineEdit86->setText(Data[85]);
   ui->lineEdit87->setText(Data[86]);
   ui->lineEdit88->setText(Data[87]);
   ui->lineEdit89->setText(Data[88]);
   ui->lineEdit90->setText(Data[89]);

   ui->lineEdit91->setText(Data[90]);
   ui->lineEdit92->setText(Data[91]);
   ui->lineEdit93->setText(Data[92]);
   ui->lineEdit94->setText(Data[93]);
   ui->lineEdit95->setText(Data[94]);
   ui->lineEdit96->setText(Data[95]);
   ui->lineEdit97->setText(Data[96]);
   ui->lineEdit98->setText(Data[97]);
   ui->lineEdit99->setText(Data[98]);
   ui->lineEdit100->setText(Data[99]);

   bool ok;
   ui->comboBox->setCurrentIndex(Data1[0].toInt(&ok,10));
   ui->comboBox2->setCurrentIndex(Data1[1].toInt(&ok,10));
   ui->comboBox3->setCurrentIndex(Data1[2].toInt(&ok,10));
   ui->comboBox4->setCurrentIndex(Data1[3].toInt(&ok,10));
   ui->comboBox5->setCurrentIndex(Data1[4].toInt(&ok,10));
   ui->comboBox6->setCurrentIndex(Data1[5].toInt(&ok,10));
   ui->comboBox7->setCurrentIndex(Data1[6].toInt(&ok,10));
   ui->comboBox8->setCurrentIndex(Data1[7].toInt(&ok,10));
   ui->comboBox9->setCurrentIndex(Data1[8].toInt(&ok,10));
   ui->comboBox10->setCurrentIndex(Data1[9].toInt(&ok,10));

   ui->comboBox11->setCurrentIndex(Data1[10].toInt(&ok,10));
   ui->comboBox12->setCurrentIndex(Data1[11].toInt(&ok,10));
   ui->comboBox13->setCurrentIndex(Data1[12].toInt(&ok,10));
   ui->comboBox14->setCurrentIndex(Data1[13].toInt(&ok,10));
   ui->comboBox15->setCurrentIndex(Data1[14].toInt(&ok,10));
   ui->comboBox16->setCurrentIndex(Data1[15].toInt(&ok,10));
   ui->comboBox17->setCurrentIndex(Data1[16].toInt(&ok,10));
   ui->comboBox18->setCurrentIndex(Data1[17].toInt(&ok,10));
   ui->comboBox19->setCurrentIndex(Data1[18].toInt(&ok,10));
   ui->comboBox20->setCurrentIndex(Data1[19].toInt(&ok,10));

   ui->comboBox21->setCurrentIndex(Data1[20].toInt(&ok,10));
   ui->comboBox22->setCurrentIndex(Data1[21].toInt(&ok,10));
   ui->comboBox23->setCurrentIndex(Data1[22].toInt(&ok,10));
   ui->comboBox24->setCurrentIndex(Data1[23].toInt(&ok,10));
   ui->comboBox25->setCurrentIndex(Data1[24].toInt(&ok,10));
   ui->comboBox26->setCurrentIndex(Data1[25].toInt(&ok,10));
   ui->comboBox27->setCurrentIndex(Data1[26].toInt(&ok,10));
   ui->comboBox28->setCurrentIndex(Data1[27].toInt(&ok,10));
   ui->comboBox29->setCurrentIndex(Data1[28].toInt(&ok,10));
   ui->comboBox30->setCurrentIndex(Data1[29].toInt(&ok,10));

   ui->comboBox31->setCurrentIndex(Data1[30].toInt(&ok,10));
   ui->comboBox32->setCurrentIndex(Data1[31].toInt(&ok,10));
   ui->comboBox33->setCurrentIndex(Data1[32].toInt(&ok,10));
   ui->comboBox34->setCurrentIndex(Data1[33].toInt(&ok,10));
   ui->comboBox35->setCurrentIndex(Data1[34].toInt(&ok,10));
   ui->comboBox36->setCurrentIndex(Data1[35].toInt(&ok,10));
   ui->comboBox37->setCurrentIndex(Data1[36].toInt(&ok,10));
   ui->comboBox38->setCurrentIndex(Data1[37].toInt(&ok,10));
   ui->comboBox39->setCurrentIndex(Data1[38].toInt(&ok,10));
   ui->comboBox40->setCurrentIndex(Data1[39].toInt(&ok,10));

   ui->comboBox41->setCurrentIndex(Data1[40].toInt(&ok,10));
   ui->comboBox42->setCurrentIndex(Data1[41].toInt(&ok,10));
   ui->comboBox43->setCurrentIndex(Data1[42].toInt(&ok,10));
   ui->comboBox44->setCurrentIndex(Data1[43].toInt(&ok,10));
   ui->comboBox45->setCurrentIndex(Data1[44].toInt(&ok,10));
   ui->comboBox46->setCurrentIndex(Data1[45].toInt(&ok,10));
   ui->comboBox47->setCurrentIndex(Data1[46].toInt(&ok,10));
   ui->comboBox48->setCurrentIndex(Data1[47].toInt(&ok,10));
   ui->comboBox49->setCurrentIndex(Data1[48].toInt(&ok,10));
   ui->comboBox50->setCurrentIndex(Data1[49].toInt(&ok,10));

   ui->comboBox51->setCurrentIndex(Data1[50].toInt(&ok,10));
   ui->comboBox52->setCurrentIndex(Data1[51].toInt(&ok,10));
   ui->comboBox53->setCurrentIndex(Data1[52].toInt(&ok,10));
   ui->comboBox54->setCurrentIndex(Data1[53].toInt(&ok,10));
   ui->comboBox55->setCurrentIndex(Data1[54].toInt(&ok,10));
   ui->comboBox56->setCurrentIndex(Data1[55].toInt(&ok,10));
   ui->comboBox57->setCurrentIndex(Data1[56].toInt(&ok,10));
   ui->comboBox58->setCurrentIndex(Data1[57].toInt(&ok,10));
   ui->comboBox59->setCurrentIndex(Data1[58].toInt(&ok,10));
   ui->comboBox60->setCurrentIndex(Data1[59].toInt(&ok,10));

   ui->comboBox61->setCurrentIndex(Data1[60].toInt(&ok,10));
   ui->comboBox62->setCurrentIndex(Data1[61].toInt(&ok,10));
   ui->comboBox63->setCurrentIndex(Data1[62].toInt(&ok,10));
   ui->comboBox64->setCurrentIndex(Data1[63].toInt(&ok,10));
   ui->comboBox65->setCurrentIndex(Data1[64].toInt(&ok,10));
   ui->comboBox66->setCurrentIndex(Data1[65].toInt(&ok,10));
   ui->comboBox67->setCurrentIndex(Data1[66].toInt(&ok,10));
   ui->comboBox68->setCurrentIndex(Data1[67].toInt(&ok,10));
   ui->comboBox69->setCurrentIndex(Data1[68].toInt(&ok,10));
   ui->comboBox70->setCurrentIndex(Data1[69].toInt(&ok,10));


   ui->comboBox71->setCurrentIndex(Data1[70].toInt(&ok,10));
   ui->comboBox72->setCurrentIndex(Data1[71].toInt(&ok,10));
   ui->comboBox73->setCurrentIndex(Data1[72].toInt(&ok,10));
   ui->comboBox74->setCurrentIndex(Data1[73].toInt(&ok,10));
   ui->comboBox75->setCurrentIndex(Data1[74].toInt(&ok,10));
   ui->comboBox76->setCurrentIndex(Data1[75].toInt(&ok,10));
   ui->comboBox77->setCurrentIndex(Data1[76].toInt(&ok,10));
   ui->comboBox78->setCurrentIndex(Data1[77].toInt(&ok,10));
   ui->comboBox79->setCurrentIndex(Data1[78].toInt(&ok,10));
   ui->comboBox80->setCurrentIndex(Data1[79].toInt(&ok,10));

   ui->comboBox81->setCurrentIndex(Data1[80].toInt(&ok,10));
   ui->comboBox82->setCurrentIndex(Data1[81].toInt(&ok,10));
   ui->comboBox83->setCurrentIndex(Data1[82].toInt(&ok,10));
   ui->comboBox84->setCurrentIndex(Data1[83].toInt(&ok,10));
   ui->comboBox85->setCurrentIndex(Data1[84].toInt(&ok,10));
   ui->comboBox86->setCurrentIndex(Data1[85].toInt(&ok,10));
   ui->comboBox87->setCurrentIndex(Data1[86].toInt(&ok,10));
   ui->comboBox88->setCurrentIndex(Data1[87].toInt(&ok,10));
   ui->comboBox89->setCurrentIndex(Data1[88].toInt(&ok,10));
   ui->comboBox90->setCurrentIndex(Data1[89].toInt(&ok,10));

   ui->comboBox91->setCurrentIndex(Data1[90].toInt(&ok,10));
   ui->comboBox92->setCurrentIndex(Data1[91].toInt(&ok,10));
   ui->comboBox93->setCurrentIndex(Data1[92].toInt(&ok,10));
   ui->comboBox94->setCurrentIndex(Data1[93].toInt(&ok,10));
   ui->comboBox95->setCurrentIndex(Data1[94].toInt(&ok,10));
   ui->comboBox96->setCurrentIndex(Data1[95].toInt(&ok,10));
   ui->comboBox97->setCurrentIndex(Data1[96].toInt(&ok,10));
   ui->comboBox98->setCurrentIndex(Data1[97].toInt(&ok,10));
   ui->comboBox99->setCurrentIndex(Data1[98].toInt(&ok,10));
   ui->comboBox100->setCurrentIndex(Data1[99].toInt(&ok,10));



   receive_timer->stop();

}

void SetType::StateFuntion()
{
    QStringList Qstr;
     QString str ="";
    QString str1 ="液晶温控器";
     QString str2 ="分体空调";
     Qstr<<str<<str1<<str2;
    ui->comboBox->addItems(Qstr);
    ui->comboBox2->addItems(Qstr);
    ui->comboBox3->addItems(Qstr);
    ui->comboBox4->addItems(Qstr);
    ui->comboBox5->addItems(Qstr);
    ui->comboBox6->addItems(Qstr);
    ui->comboBox7->addItems(Qstr);
    ui->comboBox8->addItems(Qstr);
    ui->comboBox9->addItems(Qstr);
    ui->comboBox10->addItems(Qstr);

    ui->comboBox11->addItems(Qstr);
    ui->comboBox12->addItems(Qstr);
    ui->comboBox13->addItems(Qstr);
    ui->comboBox14->addItems(Qstr);
    ui->comboBox15->addItems(Qstr);
    ui->comboBox16->addItems(Qstr);
    ui->comboBox17->addItems(Qstr);
    ui->comboBox18->addItems(Qstr);
    ui->comboBox19->addItems(Qstr);
    ui->comboBox20->addItems(Qstr);

    ui->comboBox21->addItems(Qstr);
    ui->comboBox22->addItems(Qstr);
    ui->comboBox23->addItems(Qstr);
    ui->comboBox24->addItems(Qstr);
    ui->comboBox25->addItems(Qstr);
    ui->comboBox26->addItems(Qstr);
    ui->comboBox27->addItems(Qstr);
    ui->comboBox28->addItems(Qstr);
    ui->comboBox29->addItems(Qstr);
    ui->comboBox30->addItems(Qstr);

    ui->comboBox31->addItems(Qstr);
    ui->comboBox32->addItems(Qstr);
    ui->comboBox33->addItems(Qstr);
    ui->comboBox34->addItems(Qstr);
    ui->comboBox35->addItems(Qstr);
    ui->comboBox36->addItems(Qstr);
    ui->comboBox37->addItems(Qstr);
    ui->comboBox38->addItems(Qstr);
    ui->comboBox39->addItems(Qstr);
    ui->comboBox40->addItems(Qstr);

    ui->comboBox41->addItems(Qstr);
    ui->comboBox42->addItems(Qstr);
    ui->comboBox43->addItems(Qstr);
    ui->comboBox44->addItems(Qstr);
    ui->comboBox45->addItems(Qstr);
    ui->comboBox46->addItems(Qstr);
    ui->comboBox47->addItems(Qstr);
    ui->comboBox48->addItems(Qstr);
    ui->comboBox49->addItems(Qstr);
    ui->comboBox50->addItems(Qstr);

    ui->comboBox51->addItems(Qstr);
    ui->comboBox52->addItems(Qstr);
    ui->comboBox53->addItems(Qstr);
    ui->comboBox54->addItems(Qstr);
    ui->comboBox55->addItems(Qstr);
    ui->comboBox56->addItems(Qstr);
    ui->comboBox57->addItems(Qstr);
    ui->comboBox58->addItems(Qstr);
    ui->comboBox59->addItems(Qstr);
    ui->comboBox60->addItems(Qstr);

    ui->comboBox61->addItems(Qstr);
    ui->comboBox62->addItems(Qstr);
    ui->comboBox63->addItems(Qstr);
    ui->comboBox64->addItems(Qstr);
    ui->comboBox65->addItems(Qstr);
    ui->comboBox66->addItems(Qstr);
    ui->comboBox67->addItems(Qstr);
    ui->comboBox68->addItems(Qstr);
    ui->comboBox69->addItems(Qstr);
    ui->comboBox70->addItems(Qstr);

    ui->comboBox71->addItems(Qstr);
    ui->comboBox72->addItems(Qstr);
    ui->comboBox73->addItems(Qstr);
    ui->comboBox74->addItems(Qstr);
    ui->comboBox75->addItems(Qstr);
    ui->comboBox76->addItems(Qstr);
    ui->comboBox77->addItems(Qstr);
    ui->comboBox78->addItems(Qstr);
    ui->comboBox79->addItems(Qstr);
    ui->comboBox80->addItems(Qstr);

    ui->comboBox81->addItems(Qstr);
    ui->comboBox82->addItems(Qstr);
    ui->comboBox83->addItems(Qstr);
    ui->comboBox84->addItems(Qstr);
    ui->comboBox85->addItems(Qstr);
    ui->comboBox86->addItems(Qstr);
    ui->comboBox87->addItems(Qstr);
    ui->comboBox88->addItems(Qstr);
    ui->comboBox89->addItems(Qstr);
    ui->comboBox90->addItems(Qstr);

    ui->comboBox91->addItems(Qstr);
    ui->comboBox92->addItems(Qstr);
    ui->comboBox93->addItems(Qstr);
    ui->comboBox94->addItems(Qstr);
    ui->comboBox95->addItems(Qstr);
    ui->comboBox96->addItems(Qstr);
    ui->comboBox97->addItems(Qstr);
    ui->comboBox98->addItems(Qstr);
    ui->comboBox99->addItems(Qstr);
    ui->comboBox100->addItems(Qstr);
    ui->ComboBoxSelectAllFuntion->addItems(Qstr);
}

void SetType::on_ChangeTypeFuntion_clicked()
{
    QString get[101] = {};
    if( ui->checkBox->checkState() == Qt::Checked)
    {
        int str = ui->comboBox->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[1] = ui->lineEdit->text()+Str1;
    }

    if( ui->checkBox2->checkState() == Qt::Checked)
    {
        int str = ui->comboBox2->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[2] = ui->lineEdit2->text()+Str1;
    }

    if( ui->checkBox3->checkState() == Qt::Checked)
    {
        int str = ui->comboBox3->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[3] = ui->lineEdit3->text()+Str1;
    }

    if( ui->checkBox4->checkState() == Qt::Checked)
    {
        int str = ui->comboBox4->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[4] = ui->lineEdit4->text()+Str1;
    }

    if( ui->checkBox5->checkState() == Qt::Checked)
    {
        int str = ui->comboBox5->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[5] = ui->lineEdit5->text()+Str1;
    }

    if( ui->checkBox6->checkState() == Qt::Checked)
    {
        int str = ui->comboBox6->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[6] = ui->lineEdit6->text()+Str1;
    }

    if( ui->checkBox7->checkState() == Qt::Checked)
    {
        int str = ui->comboBox7->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[7] = ui->lineEdit7->text()+Str1;
    }

    if( ui->checkBox8->checkState() == Qt::Checked)
    {
        int str = ui->comboBox8->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[8] = ui->lineEdit8->text()+Str1;
    }

    if( ui->checkBox9->checkState() == Qt::Checked)
    {
        int str = ui->comboBox9->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[9] = ui->lineEdit9->text()+Str1;
    }

    if( ui->checkBox10->checkState() == Qt::Checked)
    {
        int str = ui->comboBox10->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[10] = ui->lineEdit10->text()+Str1;
    }

    if( ui->checkBox11->checkState() == Qt::Checked)
    {
        int str = ui->comboBox11->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[11] = ui->lineEdit11->text()+Str1;
    }

    if( ui->checkBox12->checkState() == Qt::Checked)
    {
        int str = ui->comboBox12->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[12] = ui->lineEdit12->text()+Str1;
    }

    if( ui->checkBox13->checkState() == Qt::Checked)
    {
        int str = ui->comboBox13->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[13] = ui->lineEdit13->text()+Str1;
    }

    if( ui->checkBox14->checkState() == Qt::Checked)
    {
        int str = ui->comboBox14->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[14] = ui->lineEdit14->text()+Str1;
    }

    if( ui->checkBox15->checkState() == Qt::Checked)
    {
        int str = ui->comboBox15->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[15] = ui->lineEdit15->text()+Str1;
    }

    if( ui->checkBox16->checkState() == Qt::Checked)
    {
        int str = ui->comboBox16->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[16] = ui->lineEdit16->text()+Str1;
    }

    if( ui->checkBox17->checkState() == Qt::Checked)
    {
        int str = ui->comboBox17->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[17] = ui->lineEdit17->text()+Str1;
    }

    if( ui->checkBox18->checkState() == Qt::Checked)
    {
        int str = ui->comboBox18->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[18] = ui->lineEdit18->text()+Str1;
    }

    if( ui->checkBox19->checkState() == Qt::Checked)
    {
        int str = ui->comboBox19->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[19] = ui->lineEdit19->text()+Str1;
    }

    if( ui->checkBox20->checkState() == Qt::Checked)
    {
        int str = ui->comboBox20->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[20] = ui->lineEdit20->text()+Str1;
    }


    if( ui->checkBox21->checkState() == Qt::Checked)
    {
        int str = ui->comboBox21->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[21] = ui->lineEdit21->text()+Str1;
    }

    if( ui->checkBox22->checkState() == Qt::Checked)
    {
        int str = ui->comboBox22->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[22] = ui->lineEdit22->text()+Str1;
    }

    if( ui->checkBox23->checkState() == Qt::Checked)
    {
        int str = ui->comboBox23->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[23] = ui->lineEdit23->text()+Str1;
    }

    if( ui->checkBox24->checkState() == Qt::Checked)
    {
        int str = ui->comboBox24->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[24] = ui->lineEdit24->text()+Str1;
    }

    if( ui->checkBox25->checkState() == Qt::Checked)
    {
        int str = ui->comboBox25->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[25] = ui->lineEdit25->text()+Str1;
    }

    if( ui->checkBox26->checkState() == Qt::Checked)
    {
        int str = ui->comboBox26->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[26] = ui->lineEdit26->text()+Str1;
    }

    if( ui->checkBox27->checkState() == Qt::Checked)
    {
        int str = ui->comboBox27->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[27] = ui->lineEdit27->text()+Str1;
    }

    if( ui->checkBox28->checkState() == Qt::Checked)
    {
        int str = ui->comboBox28->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[28] = ui->lineEdit28->text()+Str1;
    }

    if( ui->checkBox29->checkState() == Qt::Checked)
    {
        int str = ui->comboBox29->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[29] = ui->lineEdit29->text()+Str1;
    }

    if( ui->checkBox30->checkState() == Qt::Checked)
    {
        int str = ui->comboBox30->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[30] = ui->lineEdit30->text()+Str1;
    }

    if( ui->checkBox31->checkState() == Qt::Checked)
    {
        int str = ui->comboBox31->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[31] = ui->lineEdit31->text()+Str1;
    }

    if( ui->checkBox32->checkState() == Qt::Checked)
    {
        int str = ui->comboBox32->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[32] = ui->lineEdit32->text()+Str1;
    }

    if( ui->checkBox33->checkState() == Qt::Checked)
    {
        int str = ui->comboBox33->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[33] = ui->lineEdit33->text()+Str1;
    }

    if( ui->checkBox34->checkState() == Qt::Checked)
    {
        int str = ui->comboBox34->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[34] = ui->lineEdit34->text()+Str1;
    }

    if( ui->checkBox35->checkState() == Qt::Checked)
    {
        int str = ui->comboBox35->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[35] = ui->lineEdit35->text()+Str1;
    }

    if( ui->checkBox36->checkState() == Qt::Checked)
    {
        int str = ui->comboBox36->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[36] = ui->lineEdit36->text()+Str1;
    }

    if( ui->checkBox37->checkState() == Qt::Checked)
    {
        int str = ui->comboBox37->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[37] = ui->lineEdit37->text()+Str1;
    }

    if( ui->checkBox38->checkState() == Qt::Checked)
    {
        int str = ui->comboBox38->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[38] = ui->lineEdit38->text()+Str1;
    }

    if( ui->checkBox39->checkState() == Qt::Checked)
    {
        int str = ui->comboBox39->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[39] = ui->lineEdit39->text()+Str1;
    }

    if( ui->checkBox40->checkState() == Qt::Checked)
    {
        int str = ui->comboBox40->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[40] = ui->lineEdit40->text()+Str1;
    }


    if( ui->checkBox41->checkState() == Qt::Checked)
    {
        int str = ui->comboBox41->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[41] = ui->lineEdit41->text()+Str1;
    }

    if( ui->checkBox42->checkState() == Qt::Checked)
    {
        int str = ui->comboBox42->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[42] = ui->lineEdit42->text()+Str1;
    }

    if( ui->checkBox43->checkState() == Qt::Checked)
    {
        int str = ui->comboBox43->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[43] = ui->lineEdit43->text()+Str1;
    }

    if( ui->checkBox44->checkState() == Qt::Checked)
    {
        int str = ui->comboBox44->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[44] = ui->lineEdit44->text()+Str1;
    }

    if( ui->checkBox45->checkState() == Qt::Checked)
    {
        int str = ui->comboBox45->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[45] = ui->lineEdit45->text()+Str1;
    }

    if( ui->checkBox46->checkState() == Qt::Checked)
    {
        int str = ui->comboBox46->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[46] = ui->lineEdit46->text()+Str1;
    }

    if( ui->checkBox47->checkState() == Qt::Checked)
    {
        int str = ui->comboBox47->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[47] = ui->lineEdit47->text()+Str1;
    }

    if( ui->checkBox48->checkState() == Qt::Checked)
    {
        int str = ui->comboBox48->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[48] = ui->lineEdit48->text()+Str1;
    }

    if( ui->checkBox49->checkState() == Qt::Checked)
    {
        int str = ui->comboBox49->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[49] = ui->lineEdit49->text()+Str1;
    }

    if( ui->checkBox50->checkState() == Qt::Checked)
    {
        int str = ui->comboBox50->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[50] = ui->lineEdit50->text()+Str1;
    }

    if( ui->checkBox51->checkState() == Qt::Checked)
    {
        int str = ui->comboBox51->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[51] = ui->lineEdit51->text()+Str1;
    }

    if( ui->checkBox52->checkState() == Qt::Checked)
    {
        int str = ui->comboBox52->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[52] = ui->lineEdit52->text()+Str1;
    }

    if( ui->checkBox53->checkState() == Qt::Checked)
    {
        int str = ui->comboBox53->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[53] = ui->lineEdit53->text()+Str1;
    }

    if( ui->checkBox54->checkState() == Qt::Checked)
    {
        int str = ui->comboBox54->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[54] = ui->lineEdit54->text()+Str1;
    }

    if( ui->checkBox55->checkState() == Qt::Checked)
    {
        int str = ui->comboBox55->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[55] = ui->lineEdit55->text()+Str1;
    }

    if( ui->checkBox56->checkState() == Qt::Checked)
    {
        int str = ui->comboBox56->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[56] = ui->lineEdit56->text()+Str1;
    }

    if( ui->checkBox57->checkState() == Qt::Checked)
    {
        int str = ui->comboBox57->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[57] = ui->lineEdit57->text()+Str1;
    }

    if( ui->checkBox58->checkState() == Qt::Checked)
    {
        int str = ui->comboBox58->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[58] = ui->lineEdit58->text()+Str1;
    }

    if( ui->checkBox59->checkState() == Qt::Checked)
    {
        int str = ui->comboBox59->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[59] = ui->lineEdit59->text()+Str1;
    }

    if( ui->checkBox60->checkState() == Qt::Checked)
    {
        int str = ui->comboBox60->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[60] = ui->lineEdit60->text()+Str1;
    }


    if( ui->checkBox61->checkState() == Qt::Checked)
    {
        int str = ui->comboBox61->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[61] = ui->lineEdit61->text()+Str1;
    }

    if( ui->checkBox62->checkState() == Qt::Checked)
    {
        int str = ui->comboBox62->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[62] = ui->lineEdit62->text()+Str1;
    }

    if( ui->checkBox63->checkState() == Qt::Checked)
    {
        int str = ui->comboBox63->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[63] = ui->lineEdit63->text()+Str1;
    }

    if( ui->checkBox64->checkState() == Qt::Checked)
    {
        int str = ui->comboBox64->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[64] = ui->lineEdit64->text()+Str1;
    }

    if( ui->checkBox65->checkState() == Qt::Checked)
    {
        int str = ui->comboBox65->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[65] = ui->lineEdit65->text()+Str1;
    }

    if( ui->checkBox66->checkState() == Qt::Checked)
    {
        int str = ui->comboBox66->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[66] = ui->lineEdit66->text()+Str1;
    }

    if( ui->checkBox67->checkState() == Qt::Checked)
    {
        int str = ui->comboBox67->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[67] = ui->lineEdit67->text()+Str1;
    }

    if( ui->checkBox68->checkState() == Qt::Checked)
    {
        int str = ui->comboBox68->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[68] = ui->lineEdit68->text()+Str1;
    }

    if( ui->checkBox69->checkState() == Qt::Checked)
    {
        int str = ui->comboBox69->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[69] = ui->lineEdit69->text()+Str1;
    }

    if( ui->checkBox70->checkState() == Qt::Checked)
    {
        int str = ui->comboBox70->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[70] = ui->lineEdit70->text()+Str1;
    }

    if( ui->checkBox71->checkState() == Qt::Checked)
    {
        int str = ui->comboBox71->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[71] = ui->lineEdit71->text()+Str1;
    }

    if( ui->checkBox72->checkState() == Qt::Checked)
    {
        int str = ui->comboBox72->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[72] = ui->lineEdit72->text()+Str1;
    }

    if( ui->checkBox73->checkState() == Qt::Checked)
    {
        int str = ui->comboBox73->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[73] = ui->lineEdit73->text()+Str1;
    }

    if( ui->checkBox74->checkState() == Qt::Checked)
    {
        int str = ui->comboBox74->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[74] = ui->lineEdit74->text()+Str1;
    }

    if( ui->checkBox75->checkState() == Qt::Checked)
    {
        int str = ui->comboBox75->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[75] = ui->lineEdit75->text()+Str1;
    }

    if( ui->checkBox76->checkState() == Qt::Checked)
    {
        int str = ui->comboBox76->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[76] = ui->lineEdit76->text()+Str1;
    }

    if( ui->checkBox77->checkState() == Qt::Checked)
    {
        int str = ui->comboBox77->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[77] = ui->lineEdit77->text()+Str1;
    }

    if( ui->checkBox78->checkState() == Qt::Checked)
    {
        int str = ui->comboBox78->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[78] = ui->lineEdit78->text()+Str1;
    }

    if( ui->checkBox79->checkState() == Qt::Checked)
    {
        int str = ui->comboBox79->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[79] = ui->lineEdit79->text()+Str1;
    }

    if( ui->checkBox80->checkState() == Qt::Checked)
    {
        int str = ui->comboBox80->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[80] = ui->lineEdit80->text()+Str1;
    }

    if( ui->checkBox81->checkState() == Qt::Checked)
    {
        int str = ui->comboBox81->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[81] = ui->lineEdit81->text()+Str1;
    }

    if( ui->checkBox82->checkState() == Qt::Checked)
    {
        int str = ui->comboBox82->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[82] = ui->lineEdit82->text()+Str1;
    }

    if( ui->checkBox83->checkState() == Qt::Checked)
    {
        int str = ui->comboBox83->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[83] = ui->lineEdit83->text()+Str1;
    }

    if( ui->checkBox84->checkState() == Qt::Checked)
    {
        int str = ui->comboBox84->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[84] = ui->lineEdit84->text()+Str1;
    }

    if( ui->checkBox85->checkState() == Qt::Checked)
    {
        int str = ui->comboBox85->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[85] = ui->lineEdit85->text()+Str1;
    }

    if( ui->checkBox86->checkState() == Qt::Checked)
    {
        int str = ui->comboBox86->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[86] = ui->lineEdit86->text()+Str1;
    }

    if( ui->checkBox7->checkState() == Qt::Checked)
    {
        int str = ui->comboBox87->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[87] = ui->lineEdit87->text()+Str1;
    }

    if( ui->checkBox88->checkState() == Qt::Checked)
    {
        int str = ui->comboBox8->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[8] = ui->lineEdit8->text()+Str1;
    }

    if( ui->checkBox89->checkState() == Qt::Checked)
    {
        int str = ui->comboBox89->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[89] = ui->lineEdit89->text()+Str1;
    }

    if( ui->checkBox90->checkState() == Qt::Checked)
    {
        int str = ui->comboBox90->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[90] = ui->lineEdit90->text()+Str1;
    }

    if( ui->checkBox91->checkState() == Qt::Checked)
    {
        int str = ui->comboBox91->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[91] = ui->lineEdit91->text()+Str1;
    }

    if( ui->checkBox92->checkState() == Qt::Checked)
    {
        int str = ui->comboBox92->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[92] = ui->lineEdit92->text()+Str1;
    }

    if( ui->checkBox93->checkState() == Qt::Checked)
    {
        int str = ui->comboBox93->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[93] = ui->lineEdit93->text()+Str1;
    }

    if( ui->checkBox94->checkState() == Qt::Checked)
    {
        int str = ui->comboBox94->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[94] = ui->lineEdit94->text()+Str1;
    }

    if( ui->checkBox95->checkState() == Qt::Checked)
    {
        int str = ui->comboBox95->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[95] = ui->lineEdit95->text()+Str1;
    }

    if( ui->checkBox96->checkState() == Qt::Checked)
    {
        int str = ui->comboBox96->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[96] = ui->lineEdit96->text()+Str1;
    }

    if( ui->checkBox97->checkState() == Qt::Checked)
    {
        int str = ui->comboBox97->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[97] = ui->lineEdit97->text()+Str1;
    }

    if( ui->checkBox98->checkState() == Qt::Checked)
    {
        int str = ui->comboBox98->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[98] = ui->lineEdit98->text()+Str1;
    }

    if( ui->checkBox99->checkState() == Qt::Checked)
    {
        int str = ui->comboBox99->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[99] = ui->lineEdit99->text()+Str1;
    }

    if( ui->checkBox100->checkState() == Qt::Checked)
    {
        int str = ui->comboBox100->currentIndex();
        QString Str1 = QString::number(str,16);
        if(Str1.length()==1)
            Str1 ="0"+Str1;
         get[100] = ui->lineEdit100->text()+Str1;
    }

    for(int i = 1; i<101; i++)
    {
       if(get[i].length()==18){
            get[i].replace(" ","");
            get[0] += get[i];
       }
    }

    qDebug()<<"get[0]::"+get[0];

      emit(this->SendPack1(get[0]));
    sleep(1000);
  on_GainTypeFuntion_clicked();

  ui->checkBox->setCheckState(Qt::Unchecked);
  ui->checkBox2->setCheckState(Qt::Unchecked);
  ui->checkBox3->setCheckState(Qt::Unchecked);
  ui->checkBox4->setCheckState(Qt::Unchecked);
  ui->checkBox5->setCheckState(Qt::Unchecked);
  ui->checkBox6->setCheckState(Qt::Unchecked);
  ui->checkBox7->setCheckState(Qt::Unchecked);
  ui->checkBox8->setCheckState(Qt::Unchecked);
  ui->checkBox9->setCheckState(Qt::Unchecked);
  ui->checkBox10->setCheckState(Qt::Unchecked);

  ui->checkBox11->setCheckState(Qt::Unchecked);
  ui->checkBox12->setCheckState(Qt::Unchecked);
  ui->checkBox13->setCheckState(Qt::Unchecked);
  ui->checkBox14->setCheckState(Qt::Unchecked);
  ui->checkBox15->setCheckState(Qt::Unchecked);
  ui->checkBox16->setCheckState(Qt::Unchecked);
  ui->checkBox17->setCheckState(Qt::Unchecked);
  ui->checkBox18->setCheckState(Qt::Unchecked);
  ui->checkBox19->setCheckState(Qt::Unchecked);
  ui->checkBox20->setCheckState(Qt::Unchecked);

  ui->checkBox21->setCheckState(Qt::Unchecked);
  ui->checkBox22->setCheckState(Qt::Unchecked);
  ui->checkBox23->setCheckState(Qt::Unchecked);
  ui->checkBox24->setCheckState(Qt::Unchecked);
  ui->checkBox25->setCheckState(Qt::Unchecked);
  ui->checkBox26->setCheckState(Qt::Unchecked);
  ui->checkBox27->setCheckState(Qt::Unchecked);
  ui->checkBox28->setCheckState(Qt::Unchecked);
  ui->checkBox29->setCheckState(Qt::Unchecked);
  ui->checkBox30->setCheckState(Qt::Unchecked);

  ui->checkBox31->setCheckState(Qt::Unchecked);
  ui->checkBox32->setCheckState(Qt::Unchecked);
  ui->checkBox33->setCheckState(Qt::Unchecked);
  ui->checkBox34->setCheckState(Qt::Unchecked);
  ui->checkBox35->setCheckState(Qt::Unchecked);
  ui->checkBox36->setCheckState(Qt::Unchecked);
  ui->checkBox37->setCheckState(Qt::Unchecked);
  ui->checkBox38->setCheckState(Qt::Unchecked);
  ui->checkBox39->setCheckState(Qt::Unchecked);
  ui->checkBox40->setCheckState(Qt::Unchecked);

  ui->checkBox41->setCheckState(Qt::Unchecked);
  ui->checkBox42->setCheckState(Qt::Unchecked);
  ui->checkBox43->setCheckState(Qt::Unchecked);
  ui->checkBox44->setCheckState(Qt::Unchecked);
  ui->checkBox45->setCheckState(Qt::Unchecked);
  ui->checkBox46->setCheckState(Qt::Unchecked);
  ui->checkBox47->setCheckState(Qt::Unchecked);
  ui->checkBox48->setCheckState(Qt::Unchecked);
  ui->checkBox49->setCheckState(Qt::Unchecked);
  ui->checkBox50->setCheckState(Qt::Unchecked);

  ui->checkBox51->setCheckState(Qt::Unchecked);
  ui->checkBox52->setCheckState(Qt::Unchecked);
  ui->checkBox53->setCheckState(Qt::Unchecked);
  ui->checkBox54->setCheckState(Qt::Unchecked);
  ui->checkBox55->setCheckState(Qt::Unchecked);
  ui->checkBox56->setCheckState(Qt::Unchecked);
  ui->checkBox57->setCheckState(Qt::Unchecked);
  ui->checkBox58->setCheckState(Qt::Unchecked);
  ui->checkBox59->setCheckState(Qt::Unchecked);
  ui->checkBox60->setCheckState(Qt::Unchecked);

  ui->checkBox61->setCheckState(Qt::Unchecked);
  ui->checkBox62->setCheckState(Qt::Unchecked);
  ui->checkBox63->setCheckState(Qt::Unchecked);
  ui->checkBox64->setCheckState(Qt::Unchecked);
  ui->checkBox65->setCheckState(Qt::Unchecked);
  ui->checkBox66->setCheckState(Qt::Unchecked);
  ui->checkBox67->setCheckState(Qt::Unchecked);
  ui->checkBox68->setCheckState(Qt::Unchecked);
  ui->checkBox69->setCheckState(Qt::Unchecked);
  ui->checkBox70->setCheckState(Qt::Unchecked);

  ui->checkBox71->setCheckState(Qt::Unchecked);
  ui->checkBox72->setCheckState(Qt::Unchecked);
  ui->checkBox73->setCheckState(Qt::Unchecked);
  ui->checkBox74->setCheckState(Qt::Unchecked);
  ui->checkBox75->setCheckState(Qt::Unchecked);
  ui->checkBox76->setCheckState(Qt::Unchecked);
  ui->checkBox77->setCheckState(Qt::Unchecked);
  ui->checkBox78->setCheckState(Qt::Unchecked);
  ui->checkBox79->setCheckState(Qt::Unchecked);
  ui->checkBox80->setCheckState(Qt::Unchecked);

  ui->checkBox81->setCheckState(Qt::Unchecked);
  ui->checkBox82->setCheckState(Qt::Unchecked);
  ui->checkBox83->setCheckState(Qt::Unchecked);
  ui->checkBox84->setCheckState(Qt::Unchecked);
  ui->checkBox85->setCheckState(Qt::Unchecked);
  ui->checkBox86->setCheckState(Qt::Unchecked);
  ui->checkBox87->setCheckState(Qt::Unchecked);
  ui->checkBox88->setCheckState(Qt::Unchecked);
  ui->checkBox89->setCheckState(Qt::Unchecked);
  ui->checkBox90->setCheckState(Qt::Unchecked);

  ui->checkBox91->setCheckState(Qt::Unchecked);
  ui->checkBox92->setCheckState(Qt::Unchecked);
  ui->checkBox93->setCheckState(Qt::Unchecked);
  ui->checkBox94->setCheckState(Qt::Unchecked);
  ui->checkBox95->setCheckState(Qt::Unchecked);
  ui->checkBox96->setCheckState(Qt::Unchecked);
  ui->checkBox97->setCheckState(Qt::Unchecked);
  ui->checkBox98->setCheckState(Qt::Unchecked);
  ui->checkBox99->setCheckState(Qt::Unchecked);
  ui->checkBox100->setCheckState(Qt::Unchecked);



}

void SetType::on_SelectAllFuntion_clicked()
{
    int Num = ui->ComboBoxSelectAllFuntion->currentIndex();
    if(ui->lineEdit->text()!="")
    {
         ui->checkBox->setCheckState(Qt::Checked);
        ui->comboBox->setCurrentIndex(Num);
    }

    if(ui->lineEdit2->text()!="")
    {
         ui->checkBox2->setCheckState(Qt::Checked);
        ui->comboBox2->setCurrentIndex(Num);
    }

    if(ui->lineEdit3->text()!="")
    {
         ui->checkBox3->setCheckState(Qt::Checked);
        ui->comboBox3->setCurrentIndex(Num);
    }

    if(ui->lineEdit4->text()!="")
    {
         ui->checkBox4->setCheckState(Qt::Checked);
        ui->comboBox4->setCurrentIndex(Num);
    }
    if(ui->lineEdit5->text()!="")
    {
         ui->checkBox5->setCheckState(Qt::Checked);
        ui->comboBox5->setCurrentIndex(Num);
    }

    if(ui->lineEdit6->text()!="")
    {
         ui->checkBox6->setCheckState(Qt::Checked);
        ui->comboBox6->setCurrentIndex(Num);
    }
    if(ui->lineEdit7->text()!="")
    {
         ui->checkBox7->setCheckState(Qt::Checked);
        ui->comboBox7->setCurrentIndex(Num);
    }
    if(ui->lineEdit8->text()!="")
    {
         ui->checkBox8->setCheckState(Qt::Checked);
        ui->comboBox8->setCurrentIndex(Num);
    }
    if(ui->lineEdit9->text()!="")
    {
         ui->checkBox9->setCheckState(Qt::Checked);
        ui->comboBox9->setCurrentIndex(Num);
    }
    if(ui->lineEdit10->text()!="")
    {
         ui->checkBox10->setCheckState(Qt::Checked);
        ui->comboBox10->setCurrentIndex(Num);
    }


    if(ui->lineEdit11->text()!="")
    {
         ui->checkBox11->setCheckState(Qt::Checked);
        ui->comboBox11->setCurrentIndex(Num);
    }

    if(ui->lineEdit12->text()!="")
    {
         ui->checkBox12->setCheckState(Qt::Checked);
        ui->comboBox12->setCurrentIndex(Num);
    }

    if(ui->lineEdit13->text()!="")
    {
         ui->checkBox13->setCheckState(Qt::Checked);
        ui->comboBox13->setCurrentIndex(Num);
    }

    if(ui->lineEdit14->text()!="")
    {
         ui->checkBox14->setCheckState(Qt::Checked);
        ui->comboBox14->setCurrentIndex(Num);
    }
    if(ui->lineEdit15->text()!="")
    {
         ui->checkBox15->setCheckState(Qt::Checked);
        ui->comboBox15->setCurrentIndex(Num);
    }
    if(ui->lineEdit16->text()!="")
    {
         ui->checkBox16->setCheckState(Qt::Checked);
        ui->comboBox16->setCurrentIndex(Num);
    }
    if(ui->lineEdit17->text()!="")
    {
         ui->checkBox17->setCheckState(Qt::Checked);
        ui->comboBox17->setCurrentIndex(Num);
    }
    if(ui->lineEdit18->text()!="")
    {
         ui->checkBox18->setCheckState(Qt::Checked);
        ui->comboBox18->setCurrentIndex(Num);
    }
    if(ui->lineEdit19->text()!="")
    {
         ui->checkBox19->setCheckState(Qt::Checked);
        ui->comboBox19->setCurrentIndex(Num);

    }
    if(ui->lineEdit20->text()!="")
    {
         ui->checkBox20->setCheckState(Qt::Checked);
        ui->comboBox20->setCurrentIndex(Num);
    }

    if(ui->lineEdit21->text()!="")
    {
         ui->checkBox21->setCheckState(Qt::Checked);
        ui->comboBox21->setCurrentIndex(Num);
    }

    if(ui->lineEdit22->text()!="")
    {
         ui->checkBox22->setCheckState(Qt::Checked);
        ui->comboBox22->setCurrentIndex(Num);
    }

    if(ui->lineEdit23->text()!="")
    {
         ui->checkBox23->setCheckState(Qt::Checked);
        ui->comboBox23->setCurrentIndex(Num);
    }

    if(ui->lineEdit24->text()!="")
    {
         ui->checkBox24->setCheckState(Qt::Checked);
        ui->comboBox24->setCurrentIndex(Num);
    }
    if(ui->lineEdit25->text()!="")
    {
         ui->checkBox25->setCheckState(Qt::Checked);
        ui->comboBox25->setCurrentIndex(Num);
    }
    if(ui->lineEdit26->text()!="")
    {
         ui->checkBox26->setCheckState(Qt::Checked);
        ui->comboBox26->setCurrentIndex(Num);
    }
    if(ui->lineEdit27->text()!="")
    {
         ui->checkBox27->setCheckState(Qt::Checked);
        ui->comboBox27->setCurrentIndex(Num);
    }
    if(ui->lineEdit28->text()!="")
    {
         ui->checkBox28->setCheckState(Qt::Checked);
        ui->comboBox28->setCurrentIndex(Num);
    }
    if(ui->lineEdit29->text()!="")
    {
         ui->checkBox29->setCheckState(Qt::Checked);
        ui->comboBox29->setCurrentIndex(Num);

    }


    if(ui->lineEdit30->text()!="")
    {
         ui->checkBox30->setCheckState(Qt::Checked);
        ui->comboBox30->setCurrentIndex(Num);
    }

    if(ui->lineEdit31->text()!="")
    {
         ui->checkBox31->setCheckState(Qt::Checked);
        ui->comboBox31->setCurrentIndex(Num);
    }

    if(ui->lineEdit32->text()!="")
    {
         ui->checkBox32->setCheckState(Qt::Checked);
        ui->comboBox32->setCurrentIndex(Num);
    }

    if(ui->lineEdit33->text()!="")
    {
         ui->checkBox33->setCheckState(Qt::Checked);
        ui->comboBox33->setCurrentIndex(Num);
    }

    if(ui->lineEdit34->text()!="")
    {
         ui->checkBox34->setCheckState(Qt::Checked);
        ui->comboBox34->setCurrentIndex(Num);
    }
    if(ui->lineEdit35->text()!="")
    {
         ui->checkBox35->setCheckState(Qt::Checked);
        ui->comboBox35->setCurrentIndex(Num);
    }
    if(ui->lineEdit36->text()!="")
    {
         ui->checkBox36->setCheckState(Qt::Checked);
        ui->comboBox36->setCurrentIndex(Num);
    }
    if(ui->lineEdit37->text()!="")
    {
         ui->checkBox37->setCheckState(Qt::Checked);
        ui->comboBox37->setCurrentIndex(Num);
    }
    if(ui->lineEdit38->text()!="")
    {
         ui->checkBox38->setCheckState(Qt::Checked);
        ui->comboBox38->setCurrentIndex(Num);
    }
    if(ui->lineEdit39->text()!="")
    {
         ui->checkBox39->setCheckState(Qt::Checked);
        ui->comboBox39->setCurrentIndex(Num);
    }

    if(ui->lineEdit40->text()!="")
    {
         ui->checkBox40->setCheckState(Qt::Checked);
        ui->comboBox40->setCurrentIndex(Num);
    }

    if(ui->lineEdit41->text()!="")
    {
         ui->checkBox41->setCheckState(Qt::Checked);
        ui->comboBox41->setCurrentIndex(Num);
    }

    if(ui->lineEdit42->text()!="")
    {
         ui->checkBox42->setCheckState(Qt::Checked);
        ui->comboBox42->setCurrentIndex(Num);
    }

    if(ui->lineEdit43->text()!="")
    {
         ui->checkBox43->setCheckState(Qt::Checked);
        ui->comboBox43->setCurrentIndex(Num);
    }

    if(ui->lineEdit44->text()!="")
    {
         ui->checkBox44->setCheckState(Qt::Checked);
        ui->comboBox44->setCurrentIndex(Num);
    }
    if(ui->lineEdit45->text()!="")
    {
         ui->checkBox45->setCheckState(Qt::Checked);
        ui->comboBox45->setCurrentIndex(Num);
    }

    if(ui->lineEdit46->text()!="")
    {
         ui->checkBox46->setCheckState(Qt::Checked);
        ui->comboBox46->setCurrentIndex(Num);
    }
    if(ui->lineEdit47->text()!="")
    {
         ui->checkBox47->setCheckState(Qt::Checked);
        ui->comboBox47->setCurrentIndex(Num);
    }
    if(ui->lineEdit48->text()!="")
    {
         ui->checkBox48->setCheckState(Qt::Checked);
        ui->comboBox48->setCurrentIndex(Num);
    }
    if(ui->lineEdit49->text()!="")
    {
         ui->checkBox49->setCheckState(Qt::Checked);
        ui->comboBox49->setCurrentIndex(Num);
    }
    if(ui->lineEdit50->text()!="")
    {
         ui->checkBox50->setCheckState(Qt::Checked);
        ui->comboBox50->setCurrentIndex(Num);
    }

    if(ui->lineEdit51->text()!="")
    {
         ui->checkBox51->setCheckState(Qt::Checked);
        ui->comboBox51->setCurrentIndex(Num);
    }

    if(ui->lineEdit52->text()!="")
    {
         ui->checkBox52->setCheckState(Qt::Checked);
        ui->comboBox52->setCurrentIndex(Num);
    }

    if(ui->lineEdit53->text()!="")
    {
         ui->checkBox53->setCheckState(Qt::Checked);
        ui->comboBox53->setCurrentIndex(Num);
    }

    if(ui->lineEdit54->text()!="")
    {
         ui->checkBox54->setCheckState(Qt::Checked);
        ui->comboBox54->setCurrentIndex(Num);
    }
    if(ui->lineEdit55->text()!="")
    {
         ui->checkBox55->setCheckState(Qt::Checked);
        ui->comboBox55->setCurrentIndex(Num);
    }

    if(ui->lineEdit56->text()!="")
    {
         ui->checkBox56->setCheckState(Qt::Checked);
        ui->comboBox56->setCurrentIndex(Num);
    }
    if(ui->lineEdit57->text()!="")
    {
         ui->checkBox57->setCheckState(Qt::Checked);
        ui->comboBox57->setCurrentIndex(Num);
    }
    if(ui->lineEdit58->text()!="")
    {
         ui->checkBox58->setCheckState(Qt::Checked);
        ui->comboBox58->setCurrentIndex(Num);
    }
    if(ui->lineEdit59->text()!="")
    {
         ui->checkBox59->setCheckState(Qt::Checked);
        ui->comboBox9->setCurrentIndex(Num);
    }
    if(ui->lineEdit60->text()!="")
    {
         ui->checkBox60->setCheckState(Qt::Checked);
        ui->comboBox60->setCurrentIndex(Num);
    }

    if(ui->lineEdit61->text()!="")
    {
         ui->checkBox61->setCheckState(Qt::Checked);
        ui->comboBox61->setCurrentIndex(Num);
    }

    if(ui->lineEdit62->text()!="")
    {
         ui->checkBox62->setCheckState(Qt::Checked);
        ui->comboBox62->setCurrentIndex(Num);
    }

    if(ui->lineEdit63->text()!="")
    {
         ui->checkBox63->setCheckState(Qt::Checked);
        ui->comboBox63->setCurrentIndex(Num);
    }

    if(ui->lineEdit64->text()!="")
    {
         ui->checkBox64->setCheckState(Qt::Checked);
        ui->comboBox64->setCurrentIndex(Num);
    }
    if(ui->lineEdit65->text()!="")
    {
         ui->checkBox65->setCheckState(Qt::Checked);
        ui->comboBox65->setCurrentIndex(Num);
    }

    if(ui->lineEdit66->text()!="")
    {
         ui->checkBox66->setCheckState(Qt::Checked);
        ui->comboBox66->setCurrentIndex(Num);
    }
    if(ui->lineEdit67->text()!="")
    {
         ui->checkBox67->setCheckState(Qt::Checked);
        ui->comboBox67->setCurrentIndex(Num);
    }
    if(ui->lineEdit68->text()!="")
    {
         ui->checkBox68->setCheckState(Qt::Checked);
        ui->comboBox68->setCurrentIndex(Num);
    }
    if(ui->lineEdit69->text()!="")
    {
         ui->checkBox69->setCheckState(Qt::Checked);
        ui->comboBox69->setCurrentIndex(Num);
    }
    if(ui->lineEdit70->text()!="")
    {
         ui->checkBox70->setCheckState(Qt::Checked);
        ui->comboBox70->setCurrentIndex(Num);
    }

    if(ui->lineEdit71->text()!="")
    {
         ui->checkBox71->setCheckState(Qt::Checked);
        ui->comboBox71->setCurrentIndex(Num);
    }

    if(ui->lineEdit72->text()!="")
    {
         ui->checkBox72->setCheckState(Qt::Checked);
        ui->comboBox72->setCurrentIndex(Num);
    }

    if(ui->lineEdit73->text()!="")
    {
         ui->checkBox73->setCheckState(Qt::Checked);
        ui->comboBox73->setCurrentIndex(Num);
    }

    if(ui->lineEdit74->text()!="")
    {
         ui->checkBox74->setCheckState(Qt::Checked);
        ui->comboBox74->setCurrentIndex(Num);
    }
    if(ui->lineEdit75->text()!="")
    {
         ui->checkBox75->setCheckState(Qt::Checked);
        ui->comboBox75->setCurrentIndex(Num);
    }

    if(ui->lineEdit76->text()!="")
    {
         ui->checkBox76->setCheckState(Qt::Checked);
        ui->comboBox76->setCurrentIndex(Num);
    }
    if(ui->lineEdit77->text()!="")
    {
         ui->checkBox77->setCheckState(Qt::Checked);
        ui->comboBox77->setCurrentIndex(Num);
    }
    if(ui->lineEdit78->text()!="")
    {
         ui->checkBox78->setCheckState(Qt::Checked);
        ui->comboBox78->setCurrentIndex(Num);
    }
    if(ui->lineEdit79->text()!="")
    {
         ui->checkBox79->setCheckState(Qt::Checked);
        ui->comboBox79->setCurrentIndex(Num);
    }
    if(ui->lineEdit80->text()!="")
    {
         ui->checkBox80->setCheckState(Qt::Checked);
        ui->comboBox80->setCurrentIndex(Num);
    }

    if(ui->lineEdit81->text()!="")
    {
         ui->checkBox81->setCheckState(Qt::Checked);
        ui->comboBox81->setCurrentIndex(Num);
    }

    if(ui->lineEdit82->text()!="")
    {
         ui->checkBox82->setCheckState(Qt::Checked);
        ui->comboBox82->setCurrentIndex(Num);
    }

    if(ui->lineEdit83->text()!="")
    {
         ui->checkBox83->setCheckState(Qt::Checked);
        ui->comboBox83->setCurrentIndex(Num);
    }

    if(ui->lineEdit84->text()!="")
    {
         ui->checkBox84->setCheckState(Qt::Checked);
        ui->comboBox84->setCurrentIndex(Num);
    }
    if(ui->lineEdit85->text()!="")
    {
         ui->checkBox85->setCheckState(Qt::Checked);
        ui->comboBox85->setCurrentIndex(Num);
    }

    if(ui->lineEdit86->text()!="")
    {
         ui->checkBox86->setCheckState(Qt::Checked);
        ui->comboBox86->setCurrentIndex(Num);
    }
    if(ui->lineEdit87->text()!="")
    {
         ui->checkBox87->setCheckState(Qt::Checked);
        ui->comboBox87->setCurrentIndex(Num);
    }
    if(ui->lineEdit88->text()!="")
    {
         ui->checkBox88->setCheckState(Qt::Checked);
        ui->comboBox88->setCurrentIndex(Num);
    }
    if(ui->lineEdit89->text()!="")
    {
         ui->checkBox89->setCheckState(Qt::Checked);
        ui->comboBox89->setCurrentIndex(Num);
    }
    if(ui->lineEdit90->text()!="")
    {
         ui->checkBox90->setCheckState(Qt::Checked);
        ui->comboBox90->setCurrentIndex(Num);
    }

    if(ui->lineEdit91->text()!="")
    {
         ui->checkBox91->setCheckState(Qt::Checked);
        ui->comboBox91->setCurrentIndex(Num);
    }

    if(ui->lineEdit92->text()!="")
    {
         ui->checkBox92->setCheckState(Qt::Checked);
        ui->comboBox92->setCurrentIndex(Num);
    }

    if(ui->lineEdit93->text()!="")
    {
         ui->checkBox93->setCheckState(Qt::Checked);
        ui->comboBox93->setCurrentIndex(Num);
    }

    if(ui->lineEdit94->text()!="")
    {
         ui->checkBox94->setCheckState(Qt::Checked);
        ui->comboBox94->setCurrentIndex(Num);
    }
    if(ui->lineEdit95->text()!="")
    {
         ui->checkBox95->setCheckState(Qt::Checked);
        ui->comboBox95->setCurrentIndex(Num);
    }

    if(ui->lineEdit96->text()!="")
    {
         ui->checkBox96->setCheckState(Qt::Checked);
        ui->comboBox96->setCurrentIndex(Num);
    }
    if(ui->lineEdit97->text()!="")
    {
         ui->checkBox97->setCheckState(Qt::Checked);
        ui->comboBox97->setCurrentIndex(Num);
    }
    if(ui->lineEdit98->text()!="")
    {
         ui->checkBox98->setCheckState(Qt::Checked);
        ui->comboBox98->setCurrentIndex(Num);
    }
    if(ui->lineEdit99->text()!="")
    {
         ui->checkBox99->setCheckState(Qt::Checked);
        ui->comboBox99->setCurrentIndex(Num);
    }
    if(ui->lineEdit100->text()!="")
    {
         ui->checkBox100->setCheckState(Qt::Checked);
        ui->comboBox100->setCurrentIndex(Num);
    }


}
