#ifndef LOGIN_H
#define LOGIN_H

#include <QTimer>
#include <QWidget>
#include <QKeyEvent>
#include <QEvent>

#include "dbmanage.h"
#include "mainwindow.h"
#include "regist.h"
#include "findPwd.h"

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
    void contextMenuEvent(QContextMenuEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);


    bool WriteToIni(const QString &userName, const QString &pwd, const int& pwdStatus ,const int& loginStatus);
    bool ReadFromIni();


    void ShowLoginMsg();

    void ChangeBgk();

    void SetStyle();
    
signals:

private slots:
    void on_checkBox_pwd_stateChanged(int arg1);

    void on_checkBox_autoLogin_stateChanged(int arg1);

    void on_login_clicked();

    void on_regist_clicked();

    void SlotChangeBgk(bool isClicked);

    void on_pushButton_eyes_pressed();

    void on_pushButton_eyes_released();

    void on_regist_findPwd_clicked();

private:
    Ui::Login *ui;
    MainWindow *mainWin;
    Regist* regist;
    FindPwd* findPwd;
    QTimer timer;
    DbManage dbManage;

    QMenu* menu;
    QAction * changeBgk;
};

#endif // LOGIN_H
