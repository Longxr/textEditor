#include "CWidget.h"

#include <QEvent>

CWidget::CWidget(QWidget *parent):QWidget(parent)
{

}

CWidget::~CWidget()
{

}

bool CWidget::event(QEvent *event)
{
    if (event->type() == QEvent::NonClientAreaMouseButtonDblClick)
    {
        emit SDoubleClickedTitleBar();
        return true;
    }
    return QWidget::event(event);
}
