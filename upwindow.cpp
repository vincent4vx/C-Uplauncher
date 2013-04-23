#include "upwindow.h"
#include "newsview.h"

UpWindow::UpWindow(QWidget *parent) : QMainWindow(parent){
    setWindowTitle("Uplauncher");
    setFixedSize(500, 250);

    initCentralWidget();
    initMenuBar();
}

void UpWindow::initCentralWidget(){
    _centralWidget = new QWidget(this);
    setCentralWidget(_centralWidget);

    QGridLayout *mainLayout = new QGridLayout();
    _centralWidget->setLayout(mainLayout);

    QPushButton *button = new QPushButton("Jouer !");
    mainLayout->addWidget(button, 2, 6, 3, 1);
    button->setFixedHeight(100);

    QTabWidget *tab = new QTabWidget;
    QWidget *newsWidget = new NewsView;
    tab->addTab(newsWidget, "Nouvelles");

    mainLayout->addWidget(tab, 1, 0, 5, 6);

    QProgressBar *bar = new QProgressBar;
    bar->setValue(35);

    mainLayout->addWidget(bar, 0, 0, 1, 7);
}

void UpWindow::initMenuBar(){
    QMenuBar *menuBar = new QMenuBar;
    setMenuBar(menuBar);

    QMenu *fichier = menuBar->addMenu("&Fichier");
    QMenu *navigation = menuBar->addMenu("&Navigation");

    QAction *quit = fichier->addAction("&Quitter");
    QAction *site = navigation->addAction("Allez sur le site &Web");

    //quit
    connect(quit, SIGNAL(triggered()), QApplication::instance(), SLOT(quit()));
    //go to web site
    connect(site, SIGNAL(triggered()), this, SLOT(goToWebSite()));
}

// SLOTS

void UpWindow::goToWebSite(){
    QDesktopServices::openUrl(QUrl("http://monsite.fr/"));
}
