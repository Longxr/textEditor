#ifndef CTABBAR_H
#define CTABBAR_H

#include <QTabBar>

class CTabBar :public QTabBar
{
    Q_OBJECT
public:
    CTabBar(QWidget* =0);
    virtual ~CTabBar();
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
private:
    bool m_bPressFlag;
signals:
    void STabDrag(int,QPoint);
};
#endif
