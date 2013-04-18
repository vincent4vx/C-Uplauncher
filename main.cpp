#include <QApplication>
#include "upwindow.h"
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyleSheet("QScrollArea QLabel{padding: 3px;}QScrollArea QLabel:hover{background: #EEE;width: 100%;}");
    
    UpWindow *_win = new UpWindow;
    _win->show();

    return a.exec();
}
