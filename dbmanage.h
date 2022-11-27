#ifndef DBMANAGE_H
#define DBMANAGE_H
#include <QSqlDatabase>

#include"Common.h"

class DbManage
{
public:
    DbManage();
    ~DbManage();

    bool CreateDb();
    bool CheckAccount(const QString &user, const QString &pwd);
    bool InsertTab(const registMsg& regMsg);
    bool SelectTab(const registMsg& regMsg);
    bool ChangePwd(const registMsg& regMsg);


private:
    QSqlDatabase db;
};

#endif // DBMANAGE_H
