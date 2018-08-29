#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "changeip.h"
#include "updataorvpn.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_ChangeIpAddress_clicked();

    void on_updataOrVpn_clicked();

    void on_ScanIpFuntion_clicked();

    void on_pushButton_3_clicked();

    void on_Chage485Funtion_clicked();

    void on_NewZigbeeFuntion_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
