#ifndef CATALOGUE_H
#define CATALOGUE_H


#include "dpushbutton.h"
#include <QtWidgets>

class Catalogue:public QFrame
{
    Q_OBJECT
public:
    Catalogue(QWidget *parent=0);
    ~Catalogue();
    QPushButton *namebutton;
    QPushButton *iconbutton;
    QPushButton *wordbutton;
    QPushButton *installtimebutton;
    QPushButton *frequencybutton;
private:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);
signals:
    void alwaysShow();
    void leaveShow();

    void catalogierByName();
    void catalogierByIcon();
    void catalogierByWord();
    void catalogierByTimeInstalled();
    void catalogierByFrequency();
};







#endif // CATALOGUE_H
