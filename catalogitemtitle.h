#ifndef CATALOGITEMTITLE_H
#define CATALOGITEMTITLE_H

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

class CatalogItemTitle: public QFrame
{
    Q_OBJECT

public:
    int inRowNumber;
    QString titleId;
    CatalogItemTitle(int rowNumber, QString itemId, QWidget *parent=0);
    ~CatalogItemTitle();
};


#endif // CATALOGTITLE_H

