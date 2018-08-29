#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <QDialog>
#include <QtDebug>
#include <QTime>
#include <QtDebug>
#include <QTimer>
namespace Ui {
class AlarmClock;
}

class AlarmClock : public QDialog
{
    Q_OBJECT

public:
    explicit AlarmClock(QWidget *parent = 0);
    ~AlarmClock();

     QTimer *receive_timer = new QTimer(this);

private slots:
   // void on_verticalSlider_valueChanged(int value);

    void on_verticalSliderOpen_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_verticalSlider_2_valueChanged(int value);

    void on_spinBox_2_valueChanged(int arg1);

    void on_verticalSlider_3_valueChanged(int value);

    void on_spinBox_4_valueChanged(int arg1);

    void on_verticalSlider_4_valueChanged(int value);

    void on_spinBox_3_valueChanged(int arg1);

    void on_SendAlarmData_clicked();

    void on_GainAlarm_clicked();

    void UPdatafuntion();

signals:
    void SendPack(QString str);
     void SendPack1();

private:
    Ui::AlarmClock *ui;
};
extern QString AlarmData;
#endif // ALARMCLOCK_H
