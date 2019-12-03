#include "application.h"
#include "ui_application.h"
#include "global_test.h"

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
    read_all_system_file(_main_slots, _sub1_slots, _sub2_slots);
    qDebug()<< "MS size" << _main_slots.size();
    qDebug()<< "SUB1 size" << _sub1_slots.size();
    qDebug()<< "SUB2 size" << _sub2_slots.size();

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

void application::read_all_system_file(QVector<bool>& _MS, QVector<bool>& _SUB1, QVector<bool>& _SUB2){
    if(_main_flag == true && _MS.size() > 0){//메인이 있고 사이즈가 읽혔다면
        qDebug()<< "메인이요 메인!";

        for(int i=0; i<_MS.size(); i++){
            if(_MS[i] == true){//요놈 인덱스가 있으면?
                QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/MS"+QString::number(i+1)+".ntx");
                if(!file.open(QFile::ReadOnly | QFile::Text)) {
                    qDebug() << "Could not open the file for reading";
                    return;
                }
                while(!file.atEnd()){
                    QVector<QString> tmp_v;
                    QString tmp = file.readLine();
                    QStringList tmplist = tmp.split(",");

                    qDebug()<< i+1 <<"번째 슬롯"<<tmplist;
                    qDebug()<< "마지막: " << tmplist.back() << tmplist.at(tmplist.size()-1).size();
                    if(tmplist.at(tmplist.size()-1).size() >= 2){
                        tmplist.back() = tmplist.at(tmplist.size()-1).left(1);
                        qDebug()<<"쳐 잘라서 원소에 박은거 : " << tmplist.at(tmplist.size()-1);
                    }
                    tmp_v.push_back(tmplist);
                }
            file.flush(); file.close();
            }//end if true
        }//end for
    }//end if

    if(_sub1_flag == true && _SUB1.size() > 0){
        qDebug()<< "sub1은 나중";
    }

    if(_sub2_flag == true && _SUB2.size() > 0){
        qDebug()<< "sub2은 나중";
    }


}

