#include "centerwidget.h"
#include "ui_centerwidget.h"
#include <QDebug>

CenterWidget::CenterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenterWidget)
{
    ui->setupUi(this);
}

CenterWidget::~CenterWidget()
{
    delete ui;
}

void CenterWidget::on_LoginBtn_clicked()
{
    if(ui->lineEdit_usrname->text() ==
            config().Get("user", "name").toString())
    {
        if(ui->lineEdit_pwd->text() ==
                config().Get("user", "password").toString())
        {
            qDebug() << "登录成功";
        }
        else
            qDebug() << "密码错误";
    }
    else
        qDebug() << "用户名输入错误";
}
