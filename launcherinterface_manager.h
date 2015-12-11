#ifndef LAUNCHERINTERFACE_MANAGER
#define LAUNCHERINTERFACE_MANAGER

#endif // LAUNCHERINTERFACE_MANAGER


#include <QtCore>
#include "launcherinterface.h"
#include "filemanager_interface.h"

#define Launcher_service "com.deepin.dde.daemon.Launcher"
#define Launcher_path "/com/deepin/dde/daemon/Launcher"

#define FileManager_service "com.deepin.filemanager.Backend.FileInfo"
#define FileManager_path "/com/deepin/filemanager/Backend/FileInfo"

class LauncherInterfaceManager : public QObject
{
    Q_OBJECT
public:

    explicit LauncherInterfaceManager(QObject *parent = 0);
    ~LauncherInterfaceManager();
    /*Get All the CatalogInfo*/
    void GetAllCatalogInfo();
    CatalogInfo allCatalogInfo;
    CatalogInfoList totalCatalogInfoList;
    QStringList allItemId;
    QStringList GetCatalogAppList(QString catalogId);

    /*With more comfortable name style Classify by Name*/
    AppInfoList appInfoListByName;
    QStringList iconUrlListByName;
    void GetAllItemByName();
    void GetAllUrlListByName(AppInfoList appInfoList, int iconSize);
    /*Get the Table app details with Classify Bar*/
    CatalogInfoList leftNaviInfo;
    AppInfoList appInfoListWithClassifyBar;
    QStringList iconUrlListWithClassifyBar;

    void GetLeftNaviInfo();
    void GetTableItemInfoWithClassifyBar(QStringList AppList);
    void GetTableItemWithClassifyBar(QStringList iconDesktopUrlList, int iconSize);
    QStringList ConvertDesktop2Png(QStringList iconDesktopUrlList, int iconSize);
    QString GetItemIcon(QString iconDesktopUrl,int icon_size);
    /*Classify By InstallTime*/
    AppTimeInstalledList appTimeInstallList;
    AppInfoList appInfoListByTimeInstalled;
    QStringList iconUrlListByTimeInstalled;
    AppTimeInstalledList appTimeInstalledList;
    void GetAppTimeInstalled();
    /*Classify By Frequency*/
    AppFrequencyList appFrequencyList;
    AppInfoList appInfoListByFrequency;
    QStringList iconUrlListByFrequency;
    void GetAppFrequency();
    /*sorted string list*/
    QStringList sortedStringList(QStringList beSortedList);
signals:
    /*Get the  catalogy in the left navilist, such as: internet, graphic, multimedia */
    //void GetCategoryInfo(CatalogInfoList leftNaviInfo);


private:
    LauncherInterface* m_launcherInterface;
    FileManagerInterface* m_filemanagerInterface;

};
