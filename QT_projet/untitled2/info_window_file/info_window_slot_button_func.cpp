#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include "global_test.h"

void info_window::on_slot_btn_1_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 1");
        qDebug()<< main_slots_device[0];

        if(main_slots_device[0][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[0][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[0][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[0][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[0][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[0][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }

        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 1");
        //qDebug()<< sub1_slots_device[0];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 1");
        //qDebug()<< sub2_slots_device[0];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_2_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 2");
        qDebug()<< main_slots_device[1];

        if(main_slots_device[1][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[1][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[1][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[1][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[1][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[1][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 2");
        //qDebug()<< sub1_slots_device[1];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 2");
        //qDebug()<< sub2_slots_device[1];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_3_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 3");
        qDebug()<< main_slots_device[2];
        if(main_slots_device[2][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[2][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[2][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[2][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[2][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[2][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 3");
        //qDebug()<< sub1_slots_device[2];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 3");
        //qDebug()<< sub2_slots_device[2];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_4_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 4");
        qDebug()<< main_slots_device[3];
        if(main_slots_device[3][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[3][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[3][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[3][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[3][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[3][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 4");
        //qDebug()<< sub1_slots_device[3];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 4");
        //qDebug()<< sub2_slots_device[3];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_5_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 5");
        qDebug()<< main_slots_device[4];
        if(main_slots_device[4][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[4][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[4][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[4][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[4][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[4][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 5");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 5");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_6_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 6");
        qDebug()<< main_slots_device[5];
        if(main_slots_device[5][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[5][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[5][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[5][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[5][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[5][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 6");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 6");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_7_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 7");
        qDebug()<< main_slots_device[6];
        if(main_slots_device[6][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[6][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[6][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[6][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[6][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[6][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 7");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 7");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_8_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 8");
        qDebug()<< main_slots_device[7];
        if(main_slots_device[7][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[7][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[7][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[7][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[7][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[7][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 8");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 8");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_9_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 9");
        qDebug()<< main_slots_device[8];
        if(main_slots_device[8][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[8][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[8][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[8][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[8][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[8][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 9");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 9");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_10_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 10");
        qDebug()<< main_slots_device[9];
        if(main_slots_device[9][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[9][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[9][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[9][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[9][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[9][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 10");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 10");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_11_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 11");
        qDebug()<< main_slots_device[10];
        if(main_slots_device[10][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        else if(main_slots_device[10][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        else if(main_slots_device[10][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        else if(main_slots_device[10][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        else if(main_slots_device[10][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        else if(main_slots_device[10][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 11");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 11");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}
