#ifndef COMMONHELPER_H
#define COMMONHELPER_H
#include <QString>
#include <QFile>
#include <QDebug>
#include <QApplication>

class CommonHelper
{
public:
    static void setStyleSheet(const QString &filename)
    {
        QFile file(filename);
        if(!file.open(QFile::ReadOnly))
        {
            qDebug() << "open css/qss file failed!";
            return ;
        }
        else
        {
            qApp->setStyleSheet(file.readAll());
            file.close();
        }
    }
};

#endif // COMMONHELPER_H
