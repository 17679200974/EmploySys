#ifndef COMMON_H
#define COMMON_H
#include <QString>

enum ADMINISTRATE
{
    ADMINISTRATE_ADMIN  = 1,
    ADMINISTRATE_NORMAL = 0,
};

struct registMsg
{
    QString userName    ;
    QString pwd         ;
    QString confirmPwd  ;
    QString phone       ;
    QString email       ;
    QByteArray headImage;
    ADMINISTRATE admin  ;

    QString newPwd      ;
};

#endif // COMMON_H
