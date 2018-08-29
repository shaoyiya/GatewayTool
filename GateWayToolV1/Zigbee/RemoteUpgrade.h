#ifndef REMOTEUPGRADE_H
#define REMOTEUPGRADE_H

#include <QDialog>
#include <QFileDialog>
#include <QTimer>
namespace Ui {
class RemoteUpgrade;
}

class RemoteUpgrade : public QDialog
{
    Q_OBJECT

public:
    explicit RemoteUpgrade(QWidget *parent = 0);
    ~RemoteUpgrade();

    QTimer *receive_timer = new QTimer(this);


private slots:
    void on_Start_clicked();

    void on_FileFuntion_clicked();

    void on_UpdataEUI_clicked();

     void Progressfuntion();

private:
    Ui::RemoteUpgrade *ui;

   // QByteArray FileData;               //文件内容
    QString FilePath;                      //文件目录
signals:

    void SendPack();


};

#endif // REMOTEUPGRADE_H
