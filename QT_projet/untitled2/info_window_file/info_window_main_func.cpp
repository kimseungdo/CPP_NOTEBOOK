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
