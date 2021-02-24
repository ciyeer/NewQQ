#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>

namespace Ui {
class TitleBar;
}

class TitleBar : public QWidget
{
    Q_OBJECT

public:
    explicit TitleBar(QWidget *parent = nullptr);
    ~TitleBar();

private slots:
    void on_MinBtn_clicked();

    void on_CloseBtn_clicked();

private:
    Ui::TitleBar *ui;
};

#endif // TITLEBAR_H
