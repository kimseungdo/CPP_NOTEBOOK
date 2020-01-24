#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include <QVariant>

#include "global_test.h"
void info_window::slot_setting(QVector<QVector<QVector<QString>>> &T, __int8 &SI){
    switch (window_index){
        case 0:
            emit title_change("타이틀/정보/MAIN/SLOT "+QVariant(SI+1).toString());
        break;
        case 1:
            emit title_change("타이틀/정보/SUB1/SLOT "+QVariant(SI+1).toString());
        break;
        case 2:
            emit title_change("타이틀/정보/SUB2/SLOT "+QVariant(SI+1).toString());
        break;
        default:
        break;
    }

    //qDebug()<< main_slots_device[slot_index];
    switch (QVariant(T[SI][0][0]).toInt() ){
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

    }//end switch

    info_ui->stackedWidget->setCurrentIndex(1);
}

void info_window::on_slot_btn_1_clicked(){
    slot_index = 0; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_2_clicked(){
    slot_index = 1; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_3_clicked(){
    slot_index = 2; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_4_clicked(){
    slot_index = 3; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_5_clicked(){
    slot_index = 4; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_6_clicked(){
    slot_index = 5; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_7_clicked(){
    slot_index = 6; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_8_clicked(){
    slot_index = 7; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_9_clicked(){
    slot_index = 8; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_10_clicked(){
    slot_index = 9; slot_setting(main_slots_device, slot_index);
}

void info_window::on_slot_btn_11_clicked(){
    slot_index = 10; slot_setting(main_slots_device, slot_index);
}
