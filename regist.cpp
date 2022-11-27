#include "regist.h"
#include "ui_regist.h"
#include "smtp.h"

#include <QBuffer>
#include <QButtonGroup>
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

Regist::Regist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Regist)
{
    ui->setupUi(this);

    this->setFixedSize(550,600);

    this->setWindowTitle("注册界面");

    ui->pushButton_icon->setText("选择头像");
}

Regist::~Regist()
{
    delete ui;
}

void Regist::on_pushButton_return_login_clicked()
{
    emit signReturnLogin();
    this->hide();
}

void Regist::on_pushButton_regist_clicked()
{
    regMsg.userName   = ui->lineEdit_regist_user->text();
    regMsg.pwd        = ui->lineEdit_pwd->text();
    regMsg.confirmPwd = ui->lineEdit_pwd_confirm->text();
    regMsg.phone      = ui->lineEdit_phone->text();
    regMsg.email      = ui->lineEdit_email->text();


    QButtonGroup* btnGroup = new QButtonGroup();
    btnGroup->setExclusive(true);

    btnGroup->addButton(ui->radioButton_admin,0);
    btnGroup->addButton(ui->radioButton_normal,0);

    if(ui->radioButton_admin->isChecked())
    {
        regMsg.admin = ADMINISTRATE_ADMIN;
    }
    else if(ui->radioButton_normal->isChecked())
    {
        regMsg.admin = ADMINISTRATE_NORMAL;
    }

    //验证码TODO
    QString number = ui->lineEdit_check->text();



    //判空
    if("" == regMsg.pwd
            || "" == regMsg.userName
            || "" == regMsg.confirmPwd
            || "" == regMsg.phone
            || "" == regMsg.email
            || "" == QString::number(regMsg.admin))
    {
        qDebug() << "信息不能为空!";
        return;
    }

    //判断密码是否一致
    if(regMsg.pwd != regMsg.confirmPwd)
    {
        qDebug() << "密码不一致!";
        return;
    }

    //判断账号是否存在 存在:false
    if(!dbManage.SelectTab(regMsg))
        return;

    if(CheckNumber(number))
    {
        qDebug() << "验证成功!";
        //将信息写入数据库
        if(dbManage.InsertTab(regMsg))
        {
            qDebug() << "注册成功!";
            code = 0;
        }
        else
        {
            qDebug() << "注册失败!";
        }
    }
    else
    {
        qDebug() << "请重新输入验证码!";
        ui->lineEdit_check->clear();
    }

}
bool Regist::CheckNumber(const QString &number)
{
    if (code == number)
        return false;
    return true;
}

void Regist::clearMsg()
{
    ui->lineEdit_pwd->clear();
    ui->lineEdit_check->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_phone->clear();
    ui->lineEdit_pwd_confirm->clear();
    ui->lineEdit_regist_user->clear();

}

void Regist::on_pushButton_icon_clicked()
{
    ui->pushButton_icon->setText("");

    QString openFilePath = QFileDialog::getOpenFileName(
                this,tr("选择头像"),
                "./",
                tr("Image files(*.jpg *.png);;All files(*.*)"));

    if(openFilePath.isEmpty())
    {
        return;
    }

    //显示头像
    ui->pushButton_icon->setStyleSheet(QString("QPushButton{border:1px solid black;border-radius:60px;"
                                               "border-image:url(%1);}").arg(openFilePath));

    //将图片转换为QByteArray
    QFile file(openFilePath);
    if(!file.open(QIODevice::ReadOnly))
        return;
    regMsg.headImage = file.readAll();
}

void Regist::on_pushButton_Send_clicked()
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
