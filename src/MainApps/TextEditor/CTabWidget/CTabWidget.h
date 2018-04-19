#ifndef CTABWIDGET_H
#define CTABWIDGET_H
#include <QTabWidget>
#include "CTabBar.h"

class CTabWidget :public QTabWidget
{
    Q_OBJECT
public:
    CTabWidget(QWidget* =0);
    virtual ~CTabWidget();
public:
    CTabBar *tabBar;
};
#endif // CTABWIDGET_H
