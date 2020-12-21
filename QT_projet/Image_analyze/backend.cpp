#include "backend.h"

#include <QDebug>
#include <QObject>
#include <QFile>
#include <QSettings>

#include <QDesktopServices>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

Backend::Backend(QObject *parent) : QObject(parent){
    qDebug()<< "call Backend Init" << parent;

    makeconfigfile();
    //loadconfigfile();
}

void Backend:: moveObject(QObject *ob){
    rootOb = ob;
/*
    QObject *item = rootOb->findChild<QObject*>("testLabel");
    item->setProperty("text", "dddd");
*/
}

QString Backend::configFile(){
    QString retn;

    #if QT_VERSION >= 0x050000
        QString configBasePath =
        QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0) +
            "/" + qApp->applicationName();
    #else
        QString configBasePath =
        QDesktopServices::storageLocation(QDesktopServices::DocumentsLocation) +
            "/" + qApp->applicationName();
    #endif

        retn = configBasePath + "/config.ini";
        qDebug()<< retn;
        return retn;
}
void Backend::makeconfigfile(){

    if(QFile::exists(configFile())) {
        qDebug()<< "configure file exists";
        return;
    }
    QString testQString = "TestString";
    QSettings settings(configFile(), QSettings::IniFormat);

    settings.setValue("cbt/cs", 210);
    settings.setValue("cbt/ce", 310);
    settings.setValue("cbt/ts", 390);
    settings.setValue("cbt/te", 490);
    settings.setValue("cbt/bs", 510);
    settings.setValue("cbt/be", 610);

}
void Backend::CBT_init(){


}
