#ifndef NEWSMODEL_H
#define NEWSMODEL_H

#include <QObject>
#include <QtGui>

class NewRow{
public:
    explicit NewRow(const QString &title, const QString &content, const int time, const QString &author);
    QString title;
    QString content;
    QDateTime time;
    QString author;
};

class NewsModel : public QObject
{
    Q_OBJECT
public:
    explicit NewsModel(QObject *parent = 0);
    bool hasNext();
    NewRow *getCurrent();
    void reset();

private:
    QList<NewRow *> _news;
    int current;
    
signals:
    
public slots:
    
};

#endif // NEWSMODEL_H
