#include "tablewidgetview.h"
#include "catalogitem.h"
#include "catalogitemtitle.h"
#include "launcherinterface_manager.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

TableWidgetClassifyBar::TableWidgetClassifyBar(CatalogInfoList catalogInfoList, int itemWidth, int itemColumnCount, int titleHeight, QWidget *parent)
    :DTableWidget(parent)
{
    QList<QString> catalogList;
    if (catalogInfoList.count()==0) {
        return;
    }
    qDebug()<<"qqqqXXXXXXXXXXXX"<<catalogInfoList.count();
    for (int i = 0; i < catalogInfoList.count();i++) {
        catalogList.append(catalogInfoList[i].name);
    }

    int totalRowNumber=0;
    int tableHeight = qApp->desktop()->height();

    QList<int> titleRow;
    for (int i = 0; i < catalogInfoList.count(); i++) {
        titleRow<<totalRowNumber;
        totalRowNumber++;
        int valueLength = catalogInfoList[i].appList.length();
        int j = valueLength/itemColumnCount;
        int k = valueLength%itemColumnCount;
        if (j>0) {
            totalRowNumber+=j;
        }
        if (k>0) {
            totalRowNumber++;
        }
    }

    int lastRowItem = catalogInfoList[catalogInfoList.count() -1].appList.length();

    int remainHeight = tableHeight - titleHeight;
    int lastGroupItems =  remainHeight/itemWidth*itemColumnCount;
    int lastSupplementRowCount=0, tempLastRowCount=0;
    int lastRowHeight = 0;
    if (lastGroupItems > lastRowItem) {
        lastSupplementRowCount++;
        tempLastRowCount = lastRowItem/itemColumnCount;
        if (lastRowItem%itemColumnCount!=0) {
            tempLastRowCount++;
        }
        lastRowHeight = remainHeight - tempLastRowCount*itemWidth - 6;
        qDebug()<<"remain Height:"<<tableHeight<<titleHeight<<lastRowHeight;
    }

    setRowCount(totalRowNumber+lastSupplementRowCount);
    setColumnCount(itemColumnCount);
    bool settingByTitle = false;
    for (int i = 0; i < totalRowNumber+lastSupplementRowCount; i++) {
        if (i == totalRowNumber+lastSupplementRowCount-1&&lastRowHeight!=0) {
            setRowHeight(i, lastRowHeight);
        } else {
            for (int j = 0; j < titleRow.length();j++)
            {
                if (i == titleRow[j]) {
                    setRowHeight(i, titleHeight);
                    settingByTitle = true;
                }

            }
            if (!settingByTitle) {
                this->setRowHeight(i, itemWidth);
            } else {
                settingByTitle = false;
            }
        }
    }

    for (int j = 0; j < itemColumnCount; j++) {
        this->setColumnWidth(j, itemWidth);
    }

    this->horizontalHeader()->hide();
    this->verticalHeader()->hide();
    this->setShowGrid(false);

    QStringList tableItemId;
    for (int i = 0; i < catalogList.length();i++) {
        for (int j = 0; j < catalogInfoList[i].appList.count();j++) {
            tableItemId.append(catalogInfoList[i].appList[j]);
        }
    }

    AppInfoList tableItemInfoList;
    LauncherInterfaceManager* interfaceForTable = new LauncherInterfaceManager;
    interfaceForTable->GetTableItemInfoWithClassifyBar(tableItemId);
    tableItemInfoList = interfaceForTable->appInfoListWithClassifyBar;

    qDebug()<<"DDDDDDDEEEEEEEEESSSSSSSSS:"<<tableItemInfoList.length();
    QStringList appIconUrlList, tableItemIconUrlList;
    for(int i = 0; i < tableItemInfoList.length();i++) {
        appIconUrlList.append(tableItemInfoList[i].url);
    }
    //qDebug()<<"APPPPIcon  URL:"<<appIconUrlList;
    interfaceForTable->GetTableItemWithClassifyBar(appIconUrlList, 48);
    //qDebug()<<"interfaceForTable:"<<interfaceForTable->iconUrlListWithClassifyBar;

    for(int i = 0, k=0; i < catalogList.length(); i++) {
        this->setSpan(titleRow[i], 0, 1, this->columnCount());
        QString titleContent = catalogList[i];
        CatalogItemTitle* titleSection = new CatalogItemTitle(titleRow[i],titleContent);
        catalogItemTitle.append(titleSection);

     if (i!=catalogList.length() -1) {
        for (int k=titleRow[i];k<titleRow[i+1];k++) {
            tableRowId.append(catalogList[i]);
        }
     }


        this->setCellWidget(titleRow[i], 0, titleSection);
        int valueLength = catalogInfoList[i].appList.length();
        int rowAdd = 0;
        for (int j = 0, columnReal=0; j < valueLength; j++) {
            if (j%itemColumnCount==0 &&j!=0) {
                columnReal = 0;
                rowAdd++;
            }
            AppInfo itemContent = tableItemInfoList[k];
            //tableItemIconUrlList[k]="";
            CatalogItem* subItem = new CatalogItem(itemContent, interfaceForTable->iconUrlListWithClassifyBar[k]);//tableItemIconUrlList[k]);
            subItem->setObjectName("tableItem");
            this->setCellWidget(titleRow[i]+ 1 + rowAdd, columnReal, subItem);
            columnReal++;
            k++;
        }
    }

    tableRowId.append(catalogList[catalogList.length()-1]);
    if (lastSupplementRowCount!=0) {
        tableRowId.append(catalogList[catalogList.length()-1]);
    }
//    for (int k = 0; k < tableRowId.length(); k++) {
//        qDebug()<<"tableRow       id"<<totalRowNumber<<lastSupplementRowCount<<tableRowId.length()<<tableRowId[k];
//    }

    //this->setSelectionBehavior(QAbstractItemView::SelectItems);
    //this->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //this->setFrameShape(QFrame::NoFrame);
    //qDebug()<<"QWSXAIJN:"<<this->verticalScrollBar()->value();
    //this->setMouseTracking(true);
    connect(this, SIGNAL(sliderValueChanged(int)), this, SIGNAL(sliderValue(int)));
    connect(this, SIGNAL(sliderValueChanged(int)), this, SLOT(scrollToRow(int)));
}
void TableWidgetClassifyBar::setRowNumber(int row) {
    this->verticalScrollBar()->setValue(row);
}
void TableWidgetClassifyBar::keyPressEvent(QKeyEvent *event) {

}
void TableWidgetClassifyBar::scrollToRow(int row) {
    emit scrollToTableId(tableRowId[row]);
}
TableWidgetClassifyBar::~TableWidgetClassifyBar()
{
}
TableWidgetAssort::TableWidgetAssort(AppInfoList catalogAppInfoList, QStringList iconUrlList, int itemWidth, int itemColumnCount, int spacingTop, QWidget* parent)
    : DTableWidget(parent)
{
    Q_UNUSED(itemWidth);
    Q_UNUSED(spacingTop);
    setObjectName("AssortTableWidget");
    int tableRowCount=0;
//    qDebug() << "AssortTableWidget iconUrlList:" <<iconUrlList;
    tableRowCount = catalogAppInfoList.length()/itemColumnCount;
    if (catalogAppInfoList.length()%itemColumnCount!=0) {
        tableRowCount++;
    }
    this->setRowCount(tableRowCount);
    this->setColumnCount(itemColumnCount);

    for (int i = 0; i < tableRowCount; i++) {
        this->setRowHeight(i, itemWidth);
    }


    for (int j = 0; j < itemColumnCount; j++) {
        this->setColumnWidth(j, itemWidth);
    }
    int k = 0;

    for (int i = 0; i < tableRowCount && k != iconUrlList.length(); i++) {
        for (int j = 0; j < itemColumnCount && k != iconUrlList.length() ; j++) {

            CatalogItem* subItem = new CatalogItem(catalogAppInfoList[k], iconUrlList[k]);
            k++;
//            qDebug() << "subItem l:" << tableRowCount << itemColumnCount << k;
            subItem->setObjectName("tableItem");
            this->setCellWidget(i, j, subItem);
        }
    }

    this->horizontalHeader()->hide();
    this->verticalHeader()->hide();
    this->setShowGrid(false);

    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

TableWidgetAssort::~TableWidgetAssort()
{
}

