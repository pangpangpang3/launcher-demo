#include "launcherviewmode.h"

ModeButton::ModeButton(QWidget *parent)
    : QPushButton(parent)
{
    this->setObjectName("starter");
    this->setCheckable(true);
    this->setFixedSize(QSize(32, 32));
    classifyMode();
    connect(this, SIGNAL(enterArea()), this, SLOT(classifyMode()));


}

ModeButton::~ModeButton()
{
}
void ModeButton::classifyMode() {

    if (!hoverStatus) {
        if (classifymode == 0) {
            this->setStyleSheet("border-image: url(:/img/catelogy/name50.svg);");
        } else if (classifymode == 1 || classifymode == 2) {
            this->setStyleSheet("border-image: url(:/img/catelogy/icon50.svg);");
        } else if (classifymode == 3) {
            this->setStyleSheet("border-image: url(:/img/catelogy/timeinstalled50.svg);");
        } else {
            this->setStyleSheet("border-image: url(:/img/catelogy/frequencyused50.svg);");
        }
    } else {
        if (classifymode == 0) {
           this->setStyleSheet("border-image: url(:/img/catelogy/name100.svg);");
        } else if (classifymode == 1 || classifymode == 2) {
           this->setStyleSheet("border-image: url(:/img/catelogy/icon100.svg);");
        } else if (classifymode == 3) {
           this->setStyleSheet("border-image: url(:/img/catelogy/timeinstalled100.svg);");
        } else {
           this->setStyleSheet("border-image: url(:/img/catelogy/frequencyused100.svg);");
        }
    }

}
void ModeButton::enterEvent(QEvent *e) {
    emit enterArea();
    hoverStatus = true;
    classifyMode();
    Q_UNUSED(e);
}
void ModeButton::leaveEvent(QEvent *e) {
    emit leaveArea();
   Q_UNUSED(e);

}
