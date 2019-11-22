#include "main_form.h"
#include <QPushButton>
#include <QLabel>

main_form::main_form(QWidget *parent) : QWidget(parent){
    setFixedSize(480, 272);
    test_label2 = new QLabel("main_form", this);

    info_btn = new QPushButton("정보", this), info_btn->setGeometry(50, 150, 100, 50);
    spec_btn = new QPushButton("상세", this), spec_btn->setGeometry(190, 150, 100, 50);
    set_btn = new QPushButton("설정", this), set_btn->setGeometry(330, 150, 100, 50);
}
