#ifndef DPUSHBUTTON_H
#define DPUSHBUTTON_H

#include <QtWidgets>
#include <QtGui>
#include <QtCore>

class DPushButton : public QPushButton
{
    Q_OBJECT

public:
    DPushButton(QWidget *parent = 0);
    QString buttonId;
    int InRowNumber;
    ~DPushButton();
protected:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);
public slots:
    void buttonclick();
private:
    bool m_enter;
    bool m_leave;
signals:
    void enterArea();
    void leaveArea();
    void buttonclicked(QString buttonId);
};

#endif // DPUSHBUTTON_H
