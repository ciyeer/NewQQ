#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "config.h"

namespace Ui {
class CenterWidget;
}

class CenterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CenterWidget(QWidget *parent = nullptr);
    ~CenterWidget();

private slots:
    void on_LoginBtn_clicked();

private:
    Ui::CenterWidget *ui;
};

#endif // CENTERWIDGET_H
