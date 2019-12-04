#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include "global_test.h"

void info_window::on_slot_btn_1_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 1");
        qDebug()<< main_slots_device[0];
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 1");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 1");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_2_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 2");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 2");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 2");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_3_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 3");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 3");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 3");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_4_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 4");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 4");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 4");
        info_ui->stackedWidget->setCurrentIndex(1);
    }
}

void info_window::on_slot_btn_5_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 5");
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
