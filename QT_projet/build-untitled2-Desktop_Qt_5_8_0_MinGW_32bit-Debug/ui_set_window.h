/********************************************************************************
** Form generated from reading UI file 'set_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_WINDOW_H
#define UI_SET_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_window
{
public:
    QStackedWidget *stackedWidget;
    QWidget *set_main_page;
    QPushButton *before_btn;
    QPushButton *ip_set_btn;
    QPushButton *down_btn;
    QPushButton *up_btn;
    QPushButton *time_set_btn;
    QLabel *label;
    QWidget *ip_set_page;
    QPushButton *up_btn_2;
    QPushButton *before_btn_2;
    QPushButton *down_btn_2;
    QLabel *ip_set_label_1;
    QLabel *ip_set_label_2;
    QLabel *ip_set_label_3;
    QLabel *label_2;
    QLabel *IP_set_label;
    QLabel *Subnet_set_label;
    QLabel *GateWay_set_label;
    QWidget *time_set_page;
    QPushButton *up_btn_3;
    QPushButton *before_btn_3;
    QPushButton *down_btn_3;
    QPushButton *pushButton_4;
    QLabel *s_year_label;
    QLabel *s_year_label_2;
    QLabel *s_year_label_3;
    QLabel *s_year_label_4;
    QLabel *s_year_label_5;
    QLabel *s_year_label_6;
    QLabel *label_3;
    QPushButton *home_btn;

    void setupUi(QWidget *set_window)
    {
        if (set_window->objectName().isEmpty())
            set_window->setObjectName(QStringLiteral("set_window"));
        set_window->resize(480, 240);
        stackedWidget = new QStackedWidget(set_window);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 480, 240));
        set_main_page = new QWidget();
        set_main_page->setObjectName(QStringLiteral("set_main_page"));
        before_btn = new QPushButton(set_main_page);
        before_btn->setObjectName(QStringLiteral("before_btn"));
        before_btn->setGeometry(QRect(55, 205, 45, 30));
        before_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        ip_set_btn = new QPushButton(set_main_page);
        ip_set_btn->setObjectName(QStringLiteral("ip_set_btn"));
        ip_set_btn->setGeometry(QRect(40, 50, 110, 50));
        ip_set_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        down_btn = new QPushButton(set_main_page);
        down_btn->setObjectName(QStringLiteral("down_btn"));
        down_btn->setGeometry(QRect(455, 170, 25, 30));
        down_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        up_btn = new QPushButton(set_main_page);
        up_btn->setObjectName(QStringLiteral("up_btn"));
        up_btn->setGeometry(QRect(455, 50, 25, 30));
        up_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        time_set_btn = new QPushButton(set_main_page);
        time_set_btn->setObjectName(QStringLiteral("time_set_btn"));
        time_set_btn->setGeometry(QRect(40, 120, 110, 50));
        time_set_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        label = new QLabel(set_main_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 210, 56, 12));
        stackedWidget->addWidget(set_main_page);
        ip_set_page = new QWidget();
        ip_set_page->setObjectName(QStringLiteral("ip_set_page"));
        up_btn_2 = new QPushButton(ip_set_page);
        up_btn_2->setObjectName(QStringLiteral("up_btn_2"));
        up_btn_2->setGeometry(QRect(455, 50, 25, 30));
        up_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        before_btn_2 = new QPushButton(ip_set_page);
        before_btn_2->setObjectName(QStringLiteral("before_btn_2"));
        before_btn_2->setGeometry(QRect(55, 205, 45, 30));
        before_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        down_btn_2 = new QPushButton(ip_set_page);
        down_btn_2->setObjectName(QStringLiteral("down_btn_2"));
        down_btn_2->setGeometry(QRect(455, 170, 25, 30));
        down_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        ip_set_label_1 = new QLabel(ip_set_page);
        ip_set_label_1->setObjectName(QStringLiteral("ip_set_label_1"));
        ip_set_label_1->setGeometry(QRect(40, 10, 100, 50));
        ip_set_label_1->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        ip_set_label_1->setAlignment(Qt::AlignCenter);
        ip_set_label_2 = new QLabel(ip_set_page);
        ip_set_label_2->setObjectName(QStringLiteral("ip_set_label_2"));
        ip_set_label_2->setGeometry(QRect(40, 70, 100, 50));
        ip_set_label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        ip_set_label_2->setAlignment(Qt::AlignCenter);
        ip_set_label_3 = new QLabel(ip_set_page);
        ip_set_label_3->setObjectName(QStringLiteral("ip_set_label_3"));
        ip_set_label_3->setGeometry(QRect(40, 130, 100, 50));
        ip_set_label_3->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        ip_set_label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ip_set_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 210, 56, 12));
        IP_set_label = new QLabel(ip_set_page);
        IP_set_label->setObjectName(QStringLiteral("IP_set_label"));
        IP_set_label->setGeometry(QRect(150, 10, 221, 50));
        IP_set_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        IP_set_label->setAlignment(Qt::AlignCenter);
        Subnet_set_label = new QLabel(ip_set_page);
        Subnet_set_label->setObjectName(QStringLiteral("Subnet_set_label"));
        Subnet_set_label->setGeometry(QRect(150, 70, 221, 50));
        Subnet_set_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        Subnet_set_label->setAlignment(Qt::AlignCenter);
        GateWay_set_label = new QLabel(ip_set_page);
        GateWay_set_label->setObjectName(QStringLiteral("GateWay_set_label"));
        GateWay_set_label->setGeometry(QRect(150, 130, 221, 50));
        GateWay_set_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        GateWay_set_label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(ip_set_page);
        time_set_page = new QWidget();
        time_set_page->setObjectName(QStringLiteral("time_set_page"));
        up_btn_3 = new QPushButton(time_set_page);
        up_btn_3->setObjectName(QStringLiteral("up_btn_3"));
        up_btn_3->setGeometry(QRect(455, 50, 25, 30));
        up_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        before_btn_3 = new QPushButton(time_set_page);
        before_btn_3->setObjectName(QStringLiteral("before_btn_3"));
        before_btn_3->setGeometry(QRect(55, 205, 45, 30));
        before_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        down_btn_3 = new QPushButton(time_set_page);
        down_btn_3->setObjectName(QStringLiteral("down_btn_3"));
        down_btn_3->setGeometry(QRect(455, 170, 25, 30));
        down_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_4 = new QPushButton(time_set_page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 205, 45, 30));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        s_year_label = new QLabel(time_set_page);
        s_year_label->setObjectName(QStringLiteral("s_year_label"));
        s_year_label->setGeometry(QRect(70, 70, 50, 35));
        s_year_label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label->setAlignment(Qt::AlignCenter);
        s_year_label_2 = new QLabel(time_set_page);
        s_year_label_2->setObjectName(QStringLiteral("s_year_label_2"));
        s_year_label_2->setGeometry(QRect(130, 70, 50, 35));
        s_year_label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label_2->setAlignment(Qt::AlignCenter);
        s_year_label_3 = new QLabel(time_set_page);
        s_year_label_3->setObjectName(QStringLiteral("s_year_label_3"));
        s_year_label_3->setGeometry(QRect(190, 70, 50, 35));
        s_year_label_3->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label_3->setAlignment(Qt::AlignCenter);
        s_year_label_4 = new QLabel(time_set_page);
        s_year_label_4->setObjectName(QStringLiteral("s_year_label_4"));
        s_year_label_4->setGeometry(QRect(250, 70, 50, 35));
        s_year_label_4->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label_4->setAlignment(Qt::AlignCenter);
        s_year_label_5 = new QLabel(time_set_page);
        s_year_label_5->setObjectName(QStringLiteral("s_year_label_5"));
        s_year_label_5->setGeometry(QRect(310, 70, 50, 35));
        s_year_label_5->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label_5->setAlignment(Qt::AlignCenter);
        s_year_label_6 = new QLabel(time_set_page);
        s_year_label_6->setObjectName(QStringLiteral("s_year_label_6"));
        s_year_label_6->setGeometry(QRect(370, 70, 50, 35));
        s_year_label_6->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        s_year_label_6->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(time_set_page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 220, 56, 12));
        stackedWidget->addWidget(time_set_page);
        home_btn = new QPushButton(set_window);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        retranslateUi(set_window);

        QMetaObject::connectSlotsByName(set_window);
    } // setupUi

    void retranslateUi(QWidget *set_window)
    {
        set_window->setWindowTitle(QApplication::translate("set_window", "Form", Q_NULLPTR));
        before_btn->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        ip_set_btn->setText(QApplication::translate("set_window", "IP", Q_NULLPTR));
        down_btn->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        up_btn->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        time_set_btn->setText(QApplication::translate("set_window", "\354\213\234\352\260\204", Q_NULLPTR));
        label->setText(QApplication::translate("set_window", "\354\204\270\355\214\205 \353\251\224\354\235\270", Q_NULLPTR));
        up_btn_2->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        before_btn_2->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        down_btn_2->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        ip_set_label_1->setText(QApplication::translate("set_window", "IP", Q_NULLPTR));
        ip_set_label_2->setText(QApplication::translate("set_window", "Subnet", Q_NULLPTR));
        ip_set_label_3->setText(QApplication::translate("set_window", "GateWay", Q_NULLPTR));
        label_2->setText(QApplication::translate("set_window", "ip\354\204\270\355\214\205", Q_NULLPTR));
        IP_set_label->setText(QApplication::translate("set_window", "IP \353\235\274\353\262\250", Q_NULLPTR));
        Subnet_set_label->setText(QApplication::translate("set_window", "Subnet \353\235\274\353\262\250", Q_NULLPTR));
        GateWay_set_label->setText(QApplication::translate("set_window", "GateWay \353\235\274\353\262\250", Q_NULLPTR));
        up_btn_3->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        before_btn_3->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        down_btn_3->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("set_window", "\354\240\201\354\232\251", Q_NULLPTR));
        s_year_label->setText(QApplication::translate("set_window", "\353\205\204", Q_NULLPTR));
        s_year_label_2->setText(QApplication::translate("set_window", "\354\233\224", Q_NULLPTR));
        s_year_label_3->setText(QApplication::translate("set_window", "\354\235\274", Q_NULLPTR));
        s_year_label_4->setText(QApplication::translate("set_window", "\354\213\234", Q_NULLPTR));
        s_year_label_5->setText(QApplication::translate("set_window", "\353\266\204", Q_NULLPTR));
        s_year_label_6->setText(QApplication::translate("set_window", "\354\264\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("set_window", "\354\213\234\352\260\204\354\204\270\355\214\205", Q_NULLPTR));
        home_btn->setText(QApplication::translate("set_window", "\355\231\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class set_window: public Ui_set_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WINDOW_H
