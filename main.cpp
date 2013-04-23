#include <QApplication>
#include "uplauncher.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyleSheet("QScrollArea QLabel{padding: 3px;}QScrollArea QLabel:hover{background: #EEE;width: 100%;}");
    
    Uplauncher *up = new Uplauncher;

    return a.exec();
}
