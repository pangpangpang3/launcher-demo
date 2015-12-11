#include "dpushbutton.h"

DPushButton::DPushButton(QWidget *parent)
    : QPushButton(parent)
{
    this->setCheckable(true);
    setObjectName("DPushButton");
    connect(this, SIGNAL(clicked()), this, SLOT(buttonclick()));
}

DPushButton::~DPushButton()
{

}
void DPushButton::enterEvent(QEvent *e) {
   Q_UNUSED(e);
   emit enterArea();
}
void DPushButton::leaveEvent(QEvent *e) {

   Q_UNUSED(e);
   emit leaveArea();
}

void DPushButton::buttonclick() {
    emit buttonclicked(buttonId);
}
