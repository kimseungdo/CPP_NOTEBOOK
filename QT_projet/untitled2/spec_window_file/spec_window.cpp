#include "spec_window.h"
#include "ui_spec_window.h"

spec_window::spec_window(QWidget *parent) : QWidget(parent),
    spec_ui(new Ui::spec_window){
    spec_ui->setupUi(this);
}

spec_window::~spec_window(){ delete spec_ui; }
//집으로 가는 버튼
void spec_window::on_home_btn_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}

void spec_window::on_s_before_btn_2_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}

void spec_window::on_s_before_btn_1_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
//올라가는 버튼
void spec_window::on_s_up_btn_1_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(1);
}

void spec_window::on_s_up_btn_2_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(0);
}
//내려가는 버튼

void spec_window::on_s_down_btn_1_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(1);
}

void spec_window::on_s_down_btn_2_clicked(){
    spec_ui->stackedWidget->setCurrentIndex(0);
}
