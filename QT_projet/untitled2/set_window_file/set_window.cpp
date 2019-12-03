#include "set_window.h"
#include "ui_set_window.h"

#include "application.h"

#include <QFile>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>

set_window::set_window(QWidget *parent) : QWidget(parent),
    set_ui(new Ui::set_window){
    set_ui->setupUi(this);

    QFile file(QApplication::applicationDirPath()+"/mnt/ramdisk/setup.ntx");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the file for reading";
        qDebug() << QApplication::applicationDirPath();
        return;
    }//file read

    while(!file.atEnd()){
        QString tmp = file.readLine();
        QStringList tmplist = tmp.split(",");

        set_ui->IP_set_label->setText(tmplist[0]);
        set_ui->Subnet_set_label->setText(tmplist[1]);
        set_ui->GateWay_set_label->setText(tmplist[2]);
    }file.flush(); file.close();

}

set_window::~set_window(){ delete set_ui; }

void set_window::on_home_btn_clicked(){ //홈버튼 클릭
    set_ui->stackedWidget->setCurrentIndex(0);
    emit Home_clicked();
}
void set_window::on_before_btn_clicked(){ //세팅메인에서 메인페이지
    set_ui->stackedWidget->setCurrentIndex(0);
    emit title_change("타이틀/설정");
    emit Home_clicked();
}

void set_window::on_ip_set_btn_clicked(){//ip설정 화면으로
    set_ui->stackedWidget->setCurrentIndex(1);
    emit title_change("타이틀/설정/IP");
}

void set_window::on_time_set_btn_clicked(){//시간설정 화면으
    set_ui->stackedWidget->setCurrentIndex(2);
    emit title_change("타이틀/설정/시간");
}
void set_window::on_before_btn_2_clicked(){//
    set_ui->stackedWidget->setCurrentIndex(0);
    emit title_change("타이틀/설정");
}
void set_window::on_before_btn_3_clicked(){
    set_ui->stackedWidget->setCurrentIndex(0);
    emit title_change("타이틀/설정");
}
