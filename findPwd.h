#ifndef FINDPWD_H
#define FINDPWD_H

#include <QDialog>
#include "Common.h"
#include "dbmanage.h"

namespace Ui {class FindPwd;}

class FindPwd : public QDialog
{
    Q_OBJECT

public:
    explicit FindPwd(QWidget *parent = nullptr);
    ~FindPwd();

    void clearMsg();

signals:
    void signReturnLogin();

private slots:
    void on_pushButton_return_login_clicked();

    void on_pushButton_Send_clicked();

    void on_pushButton_change_clicked();

public:


private:
    Ui::FindPwd *ui;
    DbManage dbManage;
    registMsg regMsg;
    int code;

};

#endif // REGIST_H
