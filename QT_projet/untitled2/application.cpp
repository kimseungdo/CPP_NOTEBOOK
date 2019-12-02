#include "application.h"
#include "ui_application.h"


#include <QFile>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>

application::application(QWidget *parent) : QWidget(parent),
    ui(new Ui::application){
    ui->setupUi(this); setFixedSize(480, 272);

    check_all_system();

    ui->stackedWidget->insertWidget(1, &_info_window);
    ui->stackedWidget->insertWidget(2, &_spec_window);
    ui->stackedWidget->insertWidget(3, &_set_window);

    connect(&_info_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));
    connect(&_spec_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));
    connect(&_set_window, SIGNAL(Home_clicked()), this, SLOT(move_to_home()));

    connect(&_info_window, SIGNAL(title_change(QString)), this, SLOT(main_title(const QString)) );
    connect(&_set_window, SIGNAL(title_change(QString)), this, SLOT(main_title(const QString)) );
    connect(&_set_window, SIGNAL(title_change(QString)), this, SLOT(main_title(const QString)) );

}

application::~application(){ delete ui; }

//signal function
void application::move_to_home(){ //집으로
    ui->title_label->setText("타이틀");
    ui->stackedWidget->setCurrentIndex(0);
}

void application::main_title(const QString &text_label){//타이틀변경
    ui->title_label->setText(text_label);
}

void application::check_all_system(){
    all_sys.main_flag = false; all_sys.sub1_flag = false, all_sys.sub2_flag = false;

    //main read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx")){
        all_sys.main_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else {
            all_sys.slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                all_sys.main_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application ms vector : " << all_sys.main_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists"; }

    //sub1 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx")){
        all_sys.sub1_flag = true;


        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB1.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//sub1 file read
        else{
            all_sys.slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                all_sys.sub1_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application sub1 vector : " << all_sys.sub1_slots;

    }
    else{ qDebug()<< "Disconnected sub1 or File Not Exists"; }

    //sub2 read
    if(QFile::exists(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx")){
        all_sys.sub2_flag = true;

        QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/SUB2.ntx");
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Could not open the file for reading";
            return;
        }//MS file read
        else{
            all_sys.slot_counter++;
        }
        while(!file.atEnd()){
            QString tmp = file.readLine();
            QStringList tmplist = tmp.split(","); tmplist.removeAt(11);//개행 삭제

            for(int i=0; i<tmplist.size(); i++)//메인슬롯 정보저장
                all_sys.sub2_slots.push_back(QVariant(tmplist.value(i)).toBool());

        }file.flush(); file.close();
        qDebug()<< "application sub2 vector : " << all_sys.sub2_slots;
    }
    else{ qDebug()<< "Disconnected MS or File Not Exists"; }

}
