#include "info_window.h"
#include "ui_info_window.h"


#include <QVariant>
#include <QDebug>

#include <QString>
#include <QStringList>

#include <QFile>
#include <QTextStream>
#include <QIODevice>


void info_window::info_file_check(){
    slot_counter=0; window_index=0;
    main_flag = false; sub1_flag = false; sub2_flag = false;

    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx")){
        main_flag = true; slot_counter++;
    }
    else{
        qDebug()<< "Disconnected MS or File Not Exists";
    }

    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx")){
        sub1_flag = true; slot_counter++;
    }
    else{
        qDebug()<< "Disconnected SUB1 or File Not Exists";

    }
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx")){
        sub2_flag = true; slot_counter++;
    }
    else{
        qDebug()<< "Disconnected SUB2 or File Not Exists";
    }}

void info_window::init_info_window(){
    if(slot_counter <= 1){
        info_ui->main_up_btn->hide();
        info_ui->main_down_btn->hide();
    }

    //main file read
    QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the file for reading";
        return;
    }//MS file read
    while(!file.atEnd()){
        QString tmp = file.readLine();
        QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

        for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
            main_slots.push_back(QVariant(tmplist.value(i)).toBool());

    }file.flush(); file.close();


    //sub1 file read
    if(sub1_flag == true){
        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//sub1슬롯 정보저장
                sub1_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
    }//end sub1

    //sub2 file read
    if(sub2_flag == true){
        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//sub2슬롯 정보저장
                sub2_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
    }//end sub2

}

void info_window::main_slot_info_window(QVector<bool>& T){
    info_ui->info_window_main_label->setText("Main");

    info_ui->slot_btn_1->setEnabled(T[0]);
    info_ui->slot_btn_2->setEnabled(T[1]);
    info_ui->slot_btn_3->setEnabled(T[2]);
    info_ui->slot_btn_4->setEnabled(T[3]);
    info_ui->slot_btn_5->setEnabled(T[4]);
    info_ui->slot_btn_6->setEnabled(T[5]);
    info_ui->slot_btn_7->setEnabled(T[6]);
    info_ui->slot_btn_8->setEnabled(T[7]);
    info_ui->slot_btn_9->setEnabled(T[8]);
    info_ui->slot_btn_10->setEnabled(T[9]);
    info_ui->slot_btn_11->setEnabled(T[10]);

}

void info_window::sub1_slot_info_window(QVector<bool>& T){
    info_ui->info_window_main_label->setText("Sub1");

    info_ui->slot_btn_1->setEnabled(T[0]);
    info_ui->slot_btn_2->setEnabled(T[1]);
    info_ui->slot_btn_3->setEnabled(T[2]);
    info_ui->slot_btn_4->setEnabled(T[3]);
    info_ui->slot_btn_5->setEnabled(T[4]);
    info_ui->slot_btn_6->setEnabled(T[5]);
    info_ui->slot_btn_7->setEnabled(T[6]);
    info_ui->slot_btn_8->setEnabled(T[7]);
    info_ui->slot_btn_9->setEnabled(T[8]);
    info_ui->slot_btn_10->setEnabled(T[9]);
    info_ui->slot_btn_11->setEnabled(T[10]);
}

void info_window::sub2_slot_info_window(QVector<bool>& T){
    info_ui->info_window_main_label->setText("Sub2");

    info_ui->slot_btn_1->setEnabled(T[0]);
    info_ui->slot_btn_2->setEnabled(T[1]);
    info_ui->slot_btn_3->setEnabled(T[2]);
    info_ui->slot_btn_4->setEnabled(T[3]);
    info_ui->slot_btn_5->setEnabled(T[4]);
    info_ui->slot_btn_6->setEnabled(T[5]);
    info_ui->slot_btn_7->setEnabled(T[6]);
    info_ui->slot_btn_8->setEnabled(T[7]);
    info_ui->slot_btn_9->setEnabled(T[8]);
    info_ui->slot_btn_10->setEnabled(T[9]);
    info_ui->slot_btn_11->setEnabled(T[10]);
}
