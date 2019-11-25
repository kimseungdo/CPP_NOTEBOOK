#include "info_window.h"
#include "ui_info_window.h"

info_window::info_window(QWidget *parent) : QWidget(parent),
    info_ui(new Ui::info_window){
    info_ui->setupUi(this);

    /*
     * 메인에서 슬롯을 읽음
     * 없으면 enable
     * 있으면 disable
     *
     * 메인슬롯 - 서브슬롯
     * 서브슬롯이 있으면
     */
}

info_window::~info_window(){
    delete info_ui;
}

void info_window::on_home_btn_clicked(){
    info_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
