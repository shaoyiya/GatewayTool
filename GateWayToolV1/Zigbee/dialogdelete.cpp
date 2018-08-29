#include "dialogdelete.h"
#include "ui_dialogdelete.h"
#include "DebugGateWay.h"

dialogdelete::dialogdelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogdelete)
{
    ui->setupUi(this);
    connect(receive_timer,SIGNAL(timeout()),this,SLOT(UPdatafuntion()));
    receive_timer->start(500);
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
}

dialogdelete::~dialogdelete()
{
    delete ui;
}

//功能:查询全部EUI功能函数
//参数：没有
//返回值：没有
void dialogdelete::on_btn_query_clicked()
{
    for(int i = 0; i<200; i++)
    {
        stbuffer[i].clear();
    }
    ui->query_lineEdit->setText("");
    ui->query_lineEdit_2->setText("");
    ui->query_lineEdit_3->setText("");
    ui->query_lineEdit_4->setText("");
    ui->query_lineEdit_5->setText("");
    ui->query_lineEdit_6->setText("");
    ui->query_lineEdit_7->setText("");
    ui->query_lineEdit_8->setText("");
    ui->query_lineEdit_9->setText("");
    ui->query_lineEdit_10->setText("");

    ui->query_lineEdit11->setText("");
    ui->query_lineEdit12->setText("");
    ui->query_lineEdit13->setText("");
    ui->query_lineEdit14->setText("");
    ui->query_lineEdit15->setText("");
    ui->query_lineEdit16->setText("");
    ui->query_lineEdit17->setText("");
    ui->query_lineEdit18->setText("");
    ui->query_lineEdit19->setText("");
    ui->query_lineEdit20->setText("");

    ui->query_lineEdit21->setText("");
    ui->query_lineEdit22->setText("");
    ui->query_lineEdit23->setText("");
    ui->query_lineEdit24->setText("");
    ui->query_lineEdit25->setText("");
    ui->query_lineEdit26->setText("");
    ui->query_lineEdit27->setText("");
    ui->query_lineEdit28->setText("");
    ui->query_lineEdit29->setText("");
    ui->query_lineEdit30->setText("");

    ui->query_lineEdit31->setText("");
    ui->query_lineEdit32->setText("");
    ui->query_lineEdit33->setText("");
    ui->query_lineEdit34->setText("");
    ui->query_lineEdit35->setText("");
    ui->query_lineEdit36->setText("");
    ui->query_lineEdit37->setText("");
    ui->query_lineEdit38->setText("");
    ui->query_lineEdit39->setText("");
    ui->query_lineEdit40->setText("");

    ui->query_lineEdit41->setText("");
    ui->query_lineEdit42->setText("");
    ui->query_lineEdit43->setText("");
    ui->query_lineEdit44->setText("");
    ui->query_lineEdit45->setText("");
    ui->query_lineEdit46->setText("");
    ui->query_lineEdit47->setText("");
    ui->query_lineEdit48->setText("");
    ui->query_lineEdit49->setText("");
    ui->query_lineEdit50->setText("");

    ui->query_lineEdit51->setText("");
    ui->query_lineEdit52->setText("");
    ui->query_lineEdit53->setText("");
    ui->query_lineEdit54->setText("");
    ui->query_lineEdit55->setText("");
    ui->query_lineEdit56->setText("");
    ui->query_lineEdit57->setText("");
    ui->query_lineEdit58->setText("");
    ui->query_lineEdit59->setText("");
    ui->query_lineEdit60->setText("");

    ui->query_lineEdit61->setText("");
    ui->query_lineEdit62->setText("");
    ui->query_lineEdit63->setText("");
    ui->query_lineEdit64->setText("");
    ui->query_lineEdit65->setText("");
    ui->query_lineEdit66->setText("");
    ui->query_lineEdit67->setText("");
    ui->query_lineEdit68->setText("");
    ui->query_lineEdit69->setText("");
    ui->query_lineEdit70->setText("");

    ui->query_lineEdit71->setText("");
    ui->query_lineEdit72->setText("");
    ui->query_lineEdit73->setText("");
    ui->query_lineEdit74->setText("");
    ui->query_lineEdit75->setText("");
    ui->query_lineEdit76->setText("");
    ui->query_lineEdit77->setText("");
    ui->query_lineEdit78->setText("");
    ui->query_lineEdit79->setText("");
    ui->query_lineEdit80->setText("");

    ui->query_lineEdit81->setText("");
    ui->query_lineEdit82->setText("");
    ui->query_lineEdit83->setText("");
    ui->query_lineEdit84->setText("");
    ui->query_lineEdit85->setText("");
    ui->query_lineEdit86->setText("");
    ui->query_lineEdit87->setText("");
    ui->query_lineEdit88->setText("");
    ui->query_lineEdit89->setText("");
    ui->query_lineEdit90->setText("");

    ui->query_lineEdit91->setText("");
    ui->query_lineEdit92->setText("");
    ui->query_lineEdit93->setText("");
    ui->query_lineEdit94->setText("");
    ui->query_lineEdit95->setText("");
    ui->query_lineEdit96->setText("");
    ui->query_lineEdit97->setText("");
    ui->query_lineEdit98->setText("");
    ui->query_lineEdit99->setText("");
    ui->query_lineEdit100->setText("");

   // QString str = "EEEE 03  F0 F3";
    emit(this->SendPack());
     ui->CheakAllFuntion->setEnabled(true);

}

//功能:定时功能函数
//参数：没有
//返回值：没有
void dialogdelete::sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);

    while(QTime::currentTime() < reachTime)
        QCoreApplication::processEvents(\
                    QEventLoop::AllEvents, 100);
}

//功能:处理F0命令的函数
//参数：字符串
//返回值：没有
void dialogdelete::DealDataF0(QString str)
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
}


//功能:删除EUI函数
//参数：字符串
//返回值：没有
void dialogdelete::on_btn_delete_button_clicked()
{
    QString get[101] = {};
    if( ui->checkBox->checkState() == Qt::Checked)
    {        
         get[1] = ui->query_lineEdit->text();
    }

    if( ui->checkBox_2->checkState() == Qt::Checked)
        get[2] = ui->query_lineEdit_2->text();

    if(ui->checkBox_3->checkState() == Qt::Checked)
        get[3] = ui->query_lineEdit_3->text();

    if(ui->checkBox_4->checkState() == Qt::Checked)
        get[4] = ui->query_lineEdit_4->text();

    if(ui->checkBox_5->checkState() == Qt::Checked)
        get[5] = ui->query_lineEdit_5->text();

    if(ui->checkBox_6->checkState() == Qt::Checked)
        get[6] = ui->query_lineEdit_6->text();

    if( ui->checkBox_7->checkState() == Qt::Checked)
        get[7] = ui->query_lineEdit_7->text();

    if(ui->checkBox_8->checkState() == Qt::Checked)
        get[8] = ui->query_lineEdit_8->text();

    if(ui->checkBox_9->checkState() == Qt::Checked)
        get[9] = ui->query_lineEdit_9->text();

    if(ui->checkBox_10->checkState() == Qt::Checked)
        get[10] = ui->query_lineEdit_10->text();
    if(ui->checkBox11->checkState() == Qt::Checked)
        get[11] = ui->query_lineEdit11->text();

    if( ui->checkBox12->checkState() == Qt::Checked)
        get[12] = ui->query_lineEdit12->text();

    if(ui->checkBox13->checkState() == Qt::Checked)
        get[13] = ui->query_lineEdit13->text();

    if(ui->checkBox14->checkState() == Qt::Checked)
        get[14] = ui->query_lineEdit14->text();

    if(ui->checkBox15->checkState() == Qt::Checked)
        get[15] = ui->query_lineEdit15->text();

    if(ui->checkBox16->checkState() == Qt::Checked)
        get[16] = ui->query_lineEdit16->text();

    if(ui->checkBox17->checkState() == Qt::Checked)
        get[17] = ui->query_lineEdit17->text();

    if(ui->checkBox18->checkState() == Qt::Checked)
        get[18] = ui->query_lineEdit18->text();

    if(ui->checkBox19->checkState() == Qt::Checked)
        get[19] = ui->query_lineEdit19->text();

    if(ui->checkBox20->checkState() == Qt::Checked)
        get[20] = ui->query_lineEdit20->text();


    if(ui->checkBox21->checkState() == Qt::Checked)
        get[21] = ui->query_lineEdit21->text();

    if( ui->checkBox22->checkState() == Qt::Checked)
        get[22] = ui->query_lineEdit22->text();

    if(ui->checkBox23->checkState() == Qt::Checked)
        get[23] = ui->query_lineEdit23->text();

    if(ui->checkBox24->checkState() == Qt::Checked)
        get[24] = ui->query_lineEdit24->text();

    if(ui->checkBox25->checkState() == Qt::Checked)
        get[25] = ui->query_lineEdit25->text();

    if(ui->checkBox26->checkState() == Qt::Checked)
        get[26] = ui->query_lineEdit26->text();

    if(ui->checkBox27->checkState() == Qt::Checked)
        get[27] = ui->query_lineEdit27->text();

    if(ui->checkBox28->checkState() == Qt::Checked)
        get[28] = ui->query_lineEdit28->text();

    if(ui->checkBox29->checkState() == Qt::Checked)
        get[29] = ui->query_lineEdit29->text();

    if(ui->checkBox30->checkState() == Qt::Checked)
        get[30] = ui->query_lineEdit30->text();

    if(ui->checkBox31->checkState() == Qt::Checked)
        get[31] = ui->query_lineEdit31->text();

    if( ui->checkBox32->checkState() == Qt::Checked)
        get[32] = ui->query_lineEdit32->text();

    if(ui->checkBox33->checkState() == Qt::Checked)
        get[33] = ui->query_lineEdit33->text();

    if(ui->checkBox34->checkState() == Qt::Checked)
        get[34] = ui->query_lineEdit34->text();

    if(ui->checkBox35->checkState() == Qt::Checked)
        get[35] = ui->query_lineEdit35->text();

    if(ui->checkBox36->checkState() == Qt::Checked)
        get[36] = ui->query_lineEdit36->text();

    if(ui->checkBox37->checkState() == Qt::Checked)
        get[37] = ui->query_lineEdit37->text();

    if(ui->checkBox38->checkState() == Qt::Checked)
        get[38] = ui->query_lineEdit38->text();

    if(ui->checkBox39->checkState() == Qt::Checked)
        get[39] = ui->query_lineEdit39->text();

    if(ui->checkBox40->checkState() == Qt::Checked)
        get[40] = ui->query_lineEdit40->text();

    if(ui->checkBox41->checkState() == Qt::Checked)
        get[41] = ui->query_lineEdit41->text();

    if( ui->checkBox42->checkState() == Qt::Checked)
        get[42] = ui->query_lineEdit42->text();

    if(ui->checkBox43->checkState() == Qt::Checked)
        get[43] = ui->query_lineEdit43->text();

    if(ui->checkBox44->checkState() == Qt::Checked)
        get[44] = ui->query_lineEdit44->text();

    if(ui->checkBox45->checkState() == Qt::Checked)
        get[45] = ui->query_lineEdit45->text();

    if(ui->checkBox46->checkState() == Qt::Checked)
        get[46] = ui->query_lineEdit46->text();

    if(ui->checkBox47->checkState() == Qt::Checked)
        get[47] = ui->query_lineEdit47->text();

    if(ui->checkBox48->checkState() == Qt::Checked)
        get[48] = ui->query_lineEdit48->text();

    if(ui->checkBox49->checkState() == Qt::Checked)
        get[49] = ui->query_lineEdit49->text();

    if(ui->checkBox50->checkState() == Qt::Checked)
        get[50] = ui->query_lineEdit50->text();

    if(ui->checkBox51->checkState() == Qt::Checked)
        get[51] = ui->query_lineEdit51->text();

    if( ui->checkBox52->checkState() == Qt::Checked)
        get[52] = ui->query_lineEdit52->text();

    if(ui->checkBox53->checkState() == Qt::Checked)
        get[53] = ui->query_lineEdit53->text();

    if(ui->checkBox54->checkState() == Qt::Checked)
        get[54] = ui->query_lineEdit54->text();

    if(ui->checkBox55->checkState() == Qt::Checked)
        get[55] = ui->query_lineEdit55->text();

    if(ui->checkBox56->checkState() == Qt::Checked)
        get[56] = ui->query_lineEdit56->text();

    if(ui->checkBox57->checkState() == Qt::Checked)
        get[57] = ui->query_lineEdit57->text();

    if(ui->checkBox58->checkState() == Qt::Checked)
        get[58] = ui->query_lineEdit58->text();

    if(ui->checkBox59->checkState() == Qt::Checked)
        get[59] = ui->query_lineEdit59->text();

    if(ui->checkBox60->checkState() == Qt::Checked)
        get[60] = ui->query_lineEdit60->text();

    if(ui->checkBox61->checkState() == Qt::Checked)
        get[61] = ui->query_lineEdit61->text();

    if( ui->checkBox62->checkState() == Qt::Checked)
        get[62] = ui->query_lineEdit62->text();

    if(ui->checkBox63->checkState() == Qt::Checked)
        get[63] = ui->query_lineEdit63->text();

    if(ui->checkBox64->checkState() == Qt::Checked)
        get[64] = ui->query_lineEdit64->text();

    if(ui->checkBox65->checkState() == Qt::Checked)
        get[65] = ui->query_lineEdit65->text();

    if(ui->checkBox66->checkState() == Qt::Checked)
        get[66] = ui->query_lineEdit66->text();

    if(ui->checkBox67->checkState() == Qt::Checked)
        get[67] = ui->query_lineEdit67->text();

    if(ui->checkBox68->checkState() == Qt::Checked)
        get[68] = ui->query_lineEdit68->text();

    if(ui->checkBox69->checkState() == Qt::Checked)
        get[69] = ui->query_lineEdit69->text();

    if(ui->checkBox70->checkState() == Qt::Checked)
        get[70] = ui->query_lineEdit70->text();

    if(ui->checkBox71->checkState() == Qt::Checked)
        get[71] = ui->query_lineEdit71->text();

    if( ui->checkBox72->checkState() == Qt::Checked)
        get[72] = ui->query_lineEdit72->text();

    if(ui->checkBox73->checkState() == Qt::Checked)
        get[73] = ui->query_lineEdit73->text();

    if(ui->checkBox74->checkState() == Qt::Checked)
        get[74] = ui->query_lineEdit74->text();

    if(ui->checkBox75->checkState() == Qt::Checked)
        get[75] = ui->query_lineEdit75->text();

    if(ui->checkBox76->checkState() == Qt::Checked)
        get[76] = ui->query_lineEdit76->text();

    if(ui->checkBox77->checkState() == Qt::Checked)
        get[77] = ui->query_lineEdit77->text();

    if(ui->checkBox78->checkState() == Qt::Checked)
        get[78] = ui->query_lineEdit78->text();

    if(ui->checkBox79->checkState() == Qt::Checked)
        get[79] = ui->query_lineEdit79->text();

    if(ui->checkBox80->checkState() == Qt::Checked)
        get[80] = ui->query_lineEdit80->text();


    if(ui->checkBox81->checkState() == Qt::Checked)
        get[81] = ui->query_lineEdit81->text();

    if( ui->checkBox82->checkState() == Qt::Checked)
        get[82] = ui->query_lineEdit82->text();

    if(ui->checkBox83->checkState() == Qt::Checked)
        get[83] = ui->query_lineEdit83->text();

    if(ui->checkBox84->checkState() == Qt::Checked)
        get[84] = ui->query_lineEdit84->text();

    if(ui->checkBox85->checkState() == Qt::Checked)
        get[85] = ui->query_lineEdit85->text();

    if(ui->checkBox86->checkState() == Qt::Checked)
        get[86] = ui->query_lineEdit86->text();

    if(ui->checkBox87->checkState() == Qt::Checked)
        get[87] = ui->query_lineEdit87->text();

    if(ui->checkBox88->checkState() == Qt::Checked)
        get[88] = ui->query_lineEdit88->text();

    if(ui->checkBox89->checkState() == Qt::Checked)
        get[89] = ui->query_lineEdit89->text();

    if(ui->checkBox90->checkState() == Qt::Checked)
        get[90] = ui->query_lineEdit90->text();

    if(ui->checkBox91->checkState() == Qt::Checked)
        get[91] = ui->query_lineEdit91->text();

    if( ui->checkBox92->checkState() == Qt::Checked)
        get[92] = ui->query_lineEdit92->text();

    if(ui->checkBox93->checkState() == Qt::Checked)
        get[93] = ui->query_lineEdit93->text();

    if(ui->checkBox94->checkState() == Qt::Checked)
        get[94] = ui->query_lineEdit94->text();

    if(ui->checkBox95->checkState() == Qt::Checked)
        get[95] = ui->query_lineEdit95->text();

    if(ui->checkBox96->checkState() == Qt::Checked)
        get[96] = ui->query_lineEdit96->text();

    if(ui->checkBox97->checkState() == Qt::Checked)
        get[97] = ui->query_lineEdit97->text();

    if(ui->checkBox98->checkState() == Qt::Checked)
        get[98] = ui->query_lineEdit98->text();

    if(ui->checkBox99->checkState() == Qt::Checked)
        get[99] = ui->query_lineEdit99->text();

    if(ui->checkBox100->checkState() == Qt::Checked)
        get[100] = ui->query_lineEdit100->text();

    for(int i = 1; i<101; i++)
    {
       if(get[i] != " "){
            get[i].replace(" ","");
            get[0] += get[i];
       }
    }

    emit(this->SendPack_1(get[0]));

    ui->checkBox->setCheckState(Qt::Unchecked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
    ui->checkBox_4->setCheckState(Qt::Unchecked);
    ui->checkBox_5->setCheckState(Qt::Unchecked);
    ui->checkBox_6->setCheckState(Qt::Unchecked);
    ui->checkBox_7->setCheckState(Qt::Unchecked);
    ui->checkBox_8->setCheckState(Qt::Unchecked);
    ui->checkBox_9->setCheckState(Qt::Unchecked);
    ui->checkBox_10->setCheckState(Qt::Unchecked);

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











    sleep(500);
    on_btn_query_clicked();

}

//功能:累加和函数
//参数：字符串
//返回值：和
QString dialogdelete::Validation_And(QString str)
{
        bool ok = true;
        int j =0,result = 0;
        int addd[2000] = {};
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

//功能:更新最新EUI函数
//参数：没有
//返回值：没有
void dialogdelete::UPdatafuntion()
{
    if(deletestart)
    {
        deletestart=false;
        ui->query_lineEdit->setText(stbuffer[1].toUpper());
        ui->query_lineEdit_2->setText(stbuffer[2].toUpper());
        ui->query_lineEdit_3->setText(stbuffer[3].toUpper());
        ui->query_lineEdit_4->setText(stbuffer[4].toUpper());
        ui->query_lineEdit_5->setText(stbuffer[5].toUpper());
        ui->query_lineEdit_6->setText(stbuffer[6].toUpper());
        ui->query_lineEdit_7->setText(stbuffer[7].toUpper());
        ui->query_lineEdit_8->setText(stbuffer[8].toUpper());
        ui->query_lineEdit_9->setText(stbuffer[9].toUpper());
        ui->query_lineEdit_10->setText(stbuffer[10].toUpper());

        ui->query_lineEdit11->setText(stbuffer[11].toUpper());
        ui->query_lineEdit12->setText(stbuffer[12].toUpper());
        ui->query_lineEdit13->setText(stbuffer[13].toUpper());
        ui->query_lineEdit14->setText(stbuffer[14].toUpper());
        ui->query_lineEdit15->setText(stbuffer[15].toUpper());
        ui->query_lineEdit16->setText(stbuffer[16].toUpper());
        ui->query_lineEdit17->setText(stbuffer[17].toUpper());
        ui->query_lineEdit18->setText(stbuffer[18].toUpper());
        ui->query_lineEdit19->setText(stbuffer[19].toUpper());
        ui->query_lineEdit20->setText(stbuffer[20].toUpper());

        ui->query_lineEdit21->setText(stbuffer[21].toUpper());
        ui->query_lineEdit22->setText(stbuffer[22].toUpper());
        ui->query_lineEdit23->setText(stbuffer[23].toUpper());
        ui->query_lineEdit24->setText(stbuffer[24].toUpper());
        ui->query_lineEdit25->setText(stbuffer[25].toUpper());
        ui->query_lineEdit26->setText(stbuffer[26].toUpper());
        ui->query_lineEdit27->setText(stbuffer[27].toUpper());
        ui->query_lineEdit28->setText(stbuffer[28].toUpper());
        ui->query_lineEdit29->setText(stbuffer[29].toUpper());
        ui->query_lineEdit30->setText(stbuffer[30].toUpper());


        ui->query_lineEdit31->setText(stbuffer[31].toUpper());
        ui->query_lineEdit32->setText(stbuffer[32].toUpper());
        ui->query_lineEdit33->setText(stbuffer[33].toUpper());
        ui->query_lineEdit34->setText(stbuffer[34].toUpper());
        ui->query_lineEdit35->setText(stbuffer[35].toUpper());
        ui->query_lineEdit36->setText(stbuffer[36].toUpper());
        ui->query_lineEdit37->setText(stbuffer[37].toUpper());
        ui->query_lineEdit38->setText(stbuffer[38].toUpper());
        ui->query_lineEdit39->setText(stbuffer[39].toUpper());
        ui->query_lineEdit40->setText(stbuffer[40].toUpper());

        ui->query_lineEdit41->setText(stbuffer[41].toUpper());
        ui->query_lineEdit42->setText(stbuffer[42].toUpper());
        ui->query_lineEdit43->setText(stbuffer[43].toUpper());
        ui->query_lineEdit44->setText(stbuffer[44].toUpper());
        ui->query_lineEdit45->setText(stbuffer[45].toUpper());
        ui->query_lineEdit46->setText(stbuffer[46].toUpper());
        ui->query_lineEdit47->setText(stbuffer[47].toUpper());
        ui->query_lineEdit48->setText(stbuffer[48].toUpper());
        ui->query_lineEdit49->setText(stbuffer[49].toUpper());
        ui->query_lineEdit50->setText(stbuffer[50].toUpper());


        ui->query_lineEdit51->setText(stbuffer[51].toUpper());
        ui->query_lineEdit52->setText(stbuffer[52].toUpper());
        ui->query_lineEdit53->setText(stbuffer[53].toUpper());
        ui->query_lineEdit54->setText(stbuffer[54].toUpper());
        ui->query_lineEdit55->setText(stbuffer[55].toUpper());
        ui->query_lineEdit56->setText(stbuffer[56].toUpper());
        ui->query_lineEdit57->setText(stbuffer[57].toUpper());
        ui->query_lineEdit58->setText(stbuffer[58].toUpper());
        ui->query_lineEdit59->setText(stbuffer[59].toUpper());
        ui->query_lineEdit60->setText(stbuffer[60].toUpper());


        ui->query_lineEdit61->setText(stbuffer[61].toUpper());
        ui->query_lineEdit62->setText(stbuffer[62].toUpper());
        ui->query_lineEdit63->setText(stbuffer[63].toUpper());
        ui->query_lineEdit64->setText(stbuffer[64].toUpper());
        ui->query_lineEdit65->setText(stbuffer[65].toUpper());
        ui->query_lineEdit66->setText(stbuffer[66].toUpper());
        ui->query_lineEdit67->setText(stbuffer[67].toUpper());
        ui->query_lineEdit68->setText(stbuffer[68].toUpper());
        ui->query_lineEdit69->setText(stbuffer[69].toUpper());
        ui->query_lineEdit70->setText(stbuffer[70].toUpper());


        ui->query_lineEdit71->setText(stbuffer[71].toUpper());
        ui->query_lineEdit72->setText(stbuffer[72].toUpper());
        ui->query_lineEdit73->setText(stbuffer[73].toUpper());
        ui->query_lineEdit74->setText(stbuffer[74].toUpper());
        ui->query_lineEdit75->setText(stbuffer[75].toUpper());
        ui->query_lineEdit76->setText(stbuffer[76].toUpper());
        ui->query_lineEdit77->setText(stbuffer[77].toUpper());
        ui->query_lineEdit78->setText(stbuffer[78].toUpper());
        ui->query_lineEdit79->setText(stbuffer[79].toUpper());
        ui->query_lineEdit80->setText(stbuffer[80].toUpper());

        ui->query_lineEdit81->setText(stbuffer[81].toUpper());
        ui->query_lineEdit82->setText(stbuffer[82].toUpper());
        ui->query_lineEdit83->setText(stbuffer[83].toUpper());
        ui->query_lineEdit84->setText(stbuffer[84].toUpper());
        ui->query_lineEdit85->setText(stbuffer[85].toUpper());
        ui->query_lineEdit86->setText(stbuffer[86].toUpper());
        ui->query_lineEdit87->setText(stbuffer[87].toUpper());
        ui->query_lineEdit88->setText(stbuffer[88].toUpper());
        ui->query_lineEdit89->setText(stbuffer[89].toUpper());
        ui->query_lineEdit90->setText(stbuffer[90].toUpper());

        ui->query_lineEdit91->setText(stbuffer[91].toUpper());
        ui->query_lineEdit92->setText(stbuffer[92].toUpper());
        ui->query_lineEdit93->setText(stbuffer[93].toUpper());
        ui->query_lineEdit94->setText(stbuffer[94].toUpper());
        ui->query_lineEdit95->setText(stbuffer[95].toUpper());
        ui->query_lineEdit96->setText(stbuffer[96].toUpper());
        ui->query_lineEdit97->setText(stbuffer[97].toUpper());
        ui->query_lineEdit98->setText(stbuffer[98].toUpper());
        ui->query_lineEdit99->setText(stbuffer[99].toUpper());
        ui->query_lineEdit100->setText(stbuffer[100].toUpper());
        for(int i = 0; i<200; i++)
        {
            stbuffer[i].clear();
        }
    }

}

//功能:关闭函数重新写
//参数：没有
//返回值：没有
void dialogdelete::closeEvent(QCloseEvent *event)
{
    receive_timer->stop();
}

//功能:全选择功能函数
//参数：没有
//返回值：没有
void dialogdelete::on_CheakAllFuntion_clicked()
{

    if(ui->query_lineEdit->text() !="" )
         ui->checkBox->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_2->text() !="" )
         ui->checkBox_2->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_3->text() !="" )
         ui->checkBox_3->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_4->text() !="" )
         ui->checkBox_4->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_5->text() !="" )
         ui->checkBox_5->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_6->text() !="" )
         ui->checkBox_6->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_7->text() !="" )
         ui->checkBox_7->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_8->text() !="" )
         ui->checkBox_8->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_9->text() !="" )
         ui->checkBox_9->setCheckState(Qt::Checked);
    if(ui->query_lineEdit_10->text() !="" )
         ui->checkBox_10->setCheckState(Qt::Checked);


    if(ui->query_lineEdit11->text() !="" )
         ui->checkBox11->setCheckState(Qt::Checked);
    if(ui->query_lineEdit12->text() !="" )
         ui->checkBox12->setCheckState(Qt::Checked);
    if(ui->query_lineEdit13->text() !="" )
         ui->checkBox13->setCheckState(Qt::Checked);
    if(ui->query_lineEdit14->text() !="" )
         ui->checkBox14->setCheckState(Qt::Checked);
    if(ui->query_lineEdit15->text() !="" )
         ui->checkBox15->setCheckState(Qt::Checked);
    if(ui->query_lineEdit16->text() !="" )
         ui->checkBox16->setCheckState(Qt::Checked);
    if(ui->query_lineEdit17->text() !="" )
         ui->checkBox17->setCheckState(Qt::Checked);
    if(ui->query_lineEdit18->text() !="" )
         ui->checkBox18->setCheckState(Qt::Checked);
    if(ui->query_lineEdit19->text() !="" )
         ui->checkBox19->setCheckState(Qt::Checked);
    if(ui->query_lineEdit20->text() !="" )
         ui->checkBox20->setCheckState(Qt::Checked);


    if(ui->query_lineEdit21->text() !="" )
         ui->checkBox21->setCheckState(Qt::Checked);
    if(ui->query_lineEdit22->text() !="" )
         ui->checkBox22->setCheckState(Qt::Checked);
    if(ui->query_lineEdit23->text() !="" )
         ui->checkBox23->setCheckState(Qt::Checked);
    if(ui->query_lineEdit24->text() !="" )
         ui->checkBox24->setCheckState(Qt::Checked);
    if(ui->query_lineEdit25->text() !="" )
         ui->checkBox25->setCheckState(Qt::Checked);
    if(ui->query_lineEdit26->text() !="" )
         ui->checkBox26->setCheckState(Qt::Checked);
    if(ui->query_lineEdit27->text() !="" )
         ui->checkBox27->setCheckState(Qt::Checked);
    if(ui->query_lineEdit28->text() !="" )
         ui->checkBox28->setCheckState(Qt::Checked);
    if(ui->query_lineEdit29->text() !="" )
         ui->checkBox29->setCheckState(Qt::Checked);
    if(ui->query_lineEdit30->text() !="" )
         ui->checkBox30->setCheckState(Qt::Checked);

    if(ui->query_lineEdit31->text() !="" )
         ui->checkBox31->setCheckState(Qt::Checked);
    if(ui->query_lineEdit32->text() !="" )
         ui->checkBox32->setCheckState(Qt::Checked);
    if(ui->query_lineEdit33->text() !="" )
         ui->checkBox33->setCheckState(Qt::Checked);
    if(ui->query_lineEdit34->text() !="" )
         ui->checkBox34->setCheckState(Qt::Checked);
    if(ui->query_lineEdit35->text() !="" )
         ui->checkBox35->setCheckState(Qt::Checked);
    if(ui->query_lineEdit36->text() !="" )
         ui->checkBox36->setCheckState(Qt::Checked);
    if(ui->query_lineEdit37->text() !="" )
         ui->checkBox37->setCheckState(Qt::Checked);
    if(ui->query_lineEdit38->text() !="" )
         ui->checkBox38->setCheckState(Qt::Checked);
    if(ui->query_lineEdit39->text() !="" )
         ui->checkBox39->setCheckState(Qt::Checked);
    if(ui->query_lineEdit40->text() !="" )
         ui->checkBox40->setCheckState(Qt::Checked);


    if(ui->query_lineEdit41->text() !="" )
         ui->checkBox41->setCheckState(Qt::Checked);
    if(ui->query_lineEdit42->text() !="" )
         ui->checkBox42->setCheckState(Qt::Checked);
    if(ui->query_lineEdit43->text() !="" )
         ui->checkBox43->setCheckState(Qt::Checked);
    if(ui->query_lineEdit44->text() !="" )
         ui->checkBox44->setCheckState(Qt::Checked);
    if(ui->query_lineEdit45->text() !="" )
         ui->checkBox45->setCheckState(Qt::Checked);
    if(ui->query_lineEdit46->text() !="" )
         ui->checkBox46->setCheckState(Qt::Checked);
    if(ui->query_lineEdit47->text() !="" )
         ui->checkBox47->setCheckState(Qt::Checked);
    if(ui->query_lineEdit48->text() !="" )
         ui->checkBox48->setCheckState(Qt::Checked);
    if(ui->query_lineEdit49->text() !="" )
         ui->checkBox49->setCheckState(Qt::Checked);
    if(ui->query_lineEdit50->text() !="" )
         ui->checkBox50->setCheckState(Qt::Checked);


    if(ui->query_lineEdit51->text() !="" )
         ui->checkBox51->setCheckState(Qt::Checked);
    if(ui->query_lineEdit52->text() !="" )
         ui->checkBox52->setCheckState(Qt::Checked);
    if(ui->query_lineEdit53->text() !="" )
         ui->checkBox53->setCheckState(Qt::Checked);
    if(ui->query_lineEdit54->text() !="" )
         ui->checkBox54->setCheckState(Qt::Checked);
    if(ui->query_lineEdit55->text() !="" )
         ui->checkBox55->setCheckState(Qt::Checked);
    if(ui->query_lineEdit56->text() !="" )
         ui->checkBox56->setCheckState(Qt::Checked);
    if(ui->query_lineEdit57->text() !="" )
         ui->checkBox57->setCheckState(Qt::Checked);
    if(ui->query_lineEdit58->text() !="" )
         ui->checkBox58->setCheckState(Qt::Checked);
    if(ui->query_lineEdit59->text() !="" )
         ui->checkBox59->setCheckState(Qt::Checked);
    if(ui->query_lineEdit60->text() !="" )
         ui->checkBox60->setCheckState(Qt::Checked);

    if(ui->query_lineEdit61->text() !="" )
         ui->checkBox61->setCheckState(Qt::Checked);
    if(ui->query_lineEdit62->text() !="" )
         ui->checkBox62->setCheckState(Qt::Checked);
    if(ui->query_lineEdit63->text() !="" )
         ui->checkBox63->setCheckState(Qt::Checked);
    if(ui->query_lineEdit64->text() !="" )
         ui->checkBox64->setCheckState(Qt::Checked);
    if(ui->query_lineEdit65->text() !="" )
         ui->checkBox65->setCheckState(Qt::Checked);
    if(ui->query_lineEdit66->text() !="" )
         ui->checkBox66->setCheckState(Qt::Checked);
    if(ui->query_lineEdit67->text() !="" )
         ui->checkBox67->setCheckState(Qt::Checked);
    if(ui->query_lineEdit68->text() !="" )
         ui->checkBox68->setCheckState(Qt::Checked);
    if(ui->query_lineEdit69->text() !="" )
         ui->checkBox69->setCheckState(Qt::Checked);
    if(ui->query_lineEdit70->text() !="" )
         ui->checkBox70->setCheckState(Qt::Checked);

    if(ui->query_lineEdit71->text() !="" )
         ui->checkBox71->setCheckState(Qt::Checked);
    if(ui->query_lineEdit72->text() !="" )
         ui->checkBox72->setCheckState(Qt::Checked);
    if(ui->query_lineEdit73->text() !="" )
         ui->checkBox73->setCheckState(Qt::Checked);
    if(ui->query_lineEdit74->text() !="" )
         ui->checkBox74->setCheckState(Qt::Checked);
    if(ui->query_lineEdit75->text() !="" )
         ui->checkBox75->setCheckState(Qt::Checked);
    if(ui->query_lineEdit76->text() !="" )
         ui->checkBox76->setCheckState(Qt::Checked);
    if(ui->query_lineEdit77->text() !="" )
         ui->checkBox77->setCheckState(Qt::Checked);
    if(ui->query_lineEdit78->text() !="" )
         ui->checkBox78->setCheckState(Qt::Checked);
    if(ui->query_lineEdit79->text() !="" )
         ui->checkBox79->setCheckState(Qt::Checked);
    if(ui->query_lineEdit80->text() !="" )
         ui->checkBox80->setCheckState(Qt::Checked);



    if(ui->query_lineEdit81->text() !="" )
         ui->checkBox81->setCheckState(Qt::Checked);
    if(ui->query_lineEdit82->text() !="" )
         ui->checkBox82->setCheckState(Qt::Checked);
    if(ui->query_lineEdit83->text() !="" )
         ui->checkBox83->setCheckState(Qt::Checked);
    if(ui->query_lineEdit84->text() !="" )
         ui->checkBox84->setCheckState(Qt::Checked);
    if(ui->query_lineEdit85->text() !="" )
         ui->checkBox85->setCheckState(Qt::Checked);
    if(ui->query_lineEdit86->text() !="" )
         ui->checkBox86->setCheckState(Qt::Checked);
    if(ui->query_lineEdit87->text() !="" )
         ui->checkBox87->setCheckState(Qt::Checked);
    if(ui->query_lineEdit88->text() !="" )
         ui->checkBox88->setCheckState(Qt::Checked);
    if(ui->query_lineEdit89->text() !="" )
         ui->checkBox89->setCheckState(Qt::Checked);
    if(ui->query_lineEdit90->text() !="" )
         ui->checkBox90->setCheckState(Qt::Checked);

    if(ui->query_lineEdit91->text() !="" )
         ui->checkBox91->setCheckState(Qt::Checked);
    if(ui->query_lineEdit92->text() !="" )
         ui->checkBox92->setCheckState(Qt::Checked);
    if(ui->query_lineEdit93->text() !="" )
         ui->checkBox93->setCheckState(Qt::Checked);
    if(ui->query_lineEdit94->text() !="" )
         ui->checkBox94->setCheckState(Qt::Checked);
    if(ui->query_lineEdit95->text() !="" )
         ui->checkBox95->setCheckState(Qt::Checked);
    if(ui->query_lineEdit96->text() !="" )
         ui->checkBox96->setCheckState(Qt::Checked);
    if(ui->query_lineEdit97->text() !="" )
         ui->checkBox97->setCheckState(Qt::Checked);
    if(ui->query_lineEdit98->text() !="" )
         ui->checkBox98->setCheckState(Qt::Checked);
    if(ui->query_lineEdit99->text() !="" )
         ui->checkBox99->setCheckState(Qt::Checked);
    if(ui->query_lineEdit100->text() !="" )
         ui->checkBox100->setCheckState(Qt::Checked);
}
