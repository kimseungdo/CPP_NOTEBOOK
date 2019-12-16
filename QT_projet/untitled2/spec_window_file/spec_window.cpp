#include "spec_window.h"
#include "ui_spec_window.h"

#include "global_test.h"
#include <Qdebug>
spec_window::spec_window(QWidget *parent) : QWidget(parent),
    spec_ui(new Ui::spec_window){
    spec_ui->setupUi(this);

    device_read();
}

spec_window::~spec_window(){ delete spec_ui; }

void spec_window::device_read(){
    qDebug()<< main_slots_device;

}

void spec_window::on_s_up_btn_3_clicked(){

}

void spec_window::on_s_down_btn_3_clicked(){

}

void spec_window::on_pushButton_clicked(){

}

void spec_window::on_pushButton_2_clicked(){

}

void spec_window::on_pushButton_4_clicked(){

}

void spec_window::on_pushButton_3_clicked(){

}
