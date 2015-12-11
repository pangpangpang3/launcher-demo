#ifndef DTABELWIDGET
#define DTABELWIDGET

#include <QtWidgets>
#include <QtGui>
#include <QtCore>

class DTableWidget: public QTableWidget
{
    Q_OBJECT
public:
    DTableWidget(QWidget *parent=0);
    ~DTableWidget();
    void mousePressEvent(QMouseEvent *e);
public slots:
    void setVerticalScrollValue(int value);

signals:
    void sliderValueChanged(int value);
    void closeAppWindow();
protected:
//    void wheelEvent(QWheelEvent *e);

};



#endif // DTABELWIDGET
