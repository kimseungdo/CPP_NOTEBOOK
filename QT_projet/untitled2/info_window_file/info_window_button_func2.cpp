#include "info_window_file/info_window.h"
#include "ui_info_window.h"


void info_window::on_slot_btn_1_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 1");
        read_slot_file();
        info_ui->stackedWidget->setCurrentIndex(1);
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 1");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 1");
    }
}

void info_window::on_slot_btn_2_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 2");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 2");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 2");
    }
}

void info_window::on_slot_btn_3_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 3");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 3");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 3");
    }
}

void info_window::on_slot_btn_4_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 4");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 4");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 4");
    }
}

void info_window::on_slot_btn_5_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 5");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 5");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 5");
    }
}

void info_window::on_slot_btn_6_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 6");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 6");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 6");
    }
}

void info_window::on_slot_btn_7_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 7");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 7");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 7");
    }
}

void info_window::on_slot_btn_8_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 8");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 8");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 8");
    }
}

void info_window::on_slot_btn_9_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 9");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 9");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 9");
    }
}

void info_window::on_slot_btn_10_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 10");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 10");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 10");
    }
}

void info_window::on_slot_btn_11_clicked(){
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT 11");
    }
    else if(window_index == 1){
        emit title_change("타이틀/정보/SUB1/SLOT 11");
    }
    else if(window_index == 2){
        emit title_change("타이틀/정보/SUB2/SLOT 11");
    }
}
