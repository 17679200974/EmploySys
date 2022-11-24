#ifndef LOGIN_H
#define LOGIN_H

#include <QTimer>
#include <QWidget>
#include <QKeyEvent>
#include <QEvent>

#include "dbmanage.h"
#include "mainwindow.h"
#include "regist.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    void keyPressEvent(QKeyEvent *event);


    bool WriteToIni(const QString &userName, const QString &pwd, const int& pwdStatus ,const int& loginStatus);
    bool ReadFromIni();


signals:

private slots:
    void on_checkBox_pwd_stateChanged(int arg1);

    void on_checkBox_autoLogin_stateChanged(int arg1);

    void on_login_clicked();

    void on_regist_clicked();

private:
    Ui::Login *ui;
    MainWindow *mainWin;
    Regist* regist;
    QTimer timer;

    DbManage dbManage;
};

#endif // LOGIN_H
