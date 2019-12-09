#include "info_window_file/info_window.h"
#include "ui_info_window.h"

#include <QDebug>
#include <QVector>
#include "global_test.h"

void info_window::port_setting(QVector<QVector<QVector<QString>>>& T, __int8 &PI){
    port_window_index = 0; //첫화면 인덱스 표시
    switch (window_index){
        case 0:
            emit title_change("타이틀/정보/MAIN/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(PI+1).toString() );
        break;
        case 1:
            emit title_change("타이틀/정보/SUB1/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(PI+1).toString() );
        break;
        case 2:
            emit title_change("타이틀/정보/SUB2/SLOT "+ QVariant(slot_index +1).toString() +"/PORT "+ QVariant(PI+1).toString() );
        break;
        default:
        break;
    }

    info_ui->port_board_set_label->setText(info_ui->slot_board_set_label->text());
    info_ui->port_number_set_label->setText(QVariant(PI+1).toString() );

    info_ui->stackedWidget->setCurrentIndex(2);

    for(int i=3; i<T[slot_index][PI].size(); i+=15){
        tmp_vec.push_back(T[slot_index][PI][i]);
        tmp_vec.push_back(device_code_name.key(T[slot_index][PI][i+1]));
    }qDebug()<< tmp_vec; cut_per_page = tmp_vec.size()/6; last_page = tmp_vec.size()%6;

    switch(tmp_vec.size()) {
        case 2: //포트가 1개 1show 23hide
            info_ui->port_up_btn->hide();
            info_ui->port_down_btn->hide();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_1->setText(tmp_vec[0]); info_ui->port_device_name_label_1->setText(tmp_vec[1]);

            info_ui->port_device_id_label_2->hide();        info_ui->port_device_name_label_2->hide();
            info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();
        break;

       case 4: //포트가 2개 12show 3hide
           info_ui->port_up_btn->hide();
           info_ui->port_down_btn->hide();

           info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
           info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();

           info_ui->port_device_id_label_1->setText(tmp_vec[0]); info_ui->port_device_name_label_1->setText(tmp_vec[1]);
           info_ui->port_device_id_label_2->setText(tmp_vec[2]); info_ui->port_device_name_label_2->setText(tmp_vec[3]);

           info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();
        break;

        case 6: //포트가 3개
            info_ui->port_up_btn->hide();
            info_ui->port_down_btn->hide();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();
            info_ui->port_device_id_label_3->show();        info_ui->port_device_name_label_3->show();

            info_ui->port_device_id_label_1->setText(tmp_vec[0]); info_ui->port_device_name_label_1->setText(tmp_vec[1]);
            info_ui->port_device_id_label_2->setText(tmp_vec[2]); info_ui->port_device_name_label_2->setText(tmp_vec[3]);
            info_ui->port_device_id_label_3->setText(tmp_vec[4]); info_ui->port_device_name_label_3->setText(tmp_vec[5]);
        break;

        default: // 그 이상일때
            info_ui->port_up_btn->show();
            info_ui->port_down_btn->show();

            info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
            info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();
            info_ui->port_device_id_label_3->show();        info_ui->port_device_name_label_3->show();

            info_ui->port_device_id_label_1->setText(tmp_vec[0]); info_ui->port_device_name_label_1->setText(tmp_vec[1]);
            info_ui->port_device_id_label_2->setText(tmp_vec[2]); info_ui->port_device_name_label_2->setText(tmp_vec[3]);
            info_ui->port_device_id_label_3->setText(tmp_vec[4]); info_ui->port_device_name_label_3->setText(tmp_vec[5]);

        break;
    }//end switch

}

void info_window::on_port_up_btn_clicked(){ // 0-5 6-11 12-17 18-23 0-5
    port_window_index++; qDebug()<< tmp_vec.size() << aa;
    qDebug()<< "페이지 인덱스 : "<< QVariant(port_window_index).toInt() <<"페이지 수 : " << QVariant(cut_per_page).toInt() << "마지막 페이지 라벨 수 : " << QVariant(last_page).toInt();

    if(port_window_index < cut_per_page)
    /*
    info_ui->port_device_id_label_1->setText(tmp_vec[aa]); info_ui->port_device_name_label_1->setText(tmp_vec[aa+1]);
    info_ui->port_device_id_label_2->setText(tmp_vec[aa+2]); info_ui->port_device_name_label_2->setText(tmp_vec[aa+3]);
    info_ui->port_device_id_label_3->setText(tmp_vec[aa+4]); info_ui->port_device_name_label_3->setText(tmp_vec[aa+5]);


    aa += 6;
    if(port_window_index == cut_per_page+1){//페이지 인덱스가 마지막 페이지라면
        port_window_index = 0;
        switch(QVariant(last_page).toInt()) { //마지막 페이지 표시
                info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
                info_ui->port_device_id_label_1->setText(tmp_vec[aa]); info_ui->port_device_name_label_1->setText(tmp_vec[aa+1]);

                info_ui->port_device_id_label_2->hide();        info_ui->port_device_name_label_2->hide();
                info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();

                 aa = 0;
            break;

           case 4: //포트가 2개 12show 3hide
               info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
               info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();

               info_ui->port_device_id_label_1->setText(tmp_vec[aa]); info_ui->port_device_name_label_1->setText(tmp_vec[aa+1]);
               info_ui->port_device_id_label_2->setText(tmp_vec[aa+2]); info_ui->port_device_name_label_2->setText(tmp_vec[aa+3]);

               info_ui->port_device_id_label_3->hide();        info_ui->port_device_name_label_3->hide();

                aa = 0;
            break;

            case 6: //포트가 3개
                info_ui->port_device_id_label_1->show();        info_ui->port_device_name_label_1->show();
                info_ui->port_device_id_label_2->show();        info_ui->port_device_name_label_2->show();
                info_ui->port_device_id_label_3->show();        info_ui->port_device_name_label_3->show();

                info_ui->port_device_id_label_1->setText(tmp_vec[aa]); info_ui->port_device_name_label_1->setText(tmp_vec[aa+1]);
                info_ui->port_device_id_label_2->setText(tmp_vec[aa+2]); info_ui->port_device_name_label_2->setText(tmp_vec[aa+3]);
                info_ui->port_device_id_label_3->setText(tmp_vec[aa+4]); info_ui->port_device_name_label_3->setText(tmp_vec[aa+5]);

                 aa = 0;
            break;
        }
    }//end if  */

}
void info_window::on_port_down_btn_clicked(){ // ~~~~~ 18-23 12-17 6-11 0-5 18-23


}


void info_window::on_port_btn_1_clicked(){
    port_index = 0; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_2_clicked(){
    port_index = 1; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_3_clicked(){
    port_index = 2; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_4_clicked(){
    port_index = 3; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_5_clicked(){
    port_index = 4; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_6_clicked(){
    port_index = 5; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_7_clicked(){
    port_index = 6; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_8_clicked(){
    port_index = 7; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_9_clicked(){
    port_index = 8; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_10_clicked(){
    port_index = 9; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_11_clicked(){
    port_index = 10; port_setting(main_slots_device, port_index);
}

void info_window::on_port_btn_12_clicked(){
    port_index = 11; port_setting(main_slots_device, port_index);
}
