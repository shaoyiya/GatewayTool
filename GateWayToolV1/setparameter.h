#ifndef SETPARAMETER_H
#define SETPARAMETER_H

#include <QDialog>

namespace Ui {
class SetParameter;
}

class SetParameter : public QDialog
{
    Q_OBJECT

public:
    explicit SetParameter(QWidget *parent = 0);
    ~SetParameter();


private slots:

    void on_ModificationParameter_clicked();



signals:

    void SendPack(QString);

private:
    Ui::SetParameter *ui;
};

#endif // SETPARAMETER_H
