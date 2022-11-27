#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "regist.h"


#include <QFile>
#include <QIcon>
#include <QDebug>
#include <QSettings>
#include <QMessageBox>
#include <QTimer>
#include <QMenu>
#include <QFileDialog>

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

    //顶层容器使用样式属性
    //    setAttribute(Qt::WA_StyledBackground);

    dbManage.CreateDb();

    mainWin = new MainWindow(this);
    regist = new Regist(this);
    findPwd = new FindPwd(this);

    //给pushButton_eyes,pushButton_down安装事件过滤器
    ui->pushButton_eyes->installEventFilter(this);
    ui->pushButton_down->installEventFilter(this);

    //设置窗口无边框
    //    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);

    //设置无边框最大化
    //    this->showFullScreen();

    //设置窗口最大化
    //    this->showMaximized();

    //构造函数读取配置文件
    this->ReadFromIni();

    //初始化Action 改变背景
    //    this->ChangeBgk();
    menu = new QMenu();
    changeBgk = new QAction("自定义背景",this);
    menu->addAction(changeBgk);

    //更换背景
    bool ret = connect(changeBgk, SIGNAL(triggered(bool)), this, SLOT(SlotChangeBgk(bool)));

    //接收MainWindow发出的SignCloseLogin信号，执行对应功能
    connect(mainWin, &MainWindow::SignCloseLogin,this,[=]()
    {
        this->close();
    });

    connect(regist, &Regist::signReturnLogin,this,[=]()
    {
        this->show();
    });
    connect(findPwd, &FindPwd::signReturnLogin,this,[=]()
    {
        this->show();
    });
    connect(mainWin, &MainWindow::signReturnLogin,this,[=]()
    {
        this->show();
    });

    //设置样式
    this->SetStyle();
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

void Login::contextMenuEvent(QContextMenuEvent *event)
{
    menu->exec(event->globalPos());
}

bool Login::eventFilter(QObject *watched, QEvent *event)
{
    if(ui->pushButton_eyes == watched)
    {
        if(QEvent::Enter == event->type())
        {
            ui->pushButton_eyes->setIcon(QIcon(":/res/eyes_black.png"));
        }
        else if(QEvent::Leave == event->type())
        {
            ui->pushButton_eyes->setIcon(QIcon(":/res/eyes_white.png"));
        }

    }
    else if(ui->pushButton_down == watched)
    {
        if(QEvent::Enter == event->type())
        {
            ui->pushButton_down->setIcon(QIcon(":/res/down_black.png"));
        }
        else if(QEvent::Leave == event->type())
        {
            ui->pushButton_down->setIcon(QIcon(":/res/down_white.png"));
        }
    }
    return QWidget::eventFilter(watched, event);
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
        ui->checkBox_pwd->setCheckState(Qt::Checked);
        break;
    default:
        break;
    }

    switch (loginStatus)
    {
    case 2:
        ui->lineEdit_user->setText(setting.value("Login/user").toString());
        ui->lineEdit_Password->setText(setting.value("Login/password").toString());
        ui->checkBox_pwd->setCheckState(Qt::Checked);
        ui->checkBox_autoLogin->setCheckState(Qt::Checked);
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

void Login::ShowLoginMsg()
{
    if(timer.isActive())
        timer.stop();

    timer.start(2000);
    connect(&timer,&QTimer::timeout,[=]()
    {
        ui->label_LoginMsg->clear();
    });
}

void Login::ChangeBgk()
{

}

void Login::SetStyle()
{
    QFile file(":/style.qss");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        this->setStyleSheet(file.readAll());
        file.close();
    }
}

void Login::on_login_clicked()
{
    //与数据库中数据校验
    //TODO
    QString userName = ui->lineEdit_user->text();
    QString pwd = ui->lineEdit_Password->text();

    //判空
    if(userName.isEmpty() || pwd.isEmpty())
    {
        ui->label_LoginMsg->setText("用户名或密码不能为空!");
        //错误信息显示2秒后消失
        ShowLoginMsg();
        return;
    }


    if(dbManage.CheckAccount(userName, pwd))
    {
        //界面跳转
        mainWin->showMaximized();
        this->hide();
    }
    else
    {
        ui->label_LoginMsg->setText("用户名或密码错误!");

        //错误信息显示2秒后消失
        ShowLoginMsg();
        return;
    }

}

void Login::on_regist_clicked()
{
    this->hide();
    regist->clearMsg();
    regist->show();
}

void Login::SlotChangeBgk(bool isOk)
{
    if(!isOk)
    {
        QString openFilePath = QFileDialog::getOpenFileName(
                    this,tr("选择头像"),
                    "./",
                    tr("Image files(*.jpg *.png);;All files(*.*)"));

        if(openFilePath.isEmpty())
        {
            return;
        }
        //显示背景
        ui->widget_login->setStyleSheet(QString("#widget_login{border-image:url(%1);}").arg(openFilePath));
    }
}

void Login::on_pushButton_eyes_pressed()
{
    ui->lineEdit_Password->setEchoMode(QLineEdit::Normal);
}

void Login::on_pushButton_eyes_released()
{
    ui->lineEdit_Password->setEchoMode(QLineEdit::Password);
}

void Login::on_regist_findPwd_clicked()
{
    this->hide();
    findPwd->clearMsg();
    findPwd->show();
}
