#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class Backend : public QObject {
        Q_OBJECT

    public:
        explicit Backend(QObject *parent = nullptr);
        void moveObject(QObject *ob);
        void moveEngineViewer(QQmlApplicationEngine *engineView);

    signals:


    private:
        QObject *rootOb;
};

#endif // BACKEND_H
