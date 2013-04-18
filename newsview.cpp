#include "newsview.h"

NewsView::NewsView(QWidget *parent) : QScrollArea(parent)
{
    setBackgroundRole(QPalette::Light);
    _layout = new QVBoxLayout;

    loadNews();

    QWidget *content = new QWidget;
    content->setLayout(_layout);
    setWidget(content);
}

void NewsView::loadNews(){
    do{
        NewRow *row = _model.getCurrent();
        QLabel *lbl = new QLabel("<b>" + row->title + "</b> Par : <b>" + row->author + "</b> le <em>" + row->time.toString("d / MM / yyyy") + "</em><br/>" + row->content);
        lbl->setFixedWidth(380);
        _layout->addWidget(lbl);
    }while(_model.hasNext());
}
