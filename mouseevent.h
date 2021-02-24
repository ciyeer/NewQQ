#ifndef MOUSEEVENT_H
#define MOUSEEVENT_H
#include <QWidget>
#include <QMouseEvent>

class MouseEvent : public QWidget
{
public:
    MouseEvent(QWidget *parent = nullptr);
protected:
    virtual void mousePressEvent(QMouseEvent *) override;
    virtual void mouseMoveEvent(QMouseEvent *) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;

private:
    bool m_bPressed;
    QPoint m_point;
};

#endif // MOUSEEVENT_H
