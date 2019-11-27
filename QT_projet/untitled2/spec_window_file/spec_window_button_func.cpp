#include "spec_window.h"
#include "ui_spec_window.h"


//집으로 가는 버튼
void spec_window::on_home_btn_clicked(){ //홈버튼 클릭
    spec_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}

void spec_window::on_s_before_btn_1_clicked(){ //첫 페이지에서 이전버튼 클
    spec_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
void spec_window::on_s_before_btn_2_clicked(){ //두번째 페이지에서 이전버튼 클
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
