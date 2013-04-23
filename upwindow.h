#ifndef UPWINDOW_H
#define UPWINDOW_H

#include <QMainWindow>
#include <QtGui>

class UpWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit UpWindow(QWidget *parent = 0);

private:
    //properties
    QWidget *_centralWidget;

    //methods
    void initCentralWidget();
    void initMenuBar();
    
signals:
    
private slots:
    void goToWebSite();
};

#endif // UPWINDOW_H
