#include "uplauncher.h"

Uplauncher::Uplauncher(QWidget *parent) : QWidget(parent){
    _window = new UpWindow(this);
    _window->show();

    _config = new Config;
}
