#include "info_window_file/info_window.h"
#include "ui_info_window.h"
#include "global_test.h"

void info_window::on_home_btn_clicked(){ //집으로
    main_slot_info_window(_main_slots);
    info_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
void info_window::on_main_before_btn_clicked(){ //정보화면에서 집으로
    main_slot_info_window(_main_slots);
    info_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}

void info_window::on_slot_before_btn_clicked(){//슬롯화면에서 정보화면으로
    info_ui->stackedWidget->setCurrentIndex(0);
    emit title_change("타이틀/정보");
}

void info_window::on_port_before_btn_clicked(){//포트화면에서 슬롯화면으로
    info_ui->stackedWidget->setCurrentIndex(1);
    //0 0 ~ 232 485 3 ~ 422 4 ~ di do 5
    if(info_ui->slot_board_set_label->text() == "None") set_0port_info_window();
    else if(info_ui->slot_board_set_label->text() == "RS-232") set_3port_info_window();
    else if(info_ui->slot_board_set_label->text() == "RS-485") set_3port_info_window();
    else if(info_ui->slot_board_set_label->text() == "RS-422") set_4port_info_window();
    else if(info_ui->slot_board_set_label->text() == "DI") set_12port_info_window();
    else if(info_ui->slot_board_set_label->text() == "DO") set_12port_info_window();

}


/*
if(sub2_flag == true) sub2_slot_info_window(sub2_slots);
if(sub1_flag == true) sub1_slot_info_window(sub1_slots);
main_slot_info_window(main_slots);

메인 window_inde

       true   false                    false   true
메인 -> 서브1 ->서브2 -> 메인 ~~~~ 메인 -> 서브2 -> 서브1 ->메인
        o       x                       x        o

       false  true                     true    false
메인 -> 서브1 ->서브2 -> 메인 ~~~~ 메인 -> 서브2 -> 서브1 ->메인
        x      o                         o      x

        true  true                     true     true
메인 -> 서브1 ->서브2 -> 메인 ~~~~ 메인 -> 서브2 -> 서브1 ->메인

*/
void info_window::on_main_up_btn_clicked(){

    if(window_index == 0 && _sub1_flag && _sub2_flag){// sub1과 sub2가 둘다 true면
        ++window_index; // index = 1
        sub1_slot_info_window(_sub1_slots);
    }
    else if (window_index == 1 && _sub1_flag && _sub2_flag){
        ++window_index; // index = 2
        sub2_slot_info_window(_sub2_slots);
    }
    else if (window_index == 2 && _sub1_flag && _sub2_flag){
        window_index = 0; // index = 0
        main_slot_info_window(_main_slots);
    }


    else if(_sub1_flag || _sub2_flag){ //서로 다른값일때
        if(_sub1_flag == true){//sub1이 참일때
            if(window_index == 0){
                window_index = 1; // index = 1
                sub1_slot_info_window(_sub1_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(_main_slots);
            }
        }
        if(_sub2_flag == true){//sub2가 참일때
            if(window_index == 0){
                window_index = 2; // index = 2
                sub2_slot_info_window(_sub2_slots);
            }
            else if(window_index == 2){
                window_index = 0;
                main_slot_info_window(_main_slots);
            }
        }
    }//end 서로다른값

}

void info_window::on_main_down_btn_clicked(){

    if(window_index == 0 && _sub1_flag && _sub2_flag){
        // sub1과 sub2가 둘다 true면
        window_index = 2; // index = 2
        //info_ui->info_window_slot_label->setText("Sub2");
        sub2_slot_info_window(_sub2_slots);
    }
    else if (window_index == 2 && _sub1_flag && _sub2_flag){
        --window_index; // index = 1
        //info_ui->info_window_slot_label->setText("Sub1");
        sub1_slot_info_window(_sub1_slots);
    }
    else if (window_index == 1 && _sub1_flag && _sub2_flag){
        window_index = 0; // index = 0
        //info_ui->info_window_slot_label->setText("Main");
        main_slot_info_window(_main_slots);
    }

    else if(_sub1_flag || _sub2_flag){ //서로 다른값일때
        if(_sub1_flag == true){//sub1이 참일때
            if(window_index == 0){
                window_index = 1; // index = 1
                sub1_slot_info_window(_sub1_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(_main_slots);
            }
        }
        if(_sub2_flag == true){//sub2가 참일때
            if(window_index == 0){
                window_index = 2; // index = 1
                sub2_slot_info_window(_sub2_slots);
            }
            else if(window_index == 2){
                window_index = 0;
                main_slot_info_window(_main_slots);
            }
        }
    }//end 서로다른 값

}
