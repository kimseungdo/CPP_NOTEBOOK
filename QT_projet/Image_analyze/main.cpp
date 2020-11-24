#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "backend.h"

int main(int argc, char *argv[]){
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    QObject *appOb = engine.rootObjects().first();

    Backend backend(&engine);
    backend.moveObject(appOb);



    return app.exec();
}
