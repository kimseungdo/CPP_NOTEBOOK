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
void spec_window::on_s_up_btn_1_clicked(){ spec_ui->stackedWidget->setCurrentIndex(1); }
void spec_window::on_s_up_btn_2_clicked(){ spec_ui->stackedWidget->setCurrentIndex(0); }

//내려가는 버튼
void spec_window::on_s_down_btn_1_clicked(){ spec_ui->stackedWidget->setCurrentIndex(1); }
void spec_window::on_s_down_btn_2_clicked(){ spec_ui->stackedWidget->setCurrentIndex(0); }


void spec_window::on_rectifier_btn_clicked(){ // 정류기류
    emit title_change("타이틀/상세/정류기류");
}

void spec_window::on_power_flow_btn_clicked(){ // 전력관련류
    emit title_change("타이틀/상세/전력관련류");
}

void spec_window::on_air_condition_btn_clicked(){ // 냉방기류
    emit title_change("타이틀/상세/냉방기류");
}

void spec_window::on_temp_btn_clicked(){ // 온습도류
    emit title_change("타이틀/상세/온습도류");
}

void spec_window::on_haron_btn_clicked(){ // 하론류
    emit title_change("타이틀/상세/하론류");
}

void spec_window::on_fire_btn_clicked(){ // 화재감지
    emit title_change("타이틀/상세/화재감지");
}

void spec_window::on_human_btn_clicked(){ // 인체감지
    emit title_change("타이틀/상세/인체감지");
}

void spec_window::on_flood_btn_clicked(){ // 침수센서
    emit title_change("타이틀/상세/침수센서");
}

void spec_window::on_gate_btn_clicked(){ // 출입문
    emit title_change("타이틀/상세/출입문");
}

void spec_window::on_ground_btn_clicked(){ // 접지
    emit title_change("타이틀/상세/접지");
}

void spec_window::on_gene_btn_clicked(){ // 발동발전기
    emit title_change("타이틀/상세/발동발전기");
}

void spec_window::on_exhaust_btn_clicked(){ // 배풍기
    emit title_change("타이틀/상세/배풍기");
}

void spec_window::on_bmu_btn_clicked(){ // BMU
    emit title_change("타이틀/상세/BMU");
}

