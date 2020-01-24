#include "info_window_file/info_window.h"
#include "ui_info_window.h"
#include "global_test.h"

//#include <QButtonGroup>
#include <QDebug>
#include <QTimer>
//non eabi mcu - cotex m7 m4

info_window::info_window(QWidget *parent) : QWidget(parent),
    info_ui(new Ui::info_window){
    info_ui->setupUi(this);


    window_index = 0;

    /*
    QButtonGroup* group = new QButtonGroup(this);

    group->addButton(info_ui->port_btn_1);
    group->addButton(info_ui->port_btn_2);
    group->addButton(info_ui->port_btn_3);
    group->addButton(info_ui->port_btn_4);
    group->addButton(info_ui->port_btn_5);
    group->addButton(info_ui->port_btn_6);
    group->addButton(info_ui->port_btn_7);
    group->addButton(info_ui->port_btn_8);
    group->addButton(info_ui->port_btn_9);
    group->addButton(info_ui->port_btn_10);
    group->addButton(info_ui->port_btn_11);
    group->addButton(info_ui->port_btn_12);
    connect(group, SIGNAL(buttonClicked(int)), this, SLOT(onGroupButtonClicked(int)));

    QButtonGroup* group2 = new QButtonGroup(this);

    group2->addButton(info_ui->slot_btn_1);
    group2->addButton(info_ui->slot_btn_2);
    group2->addButton(info_ui->slot_btn_3);
    group2->addButton(info_ui->slot_btn_4);
    group2->addButton(info_ui->slot_btn_5);
    group2->addButton(info_ui->slot_btn_6);
    group2->addButton(info_ui->slot_btn_7);
    group2->addButton(info_ui->slot_btn_8);
    group2->addButton(info_ui->slot_btn_9);
    group2->addButton(info_ui->slot_btn_10);
    group2->addButton(info_ui->slot_btn_11);
    connect(group2, SIGNAL(buttonClicked(int)), this, SLOT(onGroupButtonClicked(int)));
    */


}

info_window::~info_window(){ delete info_ui; }

void info_window::set_up_info_ui(){

    info_ui->slot_down_btn->hide();
    info_ui->slot_up_btn->hide();

    info_ui->label->setText(" "+QVariant(aa).toString());
    if(_slot_counter <= 1){
        info_ui->main_up_btn->hide();
        info_ui->main_down_btn->hide();
    }
    else{
        info_ui->main_up_btn->show();
        info_ui->main_down_btn->show();
    }

    if(_sub2_flag == true)
        sub2_slot_info_window(_sub2_slots);
    if(_sub1_flag == true)
        sub1_slot_info_window(_sub1_slots);
    if(_main_flag == true)
        main_slot_info_window(_main_slots);
}
/*
void info_window::onGroupButtonClicked(int id){
    qDebug() << id;
    qDebug() << senderSignalIndex();
}*/

