#include "launcher.h"
#include "dpushbutton.h"
#include "catalogue.h"
#include "catalogitem.h"
#include "catalogitemtitle.h"
#include "catalogylist.h"
//#include "launcherinterface_manager.h"

#include <QtWidgets>
#include <QtGui>
#include <QtCore>

Launcher::Launcher(QWidget *parent)
    : QFrame(parent)
{

    setGeometry(qApp->desktop()->availableGeometry());
    setWindowFlags(Qt::FramelessWindowHint);
    setObjectName("Launcher");
    setEmptySpacingWidth();

    interface = new LauncherInterfaceManager;
    tableCatalogInfoList = interface->leftNaviInfo;

    QList<QString> catalogList;
    if (tableCatalogInfoList.count()==0) {
        return;
    }


    for (int i = 0; i < tableCatalogInfoList.count();i++) {
        catalogList.append(tableCatalogInfoList[i].name);
    }

    stackWidget = new QStackedWidget(this);
    stackWidget->setFixedWidth(spacingWidth);
    listIcon = new CatalogListWidgetIcon(catalogList);

    listWord = new CatalogListWidgetWord(catalogList);
    listName = new CatalogListWidgetName;
    stackWidget->addWidget(listIcon);
    stackWidget->addWidget(listWord);
    stackWidget->addWidget(listName);

    stackWidget->setCurrentWidget(listIcon);

    QList<QString> catalogContent;
    catalogContent<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9"<<"10"<<"11"<<"12"<<"13"<<"14";

    contentWidget = new QStackedWidget(this);
    tableNavi = new TableWidgetClassifyBar(tableCatalogInfoList, itemWidth,  tableItemColumnCount, classifySectionHeight);
    tableNavi->setFixedSize(QSize(itemWidth*tableItemColumnCount, 900));
    tableAssort = new TableWidgetAssort(interface->appInfoListByName,interface->iconUrlListByName, itemWidth, tableItemColumnCount, spacingTop, this);
    tableAssort->setFixedSize(QSize(itemWidth*tableItemColumnCount, 900));
    contentWidget->addWidget(tableNavi);

    contentWidget->addWidget(tableAssort);
    contentWidget->setCurrentWidget(tableNavi);
    contentWidget->layout()->setContentsMargins(0, 0, 0, 0);

    QHBoxLayout* mainLayout = new QHBoxLayout;
    mainLayout->addWidget(stackWidget);
    mainLayout->addWidget(contentWidget);
    mainLayout->setSpacing(0);
    mainLayout->setContentsMargins(0, 0, emptySpacingWidth, 0);
    setLayout(mainLayout);



    starter = new ModeButton(this);
    starter->setGeometry(20,  20, 32, 32);


    searchWidget = new SearchWidget(this);
    searchWidget->hide();

    classtimer = new QTimer(this);
    classtimer->setSingleShot(true);

    catalogier = new Catalogue(this);

    catalogier->hide();
    catalogier->setGeometry(20, 70, 150, 120);


    QFile qssFile(":skin.qss");
    QString qss;
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();
    }

    setBackgroundImage(":/img/eyea.jpg");

    connect(starter, SIGNAL(enterArea()), this, SLOT(showwidget()));

    connect(catalogier, SIGNAL(alwaysShow()), this, SLOT(showwidget()));
    connect(starter, SIGNAL(leaveArea()), this, SLOT(timerhidewidget()));
    connect(catalogier, SIGNAL(leaveShow()), this, SLOT(timerhidewidget()));
    connect(classtimer, SIGNAL(timeout()), this, SLOT(hidewidget()));

    connect(classtimer, SIGNAL(timeout()), starter, SLOT(classifyMode()));

    connect(catalogier, SIGNAL(catalogierByWord()), this, SLOT(catalogByWord()));
    connect(catalogier, SIGNAL(catalogierByIcon()), this, SLOT(catalogByIcon()));
    connect(catalogier, SIGNAL(catalogierByName()), this, SLOT(catalogByName()));
    connect(catalogier, SIGNAL(catalogierByTimeInstalled()), this, SLOT(catalogByTimeInstalled()));
    connect(catalogier, SIGNAL(catalogierByFrequency()), this, SLOT(catalogByFrequency()));

    connect(listIcon, SIGNAL(scrollToIdByIcon(QString)), this, SLOT(scrollToPosition(QString)));
    connect(listWord, SIGNAL(scrollToIdByWord(QString)), this, SLOT(scrollToPosition(QString)));

    connect(tableNavi, SIGNAL(scrollToTableId(QString)), this, SLOT(sliderValue(QString)));
    connect(searchWidget, SIGNAL(searchKeyWords(QString)), this, SLOT(searchApp(QString)));
//    connect(interface, SIGNAL(GetCategoryInfo(CatalogInfoList)), this, SLOT(setTableWidget(CatalogInfoList)));
}
void Launcher::setBackgroundImage(QString imageUrl) {
    QString style("QFrame#Launcher{border-image: url(%1)}");
    style = style.arg(imageUrl);
    qDebug() << style;
    setStyleSheet(style);
}
Launcher::~Launcher()
{
}
void Launcher::setEmptySpacingWidth() {

    int screenWidth = qApp->desktop()->width();
    int screenHeight = qApp->desktop()->height();
    int remainWidth = screenWidth - spacingWidth;

    if( remainWidth%itemWidth!=0) {

        tableItemColumnCount = remainWidth/itemWidth;
        int leftWidth = remainWidth - tableItemColumnCount*itemWidth;

        emptySpacingWidth+= leftWidth;
        qDebug()<<"EEEEEEEMMMMMMPPPPPP:"<<emptySpacingWidth;

    }
    qDebug()<<screenWidth<<screenHeight<<emptySpacingWidth;

}
void Launcher::wheelEvent(QWheelEvent *event){
    if (contentWidget->currentWidget() == tableNavi) {
        int scrollValue = tableNavi->verticalScrollBar()->value();
        int minValue = tableNavi->verticalScrollBar()->minimum();
        int maxValue = tableNavi->verticalScrollBar()->maximum();

        if (event->angleDelta().y() > 0) {
            if (scrollValue >= minValue) {
                tableNavi->verticalScrollBar()->setValue(scrollValue - 1);
            }
        } else {
            if (scrollValue <= maxValue) {
                tableNavi->verticalScrollBar()->setValue(scrollValue + 1);
            }
        }
    } else {
        int scrollValue = tableAssort->verticalScrollBar()->value();
        int minValue = tableAssort->verticalScrollBar()->minimum();
        int maxValue = tableAssort->verticalScrollBar()->maximum();

        if (event->angleDelta().y() > 0) {
            if (scrollValue >= minValue) {
                tableAssort->verticalScrollBar()->setValue(scrollValue - 1);
            }
        } else {
            if (scrollValue <= maxValue) {
                tableAssort->verticalScrollBar()->setValue(scrollValue + 1);
            }
        }
    }
}

void Launcher::showwidget() {
    classtimer->stop();
    starter->setChecked(true);
    starter->hoverStatus = true;
    qDebug()<<"tesing!";
    catalogier->show();
}
void Launcher::timerhidewidget() {
    classtimer->start(1000);
}
void Launcher::hidewidget() {
    starter->setChecked(false);
    catalogier->hide();
    starter->hoverStatus = false;
    starter->classifyMode();
    this->setFocus();
}
void Launcher::catalogByName() {
    starter->classifymode = 0;
    starter->classifyMode();
    stackWidget->setCurrentWidget(listName);
    contentWidget->setCurrentWidget(tableAssort);
}
void Launcher::catalogByIcon() {
    starter->classifymode = 1;
    starter->classifyMode();
    stackWidget->setCurrentWidget(listIcon);
    contentWidget->setCurrentWidget(tableNavi);
}
void Launcher::catalogByWord() {
    starter->classifymode = 2;
    starter->classifyMode();
    stackWidget->setCurrentWidget(listWord);
    contentWidget->setCurrentWidget(tableNavi);
}
void Launcher::catalogByTimeInstalled() {
    starter->classifymode = 3;
    starter->classifyMode();
    stackWidget->setCurrentWidget(listName);
    tableAssort = new TableWidgetAssort(interface->appInfoListByTimeInstalled, interface->iconUrlListByTimeInstalled, itemWidth, tableItemColumnCount, spacingTop, this);
    contentWidget->setCurrentWidget(tableAssort);
}
void Launcher::catalogByFrequency() {
    starter->classifymode = 4;
    qDebug() << "catalogByFrequency" << starter->classifymode;
    starter->classifyMode();
    stackWidget->setCurrentWidget(listName);
    tableAssort = new TableWidgetAssort(interface->appInfoListByFrequency, interface->iconUrlListByFrequency, itemWidth, tableItemColumnCount, spacingTop, this);
    contentWidget->setCurrentWidget(tableAssort);
}
void Launcher::scrollToPosition(QString buttonId) {
    for (int i = 0; i < tableNavi->catalogItemTitle.length();i++) {
        if (tableNavi->catalogItemTitle[i]->titleId == buttonId) {
            tableNavi->setRowNumber(tableNavi->catalogItemTitle[i]->inRowNumber);
        }
    }
}

void Launcher::sliderValue(QString appId) {
    listIcon->setCheckedButton(appId);
    listWord->setCheckedButton(appId);
}
void Launcher::keyPressEvent(QKeyEvent *keyEvent) {
    searchWidget->searchLineEdit->setFocus();
    qDebug()<<"xxxxxxxxxxxxx"<<keyEvent->key();
    if (keyEvent->key() == Qt::Key_Escape) {
        this->close();
    }
    if (keyEvent->key() == Qt::Key_F1) {
        qDebug()<<"F1";
        this->showMinimized();
    }

    if (keyEvent->key()==Qt::Key_Return||keyEvent->key()==Qt::Key_Enter) {

        qDebug()<<"outside effect"<<searchWidget->searchLineEdit->text();
        emit openSearchedApp();
    } else if (keyEvent->key()>=65 && keyEvent->key()<=90)
    {
        starter->hide();
        searchWidget->show();

        if (keyEvent->text() != "") {
            searchWidget->searchLineEdit->setText(keyEvent->text());
        }
        qDebug()<<"enter"<<keyEvent->key();

        stackWidget->setCurrentWidget(listName);
        contentWidget->setCurrentWidget(tableAssort);
    }
}
void Launcher::searchApp(QString searchKeyWords) {
    qDebug()<<"searchKeyWords"<<searchKeyWords;
   if (searchKeyWords==""||searchKeyWords==" ") {
       searchWidget->hide();
       starter->show();
       stackWidget->setCurrentWidget(listIcon);
       contentWidget->setCurrentWidget(tableNavi);
   } else {
       starter->hide();
       searchWidget->show();
       searchWidget->searchLineEdit->setText(searchKeyWords);
       stackWidget->setCurrentWidget(listName);
       contentWidget->setCurrentWidget(tableAssort);
   }
}

void Launcher::mousePressEvent(QMouseEvent *e) {
    if (e->button() == Qt::LeftButton) {
        closeWindow();
    }
}
void Launcher::closeWindow() {
    this->close();
}
//void Launcher::setTableWidget(CatalogInfoList tableInfoList) {
//    qDebug()<<"AAAAAAAAAAAAAAA";
//    //qDebug()<<"XX"<<tableInfoList.count();
//    //Q_UNUSED(tableInfoList);
//    //tableCatalogInfoList = tableInfoList;
//}
