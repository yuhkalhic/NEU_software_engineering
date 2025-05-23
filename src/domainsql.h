#ifndef DOMAINSQL_H
#define DOMAINSQL_H

#include "header.h"


class domainsql : public QObject
{
    Q_OBJECT
public:
    explicit domainsql(QObject *parent = nullptr);
    QSqlDatabase db;
    bool connecting(void);
    void backup(void);
    void loginConnect(void);
    bool connectDataBase(void);
    QString XOREncode(const QString &originalPwd);
    QString Sha256Encode(const QString &originalPwd);
    QString removeFirstSegment(const QString &domain);
    int getLevel(const QString &domain);
    bool domainExists(const QString &domainName);
    bool hasChildren(const QString &domainName);
    bool insert(const QString &target, const int &level, const QString &user);
    bool remove(const QString &target);
    bool removeWithChildren(const QString &domainName);
    bool recursiveDelete(const QString &domainName);

signals:
private:
};

#endif // DOMAINSQL_H
