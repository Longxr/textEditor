#include "CTabWidget.h"

CTabWidget::CTabWidget(QWidget *parent):QTabWidget(parent)
{
    tabBar = new CTabBar;
    setTabBar(tabBar);
}

CTabWidget::~CTabWidget()
{

}
