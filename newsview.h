#ifndef NEWSVIEW_H
#define NEWSVIEW_H

#include <QtGui>
#include "newsmodel.h"

class NewsView : public QScrollArea
{
    Q_OBJECT
public:
    explicit NewsView(QWidget *parent = 0);
    void loadNews();

private:
    NewsModel _model;
    QVBoxLayout *_layout;

private:
    
signals:
    
public slots:
    
};

#endif // NEWSVIEW_H
