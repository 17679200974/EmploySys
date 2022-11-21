﻿#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

#include <QFile>
#include <QIcon>
#include <QDebug>
#include <QSettings>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    //窗口标题
    this->setWindowTitle("登入界面");

    //设置窗口图标
    this->setWindowIcon(QIcon(":/res/user.png"));

    //固定窗口大小
    this->setFixedSize(600,400);

    //设置窗口无边框
    //    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);

    //设置无边框最大化
    //    this->showFullScreen();

    //设置窗口最大化
    //    this->showMaximized();

    this->ReadFromIni();

}

Login::~Login()
{
    delete ui;
}

bool Login::WriteToIni(const QString &userName, const QString &pwd, const int& pwdStatus ,const int& loginStatus)
{
    QSettings setting("./bin/LoginConfig.ini", QSettings::IniFormat);
    setting.setValue("Login/user", userName);
    setting.setValue("Login/password", pwd);
    setting.setValue("Login/Status", pwdStatus);
    setting.setValue("Login/AutoLogin", loginStatus);

    return true;
}

bool Login::ReadFromIni()
{
    QFile file("./bin/LoginConfig.ini");

    if(!file.exists())
        return false;

    QSettings setting("./bin/LoginConfig.ini", QSettings::IniFormat);
    int pwdStatus = setting.value("Login/Status").toInt();
    int loginStatus = setting.value("Login/AutoLogin").toInt();

    switch (pwdStatus)
    {
    case 2:
        ui->lineEdit_user->setText(setting.value("Login/user").toString());
        ui->lineEdit_Password->setText(setting.value("Login/password").toString());
        ui->checkBox_pwd->setChecked(true);
        break;
    default:
        break;
    }

    switch (loginStatus)
    {
    case 2:
        ui->lineEdit_user->setText(setting.value("Login/user").toString());
        ui->lineEdit_Password->setText(setting.value("Login/password").toString());
        ui->checkBox_pwd->setChecked(true);
        ui->checkBox_autoLogin->setChecked(true);
        this->on_login_clicked();
        break;
    default:
        break;
    }

    return true;
}

void Login::on_checkBox_pwd_stateChanged(int arg1)
{
    QString userName = ui->lineEdit_user->text();
    QString pwd = ui->lineEdit_Password->text();
    Qt::CheckState localCheckState = ui->checkBox_autoLogin->checkState();

    this->WriteToIni(userName, pwd, arg1 ,localCheckState);
}

void Login::on_checkBox_autoLogin_stateChanged(int arg1)
{
    QString userName = ui->lineEdit_user->text();
    QString pwd = ui->lineEdit_Password->text();
    Qt::CheckState localCheckState = ui->checkBox_pwd->checkState();

    this->WriteToIni(userName, pwd, localCheckState, arg1);
}

void Login::on_login_clicked()
{
    //与数据库中数据校验
    //TODO
    QString userName = ui->lineEdit_user->text();
    QString pwd = ui->lineEdit_Password->text();



    //界面跳转
    MainWindow *mainWin = new MainWindow(this);
    mainWin->show();
    this->hide();
}
