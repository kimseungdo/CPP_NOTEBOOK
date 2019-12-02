#include "info_window_file/info_window.h"
#include "ui_info_window.h"


#include <QVariant>
#include <QDebug>

#include <QString>
#include <QStringList>

#include <QFile>
#include <QTextStream>
#include <QIODevice>


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

void info_window::set_init_window(){
}

void info_window::read_slot_file(){

    /*
    QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS1.ntx");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the file for reading";
        return;
    }//MS file read
    while(!file.atEnd()){
        QString tmp = file.readLine();
        QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

        for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
            _all_sys.tempvector.push_back(tmplist.value(i));
        _all_sys.slot_vector.push_back(_all_sys.tempvector);
        _all_sys.tempvector.clear();

        if(tmplist.at(0) == "1"){
            info_ui->slot_board_set_label->setText(_all_sys.slots_id[1]);
        }


    }file.flush(); file.close();
    */
    qDebug()<< _all_sys.slot_vector[0];
    qDebug()<< _all_sys.slot_vector[1];
    qDebug()<< _all_sys.slot_vector[2];
}
