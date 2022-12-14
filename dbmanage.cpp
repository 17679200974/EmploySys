#include "dbmanage.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

DbManage::DbManage()
{
}

DbManage::~DbManage()
{

}

bool DbManage::CreateDb()
{
    //创建数据库并链接
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("EmploySys.db");
    db.setUserName("root");
    db.setPassword("password");

    //打开数据库
    if(!db.open())
    {
        qDebug() << "open error:" << db.lastError();
    }

    //创建表
    //    QSqlQuery query(db);

    //    //id主键 用户名 密码 电话 邮箱 登入标志（是否为新用户） 权限
    //    QString cmd = "create table LoginTable(id integer primary key,"
    //                  "user varchar(20),"
    //                  "pwd varchar(20),"
    //                  "phone varchar(20),"
    //                  "email varchar(20),"
    //                  "loginTarget integer,"
    //                  "Permissions integer,"
    //                  "headImage BLOB);";

    //    if(!query.exec(cmd))
    //    {
    //        qDebug() << "create error!";
    //    }

    //插入数据
    //    cmd = "insert into LoginTable(user,pwd,phone,email,loginTarget,Permissions) values("
    //          "'lijian','123456','17679200974','lj1805200121@outlook.com',1,1);";

    //    if(!query.exec(cmd))
    //    {
    //        qDebug() << "insert error!";
    //    }

}

bool DbManage::CheckAccount(const QString &user, const QString &pwd)
{
    QSqlQuery query(db);

    QString cmd = "select * from LoginTable;";
    if(!query.exec(cmd))
    {
        qDebug() << "select error!";
    }
    else
    {
        while(query.next())
        {
            //判断用户名存在与否
            if(user == query.value(1).toString())
            {
                //判断密码是否正确
                if(pwd == query.value(2))
                {
                    return true;
                }
                else
                {
                    qDebug() << "用户名或密码错误!";
                }
            }
            else
            {
                qDebug() << "用户名或密码错误!";
            }
        }
    }
    return false;
}

bool DbManage::InsertTab(const registMsg &regMsg)
{
    QSqlQuery query(db);

    query.prepare("insert into LoginTable(user,pwd,phone,email,loginTarget,Permissions,headImage) values(:user,:pwd,:phone,:email,1,:Permissions,:headImage)");
    query.bindValue(":user"       , regMsg.userName );
    query.bindValue(":pwd"        , regMsg.pwd      );
    query.bindValue(":phone"      , regMsg.phone    );
    query.bindValue(":email"      , regMsg.email    );
    query.bindValue(":Permissions", regMsg.admin    );
    query.bindValue(":headImage"  , regMsg.headImage);

    if(!query.exec())
    {
        qDebug() << "insert error!";
        return false;
    }
    else
    {
        qDebug() << "insert success!";
        return true;
    }
}

bool DbManage::SelectTab(const registMsg &regMsg)
{
    QSqlQuery query(db);
    query.prepare("select user from LoginTable;");

    if(!query.exec())
    {
        qDebug() << "select error!";
        return false;
    }
    else
    {
        qDebug() << "select success!";

        while(query.next())
        {
            qDebug() << query.value(0);

            if(query.value(0) == regMsg.userName)
            {
                qDebug() << "用户名已存在!";
                return false;
            }
        }
        return true;
    }

}

bool DbManage::ChangePwd(const registMsg &regMsg)
{
    QSqlQuery query(db);
    query.prepare(QString("update LoginTable set pwd = '%1' where user = '%2';").arg(regMsg.pwd).arg(regMsg.userName));

    if(!query.exec())
    {
        qDebug() << "update error!";
        return false;
    }
    else
    {
        qDebug() << "update success!";
        return true;
    }
}
