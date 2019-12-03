#include "application.h"
#include "ui_application.h"

void application::on_info_btn_clicked(){ //정보화면으로
    ui->title_label->setText("타이틀/정보");
    ui->stackedWidget->setCurrentIndex(1);

}

void application::on_spec_btn_clicked(){ //상세화면으로
    ui->title_label->setText("타이틀/상세");
    ui->stackedWidget->setCurrentIndex(2);
}

void application::on_set_btn_clicked(){ //세팅화면으로
    ui->title_label->setText("타이틀/설정");
    ui->stackedWidget->setCurrentIndex(3);
}
