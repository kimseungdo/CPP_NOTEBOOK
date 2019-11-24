#include "application.h"
#include "ui_application.h"


application::application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::application){
    ui->setupUi(this);
}

application::~application(){ delete ui; }


void application::on_info_btn_clicked(){
    ui->title_label->setText("타이틀/정보");
    ui->main_widget->hide();

}

void application::on_spec_btn_clicked(){
    ui->title_label->setText("타이틀/상세");
    ui->main_widget->hide();

}

void application::on_set_btn_clicked(){
    ui->title_label->setText("타이틀/설정");
    ui->main_widget->hide();

    _set_window = new set_window(this);
    _set_window->show();

}
