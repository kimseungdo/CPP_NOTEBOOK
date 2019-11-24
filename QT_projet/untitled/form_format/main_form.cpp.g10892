#include "main_form.h"
#include "info_window.h"

#include <QPushButton>
#include <QLabel>

main_form::main_form(QWidget *parent) : QWidget(parent){
    setFixedSize(480, 272);
    test_label2 = new QLabel("main_form", this); test_label2->setGeometry(0, 0, 480, 11);
    test_label2->setAlignment(Qt::AlignCenter);

    info_btn = new QPushButton("정보", this), info_btn->setGeometry(50, 150, 100, 50);
    spec_btn = new QPushButton("상세", this), spec_btn->setGeometry(190, 150, 100, 50);
    set_btn = new QPushButton("설정", this), set_btn->setGeometry(330, 150, 100, 50);

    connect(info_btn, SIGNAL(released()), this, SLOT(info_btn_click()));
    connect(spec_btn, SIGNAL(released()), this, SLOT(spec_btn_click()));
    connect(set_btn, SIGNAL(released()), this, SLOT(set_btn_click()));
}

void main_form::info_btn_click(){
    test_label2 -> setText("정보보튼 클릭");
    info_window IW;
    IW.show();

}
void main_form::spec_btn_click(){
    test_label2 -> setText("상세버튼 클릭");
}
void main_form::set_btn_click(){
    test_label2 -> setText("설정버튼 클릭");
}
