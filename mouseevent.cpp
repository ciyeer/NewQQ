#include "mouseevent.h"

MouseEvent::MouseEvent(QWidget *parent)
    : QWidget(parent)
    , m_bPressed(false){}

void MouseEvent::mousePressEvent(QMouseEvent *event)
{
    // 移动当前窗口
    if (event->button() == Qt::LeftButton)      //判断左键是否按下
    {
        m_bPressed = true;  // 设置按下标志
        m_point = event->pos();     // 获取鼠标点击位置
    }
}

void MouseEvent::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

void MouseEvent::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event)     // 去除声明但没使用的参数的宏(去警告)
    m_bPressed = false;
}



