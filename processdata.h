#ifndef PROCESSDATA
#define PROCESSDATA

#include "filemanager_interface.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

#define FileManager_service "com.deepin.filemanager.Backend.FileInfo"
#define FileManager_path "/com/deepin/filemanager/Backend/FileInfo"


class ProcessData: public QObject
{
    Q_OBJECT
public:
    ProcessData(QObject* parent=0);
    ~ProcessData();
    QString ConvertDesktop2Png(QString desktopUrl);
    QStringList SortedStringList(QStringList beSortedStringList);
    int m_size = 48;
private:
     FileManagerInterface* m_filemanagerInterface;
};



































#endif // PROCESSDATA

