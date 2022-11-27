#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDateTime>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("主界面");
//    this->showMaximized();

    timer = new QTimer(this);
    timer->start(1);
    connect(timer,&QTimer::timeout, this, [=]()
    {
        //指定中文显示
        QLocale locale = QLocale::Chinese;
        //指定英文显示
//        QLocale locale = QLocale::English;
        //指定日语显示
//        QLocale locale = QLocale::Japanese;
        //设置时间显示样式
        QString format = "yyyy/MM/dd dddd hh:mm:ss:zzz";
        //获取当前时间
        QDateTime curTime = QDateTime::currentDateTime();
        //将当前时间根据样式显示为 中/英/日
        QString time = locale.toString(curTime, format);
        ui->label_time->setText(time);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    emit SignCloseLogin();

    if(timer->isActive())
        timer->stop();
}

void MainWindow::on_pushButton_main_exit_clicked()
{
    emit signReturnLogin();
    this->hide();
}
