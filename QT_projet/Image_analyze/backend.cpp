#include "backend.h"


#include <QDebug>
#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

Backend::Backend(QObject *parent) : QObject(parent){
    qDebug()<< "call Backend Init" << parent;
}

void Backend:: moveObject(QObject *ob){
    rootOb = ob;

    QObject *item = rootOb->findChild<QObject*>("testLabel");
    item->setProperty("text", "dddd");

}

void Backend::moveEngineViewer(QQmlApplicationEngine *engineView){

}

