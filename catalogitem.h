#ifndef CATALOGITEM_H
#define CATALOGITEM_H
#include "dbusargument.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

class CatalogItem: public QFrame
{
    Q_OBJECT
public:
    CatalogItem(AppInfo widgetContent,QString itemIconUrl, QWidget *parent=0);
    ~CatalogItem();
    QString itemId;
};
#endif // CATALOGITEM
