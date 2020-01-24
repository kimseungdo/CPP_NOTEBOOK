/********************************************************************************
** Form generated from reading UI file 'spec_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEC_WINDOW_H
#define UI_SPEC_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spec_window
{
public:
    QPushButton *home_btn;
    QStackedWidget *stackedWidget;
    QWidget *spec_window_1;
    QPushButton *rectifier_btn;
    QPushButton *power_flow_btn;
    QPushButton *air_condition_btn;
    QPushButton *temp_btn;
    QPushButton *haron_btn;
    QPushButton *fire_btn;
    QPushButton *human_btn;
    QPushButton *flood_btn;
    QPushButton *gate_btn;
    QPushButton *s_down_btn_1;
    QPushButton *s_before_btn_1;
    QPushButton *s_up_btn_1;
    QWidget *spec_window_2;
    QPushButton *ground_btn;
    QPushButton *gene_btn;
    QPushButton *exhaust_btn;
    QPushButton *bmu_btn;
    QPushButton *s_before_btn_2;
    QPushButton *s_down_btn_2;
    QPushButton *s_up_btn_2;
    QWidget *spec_window_3;
    QPushButton *s_up_btn_3;
    QPushButton *s_down_btn_3;
    QPushButton *s_before_btn_3;
    QLabel *spec_id_1;
    QLabel *spec_id_2;
    QLabel *spec_id_3;
    QLabel *spec_id_4;
    QLabel *spec_d_name_1;
    QLabel *spec_d_name_2;
    QLabel *spec_d_name_3;
    QLabel *spec_d_name_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *spec_window)
    {
        if (spec_window->objectName().isEmpty())
            spec_window->setObjectName(QString::fromUtf8("spec_window"));
        spec_window->resize(480, 240);
        home_btn = new QPushButton(spec_window);
        home_btn->setObjectName(QString::fromUtf8("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        stackedWidget = new QStackedWidget(spec_window);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 480, 240));
        spec_window_1 = new QWidget();
        spec_window_1->setObjectName(QString::fromUtf8("spec_window_1"));
        rectifier_btn = new QPushButton(spec_window_1);
        rectifier_btn->setObjectName(QString::fromUtf8("rectifier_btn"));
        rectifier_btn->setGeometry(QRect(50, 20, 111, 51));
        rectifier_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        power_flow_btn = new QPushButton(spec_window_1);
        power_flow_btn->setObjectName(QString::fromUtf8("power_flow_btn"));
        power_flow_btn->setGeometry(QRect(180, 20, 111, 51));
        power_flow_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        air_condition_btn = new QPushButton(spec_window_1);
        air_condition_btn->setObjectName(QString::fromUtf8("air_condition_btn"));
        air_condition_btn->setGeometry(QRect(310, 20, 111, 51));
        air_condition_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        temp_btn = new QPushButton(spec_window_1);
        temp_btn->setObjectName(QString::fromUtf8("temp_btn"));
        temp_btn->setGeometry(QRect(50, 80, 111, 51));
        temp_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        haron_btn = new QPushButton(spec_window_1);
        haron_btn->setObjectName(QString::fromUtf8("haron_btn"));
        haron_btn->setGeometry(QRect(180, 80, 111, 51));
        haron_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        fire_btn = new QPushButton(spec_window_1);
        fire_btn->setObjectName(QString::fromUtf8("fire_btn"));
        fire_btn->setGeometry(QRect(310, 80, 111, 51));
        fire_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        human_btn = new QPushButton(spec_window_1);
        human_btn->setObjectName(QString::fromUtf8("human_btn"));
        human_btn->setGeometry(QRect(50, 140, 111, 51));
        human_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        flood_btn = new QPushButton(spec_window_1);
        flood_btn->setObjectName(QString::fromUtf8("flood_btn"));
        flood_btn->setGeometry(QRect(180, 140, 111, 51));
        flood_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        gate_btn = new QPushButton(spec_window_1);
        gate_btn->setObjectName(QString::fromUtf8("gate_btn"));
        gate_btn->setGeometry(QRect(310, 140, 111, 51));
        gate_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_down_btn_1 = new QPushButton(spec_window_1);
        s_down_btn_1->setObjectName(QString::fromUtf8("s_down_btn_1"));
        s_down_btn_1->setGeometry(QRect(455, 170, 26, 30));
        s_down_btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_before_btn_1 = new QPushButton(spec_window_1);
        s_before_btn_1->setObjectName(QString::fromUtf8("s_before_btn_1"));
        s_before_btn_1->setGeometry(QRect(55, 205, 45, 30));
        s_before_btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_up_btn_1 = new QPushButton(spec_window_1);
        s_up_btn_1->setObjectName(QString::fromUtf8("s_up_btn_1"));
        s_up_btn_1->setGeometry(QRect(455, 50, 26, 30));
        s_up_btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(spec_window_1);
        spec_window_2 = new QWidget();
        spec_window_2->setObjectName(QString::fromUtf8("spec_window_2"));
        ground_btn = new QPushButton(spec_window_2);
        ground_btn->setObjectName(QString::fromUtf8("ground_btn"));
        ground_btn->setGeometry(QRect(50, 20, 111, 51));
        ground_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        gene_btn = new QPushButton(spec_window_2);
        gene_btn->setObjectName(QString::fromUtf8("gene_btn"));
        gene_btn->setGeometry(QRect(180, 20, 111, 51));
        gene_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        exhaust_btn = new QPushButton(spec_window_2);
        exhaust_btn->setObjectName(QString::fromUtf8("exhaust_btn"));
        exhaust_btn->setGeometry(QRect(310, 20, 111, 51));
        exhaust_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        bmu_btn = new QPushButton(spec_window_2);
        bmu_btn->setObjectName(QString::fromUtf8("bmu_btn"));
        bmu_btn->setGeometry(QRect(50, 80, 111, 51));
        bmu_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_before_btn_2 = new QPushButton(spec_window_2);
        s_before_btn_2->setObjectName(QString::fromUtf8("s_before_btn_2"));
        s_before_btn_2->setGeometry(QRect(55, 205, 45, 30));
        s_before_btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_down_btn_2 = new QPushButton(spec_window_2);
        s_down_btn_2->setObjectName(QString::fromUtf8("s_down_btn_2"));
        s_down_btn_2->setGeometry(QRect(455, 170, 26, 30));
        s_down_btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_up_btn_2 = new QPushButton(spec_window_2);
        s_up_btn_2->setObjectName(QString::fromUtf8("s_up_btn_2"));
        s_up_btn_2->setGeometry(QRect(455, 50, 26, 30));
        s_up_btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(spec_window_2);
        spec_window_3 = new QWidget();
        spec_window_3->setObjectName(QString::fromUtf8("spec_window_3"));
        s_up_btn_3 = new QPushButton(spec_window_3);
        s_up_btn_3->setObjectName(QString::fromUtf8("s_up_btn_3"));
        s_up_btn_3->setGeometry(QRect(455, 50, 26, 30));
        s_up_btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_down_btn_3 = new QPushButton(spec_window_3);
        s_down_btn_3->setObjectName(QString::fromUtf8("s_down_btn_3"));
        s_down_btn_3->setGeometry(QRect(455, 170, 26, 30));
        s_down_btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        s_before_btn_3 = new QPushButton(spec_window_3);
        s_before_btn_3->setObjectName(QString::fromUtf8("s_before_btn_3"));
        s_before_btn_3->setGeometry(QRect(55, 205, 45, 30));
        s_before_btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        spec_id_1 = new QLabel(spec_window_3);
        spec_id_1->setObjectName(QString::fromUtf8("spec_id_1"));
        spec_id_1->setGeometry(QRect(50, 20, 81, 31));
        spec_id_1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_id_1->setAlignment(Qt::AlignCenter);
        spec_id_1->setTextInteractionFlags(Qt::NoTextInteraction);
        spec_id_2 = new QLabel(spec_window_3);
        spec_id_2->setObjectName(QString::fromUtf8("spec_id_2"));
        spec_id_2->setGeometry(QRect(50, 65, 81, 31));
        spec_id_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_id_2->setAlignment(Qt::AlignCenter);
        spec_id_3 = new QLabel(spec_window_3);
        spec_id_3->setObjectName(QString::fromUtf8("spec_id_3"));
        spec_id_3->setGeometry(QRect(50, 110, 81, 31));
        spec_id_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_id_3->setAlignment(Qt::AlignCenter);
        spec_id_4 = new QLabel(spec_window_3);
        spec_id_4->setObjectName(QString::fromUtf8("spec_id_4"));
        spec_id_4->setGeometry(QRect(50, 155, 81, 31));
        spec_id_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_id_4->setAlignment(Qt::AlignCenter);
        spec_d_name_1 = new QLabel(spec_window_3);
        spec_d_name_1->setObjectName(QString::fromUtf8("spec_d_name_1"));
        spec_d_name_1->setGeometry(QRect(140, 20, 141, 31));
        spec_d_name_1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_d_name_1->setAlignment(Qt::AlignCenter);
        spec_d_name_2 = new QLabel(spec_window_3);
        spec_d_name_2->setObjectName(QString::fromUtf8("spec_d_name_2"));
        spec_d_name_2->setGeometry(QRect(140, 65, 141, 31));
        spec_d_name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_d_name_2->setAlignment(Qt::AlignCenter);
        spec_d_name_3 = new QLabel(spec_window_3);
        spec_d_name_3->setObjectName(QString::fromUtf8("spec_d_name_3"));
        spec_d_name_3->setGeometry(QRect(140, 110, 141, 31));
        spec_d_name_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_d_name_3->setAlignment(Qt::AlignCenter);
        spec_d_name_4 = new QLabel(spec_window_3);
        spec_d_name_4->setObjectName(QString::fromUtf8("spec_d_name_4"));
        spec_d_name_4->setGeometry(QRect(140, 155, 141, 31));
        spec_d_name_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        spec_d_name_4->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(spec_window_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 20, 41, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_2 = new QPushButton(spec_window_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 65, 41, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_3 = new QPushButton(spec_window_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 155, 41, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_4 = new QPushButton(spec_window_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 110, 41, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(spec_window_3);
        stackedWidget->raise();
        home_btn->raise();

        retranslateUi(spec_window);

        QMetaObject::connectSlotsByName(spec_window);
    } // setupUi

    void retranslateUi(QWidget *spec_window)
    {
        spec_window->setWindowTitle(QCoreApplication::translate("spec_window", "Form", nullptr));
        home_btn->setText(QCoreApplication::translate("spec_window", "\355\231\210", nullptr));
        rectifier_btn->setText(QCoreApplication::translate("spec_window", "\354\240\225\353\245\230\352\270\260\353\245\230", nullptr));
        power_flow_btn->setText(QCoreApplication::translate("spec_window", "\354\240\204\353\240\245\352\264\200\353\245\230", nullptr));
        air_condition_btn->setText(QCoreApplication::translate("spec_window", "\353\203\211\353\260\251\352\270\260\353\245\230", nullptr));
        temp_btn->setText(QCoreApplication::translate("spec_window", "\354\230\250\354\212\265\353\217\204\353\245\230", nullptr));
        haron_btn->setText(QCoreApplication::translate("spec_window", "\355\225\230\353\241\240\353\245\230", nullptr));
        fire_btn->setText(QCoreApplication::translate("spec_window", "\355\231\224\354\236\254", nullptr));
        human_btn->setText(QCoreApplication::translate("spec_window", "\354\235\270\354\262\264\352\260\220\354\247\200", nullptr));
        flood_btn->setText(QCoreApplication::translate("spec_window", "\354\271\250\354\210\230\354\204\274\354\204\234\353\245\230", nullptr));
        gate_btn->setText(QCoreApplication::translate("spec_window", "\354\266\234\354\236\205\353\254\270", nullptr));
        s_down_btn_1->setText(QCoreApplication::translate("spec_window", "v", nullptr));
        s_before_btn_1->setText(QCoreApplication::translate("spec_window", "\354\235\264\354\240\204", nullptr));
        s_up_btn_1->setText(QCoreApplication::translate("spec_window", "^", nullptr));
        ground_btn->setText(QCoreApplication::translate("spec_window", "\354\240\221\354\247\200", nullptr));
        gene_btn->setText(QCoreApplication::translate("spec_window", "\353\260\234\353\217\231\353\260\234\354\240\204\352\270\260", nullptr));
        exhaust_btn->setText(QCoreApplication::translate("spec_window", "\353\260\260\355\222\215\352\270\260", nullptr));
        bmu_btn->setText(QCoreApplication::translate("spec_window", "BMU", nullptr));
        s_before_btn_2->setText(QCoreApplication::translate("spec_window", "\354\235\264\354\240\204", nullptr));
        s_down_btn_2->setText(QCoreApplication::translate("spec_window", "v", nullptr));
        s_up_btn_2->setText(QCoreApplication::translate("spec_window", "^", nullptr));
        s_up_btn_3->setText(QCoreApplication::translate("spec_window", "^", nullptr));
        s_down_btn_3->setText(QCoreApplication::translate("spec_window", "v", nullptr));
        s_before_btn_3->setText(QCoreApplication::translate("spec_window", "\354\235\264\354\240\204", nullptr));
        spec_id_1->setText(QCoreApplication::translate("spec_window", "\354\236\245\353\271\204 ID", nullptr));
        spec_id_2->setText(QCoreApplication::translate("spec_window", "\354\236\245\353\271\204 ID", nullptr));
        spec_id_3->setText(QCoreApplication::translate("spec_window", "\354\236\245\353\271\204 ID", nullptr));
        spec_id_4->setText(QCoreApplication::translate("spec_window", "\354\236\245\353\271\204 ID", nullptr));
        spec_d_name_1->setText(QCoreApplication::translate("spec_window", "Device Label", nullptr));
        spec_d_name_2->setText(QCoreApplication::translate("spec_window", "Device Label", nullptr));
        spec_d_name_3->setText(QCoreApplication::translate("spec_window", "Device Label", nullptr));
        spec_d_name_4->setText(QCoreApplication::translate("spec_window", "Device Label", nullptr));
        pushButton->setText(QCoreApplication::translate("spec_window", ">", nullptr));
        pushButton_2->setText(QCoreApplication::translate("spec_window", ">", nullptr));
        pushButton_3->setText(QCoreApplication::translate("spec_window", ">", nullptr));
        pushButton_4->setText(QCoreApplication::translate("spec_window", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spec_window: public Ui_spec_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEC_WINDOW_H
