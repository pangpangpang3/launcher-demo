#include "searchwidget.h"

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

SearchWidget::SearchWidget(QWidget *parent)
    : QFrame(parent) {
   setGeometry(0, 0, 1400, 40);
   searchButton = new QPushButton;
   searchButton->setFixedSize(QSize(24, 24));
   searchButton->setObjectName("searchIcon");

   searchLineEdit = new QLineEdit;
   searchLineEdit->setObjectName("searchLineEdit");
   searchLineEdit->setFixedWidth(30);
   QHBoxLayout* searchLayout = new QHBoxLayout;
   searchLayout->addStretch();
   searchLayout->addWidget(searchButton);
   searchLayout->addWidget(searchLineEdit);
   searchLayout->addStretch();
   setLayout(searchLayout);

   connect(searchLineEdit, SIGNAL(textChanged(QString)), this, SIGNAL(searchKeyWords(QString)));
   connect(searchLineEdit, SIGNAL(textChanged(QString)), this, SLOT(setLineEditWidth(QString)));


}
SearchWidget::~SearchWidget()
{}
void SearchWidget::setLineEditWidth(QString textContent) {
    int lineEditWidth = searchLineEdit->fontMetrics().width(textContent);
    if (lineEditWidth >=30&&lineEditWidth<=1100) {
        searchLineEdit->setFixedWidth(lineEditWidth);
    }
}
