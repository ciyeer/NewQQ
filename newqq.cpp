#include "newqq.h"
#include "ui_newqq.h"
#include <QDebug>
#include <QMessageBox>
#include <QEvent>
#include <QIcon>

NewQQ::NewQQ(MouseEvent *parent)
    : MouseEvent(parent)
    , ui(new Ui::NewQQ)
{
    ui->setupUi(this);

    // 添加logo
    setWindowIcon(QIcon(":/css/Logo.png"));
    // 隐藏关闭窗体句柄
    setWindowFlag(Qt::FramelessWindowHint);
    m_pTitleBar = new TitleBar;
    m_pCenterWidget = new CenterWidget;
    m_pStatusBar = new StatusBar;
    ui->hTitle->addWidget(m_pTitleBar);
    ui->hcenterWidget->addWidget(m_pCenterWidget);
    ui->hStatus->addWidget(m_pStatusBar);
    CommonHelper::setStyleSheet(":/css/titlebar.css");
}

NewQQ::~NewQQ()
{
    delete ui;
}

void NewQQ::closeEvent(QCloseEvent *event)
{
    QMessageBox msgbox;
    msgbox.setText("close this widget?");
    msgbox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    switch(msgbox.exec())
    {
    case QMessageBox::Ok:
        event->accept();        // 接受关闭操作
        break;
    case QMessageBox::Cancel:
        event->ignore();        // 忽略关闭操作,并且清除flag
        break;
    }
}






