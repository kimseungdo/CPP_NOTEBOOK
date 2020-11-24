#include "backend.h"


#include <QDebug>
#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

Backend::Backend(QQmlApplicationEngine *engineViewer, QObject *parent) : QObject(parent){
    qDebug()<< "call init" ;
}
