#include "CTabBar.h"

#include <QMouseEvent>
#include <QEvent>

CTabBar::CTabBar(QWidget *parent):
    QTabBar(parent),
    m_bPressFlag(false)
{

}

CTabBar::~CTabBar()
{

}

void CTabBar::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        m_bPressFlag = true;
    }
    QTabBar::mousePressEvent(event);
}

void CTabBar::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton &&m_bPressFlag )
    {
        m_bPressFlag = false;
        if(tabRect(currentIndex()).contains( event->pos()))
            return;
        emit STabDrag(currentIndex(),event->pos());
    }
}
