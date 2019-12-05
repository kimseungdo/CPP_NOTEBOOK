#include "application.h"
#include "global_test.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QStringList>


void initial_system(){
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
        //qDebug()<< "application ms vector : " << _main_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists";
            main_slots_device.clear();
    }

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
        //qDebug()<< "application sub1 vector : " << _sub1_slots;

    }
    else{ qDebug()<< "Disconnected sub1 or File Not Exists";
            sub1_slots_device.clear();
    }

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
        //qDebug()<< "application sub2 vector : " << _sub2_slots;
    }
    else{ qDebug()<< "Disconnected sub2 or File Not Exists";
            sub2_slots_device.clear();
    }

}

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    initial_system();

    application w;
    w.show();

    return a.exec();
}
