#include "application.h"
#include "global_test.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QStringList>

void initial_system(){

    //int _slot_counter = 0;
    //bool _main_flag = false; bool _sub1_flag = false; bool sub2_flag = false;

    //main read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx")){
        _main_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else {
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _main_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application ms vector : " << _main_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists"; }

    //sub1 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx")){
        _sub1_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//sub1 file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub1_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application sub1 vector : " << _sub1_slots;

    }
    else{ qDebug()<< "Disconnected sub1 or File Not Exists"; }

    //sub2 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx")){
        _sub2_flag = true;

        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub2_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application sub2 vector : " << _sub2_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists"; }
    qDebug()<< "in main slot counter : " << _slot_counter;
}

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    initial_system();

    application w;
    w.show();

    return a.exec();
}
