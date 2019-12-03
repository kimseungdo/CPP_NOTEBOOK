#include "info_window_file/info_window.h"
#include "ui_info_window.h"
#include "global_test.h"

#include <QDebug>
//non eabi mcu - cotex m7 m4

info_window::info_window(QWidget *parent) : QWidget(parent),
    info_ui(new Ui::info_window){
    info_ui->setupUi(this);

    set_up_info_ui();
    window_index = 0;

    if(_slot_counter <= 1){
        info_ui->main_up_btn->hide();
        info_ui->main_down_btn->hide();
    }
    else{
        info_ui->main_up_btn->show();
        info_ui->main_down_btn->show();
    }
}

info_window::~info_window(){ delete info_ui; }

void info_window::set_up_info_ui(){
    if(_sub2_flag == true)
        sub2_slot_info_window(_sub2_slots);
    if(_sub1_flag == true)
        sub1_slot_info_window(_sub1_slots);
    if(_main_flag == true)
        main_slot_info_window(_main_slots);
}
