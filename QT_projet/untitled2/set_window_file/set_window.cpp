#include "set_window.h"
#include "ui_set_window.h"

#include "application.h"

set_window::set_window(QWidget *parent) : QWidget(parent),
    sui(new Ui::set_window){
    sui->setupUi(this);
}

set_window::~set_window(){ delete sui; }

void set_window::on_home_btn_clicked(){
    emit Home_clicked();
}
void set_window::on_home_btn_2_clicked(){
    emit Home_clicked();
}
void set_window::on_home_btn_3_clicked(){
    emit Home_clicked();
}

// 0-메인 1-아이피 2-시간 up버튼 >>> down버튼 <<<
void set_window::on_up_btn_clicked(){
    sui->stackedWidget->setCurrentIndex(2);
}
void set_window::on_up_btn_2_clicked(){
    sui->stackedWidget->setCurrentIndex(0);
}
void set_window::on_up_btn_3_clicked(){
    sui->stackedWidget->setCurrentIndex(1);
}

void set_window::on_down_btn_clicked(){
    sui->stackedWidget->setCurrentIndex(1);
}
void set_window::on_down_btn_2_clicked(){
    sui->stackedWidget->setCurrentIndex(2);
}
void set_window::on_down_btn_3_clicked(){
    sui->stackedWidget->setCurrentIndex(0);
}


