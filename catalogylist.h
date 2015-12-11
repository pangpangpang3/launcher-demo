#ifndef CATALOGYLIST
#define CATALOGYLIST

#include "dpushbutton.h"

#include <QtWidgets>
#include <QtGui>
#include <QtCore>

class CatalogListWidgetName: public QFrame
{
    Q_OBJECT
public:
    CatalogListWidgetName(QWidget *parent=0);
    ~CatalogListWidgetName();

};
class CatalogListWidgetIcon: public QFrame
{
    Q_OBJECT
public:
    CatalogListWidgetIcon(QList<QString> catalogList, QWidget *parent=0);
    ~CatalogListWidgetIcon();
    QList<DPushButton*> buttons;
public slots:
    void setCheckedButton(QString buttonId);
signals:
    void scrollToIdByIcon(QString buttonId);
};
class CatalogListWidgetWord: public QFrame
{
    Q_OBJECT
public:
    CatalogListWidgetWord(QList<QString> catalogList, QWidget *parent=0);
    ~CatalogListWidgetWord();
    QList<DPushButton*> buttons;
public slots:
    void setCheckedButton(QString buttonId);
signals:
    void scrollToIdByWord(QString buttonId);

};
#endif // STARTLIST

