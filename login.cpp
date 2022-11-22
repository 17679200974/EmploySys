#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

#include <QFile>
#include <QIcon>
#include <QDebug>
#include <QSettings>
#include <QMessageBox>
#include <QTimer>

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

    mainWin = new MainWindow(this);

    //设置窗口无边框
    //    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);

    //设置无边框最大化
    //    this->showFullScreen();

    //设置窗口最大化
    //    this->showMaximized();

    //构造函数读取配置文件
    this->ReadFromIni();
//    this->installEventFilter(this);

    //接收MainWindow发出的SignCloseLogin信号，执行对应功能
//    connect(mainWin, &MainWindow::SignCloseLogin,this,[=]()
//    {
//        this->close();
//    });

}

Login::~Login()
{
    delete ui;
}

void Login::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return)
    {
        this->on_login_clicked();
    }
    else if((event->modifiers() == (Qt::ControlModifier | Qt::AltModifier))
            && (event->key() == Qt::Key_A))
    {
        qDebug() << "CTRL+ALT+A";
    }
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

    //自动登入被勾选上，同时记住密码也被勾选上
    if(Qt::Checked == arg1)
    {
        ui->checkBox_pwd->setChecked(true);
    }

    Qt::CheckState localCheckState = ui->checkBox_pwd->checkState();

    this->WriteToIni(userName, pwd, localCheckState, arg1);
}

void Login::on_login_clicked()
{
    //与数据库中数据校验
    //TODO
    QString userName = ui->lineEdit_user->text();
    QString pwd = ui->lineEdit_Password->text();

    if(dbManage.CheckAccount(userName, pwd))
    {
        //界面跳转
        mainWin->show();
        this->hide();
    }
    else
    {
//        QMessageBox::information(this, "警告","用户名或密码错误!");
        ui->label_LoginMsg->setText("用户名或密码错误!");

        //错误信息显示2秒后消失
        if(timer.isActive())
            timer.stop();

        timer.start(2000);
        connect(&timer,&QTimer::timeout,[=]()
        {
            ui->label_LoginMsg->clear();
        });
    }

}
