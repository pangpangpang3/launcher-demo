#ifndef CATALOGSEARCH_H
#define CATALOGSEARCH_H

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

class SearchWidget:public QFrame
{
    Q_OBJECT
public:
    SearchWidget(QWidget *parent=0);
    ~SearchWidget();
    QPushButton* searchButton;
    QLineEdit* searchLineEdit;
public slots:
    void setLineEditWidth(QString textContent);
signals:
    void searchKeyWords(QString keyWords);
};
#endif // CATALOGSEARCH_H
