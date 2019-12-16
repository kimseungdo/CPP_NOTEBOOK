#include "application.h"
#include "ui_application.h"
#include "global_test.h"

#include <QDateTime>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>



application::application(QWidget *parent) : QWidget(parent),
    ui(new Ui::application){
    ui->setupUi(this); setFixedSize(480, 272);

    set_up_main();
    initial_system();
    read_all_system_file(_main_slots, _sub1_slots, _sub2_slots);

    timer = new QTimer(this); thread_tic = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer())); timer->start(1000);

    connect(thread_tic, SIGNAL(timeout()), this, SLOT(read_all_system_per_3tic())); thread_tic->start(3000);


    ui->stackedWidget->insertWidget(1, &_info_window);
    ui->stackedWidget->insertWidget(2, &_spec_window);

    connect(&_info_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));
    connect(&_spec_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));

    connect(&_info_window, SIGNAL(title_change(QString)), this, SLOT(main_title(const QString)) );
    connect(&_spec_window, SIGNAL(title_change(QString)), this, SLOT(main_title(const QString)) );
}

application::~application(){
    delete ui;
    if(timer->isActive())
        timer->stop();
    if(thread_tic->isActive()){
        thread_tic->stop();
    }
}
void application::onTimer(){
    ui->time_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss ddd"));
}

void application::read_all_system_per_3tic(){
    set_up_main();
    initial_system();
    read_all_system_file(_main_slots, _sub1_slots, _sub2_slots);
}

//signal function
void application::move_to_home(){ //집으로
    ui->title_label->setText("타이틀");
    ui->stackedWidget->setCurrentIndex(0);
}

void application::main_title(const QString &text_label){//타이틀변경
    ui->title_label->setText(text_label);
}

void application::set_up_main(){
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/main.ntx")){
        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/main.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(",");
            ui->Station_label->setText(tmplist[0]);
            ui->IP_label->setText(tmplist[1]);
            ui->Version_label->setText(tmplist[2]);

        }file.flush(); file.close();
    }//end file read
}

void application::initial_system(){
    //main read
    _slot_counter = 0;
    _main_slots.clear(); _sub1_slots.clear(); _sub2_slots.clear();
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx")){
        _main_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else {
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _main_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application ms vector : " << _main_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists";
            main_slots_device.clear();
    }

    //sub1 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx")){
        _sub1_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//sub1 file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub1_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application sub1 vector : " << _sub1_slots;

    }
    else{ qDebug()<< "Disconnected sub1 or File Not Exists";
            sub1_slots_device.clear();
    }

    //sub2 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx")){
        _sub2_flag = true;

        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else{
            _slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                _sub2_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        //qDebug()<< "application sub2 vector : " << _sub2_slots;
    }
    else{ qDebug()<< "Disconnected sub2 or File Not Exists";
            sub2_slots_device.clear();
    }
}

void application::read_all_system_file(QVector<bool>& _MS, QVector<bool>& _SUB1, QVector<bool>& _SUB2){

    if(_main_flag == true && _MS.size() > 0){//메인이 있고 사이즈가 읽혔다면
        for(int i=0; i<_MS.size(); i++){

            QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS"+QString::number(i+1)+".ntx");

            QVector<QString> tmp_v;
            QVector<QVector<QString>> tmp_2dv;

            if(_MS[i] == true && file.open(QFile::ReadOnly | QFile::Text)){//요놈 인덱스랑 파일이 있다면?
                while(!file.atEnd()){
                    QString tmp = file.readLine();
                    QStringList tmplist = tmp.split(",");

                    if(tmplist.at(tmplist.size()-1).size() >= 2) //맨 마지막 개행이 있을경우
                        tmplist.back() = tmplist.at(tmplist.size()-1).left(1); //앞에 하나만 저장한다

                    for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                        tmp_v.push_back(tmplist.value(i));

                    //qDebug()<< "쳐넣은 벡퉈" << tmp_v;

                    tmp_2dv.push_back(tmp_v);
                    tmp_v.clear();
                }file.flush(); file.close(); //end file read while


                main_slots_device.push_back(tmp_2dv);
                tmp_2dv.clear();

            }//end if
            else{//파일이 없거나 빠가나면
                qDebug() << "Could not open the file MS"<< i+1 <<"for reading";
                tmp_v.push_back(QString("0"));
                tmp_2dv.push_back(tmp_v);
                main_slots_device.push_back(tmp_2dv);

                tmp_v.clear(); tmp_2dv.clear();

            }//end else
            //qDebug()<< "MS" << i+1 << "전체 " <<main_slots_device[i][0];
        }//end for



    }//end if

    if(_sub1_flag == true && _SUB1.size() > 0){
        qDebug()<< "sub1은 나중";
    }

    if(_sub2_flag == true && _SUB2.size() > 0){
        qDebug()<< "sub2은 나중";
    }


}

