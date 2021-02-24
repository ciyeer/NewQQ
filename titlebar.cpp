#include "titlebar.h"
#include "ui_titlebar.h"

TitleBar::TitleBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TitleBar)
{
    ui->setupUi(this);
}

TitleBar::~TitleBar()
{
    delete ui;
}

void TitleBar::on_MinBtn_clicked()
{
    this->parentWidget()->showMinimized();
}

void TitleBar::on_CloseBtn_clicked()
{
    this->parentWidget()->close();
}
