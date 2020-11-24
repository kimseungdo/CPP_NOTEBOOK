#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class Backend : public QObject {
        Q_OBJECT

    public:
        explicit Backend(QQmlApplicationEngine *engineViewer, QObject *parent = nullptr);

    signals:

};

#endif // BACKEND_H
