#include "dtablewidget.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

DTableWidget::DTableWidget(QWidget* parent)
     :QTableWidget(parent)
{
    connect(this->verticalScrollBar(), SIGNAL(valueChanged(int)), this, SIGNAL(sliderValueChanged(int)));
    setSelectionMode(DTableWidget::NoSelection);
    setFocusPolicy(Qt::NoFocus);
}
DTableWidget::~DTableWidget()
{

}
void DTableWidget::setVerticalScrollValue(int value) {
    this->verticalScrollBar()->setValue(value);
}
void DTableWidget::mousePressEvent(QMouseEvent *e) {
    if (e->button() == Qt::LeftButton) {
        emit closeAppWindow();
    }
}
