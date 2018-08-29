#ifndef SETTYPE_H
#define SETTYPE_H

#include <QDialog>
#include <QTime>
#include <QtDebug>
#include <QTimer>
namespace Ui {
class SetType;
}

class SetType : public QDialog
{
    Q_OBJECT

public:
    explicit SetType(QWidget *parent = 0);
    ~SetType();

      QTimer *receive_timer = new QTimer(this);

      void ShowFuntion();

      void StateFuntion();

       void sleep(unsigned int msec);
private slots:
    void on_GainTypeFuntion_clicked();

      void UPdatafuntion();
      void on_ChangeTypeFuntion_clicked();

      void on_SelectAllFuntion_clicked();

signals:

    void SendPack();

    void SendPack1(QString);

private:
    Ui::SetType *ui;
};
extern QString QueryData;
#endif // SETTYPE_H
