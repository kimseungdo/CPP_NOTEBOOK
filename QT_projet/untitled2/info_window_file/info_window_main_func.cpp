#include "info_window_file/info_window.h"
#include "ui_info_window.h"

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

void info_window::set_0port_info_window(){ // None
    info_ui->port_btn_1->setVisible(false);
    info_ui->port_btn_2->setVisible(false);
    info_ui->port_btn_3->setVisible(false);
    info_ui->port_btn_4->setVisible(false);
    info_ui->port_btn_5->setVisible(false);
    info_ui->port_btn_6->setVisible(false);
    info_ui->port_btn_7->setVisible(false);
    info_ui->port_btn_8->setVisible(false);
    info_ui->port_btn_9->setVisible(false);
    info_ui->port_btn_10->setVisible(false);
    info_ui->port_btn_11->setVisible(false);
    info_ui->port_btn_12->setVisible(false);
}

void info_window::set_3port_info_window(){ //232 485
    info_ui->port_btn_4->setVisible(false);
    info_ui->port_btn_5->setVisible(false);
    info_ui->port_btn_6->setVisible(false);
    info_ui->port_btn_7->setVisible(false);
    info_ui->port_btn_8->setVisible(false);
    info_ui->port_btn_9->setVisible(false);
    info_ui->port_btn_10->setVisible(false);
    info_ui->port_btn_11->setVisible(false);
    info_ui->port_btn_12->setVisible(false);

}
void info_window::set_4port_info_window(){ //422
    info_ui->port_btn_5->setVisible(false);
    info_ui->port_btn_6->setVisible(false);
    info_ui->port_btn_7->setVisible(false);
    info_ui->port_btn_8->setVisible(false);
    info_ui->port_btn_9->setVisible(false);
    info_ui->port_btn_10->setVisible(false);
    info_ui->port_btn_11->setVisible(false);
    info_ui->port_btn_12->setVisible(false);

}

void info_window::set_12port_info_window(){ //DI DO
    info_ui->port_btn_1->setVisible(true);
    info_ui->port_btn_2->setVisible(true);
    info_ui->port_btn_3->setVisible(true);
    info_ui->port_btn_4->setVisible(true);
    info_ui->port_btn_5->setVisible(true);
    info_ui->port_btn_6->setVisible(true);
    info_ui->port_btn_7->setVisible(true);
    info_ui->port_btn_8->setVisible(true);
    info_ui->port_btn_9->setVisible(true);
    info_ui->port_btn_10->setVisible(true);
    info_ui->port_btn_11->setVisible(true);
    info_ui->port_btn_12->setVisible(true);
}
