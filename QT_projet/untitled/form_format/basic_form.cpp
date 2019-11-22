#include "basic_form.h"
#include <QLabel>
#include <QPushButton>
basic_form::basic_form(QWidget *parent) : QWidget(parent){
    setFixedSize(480, 272);
    test_label = new QLabel("form_format/basic_form_label", this); test_label->setAlignment(Qt::AlignCenter);

    home_btn = new QPushButton("홈", this); home_btn->setGeometry(10, 210, 50, 30);
    before_btn = new QPushButton("이전", this); before_btn->setGeometry(70, 210, 50, 30);
    up_btn = new QPushButton("^", this); up_btn->setGeometry(460, 70, 20, 30);
    down_btn = new QPushButton("v", this); down_btn->setGeometry(460, 170, 20, 30);
}
