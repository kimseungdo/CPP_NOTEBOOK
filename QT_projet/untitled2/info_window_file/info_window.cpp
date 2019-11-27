#include "info_window.h"
#include "ui_info_window.h"

#include <QVariant>

#include <QFile>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>

//non eabi mcu - cotex m7 m4
info_window::info_window(QWidget *parent) : QWidget(parent),
    info_ui(new Ui::info_window){
    info_ui->setupUi(this);
    slot_counter=0; window_index=0; sub_flag = 0;//None = 0; sub1 = 1; sub2 = 2; all = 3;

    QFile file(QApplication::applicationDirPath()+"/slot_info/info_flag_file.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the file for reading";
        qDebug() << QApplication::applicationDirPath();
        return;
    }//file read

    while(!file.atEnd()){
        QString tmp = file.readLine(); slot_counter++;
        QStringList tmplist = tmp.split(",");
        if(tmplist.at(0) == "\n"){ //첫번째 요소에 개행이 있으면 연결이 안된것 = sub1이 연결 안된것 마지막까지 연결 되어있다면
            tmplist.removeAt(11);
        }
        tmplist.removeAt(11);
        qDebug()<< tmplist;
        for(int i=0; i<tmplist.size(); i++)
            info_slots.push_back(QVariant(tmplist.value(i)).toBool());

    }file.flush(); file.close();
    qDebug()<<info_slots.size() << "slot : " << slot_counter << " sub_flag : " << sub_flag;

//메인 메인-서브1 메인-서브2 메인-서브1-서브2
    if(slot_counter == 1){ //1개는 메인만 있는거 메인은 무적권 하나 있어야
        init_slot_info_window();//메인이 존재하면 버튼활성화
        info_ui->up_btn->hide();
        info_ui->down_btn->hide();
    }
    else if(slot_counter == 2){ //2개는 메인 서브1 메인 서브2
        first_slot_info_window();
        init_slot_info_window();
        info_ui->up_btn->show();
        info_ui->down_btn->show();
    }
    else if(slot_counter == 3){ //3개는 메인 서브1 서브2
        second_slot_info_window();
        first_slot_info_window();
        init_slot_info_window();
        info_ui->up_btn->show();
        info_ui->down_btn->show();
    }
    else{//잘못된거 slot not read!
        qDebug()<< "응에러";
    }
}

info_window::~info_window(){
    delete info_ui;
}

void info_window::on_home_btn_clicked(){ //집으로
    info_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
void info_window::on_before_btn_clicked(){ //정보화면 메인에서 집으로
    info_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
// 메인 -> 서브1 ->서브2 -> 메인 ~~~~ 메인 -> 서브2 -> 서브1 ->메인
void info_window::on_up_btn_clicked(){
    if(slot_counter == 3){ //화면이 3개
        if(window_index == 0){
            ++window_index; first_slot_info_window();
        }
        else if(window_index == 1){
            ++window_index; second_slot_info_window();
        }
        else{
            window_index = 0; init_slot_info_window();
        }
    }
    else if(slot_counter == 2){ //화면이 2개
        if(window_index == 0){
            ++window_index; first_slot_info_window();
        }
        else if(window_index == 1){
            window_index = 0; init_slot_info_window();
        }
    }
}

void info_window::on_down_btn_clicked(){
    if(slot_counter == 3){
        if(window_index == 0){
            --window_index; second_slot_info_window();
        }
        else if(window_index == -1){
            --window_index; first_slot_info_window();
        }
        else{
            window_index = 0; init_slot_info_window();
        }
    }
    else if(slot_counter ==2){
        if(window_index == 0){
            --window_index; first_slot_info_window();
        }
        else if(window_index == -1){
            window_index = 0; init_slot_info_window();
        }
    }


}

void info_window::init_slot_info_window(){
    info_ui->info_window_slot_label->setText("Main");
    info_ui->slot_btn_1->setEnabled(info_slots[0]);
    info_ui->slot_btn_2->setEnabled(info_slots[1]);
    info_ui->slot_btn_3->setEnabled(info_slots[2]);
    info_ui->slot_btn_4->setEnabled(info_slots[3]);
    info_ui->slot_btn_5->setEnabled(info_slots[4]);
    info_ui->slot_btn_6->setEnabled(info_slots[5]);
    info_ui->slot_btn_7->setEnabled(info_slots[6]);
    info_ui->slot_btn_8->setEnabled(info_slots[7]);
    info_ui->slot_btn_9->setEnabled(info_slots[8]);
    info_ui->slot_btn_10->setEnabled(info_slots[9]);
    info_ui->slot_btn_11->setEnabled(info_slots[10]);
}

void info_window::first_slot_info_window(){
    info_ui->info_window_slot_label->setText("Sub1");
    info_ui->slot_btn_1->setEnabled(info_slots[11]);
    info_ui->slot_btn_2->setEnabled(info_slots[12]);
    info_ui->slot_btn_3->setEnabled(info_slots[13]);
    info_ui->slot_btn_4->setEnabled(info_slots[14]);
    info_ui->slot_btn_5->setEnabled(info_slots[15]);
    info_ui->slot_btn_6->setEnabled(info_slots[16]);
    info_ui->slot_btn_7->setEnabled(info_slots[17]);
    info_ui->slot_btn_8->setEnabled(info_slots[18]);
    info_ui->slot_btn_9->setEnabled(info_slots[19]);
    info_ui->slot_btn_10->setEnabled(info_slots[20]);
    info_ui->slot_btn_11->setEnabled(info_slots[21]);
}

void info_window::second_slot_info_window(){
    info_ui->info_window_slot_label->setText("Sub2");
    info_ui->slot_btn_1->setEnabled(info_slots[22]);
    info_ui->slot_btn_2->setEnabled(info_slots[23]);
    info_ui->slot_btn_3->setEnabled(info_slots[24]);
    info_ui->slot_btn_4->setEnabled(info_slots[25]);
    info_ui->slot_btn_5->setEnabled(info_slots[26]);
    info_ui->slot_btn_6->setEnabled(info_slots[27]);
    info_ui->slot_btn_7->setEnabled(info_slots[28]);
    info_ui->slot_btn_8->setEnabled(info_slots[29]);
    info_ui->slot_btn_9->setEnabled(info_slots[30]);
    info_ui->slot_btn_10->setEnabled(info_slots[31]);
    info_ui->slot_btn_11->setEnabled(info_slots[32]);
}
