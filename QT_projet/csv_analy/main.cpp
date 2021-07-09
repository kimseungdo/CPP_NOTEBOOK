#include <QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QQuickView>
#include <QtQuick/QQuickView>
#include <QtWidgets/QApplication>

#include "backend.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    /*
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    Backend backend;
    engine.rootContext()->setContextProperty("tx", &backend);
    engine.load(url);
    */
    QQuickView view;
    Backend backend(&view);

    view.setTitle(QString("Won"));
    view.setSource(QUrl("qrc:/main.qml"));
    view.setResizeMode(QQuickView::SizeRootObjectToView);

    QObject* ro = view.rootObject();
    backend.moveViewerNOb(&view, ro);
    view.show();

    return app.exec();
}
