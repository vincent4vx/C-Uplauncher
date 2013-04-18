#include "newsmodel.h"

NewRow::NewRow(const QString &title, const QString &content, const int time, const QString &author){
    this->title = title;
    this->content = content;
    this->author = author;
    this->time = QDateTime::fromTime_t(time);
}

NewsModel::NewsModel(QObject *parent) : QObject(parent)
{
    current = 0;
    for(int i = 0; i < 100; i++){
        _news << new NewRow("title", "content", 0, "v4vx");
    }
}

bool NewsModel::hasNext(){
    current++;

    return _news.length() >= current + 1;
}

NewRow *NewsModel::getCurrent(){
    return _news[current];
}
