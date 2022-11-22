#ifndef DBMANAGE_H
#define DBMANAGE_H
#include <QSqlDatabase>

class DbManage
{
public:
    DbManage();
    ~DbManage();

    bool CreateDb();
    bool CheckAccount(const QString &user, const QString &pwd);

private:
    QSqlDatabase db;
};

#endif // DBMANAGE_H
