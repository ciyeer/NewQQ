#include "newqq.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewQQ w;
    w.show();
    return a.exec();
}
