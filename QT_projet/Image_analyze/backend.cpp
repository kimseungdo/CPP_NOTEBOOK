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
    loadconfigfile();
}

void Backend:: moveObject(QObject *ob){
    rootOb = ob;
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
        //qDebug()<< "ini file path : " << retn;
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

void Backend::loadconfigfile(){
    if(!QFile::exists(configFile())) return;
    qDebug()<< "loadconfigFile";

    QSettings settings(configFile(), QSettings::IniFormat);
    control_s = settings.value("cbt/cs").toInt();
    control_e = settings.value("cbt/ce").toInt();
    test_s = settings.value("cbt/ts").toInt();
    test_e = settings.value("cbt/te").toInt();
    back_s = settings.value("cbt/bs").toInt();
    back_e = settings.value("cbt/be").toInt();

    qDebug()<< "control_s : " << control_s << " control_e : " << control_e;
    qDebug()<< "test_s : " << test_s << " test_e : " << test_e;
    qDebug()<< "back_s : " << back_s << " back_e : " << back_e;


}
void Backend::CBT_init(){

    QObject *item = rootOb->findChild<QObject *>("cbt_btn");
    if(!item) return;
    else{
        connect(item, SIGNAL(setClicked(QString)), this, SLOT(set_Cbt(QString)));
    }

    QVariant  retVal;

    if(!rootOb->findChild<QObject *>("updateValCombo")){
        qDebug()<< "updateValCombo is not exists";
    }
    QMetaObject::invokeMethod(rootOb, "updateValCombo", Qt::DirectConnection,
            Q_RETURN_ARG(QVariant , retVal),
            Q_ARG(QVariant, control_s),
            Q_ARG(QVariant, control_e),
            Q_ARG(QVariant, test_s),
            Q_ARG(QVariant, test_e),
            Q_ARG(QVariant, back_s),
            Q_ARG(QVariant, back_e));


}

void Backend::connectObject(){

}
