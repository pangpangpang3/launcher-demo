#include "dbusargument.h"
/*  catalogInfo type */
CatalogInfo::CatalogInfo(){
}

CatalogInfo::~CatalogInfo(){
}

void CatalogInfo::registerMetaType()
{
    qRegisterMetaType<CatalogInfo>("CatalogInfo");
    qDBusRegisterMetaType<CatalogInfo>();
}

QDBusArgument &operator<<(QDBusArgument &argument, const CatalogInfo &obj)
{
    argument.beginStructure();
    argument << obj.name<<obj.key;
    argument << obj.appList;
    argument.endStructure();
    return argument;
}
const QDBusArgument &operator>>(const QDBusArgument &argument, CatalogInfo &obj)
{
    argument.beginStructure();
    argument >> obj.name >> obj.key;
    argument >> obj.appList;
    argument.endStructure();
    return argument;
}

QDebug &operator<<(QDebug &argument, const CatalogInfo &obj)
{
    argument <<'(' << obj.name << ", " << obj.key << ", " << obj.appList << ')';
    return argument;
}

/*   AppFrequency    */
AppFrequency::AppFrequency(){
}

AppFrequency::~AppFrequency(){
}

void AppFrequency::registerMetaType()
{
    qRegisterMetaType<AppFrequency>("AppFrequency");
    qDBusRegisterMetaType<AppFrequency>();
}

QDBusArgument &operator<<(QDBusArgument &argument, const AppFrequency &obj)
{
    argument.beginStructure();
    argument << obj.name<<obj.key;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument, AppFrequency &obj)
{
    argument.beginStructure();
    argument >> obj.name >> obj.key;
    argument.endStructure();
    return argument;
}
QDebug &operator<<(QDebug &argument, const AppFrequency &obj)
{
    argument <<'(' << obj.name << ", " << obj.key << ')';
    return argument;
}

/* AppTimeInstalled */
AppTimeInstalled::AppTimeInstalled(){
}

AppTimeInstalled::~AppTimeInstalled(){
}

void AppTimeInstalled::registerMetaType()
{
    qRegisterMetaType<AppTimeInstalled>("AppTimeInstalled");
    qDBusRegisterMetaType<AppTimeInstalled>();
}

QDBusArgument &operator<<(QDBusArgument &argument, const AppTimeInstalled &obj)
{
    argument.beginStructure();
    argument << obj.name<<obj.key;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument,AppTimeInstalled &obj)
{
    argument.beginStructure();
    argument >> obj.name >> obj.key;
    argument.endStructure();
    return argument;
}
QDebug &operator<<(QDebug &argument, const AppTimeInstalled &obj)
{
    argument <<'(' << obj.name << ", " << obj.key << ')';
    return argument;
}

/*  App Info */
AppInfo::AppInfo(){
}

AppInfo::~AppInfo(){
}

void AppInfo::registerMetaType()
{
    qRegisterMetaType<AppInfo>("AppInfo");
    qDBusRegisterMetaType<AppInfo>();
}

QDBusArgument &operator<<(QDBusArgument &argument, const AppInfo &obj)
{

    argument.beginStructure();
    argument << obj.url<<obj.icontext;
    argument << obj.name1<<obj.name2;
    argument << obj.id << obj.key;
    argument.endStructure();
    return argument;
}

const QDBusArgument &operator>>(const QDBusArgument &argument,AppInfo &obj)
{
    argument.beginStructure();
    argument >> obj.url>>obj.icontext;
    argument >> obj.name1>>obj.name2;
    argument >> obj.id >> obj.key;
    argument.endStructure();
    return argument;
}

QDebug &operator<<(QDebug &argument, const AppInfo &obj)
{
    argument << '(' << obj.url << ", " << obj.icontext;
    argument << obj.name1 << obj.name2;
    argument << obj.id << obj.key << ')';
    return argument;
}










