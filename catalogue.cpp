#include "catalogue.h"

#include <QtWidgets>

Catalogue::Catalogue(QWidget *parent)
     : QFrame(parent)
{

     QFont font;
     font.setPixelSize(12);
     namebutton = new QPushButton;

     namebutton->setFont(font);
     namebutton->setText("按名称");


     namebutton->setAutoExclusive(true);
     namebutton->setCheckable(true);

     iconbutton = new QPushButton(this);
     iconbutton->setFont(font);
     iconbutton->setText("按分类  (图标)");
     iconbutton->setAutoExclusive(true);
     iconbutton->setCheckable(true);
     wordbutton = new QPushButton;
     wordbutton->setFont(font);
     wordbutton->setText("按分类  (文字)");
     wordbutton->setAutoExclusive(true);
     wordbutton->setCheckable(true);
     installtimebutton = new QPushButton;
     installtimebutton->setFont(font);
     installtimebutton->setText("按安装时间");
     installtimebutton->adjustSize();
     installtimebutton->setAutoExclusive(true);
     installtimebutton->setCheckable(true);
     frequencybutton = new QPushButton;
     frequencybutton->setFont(font);
     frequencybutton->setText("按使用频率");
     frequencybutton->setAutoExclusive(true);
     frequencybutton->setCheckable(true);

     QVBoxLayout *mainLayout = new QVBoxLayout;
     mainLayout->addWidget(namebutton);
     mainLayout->addWidget(iconbutton);
     mainLayout->addWidget(wordbutton);
     mainLayout->addWidget(installtimebutton);
     mainLayout->addWidget(frequencybutton);
     setLayout(mainLayout);

     iconbutton->setChecked(true);
     connect(namebutton, SIGNAL(clicked()), this, SIGNAL(catalogierByName()));
     connect(iconbutton, SIGNAL(clicked()), this, SIGNAL(catalogierByIcon()));
     connect(wordbutton, SIGNAL(clicked()), this, SIGNAL(catalogierByWord()));
     connect(installtimebutton, SIGNAL(clicked()), this, SIGNAL(catalogierByTimeInstalled()));
     connect(frequencybutton, SIGNAL(clicked()), this, SIGNAL(catalogierByFrequency()));
}

Catalogue::~Catalogue() {
}
void Catalogue::enterEvent(QEvent *e) {
    Q_UNUSED(e);
    emit alwaysShow();
}
void Catalogue::leaveEvent(QEvent *e) {
    Q_UNUSED(e);
    emit leaveShow();
}
