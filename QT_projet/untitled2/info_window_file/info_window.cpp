#include "info_window.h"
#include "ui_info_window.h"

#include <QVector>

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

    QFile file(QApplication::applicationDirPath()+"/info_flag_file.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the file for reading";
        qDebug() << QApplication::applicationDirPath();
        return;
    }//file read

    while(!file.atEnd()){
        QString tmp = file.readLine(); line_count++;
        QStringList tmplist = tmp.split(",");
        qDebug() << tmplist[10]<< " " << tmplist[11] << line_count;
        tmplist.removeAt(11);
        for(int i=0; i<tmplist.size(); i++)
            info_slots.append(QVariant(tmplist[i]).toBool()); //bool 형변

    }qDebug() << info_slots.size() << " " << line_count;

    file.flush(); file.close();
    qDebug() << info_slots.size();
/*
 *
    bool info_slots[line_count][10];

    for(int i=0; i<line_count; i++){
        for(int j=0; j<10; j++){
            info_slots[line_count][j] = QVariant(tmplist[j]).toBool();
        }
    }

 */
    if(line_count == 1){
        info_ui->up_btn->hide();
        info_ui->down_btn->hide();
    }
    else{
        info_ui->up_btn->show();
        info_ui->down_btn->show();
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
