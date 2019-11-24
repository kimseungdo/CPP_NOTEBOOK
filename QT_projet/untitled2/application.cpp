#include "application.h"
#include "ui_application.h"


application::application(QWidget *parent) : QWidget(parent),
    ui(new Ui::application){
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(1, &_set_window);

    connect(&_set_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));
    //connect(&_set_window, SIGNAL(change_text(const QString& new_Text)), this->title_label, SLOT(setText(QString)));
}

application::~application(){ delete ui; }


void application::on_info_btn_clicked(){
    //ui->title_label->setText("타이틀/정보");

}

void application::on_spec_btn_clicked(){
    //ui->title_label->setText("타이틀/상세");

}

void application::on_set_btn_clicked(){
    //ui->title_label->setText("타이틀/설정");
    ui->stackedWidget->setCurrentIndex(1);
}

void application::move_to_home(){
    ui->title_label->setText("타이틀");
    ui->stackedWidget->setCurrentIndex(0);
}
