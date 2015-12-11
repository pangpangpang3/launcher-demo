#ifndef LAUNCHERVIEWMODE
#define LAUNCHERVIEWMODE
#include <QtWidgets>
#include <QtGui>
#include <QtCore>


class ModeButton : public QPushButton
{
    Q_OBJECT
public:
    ModeButton(QWidget *parent = 0);
    int classifymode = 1;
    bool hoverStatus = false;
    ~ModeButton();
protected:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);
public slots:

    void classifyMode();
signals:
    void enterArea();
    void leaveArea();

};








#endif // LAUNCHERVIEWMODE

