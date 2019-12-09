#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include <QVariant>

#include "global_test.h"

void info_window::on_slot_btn_1_clicked(){
    slot_index = 0;
    if(window_index == 0){
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
        if(main_slots_device[0][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        if(main_slots_device[0][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        if(main_slots_device[0][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        if(main_slots_device[0][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        if(main_slots_device[0][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        if(main_slots_device[0][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 1;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
        if(main_slots_device[1][0][0] == "0"){
            info_ui->slot_board_set_label->setText(slots_label[0]);
            set_0port_info_window();
        }
        if(main_slots_device[1][0][0] == "1"){
            info_ui->slot_board_set_label->setText(slots_label[1]);
            set_3port_info_window();
        }
        if(main_slots_device[1][0][0] == "2"){
            info_ui->slot_board_set_label->setText(slots_label[2]);
            set_3port_info_window();
        }
        if(main_slots_device[1][0][0] == "3"){
            info_ui->slot_board_set_label->setText(slots_label[3]);
            set_4port_info_window();
        }
        if(main_slots_device[1][0][0] == "4"){
            info_ui->slot_board_set_label->setText(slots_label[4]);
            set_12port_info_window();
        }
        if(main_slots_device[1][0][0] == "5"){
            info_ui->slot_board_set_label->setText(slots_label[5]);
            set_12port_info_window();
        }
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 2;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 3;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 4;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 5;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 6;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 7;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 8;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 9;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
    slot_index = 10;
    if(window_index == 0){//메인
        emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index+1).toString());
        //qDebug()<< main_slots_device[slot_index];
        switch (QVariant(main_slots_device[slot_index][0][0]).toInt() ){
            case 0:
                info_ui->slot_board_set_label->setText(slots_label[0]);
                set_0port_info_window();
            break;
            case 1:
                info_ui->slot_board_set_label->setText(slots_label[1]);
                set_3port_info_window();
            break;
            case 2:
                info_ui->slot_board_set_label->setText(slots_label[2]);
                set_3port_info_window();
            break;
            case 3:
                info_ui->slot_board_set_label->setText(slots_label[3]);
                set_4port_info_window();
            break;
            case 4:
                info_ui->slot_board_set_label->setText(slots_label[4]);
                set_12port_info_window();
            break;
            case 5:
                info_ui->slot_board_set_label->setText(slots_label[5]);
                set_12port_info_window();
            break;
            default:
            break;
        }info_ui->stackedWidget->setCurrentIndex(1);
        /*
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
        info_ui->stackedWidget->setCurrentIndex(1);*/
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
