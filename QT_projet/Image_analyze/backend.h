#ifndef BACKEND_H
#define BACKEND_H


#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "fileout.h"

class Backend : public QObject {
        Q_OBJECT

    public:
        explicit Backend(QObject *parent = nullptr);
        void moveObject(QObject *ob);
        //void moveEngineViewer(QQmlApplicationEngine *engineView);
        void CBT_init();

        void checkFile();
        void readCBT_configFile();
        void setCBT();
    signals:


    private:
        QString configFile(void);
        void makeconfigfile(void);
        void loadconfigfile(void);

        QObject *rootOb;
        fileout mfileout;
        int control_s;  int control_e;  double control_sum = 0;
        int test_s;     int test_e;     double test_sum = 0;
        int back_s;     int back_e;     double back_sum = 0;

};

#endif // BACKEND_H
