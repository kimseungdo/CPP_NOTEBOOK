#ifndef BACKEND_H
#define BACKEND_H

#include <QDebug>
#include <QObject>
#include <QQuickItem>
#include <QQuickView>

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QQuickView* appV, QObject* parent = nullptr);
    void moveViewerNOb(QQuickView* vw, QObject* ob);

private:
    QQuickView* m_appview;
    QObject* rootOb;
signals:

};

#endif // BACKEND_H
