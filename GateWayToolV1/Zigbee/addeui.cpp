#include "addeui.h"
#include "ui_addeui.h"

addeui::addeui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addeui)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() |Qt::WindowMinimizeButtonHint);
}

addeui::~addeui()
{
    delete ui;
}

//功能:发送功能函数
//参数：没有
//返回值：没有
void addeui::on_Send_funtion_clicked()
{

    QString str = ui->lineEdit->text().toUpper()+\
                 ui->lineEdit2->text().toUpper()+\
                 ui->lineEdit3->text().toUpper()+\
                 ui->lineEdit4->text().toUpper()+\
                 ui->lineEdit5->text().toUpper()+\
                 ui->lineEdit6->text().toUpper()+\
                 ui->lineEdit7->text().toUpper()+\
                 ui->lineEdit8->text().toUpper()+\
                 ui->lineEdit9->text().toUpper()+\
                 ui->lineEdit10->text().toUpper()+\
                 ui->lineEdit11->text().toUpper()+\
                 ui->lineEdit12->text().toUpper()+\
                 ui->lineEdit13->text().toUpper()+\
                 ui->lineEdit14->text().toUpper()+\
                 ui->lineEdit15->text().toUpper()+\
                 ui->lineEdit16->text().toUpper()+\
                 ui->lineEdit17->text().toUpper()+\
                 ui->lineEdit18->text().toUpper()+\
                 ui->lineEdit19->text().toUpper()+\
                 ui->lineEdit20->text().toUpper();

    str = str.replace( " ","");
    int i = str.length();
    QString t="";

    if(i>16)
    {
        i = i/2+3;
        t = QString::number(i, 16);
    }
    else
    {
         i = i/2+3;
        t = QString::number(i, 16);
        t = "0"+t;
    }

    str = t+"F1" + str ;
    str = "EEEE"+str+Validation_And(str);
    emit(this->SendPack(str));
}


//功能:累加和函数
//参数：累加数据
//返回值：和参数
QString addeui::Validation_And(QString str)
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
