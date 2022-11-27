#include "findPwd.h"
#include "ui_findPwd.h"
#include "smtp.h"

#include <QBuffer>
#include <QButtonGroup>
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

FindPwd::FindPwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPwd)
{
    ui->setupUi(this);

    this->setFixedSize(550,600);

    this->setWindowTitle("密码找回");
}

FindPwd::~FindPwd()
{
    delete ui;
}

void FindPwd::clearMsg()
{
    ui->lineEdit_regist_user->clear();
    ui->lineEdit_new_pwd->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_check->clear();
}

void FindPwd::on_pushButton_return_login_clicked()
{
    emit signReturnLogin();
    this->hide();
}

void FindPwd::on_pushButton_Send_clicked()
{
    QString recvaddr0=ui->lineEdit_email->text();
    QRegExp re("^[A-Za-z0-9]+([_\\.][A-Za-z0-9]+)*@([A-Za-z0-9\\-]+\\.)+[A-Za-z]{2,6}$");
    if(re.exactMatch(recvaddr0)){//验证邮箱格式
        QMessageBox::information(this,"提示","验证码将在30s内发送至您的邮箱，请耐心等待。");
        QTime time= QTime::currentTime();
        qsrand(time.msec()+time.second()*1000);
        code = 1000+qrand() % (9999-1000);    //产生1000~9999以内的随机数
        qDebug() << code;
        Smtp smtp("lj108544@163.com","YDSDTBPREVTJVICU");//按照刚才的方法实例化一个smtp对象
        QByteArray recvaddr=recvaddr0.toUtf8();//QString转QByteArray
        QString subject="xx系统登录/注册验证码";
        QString content="欢迎登录/注册xx系统，本次操作的验证码为："+QString::number(code);
        smtp.send(recvaddr,subject,content);
    }
    else{
        QMessageBox::warning(this,"提示","邮箱格式不正确,请重新输入。");
    }
}

void FindPwd::on_pushButton_change_clicked()
{
    regMsg.userName   = ui->lineEdit_regist_user->text();
    regMsg.pwd        = ui->lineEdit_new_pwd->text();
    regMsg.email      = ui->lineEdit_email->text();

    //判空
    if("" == regMsg.pwd
            || "" == regMsg.userName
            || "" == regMsg.email)
    {
        qDebug() << "信息不能为空!";
        return;
    }

    //判断账号是否存在 存在:false
    if(dbManage.SelectTab(regMsg))
        return;

    //修改密码
    if(dbManage.ChangePwd(regMsg))
    {
        qDebug() << "修改成功!";
        code = 0;
    }
    else
    {
        qDebug() << "修改失败!";
    }
}
