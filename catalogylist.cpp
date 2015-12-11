#include <QtWidgets>
#include <QtGui>
#include <QtCore>

#include "dpushbutton.h"
#include "catalogylist.h"

CatalogListWidgetName::CatalogListWidgetName(QWidget* parent)
     :QFrame(parent){

}

CatalogListWidgetName::~CatalogListWidgetName() {

}

CatalogListWidgetWord::CatalogListWidgetWord(QList<QString> catalogList, QWidget* parent)
     :QFrame(parent){


    for(int i = 0; i < catalogList.length(); i++) {
        DPushButton* buttonItem = new DPushButton;
        buttonItem->buttonId = catalogList[i];
        buttons.append(buttonItem);
    }
    QFont font;
    font.setPixelSize(14);
    for (int i=0; i < buttons.length(); i++) {
        QString contentId = buttons[i]->buttonId;
        buttons[i]->setText(contentId);
        buttons[i]->setFont(font);
        buttons[i]->setCheckable(true);
        buttons[i]->setAutoExclusive(true);
    }


    for (int j = 0; j < buttons.length(); j++) {
        buttons[0]->setChecked(true);
        connect(buttons[j], SIGNAL(buttonclicked(QString)), this, SIGNAL(scrollToIdByWord(QString)));
    }

    QList<QHBoxLayout*> buttonHBoxLayout;
    for (int j =0; j < buttons.length();j++) {
        QHBoxLayout* itembuttonLayout = new QHBoxLayout;
        itembuttonLayout->addWidget(buttons[j]);
        itembuttonLayout->addStretch();
        itembuttonLayout->setContentsMargins(30, 0, 0, 0);
        buttonHBoxLayout.append(itembuttonLayout);
    }


    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addStretch();
    for (int i = 0; i < buttons.length();i++) {
        mainLayout->addLayout(buttonHBoxLayout[i]);
    }
    mainLayout->addStretch();
    mainLayout->setSpacing(30);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(mainLayout);
}

CatalogListWidgetWord::~CatalogListWidgetWord() {
}
void CatalogListWidgetWord::setCheckedButton(QString buttonId) {
    for(int i = 0; i < buttons.length(); i++) {
        if (buttons[i]->buttonId == buttonId) {
            buttons[i]->setChecked(true);
        }
    }
}

CatalogListWidgetIcon::CatalogListWidgetIcon(QList<QString> catalogList, QWidget* parent)
     :QFrame(parent){

    for(int i = 0; i < catalogList.length(); i++) {
        DPushButton* buttonItem = new DPushButton;
        buttonItem->buttonId = catalogList[i];
        buttons.append(buttonItem);
    }
    for (int i=0; i < buttons.length(); i++) {
        buttons[i]->setFixedSize(QSize(32, 32));
        buttons[i]->setCheckable(true);
        buttons[i]->setAutoExclusive(true);
        if (buttons[i]->buttonId == "internet") {
            buttons[i]->setObjectName("InternetApp");
        } else if (buttons[i]->buttonId == "multimedia") {
            buttons[i]->setObjectName("MultimediaApp");
        } else if (buttons[i]->buttonId == "graphics") {
            buttons[i]->setObjectName("GraphicApp");
        } else if (buttons[i]->buttonId == "development") {
            buttons[i]->setObjectName("DevelopmentApp");
        }  else if (buttons[i]->buttonId == "system") {
            buttons[i]->setObjectName("SystemApp");
        } else if (buttons[i]->buttonId == "games") {
            buttons[i]->setObjectName("GamesApp");
        } else if (buttons[i]->buttonId == "productivity") {
            buttons[i]->setObjectName("ProductivityApp");
        }
        else if (buttons[i]->buttonId == "utilities") {
            buttons[i]->setObjectName("UtilityApp");
        } else if (buttons[i]->buttonId == "games") {
            buttons[i]->setObjectName("GamesApp");
        } else if (buttons[i]->buttonId == "others") {
            buttons[i]->setObjectName("OthersApp");
        }
    }

    QList<QHBoxLayout*> buttonHBoxLayout;
    for (int j =0; j < buttons.length();j++) {
        QHBoxLayout* itembuttonLayout = new QHBoxLayout;
        itembuttonLayout->addWidget(buttons[j]);
        itembuttonLayout->addStretch();
        itembuttonLayout->setContentsMargins(30, 0, 0, 0);
        buttonHBoxLayout.append(itembuttonLayout);
    }


    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addStretch();
    for (int i = 0; i < buttons.length();i++) {
        mainLayout->addLayout(buttonHBoxLayout[i]);
    }
    mainLayout->addStretch();
    mainLayout->setSpacing(30);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(mainLayout);


    for (int j = 0; j < buttons.length(); j++) {
        buttons[0]->setChecked(true);
        connect(buttons[j], SIGNAL(buttonclicked(QString)), this, SIGNAL(scrollToIdByIcon(QString)));
    }

}

void CatalogListWidgetIcon::setCheckedButton(QString buttonId) {
    for(int i = 0; i < buttons.length(); i++) {
        if (buttons[i]->buttonId == buttonId) {
            buttons[i]->setChecked(true);
        }
    }
}

CatalogListWidgetIcon::~CatalogListWidgetIcon() {
}


