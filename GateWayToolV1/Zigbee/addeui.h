#ifndef ADDEUI_H
#define ADDEUI_H

#include <QDialog>

namespace Ui {
class addeui;
}

class addeui : public QDialog
{
    Q_OBJECT

public:
    explicit addeui(QWidget *parent = 0);
    ~addeui();

    QString Validation_And(QString str);

private slots:

    void on_Send_funtion_clicked();

signals:

    void SendPack(QString);

private:
    Ui::addeui *ui;
};

#endif // ADDEUI_H
