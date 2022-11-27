/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_LOGO;
    QLabel *label_AppName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_time;
    QPushButton *pushButton_main_exit;
    QTabWidget *tabWidget;
    QWidget *tab_work;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *tab_company;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QWidget *tab_work_manage;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QWidget *tab_chat;
    QGridLayout *gridLayout_4;
    QWidget *widget_4;
    QWidget *tab_log;
    QGridLayout *gridLayout_5;
    QWidget *widget_5;
    QWidget *tab_config;
    QGridLayout *gridLayout_6;
    QWidget *widget_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(835, 665);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_LOGO = new QPushButton(centralwidget);
        pushButton_LOGO->setObjectName(QString::fromUtf8("pushButton_LOGO"));
        pushButton_LOGO->setEnabled(false);
        pushButton_LOGO->setMinimumSize(QSize(60, 60));
        pushButton_LOGO->setMaximumSize(QSize(60, 60));
        QFont font;
        font.setPointSize(17);
        pushButton_LOGO->setFont(font);
        pushButton_LOGO->setCheckable(false);
        pushButton_LOGO->setFlat(true);

        horizontalLayout->addWidget(pushButton_LOGO);

        label_AppName = new QLabel(centralwidget);
        label_AppName->setObjectName(QString::fromUtf8("label_AppName"));
        QFont font1;
        font1.setPointSize(20);
        label_AppName->setFont(font1);

        horizontalLayout->addWidget(label_AppName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setFont(font1);
        label_time->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_time);

        pushButton_main_exit = new QPushButton(centralwidget);
        pushButton_main_exit->setObjectName(QString::fromUtf8("pushButton_main_exit"));
        pushButton_main_exit->setMinimumSize(QSize(60, 60));
        pushButton_main_exit->setMaximumSize(QSize(60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_main_exit->setIcon(icon);
        pushButton_main_exit->setIconSize(QSize(60, 60));
        pushButton_main_exit->setFlat(true);

        horizontalLayout->addWidget(pushButton_main_exit);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_work = new QWidget();
        tab_work->setObjectName(QString::fromUtf8("tab_work"));
        gridLayout = new QGridLayout(tab_work);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(tab_work);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/res/2.jpg);"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tabWidget->addTab(tab_work, QString());
        tab_company = new QWidget();
        tab_company->setObjectName(QString::fromUtf8("tab_company"));
        gridLayout_2 = new QGridLayout(tab_company);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(tab_company);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/3.jpg);"));

        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_company, QString());
        tab_work_manage = new QWidget();
        tab_work_manage->setObjectName(QString::fromUtf8("tab_work_manage"));
        gridLayout_3 = new QGridLayout(tab_work_manage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_3 = new QWidget(tab_work_manage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/res/4.jpg);"));

        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_work_manage, QString());
        tab_chat = new QWidget();
        tab_chat->setObjectName(QString::fromUtf8("tab_chat"));
        gridLayout_4 = new QGridLayout(tab_chat);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_4 = new QWidget(tab_chat);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("border-image: url(:/res/23.jpg);"));

        gridLayout_4->addWidget(widget_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_chat, QString());
        tab_log = new QWidget();
        tab_log->setObjectName(QString::fromUtf8("tab_log"));
        gridLayout_5 = new QGridLayout(tab_log);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_5 = new QWidget(tab_log);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("border-image: url(:/res/59.jpg);"));

        gridLayout_5->addWidget(widget_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_log, QString());
        tab_config = new QWidget();
        tab_config->setObjectName(QString::fromUtf8("tab_config"));
        gridLayout_6 = new QGridLayout(tab_config);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_6 = new QWidget(tab_config);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("border-image: url(:/res/67.jpg);"));

        gridLayout_6->addWidget(widget_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_config, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 835, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_LOGO->setText(QCoreApplication::translate("MainWindow", "LOGO", nullptr));
        label_AppName->setText(QCoreApplication::translate("MainWindow", "\344\274\201\344\270\232\345\221\230\345\267\245\347\256\241\347\220\206\345\271\263\345\217\260", nullptr));
        label_time->setText(QString());
        pushButton_main_exit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_work), QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_company), QCoreApplication::translate("MainWindow", "\344\274\201\344\270\232\344\277\241\346\201\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_work_manage), QCoreApplication::translate("MainWindow", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_chat), QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_log), QCoreApplication::translate("MainWindow", "\346\227\245\345\277\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_config), QCoreApplication::translate("MainWindow", "\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
