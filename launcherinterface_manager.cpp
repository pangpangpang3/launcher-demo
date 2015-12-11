#include <QtWidgets>
#include <QtGui>
#include <QtCore>


#include "launcherinterface.h"
#include "launcherinterface_manager.h"

LauncherInterfaceManager::LauncherInterfaceManager(QObject *parent)
    : QObject(parent) {
  m_launcherInterface = new LauncherInterface(Launcher_service, Launcher_path, QDBusConnection::sessionBus(), this);
  m_filemanagerInterface = new FileManagerInterface(FileManager_service, FileManager_path, QDBusConnection::sessionBus(), this);


  GetLeftNaviInfo();
  GetAllItemByName();
  GetAllUrlListByName(appInfoListByName, 48);
  GetAppFrequency();
  GetAppTimeInstalled();
  GetAllCatalogInfo();
  allItemId = GetCatalogAppList("all");
}

LauncherInterfaceManager::~LauncherInterfaceManager() {
}



QStringList LauncherInterfaceManager::sortedStringList(QStringList beSortedList) {
    beSortedList.sort();
    return beSortedList;
}
void LauncherInterfaceManager::GetAllCatalogInfo() {
    QDBusPendingReply<CatalogInfoList> tmpCatalogInfoList = m_launcherInterface->GetAllCategoryInfos();
    tmpCatalogInfoList.waitForFinished();
    if (tmpCatalogInfoList.isValid()) {
        //qDebug() << "tmpCatalogInfoList:" << tmpCatalogInfoList.value();
        totalCatalogInfoList = tmpCatalogInfoList.value();
    }
}

QStringList LauncherInterfaceManager::GetCatalogAppList(QString catalogId) {

    for (int i = 0; i < totalCatalogInfoList.length(); i++) {
        if (totalCatalogInfoList[i].name == catalogId) {
            qDebug() << totalCatalogInfoList[i].name ;
            qDebug() << "totalCatalogInfoList:" << totalCatalogInfoList[i].appList;
             return sortedStringList(totalCatalogInfoList[i].appList);

        }
    }
    QStringList odd;
    return odd;
}

void LauncherInterfaceManager::GetLeftNaviInfo() {

    QDBusReply<CatalogInfo> getCatalogInfo;
    for (qlonglong i = 0; i < 11; i++) {
        getCatalogInfo = m_launcherInterface->GetCategoryInfo(i);
        if (getCatalogInfo.isValid() && getCatalogInfo.value().appList.length()!=0) {
            leftNaviInfo.append(getCatalogInfo.value());
        }
    }
    getCatalogInfo = m_launcherInterface->GetCategoryInfo(qint64(-2));
    if (getCatalogInfo.isValid() && getCatalogInfo.value().appList.length()!=0) {
        leftNaviInfo.append(getCatalogInfo.value());
    }

    qDebug()<<"leftNaviInfo:"<<leftNaviInfo.count();
}

void LauncherInterfaceManager::GetTableItemInfoWithClassifyBar(QStringList AppList) {
    if (AppList.length()==0) {
        return;
    }

    QDBusReply<AppInfo> getAppInfo;
    for (int i = 0; i < AppList.length(); i++) {
        getAppInfo = m_launcherInterface->GetItemInfo(AppList[i]);
       // qDebug() << "Get App Info:" << getAppInfo;
        if (getAppInfo.isValid()) {
            appInfoListWithClassifyBar.append(getAppInfo);
        }
    }
    qDebug()<<"Get Item Info: "<<appInfoListWithClassifyBar.count();
}

void LauncherInterfaceManager::GetTableItemWithClassifyBar(QStringList iconDesktopUrlList, int iconSize) {
    iconUrlListWithClassifyBar = ConvertDesktop2Png(iconDesktopUrlList, iconSize);
}

QStringList LauncherInterfaceManager::ConvertDesktop2Png(QStringList iconDesktopUrlList, int iconSize) {

    QString iconInfo, iconDesktopUrl;
    QStringList iconUrlList;
    for (int i = 0; i < iconDesktopUrlList.length(); i++) {
        iconDesktopUrl = QString("file://%1").arg(iconDesktopUrlList[i]);
        iconInfo = GetItemIcon(iconDesktopUrl, iconSize);
        iconUrlList.append(iconInfo);
    }
    return iconUrlList;
}
QString LauncherInterfaceManager::GetItemIcon(QString iconDesktopUrl, int icon_size) {

    QDBusPendingReply<QString> iconPngInfo;
    iconPngInfo = m_filemanagerInterface->GetThemeIcon(iconDesktopUrl, icon_size);
    iconPngInfo.waitForFinished();

    return iconPngInfo.value();

}
void LauncherInterfaceManager::GetAllItemByName() {

    QDBusPendingReply<AppInfoList> getAppInfoList = m_launcherInterface->GetAllItemInfos();
    getAppInfoList.waitForFinished();
    if (getAppInfoList.isValid()) {
        appInfoListByName = getAppInfoList;
    }
}
void LauncherInterfaceManager::GetAllUrlListByName(AppInfoList appInfoList, int iconSize) {

    QStringList iconDesktopUrlListByName;
    for (int i = 0; i < appInfoList.length(); i++) {
        iconDesktopUrlListByName.append(appInfoList[i].url);
    }
    iconUrlListByName = ConvertDesktop2Png(iconDesktopUrlListByName, iconSize);
}

void LauncherInterfaceManager::GetAppTimeInstalled() {
    QDBusPendingReply<AppTimeInstalledList> tmpAppTimeInstalledList = m_launcherInterface->GetAllTimeInstalled();
    tmpAppTimeInstalledList.waitForFinished();

    //qDebug() <<  tmpAppTimeInstalledList.error();
    if (tmpAppTimeInstalledList.isValid()) {
        appTimeInstalledList = tmpAppTimeInstalledList.value();
    }

    //qDebug() << "tmp App TimeInstalledList "   ;
    QMap<qlonglong, QString> appTimeInstalledMap;
    for (int i = 0; i < appTimeInstalledList.length(); i++) {
        for (int j = 0; j < appInfoListByName.length(); j++) {
            if (appTimeInstalledList[i].name == appInfoListByName[j].name1) {
                appTimeInstalledMap.insert(appTimeInstalledList[i].key, appTimeInstalledList[i].name);
            }
        }
    }

    //qDebug() << "appTimeMap.count: " << appTimeInstalledMap.count();

    QMap<qlonglong, QString>::iterator it;
    for (it = appTimeInstalledMap.begin(); it!= appTimeInstalledMap.end(); ++it) {
        for (int j = 0; j < appInfoListByName.length(); j++) {
            if (it.value() == appInfoListByName[j].name1) {
                appInfoListByTimeInstalled.append(appInfoListByName[j]);
            }
        }
    }

    //qDebug() << "appInfoListByTimeInstalled: " << appInfoListByTimeInstalled;

    QStringList iconDesktopUrlListByTimeInstalled;
    for (int i = 0; i < appInfoListByFrequency.length(); i++) {
        iconDesktopUrlListByTimeInstalled.append(appInfoListByFrequency[i].url);
    }

    iconUrlListByTimeInstalled = ConvertDesktop2Png(iconDesktopUrlListByTimeInstalled, 48);

    //qDebug() << "iconUrlListByTimeInstalled: " << iconUrlListByTimeInstalled;

}

void LauncherInterfaceManager::GetAppFrequency() {

    QDBusPendingReply<AppFrequencyList> tmpAppFrequencyList = m_launcherInterface->GetAllFrequency();
    tmpAppFrequencyList.waitForFinished();
    //qDebug() <<  tmpAppFrequencyList.error();
    if (tmpAppFrequencyList.isValid()) {
        appFrequencyList = tmpAppFrequencyList.value();
    }

    //qDebug() << "tmp App FrequencyList "   ;
    QMap<qlonglong, QString> appFrequencyMap;
    for (int i = 0; i < appFrequencyList.length(); i++) {
        for (int j = 0; j < appInfoListByName.length(); j++) {
            if (appFrequencyList[i].name == appInfoListByName[j].name1) {
                appFrequencyMap.insert(appFrequencyList[i].key, appFrequencyList[i].name);
            }
        }
    }

    //qDebug() << "appFrequencyMap.count: " << appFrequencyMap.count();

    QMap<qlonglong, QString>::iterator it;
    for (it = appFrequencyMap.begin(); it!= appFrequencyMap.end(); ++it) {
        for (int j = 0; j < appInfoListByName.length(); j++) {
            if (it.value() == appInfoListByName[j].name1) {
                appInfoListByFrequency.append(appInfoListByName[j]);
            }
        }
    }

    //qDebug() << "appInfoListByFrequency: " << appInfoListByFrequency;

    QStringList iconDesktopUrlListByFrequency;
    for (int i = 0; i < appInfoListByFrequency.length(); i++) {
        iconDesktopUrlListByFrequency.append(appInfoListByFrequency[i].url);
    }

    iconUrlListByFrequency = ConvertDesktop2Png(iconDesktopUrlListByFrequency, 48);

    //qDebug() << "iconUrlListByFrequecy: " << iconUrlListByFrequency;
}


