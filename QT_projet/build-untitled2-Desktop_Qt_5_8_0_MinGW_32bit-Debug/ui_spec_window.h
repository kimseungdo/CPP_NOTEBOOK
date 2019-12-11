/********************************************************************************
** Form generated from reading UI file 'spec_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEC_WINDOW_H
#define UI_SPEC_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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

    void setupUi(QWidget *spec_window)
    {
        if (spec_window->objectName().isEmpty())
            spec_window->setObjectName(QStringLiteral("spec_window"));
        spec_window->resize(480, 240);
        home_btn = new QPushButton(spec_window);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        stackedWidget = new QStackedWidget(spec_window);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 480, 240));
        spec_window_1 = new QWidget();
        spec_window_1->setObjectName(QStringLiteral("spec_window_1"));
        rectifier_btn = new QPushButton(spec_window_1);
        rectifier_btn->setObjectName(QStringLiteral("rectifier_btn"));
        rectifier_btn->setGeometry(QRect(50, 20, 111, 51));
        rectifier_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        power_flow_btn = new QPushButton(spec_window_1);
        power_flow_btn->setObjectName(QStringLiteral("power_flow_btn"));
        power_flow_btn->setGeometry(QRect(180, 20, 111, 51));
        power_flow_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        air_condition_btn = new QPushButton(spec_window_1);
        air_condition_btn->setObjectName(QStringLiteral("air_condition_btn"));
        air_condition_btn->setGeometry(QRect(310, 20, 111, 51));
        air_condition_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        temp_btn = new QPushButton(spec_window_1);
        temp_btn->setObjectName(QStringLiteral("temp_btn"));
        temp_btn->setGeometry(QRect(50, 80, 111, 51));
        temp_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        haron_btn = new QPushButton(spec_window_1);
        haron_btn->setObjectName(QStringLiteral("haron_btn"));
        haron_btn->setGeometry(QRect(180, 80, 111, 51));
        haron_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        fire_btn = new QPushButton(spec_window_1);
        fire_btn->setObjectName(QStringLiteral("fire_btn"));
        fire_btn->setGeometry(QRect(310, 80, 111, 51));
        fire_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        human_btn = new QPushButton(spec_window_1);
        human_btn->setObjectName(QStringLiteral("human_btn"));
        human_btn->setGeometry(QRect(50, 140, 111, 51));
        human_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        flood_btn = new QPushButton(spec_window_1);
        flood_btn->setObjectName(QStringLiteral("flood_btn"));
        flood_btn->setGeometry(QRect(180, 140, 111, 51));
        flood_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        gate_btn = new QPushButton(spec_window_1);
        gate_btn->setObjectName(QStringLiteral("gate_btn"));
        gate_btn->setGeometry(QRect(310, 140, 111, 51));
        gate_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_down_btn_1 = new QPushButton(spec_window_1);
        s_down_btn_1->setObjectName(QStringLiteral("s_down_btn_1"));
        s_down_btn_1->setGeometry(QRect(455, 170, 26, 30));
        s_down_btn_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_before_btn_1 = new QPushButton(spec_window_1);
        s_before_btn_1->setObjectName(QStringLiteral("s_before_btn_1"));
        s_before_btn_1->setGeometry(QRect(55, 205, 45, 30));
        s_before_btn_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_up_btn_1 = new QPushButton(spec_window_1);
        s_up_btn_1->setObjectName(QStringLiteral("s_up_btn_1"));
        s_up_btn_1->setGeometry(QRect(455, 50, 26, 30));
        s_up_btn_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(spec_window_1);
        spec_window_2 = new QWidget();
        spec_window_2->setObjectName(QStringLiteral("spec_window_2"));
        ground_btn = new QPushButton(spec_window_2);
        ground_btn->setObjectName(QStringLiteral("ground_btn"));
        ground_btn->setGeometry(QRect(50, 20, 111, 51));
        ground_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        gene_btn = new QPushButton(spec_window_2);
        gene_btn->setObjectName(QStringLiteral("gene_btn"));
        gene_btn->setGeometry(QRect(180, 20, 111, 51));
        gene_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        exhaust_btn = new QPushButton(spec_window_2);
        exhaust_btn->setObjectName(QStringLiteral("exhaust_btn"));
        exhaust_btn->setGeometry(QRect(310, 20, 111, 51));
        exhaust_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        bmu_btn = new QPushButton(spec_window_2);
        bmu_btn->setObjectName(QStringLiteral("bmu_btn"));
        bmu_btn->setGeometry(QRect(50, 80, 111, 51));
        bmu_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_before_btn_2 = new QPushButton(spec_window_2);
        s_before_btn_2->setObjectName(QStringLiteral("s_before_btn_2"));
        s_before_btn_2->setGeometry(QRect(55, 205, 45, 30));
        s_before_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_down_btn_2 = new QPushButton(spec_window_2);
        s_down_btn_2->setObjectName(QStringLiteral("s_down_btn_2"));
        s_down_btn_2->setGeometry(QRect(455, 170, 26, 30));
        s_down_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_up_btn_2 = new QPushButton(spec_window_2);
        s_up_btn_2->setObjectName(QStringLiteral("s_up_btn_2"));
        s_up_btn_2->setGeometry(QRect(455, 50, 26, 30));
        s_up_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(spec_window_2);
        stackedWidget->raise();
        home_btn->raise();

        retranslateUi(spec_window);

        QMetaObject::connectSlotsByName(spec_window);
    } // setupUi

    void retranslateUi(QWidget *spec_window)
    {
        spec_window->setWindowTitle(QApplication::translate("spec_window", "Form", Q_NULLPTR));
        home_btn->setText(QApplication::translate("spec_window", "\355\231\210", Q_NULLPTR));
        rectifier_btn->setText(QApplication::translate("spec_window", "\354\240\225\353\245\230\352\270\260\353\245\230", Q_NULLPTR));
        power_flow_btn->setText(QApplication::translate("spec_window", "\354\240\204\353\240\245\352\264\200\353\245\230", Q_NULLPTR));
        air_condition_btn->setText(QApplication::translate("spec_window", "\353\203\211\353\260\251\352\270\260\353\245\230", Q_NULLPTR));
        temp_btn->setText(QApplication::translate("spec_window", "\354\230\250\354\212\265\353\217\204\353\245\230", Q_NULLPTR));
        haron_btn->setText(QApplication::translate("spec_window", "\355\225\230\353\241\240\353\245\230", Q_NULLPTR));
        fire_btn->setText(QApplication::translate("spec_window", "\355\231\224\354\236\254", Q_NULLPTR));
        human_btn->setText(QApplication::translate("spec_window", "\354\235\270\354\262\264\352\260\220\354\247\200", Q_NULLPTR));
        flood_btn->setText(QApplication::translate("spec_window", "\354\271\250\354\210\230\354\204\274\354\204\234\353\245\230", Q_NULLPTR));
        gate_btn->setText(QApplication::translate("spec_window", "\354\266\234\354\236\205\353\254\270", Q_NULLPTR));
        s_down_btn_1->setText(QApplication::translate("spec_window", "v", Q_NULLPTR));
        s_before_btn_1->setText(QApplication::translate("spec_window", "\354\235\264\354\240\204", Q_NULLPTR));
        s_up_btn_1->setText(QApplication::translate("spec_window", "^", Q_NULLPTR));
        ground_btn->setText(QApplication::translate("spec_window", "\354\240\221\354\247\200", Q_NULLPTR));
        gene_btn->setText(QApplication::translate("spec_window", "\353\260\234\353\217\231\353\260\234\354\240\204\352\270\260", Q_NULLPTR));
        exhaust_btn->setText(QApplication::translate("spec_window", "\353\260\260\355\222\215\352\270\260", Q_NULLPTR));
        bmu_btn->setText(QApplication::translate("spec_window", "BMU", Q_NULLPTR));
        s_before_btn_2->setText(QApplication::translate("spec_window", "\354\235\264\354\240\204", Q_NULLPTR));
        s_down_btn_2->setText(QApplication::translate("spec_window", "v", Q_NULLPTR));
        s_up_btn_2->setText(QApplication::translate("spec_window", "^", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class spec_window: public Ui_spec_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEC_WINDOW_H
