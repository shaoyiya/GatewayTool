#include "RemoteUpgrade.h"
#include "ui_RemoteUpgrade.h"
#include "DebugGateWay.h"
RemoteUpgrade::RemoteUpgrade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoteUpgrade)
{
    ui->setupUi(this);
    connect(receive_timer,SIGNAL(timeout()),this,SLOT(Progressfuntion()));
    receive_timer->start(500);

}

RemoteUpgrade::~RemoteUpgrade()
{
    delete ui;
}

void RemoteUpgrade::on_Start_clicked()
{
      XmodemParameter.EUI=ui->comboBox->currentText();
      XmodemParameter.Upgrate = ui->lineEdit_2->text();
     emit(this->SendPack());
}

void RemoteUpgrade::on_FileFuntion_clicked()
{
    qint32 PackSize = 128;
    qDebug("On PushButton OpenFile Clicked");
    XmodemParameter.FileData.clear();  //文件buf清空

    //打开文件目录
    FilePath = QFileDialog::getOpenFileName(this,
                                                tr("Open Binary File"),
                                                ".",
                                                tr("Binary File(*.bin *.txt *.hex)"));

    //目录有效
    if(FilePath.length()) {
       ui->lineEdit->setText(FilePath);
       QFile file(FilePath);
       if(file.open(QIODevice::ReadOnly)){                 //打开文件
           XmodemParameter.FileData = file.readAll();                      //读文件
             XmodemParameter.PackNumber = XmodemParameter.FileData.size() /PackSize;//计算包数
             if(XmodemParameter.FileData.size() % PackSize)              //多出的按一包算
             {
                XmodemParameter.PackNumber += 1;

             }

           file.close();
       }
    }
    qDebug("XmodemParameter.PackNumber::%d\n",XmodemParameter.PackNumber);
}

void RemoteUpgrade::on_UpdataEUI_clicked()
{
    ui->comboBox->clear();
    for(int i = 0; i<200; i++)
    {
        if( E0stbuffer[i]!="")
            ui->comboBox->addItem( E0stbuffer[i]);
    }
}

void RemoteUpgrade::Progressfuntion()
{
    ui->progressBar->setValue(XmodemParameter.prograde);
}
