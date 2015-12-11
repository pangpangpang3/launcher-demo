#include "catalogitem.h"

#include <QtWidgets>
#include <QtGui>
#include <QtCore>

CatalogItem::CatalogItem(AppInfo widgetContent, QString itemIconUrl, QWidget *parent)
       :QFrame(parent)
{
    QLabel* iconLabel = new QLabel;
    iconLabel->setFixedSize(QSize(48, 48));
    iconLabel->setPixmap(QPixmap(QString("%1").arg(itemIconUrl)));

    QLabel* textLabel = new QLabel;
    textLabel->setFixedHeight(40);
    textLabel->setAlignment(Qt::AlignCenter);
    textLabel->setText(QString(widgetContent.icontext));
    QFont font;
    font.setPixelSize(14);
    textLabel->setFont(font);
    textLabel->setWordWrap(true);
    textLabel->setObjectName("iconTextLabel");

    //tableWidgetItem->setFont(font);


    QHBoxLayout* iconLayout = new QHBoxLayout;
    iconLayout->addStretch();
    iconLayout->addWidget(iconLabel);
    iconLayout->addStretch();

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addLayout(iconLayout);
    mainLayout->addSpacing(5);
    mainLayout->addWidget(textLabel);
    setLayout(mainLayout);


}
CatalogItem::~CatalogItem() {
}
