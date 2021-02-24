#ifndef NEWQQ_H
#define NEWQQ_H

#include <QWidget>
#include <QFile>
#include <QCloseEvent>
#include "titlebar.h"
#include "centerwidget.h"
#include "statusbar.h"
#include "mouseevent.h"
#include "commonhelper.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NewQQ; }
QT_END_NAMESPACE

class NewQQ : public MouseEvent
{
    Q_OBJECT

public:
    NewQQ(MouseEvent *parent = nullptr);
    ~NewQQ();

protected:
    virtual void closeEvent(QCloseEvent *event) override;

private:
    Ui::NewQQ *ui;
    TitleBar *m_pTitleBar;
    CenterWidget *m_pCenterWidget;
    StatusBar *m_pStatusBar;
};
#endif // NEWQQ_H
