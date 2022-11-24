#include "regist.h"
#include "ui_regist.h"
#include <QBuffer>
#include <QButtonGroup>
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
    regMsg.userName   = ui->lineEdit_user->text();
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

    if(CheckNumber(number))
    {
        qDebug() << "验证成功!";
        //TODO
        //将信息写入数据库
        if(dbManage.InsertTab(regMsg))
        {
            qDebug() << "注册成功!";
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
    return true;
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
