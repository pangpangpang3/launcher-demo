#ifndef DBUSTYPE
#define DBUSTYPE

#endif // DBUSTYPE

#ifndef DBUSTYPE_H
#define DBUSTYPE_H

#include <QtCore>
#include <QtDBus/QDBusArgument>
#include <QtDBus/QDBusMetaType>


class CatalogInfo
{
public:
    QString name;
    qlonglong key;
    QStringList appList ;

    CatalogInfo();
    ~CatalogInfo();

    friend QDBusArgument &operator<<(QDBusArgument &argument, const CatalogInfo &obj);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, CatalogInfo &obj);

    friend QDebug &operator<<(QDebug &argument, const CatalogInfo &obj);
    friend const QDebug &operator>>(const QDebug &argument, CatalogInfo &obj);

    static void registerMetaType();
};

typedef QList<CatalogInfo> CatalogInfoList;
Q_DECLARE_METATYPE(CatalogInfo)
Q_DECLARE_METATYPE(CatalogInfoList)

class AppFrequency {
public:
    QString name;
    qulonglong key;

    AppFrequency();
    ~AppFrequency();

    friend QDBusArgument &operator<<(QDBusArgument &argument, const AppFrequency &obj);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, AppFrequency &obj);

    friend QDebug &operator<<(QDebug &argument, const AppFrequency &obj);
    friend const QDebug &operator>>(const QDebug &argument, AppFrequency &obj);

    static void registerMetaType();
};

typedef QList<AppFrequency> AppFrequencyList;
Q_DECLARE_METATYPE(AppFrequency)
Q_DECLARE_METATYPE(AppFrequencyList)

class AppTimeInstalled {
public:
    QString name;
    qlonglong key;

    AppTimeInstalled();
    ~AppTimeInstalled();

    friend QDBusArgument &operator<<(QDBusArgument &argument, const AppTimeInstalled &obj);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, AppTimeInstalled &obj);

    friend QDebug &operator<<(QDebug &argument, const AppTimeInstalled &obj);
    friend const QDebug &operator>>(const QDebug &argument, AppTimeInstalled &obj);

    static void registerMetaType();
};

typedef QList<AppTimeInstalled> AppTimeInstalledList;
Q_DECLARE_METATYPE(AppTimeInstalled)
Q_DECLARE_METATYPE(AppTimeInstalledList)

class AppInfo {
public:
    QString url;
    QString icontext;
    QString name1;
    QString name2;
    qlonglong id;
    qlonglong key;

    AppInfo();
    ~AppInfo();

    friend QDBusArgument &operator<<(QDBusArgument &argument, const AppInfo &obj);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, AppInfo &obj);

    friend QDebug &operator<<(QDebug &argument, const AppInfo &obj);
    friend const QDebug &operator>>(const QDebug &argument, AppInfo &obj);

    static void registerMetaType();
};

typedef QList<AppInfo> AppInfoList;
Q_DECLARE_METATYPE(AppInfo)
Q_DECLARE_METATYPE(AppInfoList)

#endif // DBUSTYPE_H
