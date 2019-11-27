#include "info_window.h"
#include "ui_info_window.h"


void info_window::on_home_btn_clicked(){ //집으로
    main_slot_info_window(main_slots);
    emit Home_clicked();
}
void info_window::on_before_btn_clicked(){ //정보화면 메인에서 집으로
    main_slot_info_window(main_slots);
    emit Home_clicked();
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
void info_window::on_up_btn_clicked(){

    if(window_index == 0 && sub1_flag && sub2_flag){// sub1과 sub2가 둘다 true면
        ++window_index; // index = 1
        sub1_slot_info_window(sub1_slots);
    }
    else if (window_index == 1 && sub1_flag && sub2_flag){
        ++window_index; // index = 2
        sub2_slot_info_window(sub2_slots);
    }
    else if (window_index == 2 && sub1_flag && sub2_flag){
        window_index = 0; // index = 0
        main_slot_info_window(main_slots);
    }//2가 없을경우?


    else if(sub1_flag || sub2_flag){ //서로 다른값일때
        if(sub1_flag == true){//sub1이 참일때
            if(window_index == 0){
                ++window_index; // index = 1
                sub1_slot_info_window(sub1_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(main_slots);
            }
        }
        if(sub2_flag == true){//sub2가 참일때
            if(window_index == 0){
                ++window_index; // index = 1
                sub2_slot_info_window(sub2_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(main_slots);
            }
        }
    }

}

void info_window::on_down_btn_clicked(){
    if(window_index == 0 && sub1_flag && sub2_flag){
        // sub1과 sub2가 둘다 true면
        window_index = 2; // index = 2
        //info_ui->info_window_slot_label->setText("Sub2");
        sub2_slot_info_window(sub2_slots);
    }
    else if (window_index == 2 && sub1_flag && sub2_flag){
        --window_index; // index = 1
        //info_ui->info_window_slot_label->setText("Sub1");
        sub1_slot_info_window(sub1_slots);
    }
    else if (window_index == 1 && sub1_flag && sub2_flag){
        window_index = 0; // index = 0
        //info_ui->info_window_slot_label->setText("Main");
        main_slot_info_window(main_slots);
    }

    else if(sub1_flag || sub2_flag){ //서로 다른값일때
        if(sub1_flag == true){//sub1이 참일때
            if(window_index == 0){
                window_index = 1; // index = 1
                sub1_slot_info_window(sub1_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(main_slots);
            }
        }
        if(sub2_flag == true){//sub2가 참일때
            if(window_index == 0){
                window_index = 1; // index = 1
                sub2_slot_info_window(sub2_slots);
            }
            else if(window_index == 1){
                window_index = 0;
                main_slot_info_window(main_slots);
            }
        }
    }

}
