#ifndef UPLAUNCHER_H
#define UPLAUNCHER_H

#include <QtGui>
#include "upwindow.h"
#include "config.h"

class Uplauncher : public QWidget
{
    Q_OBJECT
public:
    explicit Uplauncher(QWidget *parent = 0);

private:
    UpWindow *_window;
    Config *_config;
    
signals:
    
public slots:
    
};

#endif // UPLAUNCHER_H
