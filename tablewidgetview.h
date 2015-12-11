#ifndef TABLEWIDGETVIEW_H
#define TABLEWIDGETVIEW_H

#include "dtablewidget.h"
#include "catalogitemtitle.h"
#include "launcherinterface.h"
#include "filemanager_interface.h"

#include<QtWidgets>
#include<QtGui>
#include<QtCore>

class TableWidgetClassifyBar: public DTableWidget
{
    Q_OBJECT
public:
    TableWidgetClassifyBar(CatalogInfoList catalogInfoList, int itemWidth, int itemColumnCount, int titleHeight, QWidget *parent=0);
    ~TableWidgetClassifyBar();

    QList<CatalogItemTitle*> catalogItemTitle;
    QList<QString> tableRowId;
    void keyPressEvent(QKeyEvent *event);
    bool press_initem = false;
signals:
    void sliderValue(int value);
    void scrollToTableId(QString appId);
public slots:
    void setRowNumber(int row);
    void scrollToRow(int row);
};
class TableWidgetAssort: public DTableWidget
{
    Q_OBJECT
public:
//    bool catalogStyleByName =  true;
//    bool catalogStyleByInstallTime = false;
//    bool catalogStyleByFrequency = false;
    TableWidgetAssort(AppInfoList catalogAppInfoList, QStringList iconUrlList, int itemWidth, int itemColumnCount, int spacingTop, QWidget* parent);
    //TableWidgetAssort(QList<QString> catalogList, int itemWidth, int itemColumnCount, int spacingTop, QWidget *parent=0);
    ~TableWidgetAssort();

};

#endif // FTABLEWIDGETVIEW

