#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    bool WriteToIni(const QString &userName, const QString &pwd, const int& pwdStatus ,const int& loginStatus);
    bool ReadFromIni();

signals:

private slots:
    void on_checkBox_pwd_stateChanged(int arg1);

    void on_checkBox_autoLogin_stateChanged(int arg1);

    void on_login_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
