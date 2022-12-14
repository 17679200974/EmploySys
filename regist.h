#ifndef REGIST_H
#define REGIST_H

#include <QDialog>
#include "Common.h"
#include "dbmanage.h"

namespace Ui {class Regist;}

class Regist : public QDialog
{
    Q_OBJECT

public:
    explicit Regist(QWidget *parent = nullptr);
    ~Regist();

    bool CheckNumber(const QString& number);
    void clearMsg();

signals:
    void signReturnLogin();

private slots:
    void on_pushButton_return_login_clicked();

    void on_pushButton_regist_clicked();

    void on_pushButton_icon_clicked();

    void on_pushButton_Send_clicked();

public:


private:
    Ui::Regist *ui;
    DbManage dbManage;
    registMsg regMsg;
    int code;

};

#endif // REGIST_H
