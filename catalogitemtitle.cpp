#include "catalogitemtitle.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

CatalogItemTitle::CatalogItemTitle(int rowNumber, QString itemId, QWidget *parent)
     : QFrame(parent)
{
    QLabel* titleLabel = new QLabel;
    titleLabel->setObjectName("titleText");
    QFont font;
    font.setPixelSize(22);

    titleLabel->setText(itemId);
    titleLabel->setFont(font);
    this->inRowNumber = rowNumber;
    this->titleId = itemId;
    QLabel* titleLine = new QLabel;
    titleLine->setObjectName("Line");
    titleLine->setFixedSize(1200, 2);

    QHBoxLayout* mainLayout = new QHBoxLayout;
    mainLayout->addWidget(titleLabel);
    mainLayout->addWidget(titleLine);
    mainLayout->setSpacing(10);
    setLayout(mainLayout);

}

CatalogItemTitle::~CatalogItemTitle() {}
