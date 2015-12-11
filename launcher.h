#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "dpushbutton.h"
#include "catalogue.h"
#include "catalogitem.h"
#include "catalogitemtitle.h"
#include "catalogylist.h"
#include "dtablewidget.h"
#include "searchwidget.h"
#include "tablewidgetview.h"
#include "launcherviewmode.h"
#include "launcherinterface_manager.h"

#include <QtWidgets>
#include <QtGui>
#include <QtCore>
class Launcher : public QFrame
{
    Q_OBJECT

public:
    Launcher(QWidget *parent = 0);
    ~Launcher();

    int itemWidth = 190;

    int spacingWidth = 160;
    int emptySpacingWidth = 0;
    int spacingTop = 60;
    int classifySectionHeight = 120;
    int tableItemColumnCount = 0;

    //DPushButton* starter;
    ModeButton* starter;
    QStackedWidget* stackWidget;
    QStackedWidget* contentWidget;
    //QWidget* contentWidget;
    CatalogListWidgetName* listName;
    CatalogListWidgetIcon* listIcon;
    CatalogListWidgetWord* listWord;
    TableWidgetClassifyBar* tableNavi;
    TableWidgetAssort* tableAssort;
    QList<CatalogItemTitle*> catalogItemTitle;

    QWidget* hoverstart;
    Catalogue* catalogier;
    QString categoryNormal;
    QString categoryHover;
    SearchWidget* searchWidget;
    void setEmptySpacingWidth();
    void mousePressEvent(QMouseEvent *e);
    //void mouseReleaseEvent(QMouseEvent *e);
    CatalogInfoList tableCatalogInfoList;
    LauncherInterfaceManager* interface;
public slots:
    void showwidget();
    void timerhidewidget();
    void hidewidget();
    void catalogByName();
    void catalogByWord();
    void catalogByIcon();
    void catalogByTimeInstalled();
    void catalogByFrequency();
//    void setTableWidget(CatalogInfoList tableInfoList);
    void scrollToPosition(QString buttonId);
    //void sliderValue(int value);
    void sliderValue(QString appId);
    void keyPressEvent(QKeyEvent* keyEvent);
    void searchApp(QString searchKeyWords);
    void setBackgroundImage(QString imageUrl);
    void closeWindow();
signals:
    void openSearchedApp();
protected:
    QTimer* classtimer;

    void wheelEvent(QWheelEvent *event);
private:
    bool m_show;
    bool m_hide;
};

#endif // WIDGET_H
