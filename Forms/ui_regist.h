/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regist
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_icon;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_regist_user;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_pwd;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *lineEdit_pwd_confirm;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QLineEdit *lineEdit_phone;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QLineEdit *lineEdit_email;
    QSpacerItem *horizontalSpacer_19;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_7;
    QRadioButton *radioButton_normal;
    QRadioButton *radioButton_admin;
    QSpacerItem *horizontalSpacer_20;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QLineEdit *lineEdit_check;
    QPushButton *pushButton_Send;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_regist;
    QPushButton *pushButton_return_login;
    QSpacerItem *horizontalSpacer_21;

    void setupUi(QDialog *Regist)
    {
        if (Regist->objectName().isEmpty())
            Regist->setObjectName(QString::fromUtf8("Regist"));
        Regist->resize(546, 586);
        verticalLayout = new QVBoxLayout(Regist);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Regist);
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

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_icon = new QPushButton(Regist);
        pushButton_icon->setObjectName(QString::fromUtf8("pushButton_icon"));
        pushButton_icon->setMinimumSize(QSize(120, 120));
        pushButton_icon->setMaximumSize(QSize(120, 120));
        pushButton_icon->setStyleSheet(QString::fromUtf8(""));
        pushButton_icon->setFlat(false);

        gridLayout->addWidget(pushButton_icon, 0, 0, 2, 1);

        widget_2 = new QWidget(Regist);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
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


        gridLayout->addWidget(widget_2, 0, 1, 1, 1);

        widget_3 = new QWidget(Regist);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 40));
        label_3->setMaximumSize(QSize(60, 40));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_pwd = new QLineEdit(widget_3);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));
        lineEdit_pwd->setMinimumSize(QSize(200, 40));
        lineEdit_pwd->setMaximumSize(QSize(200, 40));
        lineEdit_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_pwd);

        horizontalSpacer_14 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);


        gridLayout->addWidget(widget_3, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        widget_4 = new QWidget(Regist);
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

        lineEdit_pwd_confirm = new QLineEdit(widget_4);
        lineEdit_pwd_confirm->setObjectName(QString::fromUtf8("lineEdit_pwd_confirm"));
        lineEdit_pwd_confirm->setMinimumSize(QSize(200, 40));
        lineEdit_pwd_confirm->setMaximumSize(QSize(200, 40));
        lineEdit_pwd_confirm->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_pwd_confirm);

        horizontalSpacer_16 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(Regist);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(60, 40));
        label_5->setMaximumSize(QSize(60, 40));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_phone = new QLineEdit(widget_5);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setMinimumSize(QSize(200, 40));
        lineEdit_phone->setMaximumSize(QSize(200, 40));

        horizontalLayout_5->addWidget(lineEdit_phone);

        horizontalSpacer_18 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(Regist);
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

        widget_7 = new QWidget(Regist);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(60, 40));
        label_7->setMaximumSize(QSize(60, 40));

        horizontalLayout_7->addWidget(label_7);

        radioButton_normal = new QRadioButton(widget_7);
        radioButton_normal->setObjectName(QString::fromUtf8("radioButton_normal"));

        horizontalLayout_7->addWidget(radioButton_normal);

        radioButton_admin = new QRadioButton(widget_7);
        radioButton_admin->setObjectName(QString::fromUtf8("radioButton_admin"));

        horizontalLayout_7->addWidget(radioButton_admin);

        horizontalSpacer_20 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_20);


        verticalLayout->addWidget(widget_7);

        widget_9 = new QWidget(Regist);
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

        widget_10 = new QWidget(Regist);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setSpacing(30);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_17 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        pushButton_regist = new QPushButton(widget_10);
        pushButton_regist->setObjectName(QString::fromUtf8("pushButton_regist"));
        pushButton_regist->setMinimumSize(QSize(100, 40));
        pushButton_regist->setMaximumSize(QSize(100, 40));

        horizontalLayout_10->addWidget(pushButton_regist);

        pushButton_return_login = new QPushButton(widget_10);
        pushButton_return_login->setObjectName(QString::fromUtf8("pushButton_return_login"));
        pushButton_return_login->setMinimumSize(QSize(100, 40));
        pushButton_return_login->setMaximumSize(QSize(100, 40));

        horizontalLayout_10->addWidget(pushButton_return_login);

        horizontalSpacer_21 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout->addWidget(widget_10);


        retranslateUi(Regist);

        QMetaObject::connectSlotsByName(Regist);
    } // setupUi

    void retranslateUi(QDialog *Regist)
    {
        Regist->setWindowTitle(QCoreApplication::translate("Regist", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Regist", "\344\274\201\344\270\232\345\221\230\345\267\245\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        pushButton_icon->setText(QString());
        label_2->setText(QCoreApplication::translate("Regist", "\347\224\250 \346\210\267 \345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Regist", "\345\257\206    \347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Regist", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Regist", "\347\224\265    \350\257\235\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Regist", "\351\202\256    \347\256\261\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Regist", "\346\235\203     \351\231\220\357\274\232 ", nullptr));
        radioButton_normal->setText(QCoreApplication::translate("Regist", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("Regist", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_9->setText(QCoreApplication::translate("Regist", "\351\252\214 \350\257\201 \347\240\201\357\274\232", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("Regist", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", nullptr));
        pushButton_regist->setText(QCoreApplication::translate("Regist", "\346\263\250\345\206\214", nullptr));
        pushButton_return_login->setText(QCoreApplication::translate("Regist", "\350\277\224\345\233\236\347\231\273\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regist: public Ui_Regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
