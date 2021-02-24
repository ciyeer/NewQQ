#ifndef CONFIG_H
#define CONFIG_H

#include <QVariant>
#include <QSettings>
#include <QDebug>

class config
{
public:
    config(QString qstrfilename = "");
    virtual ~config();
    void Set(QString, QString, QVariant);
    QVariant Get(QString, QString);

private:
    QString m_qstrFileName;
    QSettings *m_psetting;
};

#endif // CONFIG_H
