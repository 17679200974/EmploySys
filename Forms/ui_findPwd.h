/********************************************************************************
** Form generated from reading UI file 'findPwd.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPWD_H
#define UI_FINDPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindPwd
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QLineEdit *lineEdit_regist_user;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *lineEdit_new_pwd;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QLineEdit *lineEdit_email;
    QSpacerItem *horizontalSpacer_19;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QLineEdit *lineEdit_check;
    QPushButton *pushButton_Send;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_change;
    QPushButton *pushButton_return_login;
    QSpacerItem *horizontalSpacer_21;

    void setupUi(QDialog *FindPwd)
    {
        if (FindPwd->objectName().isEmpty())
            FindPwd->setObjectName(QString::fromUtf8("FindPwd"));
        FindPwd->resize(546, 456);
        verticalLayout = new QVBoxLayout(FindPwd);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(FindPwd);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(FindPwd);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 40));
        label_2->setMaximumSize(QSize(60, 40));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_regist_user = new QLineEdit(widget_2);
        lineEdit_regist_user->setObjectName(QString::fromUtf8("lineEdit_regist_user"));
        lineEdit_regist_user->setMinimumSize(QSize(200, 40));
        lineEdit_regist_user->setMaximumSize(QSize(200, 40));

        horizontalLayout_2->addWidget(lineEdit_regist_user);

        horizontalSpacer_13 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(FindPwd);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(60, 40));
        label_4->setMaximumSize(QSize(60, 40));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_new_pwd = new QLineEdit(widget_4);
        lineEdit_new_pwd->setObjectName(QString::fromUtf8("lineEdit_new_pwd"));
        lineEdit_new_pwd->setMinimumSize(QSize(200, 40));
        lineEdit_new_pwd->setMaximumSize(QSize(200, 40));
        lineEdit_new_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_new_pwd);

        horizontalSpacer_16 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(FindPwd);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(60, 40));
        label_6->setMaximumSize(QSize(60, 40));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_email = new QLineEdit(widget_6);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setMinimumSize(QSize(200, 40));
        lineEdit_email->setMaximumSize(QSize(200, 40));

        horizontalLayout_6->addWidget(lineEdit_email);

        horizontalSpacer_19 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);


        verticalLayout->addWidget(widget_6);

        widget_9 = new QWidget(FindPwd);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_15 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(60, 40));
        label_9->setMaximumSize(QSize(60, 40));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_check = new QLineEdit(widget_9);
        lineEdit_check->setObjectName(QString::fromUtf8("lineEdit_check"));
        lineEdit_check->setMinimumSize(QSize(200, 40));
        lineEdit_check->setMaximumSize(QSize(200, 40));

        horizontalLayout_9->addWidget(lineEdit_check);

        pushButton_Send = new QPushButton(widget_9);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setMinimumSize(QSize(100, 40));
        pushButton_Send->setMaximumSize(QSize(100, 40));

        horizontalLayout_9->addWidget(pushButton_Send);


        verticalLayout->addWidget(widget_9);

        widget_10 = new QWidget(FindPwd);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setSpacing(30);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_17 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        pushButton_change = new QPushButton(widget_10);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setMinimumSize(QSize(100, 40));
        pushButton_change->setMaximumSize(QSize(100, 40));

        horizontalLayout_10->addWidget(pushButton_change);

        pushButton_return_login = new QPushButton(widget_10);
        pushButton_return_login->setObjectName(QString::fromUtf8("pushButton_return_login"));
        pushButton_return_login->setMinimumSize(QSize(100, 40));
        pushButton_return_login->setMaximumSize(QSize(100, 40));

        horizontalLayout_10->addWidget(pushButton_return_login);

        horizontalSpacer_21 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout->addWidget(widget_10);


        retranslateUi(FindPwd);

        QMetaObject::connectSlotsByName(FindPwd);
    } // setupUi

    void retranslateUi(QDialog *FindPwd)
    {
        FindPwd->setWindowTitle(QCoreApplication::translate("FindPwd", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FindPwd", "\344\274\201\344\270\232\345\221\230\345\267\245\345\257\206\347\240\201\346\211\276\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("FindPwd", "\347\224\250 \346\210\267 \345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("FindPwd", "\346\226\260 \345\257\206 \347\240\201\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("FindPwd", "\351\202\256    \347\256\261\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("FindPwd", "\351\252\214 \350\257\201 \347\240\201\357\274\232", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("FindPwd", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", nullptr));
        pushButton_change->setText(QCoreApplication::translate("FindPwd", "\344\277\256\346\224\271", nullptr));
        pushButton_return_login->setText(QCoreApplication::translate("FindPwd", "\350\277\224\345\233\236\347\231\273\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPwd: public Ui_FindPwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPWD_H
