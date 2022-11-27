/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_login;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_user;
    QWidget *widget_user;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_user;
    QPushButton *pushButton_down;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_pwd;
    QWidget *widget_pwd;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_eyes;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *checkBox_pwd;
    QCheckBox *checkBox_autoLogin;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_LoginMsg;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *regist;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *regist_findPwd;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(523, 431);
        Login->setAutoFillBackground(true);
        Login->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_login = new QWidget(Login);
        widget_login->setObjectName(QString::fromUtf8("widget_login"));
        verticalLayout_2 = new QVBoxLayout(widget_login);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_7 = new QWidget(widget_login);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_5 = new QLabel(widget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(30);
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_3 = new QWidget(widget_login);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_user = new QLabel(widget_3);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setMinimumSize(QSize(40, 40));
        label_user->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setPointSize(10);
        label_user->setFont(font1);
        label_user->setPixmap(QPixmap(QString::fromUtf8(":/res/user1.png")));
        label_user->setScaledContents(true);

        horizontalLayout->addWidget(label_user);

        widget_user = new QWidget(widget_3);
        widget_user->setObjectName(QString::fromUtf8("widget_user"));
        widget_user->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_9 = new QHBoxLayout(widget_user);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEdit_user = new QLineEdit(widget_user);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_user->sizePolicy().hasHeightForWidth());
        lineEdit_user->setSizePolicy(sizePolicy);
        lineEdit_user->setMinimumSize(QSize(200, 40));
        lineEdit_user->setMaximumSize(QSize(200, 40));

        horizontalLayout_9->addWidget(lineEdit_user);

        pushButton_down = new QPushButton(widget_user);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setMinimumSize(QSize(40, 40));
        pushButton_down->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/down_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon);
        pushButton_down->setIconSize(QSize(40, 40));
        pushButton_down->setCheckable(true);
        pushButton_down->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_down);


        horizontalLayout->addWidget(widget_user);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_3);

        widget_2 = new QWidget(widget_login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_8 = new QHBoxLayout(widget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        label_pwd = new QLabel(widget_2);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));
        label_pwd->setMinimumSize(QSize(40, 40));
        label_pwd->setMaximumSize(QSize(40, 40));
        label_pwd->setFont(font1);
        label_pwd->setPixmap(QPixmap(QString::fromUtf8(":/res/pwd.png")));
        label_pwd->setScaledContents(true);

        horizontalLayout_8->addWidget(label_pwd);

        widget_pwd = new QWidget(widget_2);
        widget_pwd->setObjectName(QString::fromUtf8("widget_pwd"));
        widget_pwd->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget_pwd);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_Password = new QLineEdit(widget_pwd);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        sizePolicy.setHeightForWidth(lineEdit_Password->sizePolicy().hasHeightForWidth());
        lineEdit_Password->setSizePolicy(sizePolicy);
        lineEdit_Password->setMinimumSize(QSize(200, 40));
        lineEdit_Password->setMaximumSize(QSize(200, 40));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);

        pushButton_eyes = new QPushButton(widget_pwd);
        pushButton_eyes->setObjectName(QString::fromUtf8("pushButton_eyes"));
        pushButton_eyes->setMinimumSize(QSize(40, 40));
        pushButton_eyes->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/eyes_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eyes->setIcon(icon1);
        pushButton_eyes->setIconSize(QSize(40, 40));
        pushButton_eyes->setCheckable(true);
        pushButton_eyes->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_eyes);


        horizontalLayout_8->addWidget(widget_pwd);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_2->addWidget(widget_2);

        widget_5 = new QWidget(widget_login);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(16777215, 50));
        widget_5->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(50);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        checkBox_pwd = new QCheckBox(widget_5);
        checkBox_pwd->setObjectName(QString::fromUtf8("checkBox_pwd"));

        horizontalLayout_5->addWidget(checkBox_pwd);

        checkBox_autoLogin = new QCheckBox(widget_5);
        checkBox_autoLogin->setObjectName(QString::fromUtf8("checkBox_autoLogin"));

        horizontalLayout_5->addWidget(checkBox_autoLogin);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_login);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 50));
        widget_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setSpacing(86);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        label_LoginMsg = new QLabel(widget_6);
        label_LoginMsg->setObjectName(QString::fromUtf8("label_LoginMsg"));

        horizontalLayout_7->addWidget(label_LoginMsg);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_2->addWidget(widget_6);

        widget_4 = new QWidget(widget_login);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        login = new QPushButton(widget_4);
        login->setObjectName(QString::fromUtf8("login"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setMinimumSize(QSize(280, 40));
        login->setMaximumSize(QSize(280, 40));
        QFont font2;
        font2.setPointSize(9);
        login->setFont(font2);
        login->setCheckable(false);

        horizontalLayout_4->addWidget(login);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(widget_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        regist = new QPushButton(widget_login);
        regist->setObjectName(QString::fromUtf8("regist"));
        regist->setStyleSheet(QString::fromUtf8("color: rgb(194, 194, 194);"));
        regist->setFlat(true);

        horizontalLayout_6->addWidget(regist);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        regist_findPwd = new QPushButton(widget_login);
        regist_findPwd->setObjectName(QString::fromUtf8("regist_findPwd"));
        regist_findPwd->setStyleSheet(QString::fromUtf8("color: rgb(194, 194, 194);"));
        regist_findPwd->setFlat(true);

        horizontalLayout_6->addWidget(regist_findPwd);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(widget_login);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "\344\274\201\344\270\232\345\221\230\345\267\245\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_user->setText(QString());
        lineEdit_user->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton_down->setText(QString());
        label_pwd->setText(QString());
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_eyes->setText(QString());
        checkBox_pwd->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBox_autoLogin->setText(QCoreApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\205\245", nullptr));
        label_LoginMsg->setText(QString());
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\205\245", nullptr));
        regist->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        regist_findPwd->setText(QCoreApplication::translate("Login", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
