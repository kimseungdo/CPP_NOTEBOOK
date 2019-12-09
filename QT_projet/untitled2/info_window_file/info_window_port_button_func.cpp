#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include <QVector>
#include "global_test.h"
/*
 *
 *
 *
 */

void info_window::tmp_setting(QVector<QVector<QVector<QString>>>& T, __int8 &PI){
    for(int i=3; i<T[slot_index][PI].size(); i+=15){
        tmp_vec.push_back(T[slot_index][PI][i]);
        tmp_vec.push_back(device_code_name.key(T[slot_index][PI][i+1]));
    }qDebug()<< tmp_vec;

    shift_port_device_window(tmp_vec);
}

void info_window::shift_port_device_window(QVector<QString> &T){

    switch(T.size()/2) {
        case 1: //포트가 1개
            info_ui->port_up_btn->hide();
            info_ui->port_down_btn->hide();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_1->setText(T[0]); info_ui->port_device_name_label_1->setText(T[1]);

            info_ui->port_device_id_label_2->hide();        info_ui->port_device_name_label_2->hide();
            info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();
        break;

        case 2: //포트가 2개
            info_ui->port_up_btn->hide();
            info_ui->port_down_btn->hide();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();

            info_ui->port_device_id_label_1->setText(T[0]); info_ui->port_device_name_label_1->setText(T[1]);
            info_ui->port_device_id_label_2->setText(T[2]); info_ui->port_device_name_label_2->setText(T[3]);

            info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();

        break;

        case 3: //포트가 3개
            info_ui->port_up_btn->hide();
            info_ui->port_down_btn->hide();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();
            info_ui->port_device_id_label_3->show();        info_ui->port_device_name_label_3->show();

            info_ui->port_device_id_label_1->setText(T[0]); info_ui->port_device_name_label_1->setText(T[1]);
            info_ui->port_device_id_label_2->setText(T[2]); info_ui->port_device_name_label_2->setText(T[3]);
            info_ui->port_device_id_label_3->setText(T[4]); info_ui->port_device_name_label_3->setText(T[5]);
        break;

        default: // 그 이상일때
            info_ui->port_up_btn->show();
            info_ui->port_down_btn->show();
        break;
    }
}

void info_window::on_port_up_btn_clicked(){

}

void info_window::on_port_down_btn_clicked(){

}


void info_window::on_port_btn_1_clicked(){
    port_index = 0;
    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        tmp_setting(main_slots_device, port_index);

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_2_clicked(){
    port_index = 1;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        tmp_setting(main_slots_device, port_index);

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_3_clicked(){
    port_index = 2;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        tmp_setting(main_slots_device, port_index);

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_4_clicked(){
    port_index = 3;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_5_clicked(){
    port_index = 4;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_6_clicked(){
    port_index = 5;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_7_clicked(){
    port_index = 6;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_8_clicked(){
    port_index = 7;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_9_clicked(){
    port_index = 8;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_10_clicked(){
    port_index = 9;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_11_clicked(){
    port_index = 10;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}

void info_window::on_port_btn_12_clicked(){
    port_index = 11;

    if(window_index == 0){
        qDebug()<< main_slots_device[slot_index][port_index];

        for(int i=3; i<main_slots_device[slot_index][port_index].size(); i+=15)
            tmp_hash [main_slots_device[slot_index][port_index][i]] = device_code_name.key(main_slots_device[slot_index][port_index][i+1]);

        qDebug()<< tmp_hash;

        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(port_index+1).toString() );
        info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
        info_ui->port_number_set_label->setText(QVariant(port_index+1).toString() );

        info_ui->stackedWidget->setCurrentIndex(2);
    }
    else if(window_index == 1){

    }
    else if(window_index == 2){

    }
}
