#ifndef CONFIG_H
#define CONFIG_H

#include <QtGui>
#include <QtXml>

class Config : public QObject
{
    Q_OBJECT
public:
    explicit Config(QObject *parent = 0);

private:
    void loadXml(QFile &file);

public:
    int VERSION;
    
signals:
    
public slots:
    
};

#endif // CONFIG_H
