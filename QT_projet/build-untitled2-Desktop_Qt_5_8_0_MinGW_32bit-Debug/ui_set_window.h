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
    QPushButton *home_btn;
    QPushButton *up_btn;
    QPushButton *time_set_btn;
    QWidget *ip_set_page;
    QPushButton *up_btn_2;
    QPushButton *home_btn_2;
    QPushButton *before_btn_2;
    QPushButton *down_btn_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *time_set_page;
    QPushButton *up_btn_3;
    QPushButton *home_btn_3;
    QPushButton *before_btn_3;
    QPushButton *down_btn_3;
    QPushButton *pushButton_4;
    QPushButton *s_year_btn;
    QPushButton *s_month_btn;
    QPushButton *s_day_btn;
    QPushButton *s_hour_btn;
    QPushButton *s_min_btn;
    QPushButton *s_sec_btn;

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
        home_btn = new QPushButton(set_main_page);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        up_btn = new QPushButton(set_main_page);
        up_btn->setObjectName(QStringLiteral("up_btn"));
        up_btn->setGeometry(QRect(455, 50, 25, 30));
        up_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        time_set_btn = new QPushButton(set_main_page);
        time_set_btn->setObjectName(QStringLiteral("time_set_btn"));
        time_set_btn->setGeometry(QRect(40, 120, 110, 50));
        time_set_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(set_main_page);
        ip_set_page = new QWidget();
        ip_set_page->setObjectName(QStringLiteral("ip_set_page"));
        up_btn_2 = new QPushButton(ip_set_page);
        up_btn_2->setObjectName(QStringLiteral("up_btn_2"));
        up_btn_2->setGeometry(QRect(455, 50, 25, 30));
        up_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        home_btn_2 = new QPushButton(ip_set_page);
        home_btn_2->setObjectName(QStringLiteral("home_btn_2"));
        home_btn_2->setGeometry(QRect(5, 205, 45, 30));
        home_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        before_btn_2 = new QPushButton(ip_set_page);
        before_btn_2->setObjectName(QStringLiteral("before_btn_2"));
        before_btn_2->setGeometry(QRect(55, 205, 45, 30));
        before_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        down_btn_2 = new QPushButton(ip_set_page);
        down_btn_2->setObjectName(QStringLiteral("down_btn_2"));
        down_btn_2->setGeometry(QRect(455, 170, 25, 30));
        down_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton = new QPushButton(ip_set_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 10, 100, 50));
        pushButton_2 = new QPushButton(ip_set_page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 70, 100, 50));
        pushButton_3 = new QPushButton(ip_set_page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 130, 100, 50));
        stackedWidget->addWidget(ip_set_page);
        time_set_page = new QWidget();
        time_set_page->setObjectName(QStringLiteral("time_set_page"));
        up_btn_3 = new QPushButton(time_set_page);
        up_btn_3->setObjectName(QStringLiteral("up_btn_3"));
        up_btn_3->setGeometry(QRect(455, 50, 25, 30));
        up_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        home_btn_3 = new QPushButton(time_set_page);
        home_btn_3->setObjectName(QStringLiteral("home_btn_3"));
        home_btn_3->setGeometry(QRect(5, 205, 45, 30));
        home_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
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
        s_year_btn = new QPushButton(time_set_page);
        s_year_btn->setObjectName(QStringLiteral("s_year_btn"));
        s_year_btn->setGeometry(QRect(70, 70, 50, 35));
        s_month_btn = new QPushButton(time_set_page);
        s_month_btn->setObjectName(QStringLiteral("s_month_btn"));
        s_month_btn->setGeometry(QRect(130, 70, 50, 35));
        s_day_btn = new QPushButton(time_set_page);
        s_day_btn->setObjectName(QStringLiteral("s_day_btn"));
        s_day_btn->setGeometry(QRect(190, 70, 50, 35));
        s_hour_btn = new QPushButton(time_set_page);
        s_hour_btn->setObjectName(QStringLiteral("s_hour_btn"));
        s_hour_btn->setGeometry(QRect(250, 70, 50, 35));
        s_min_btn = new QPushButton(time_set_page);
        s_min_btn->setObjectName(QStringLiteral("s_min_btn"));
        s_min_btn->setGeometry(QRect(310, 70, 50, 35));
        s_sec_btn = new QPushButton(time_set_page);
        s_sec_btn->setObjectName(QStringLiteral("s_sec_btn"));
        s_sec_btn->setGeometry(QRect(370, 70, 50, 35));
        stackedWidget->addWidget(time_set_page);

        retranslateUi(set_window);

        QMetaObject::connectSlotsByName(set_window);
    } // setupUi

    void retranslateUi(QWidget *set_window)
    {
        set_window->setWindowTitle(QApplication::translate("set_window", "Form", Q_NULLPTR));
        before_btn->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        ip_set_btn->setText(QApplication::translate("set_window", "IP", Q_NULLPTR));
        down_btn->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        home_btn->setText(QApplication::translate("set_window", "\355\231\210", Q_NULLPTR));
        up_btn->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        time_set_btn->setText(QApplication::translate("set_window", "\354\213\234\352\260\204", Q_NULLPTR));
        up_btn_2->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        home_btn_2->setText(QApplication::translate("set_window", "\355\231\210", Q_NULLPTR));
        before_btn_2->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        down_btn_2->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        pushButton->setText(QApplication::translate("set_window", "IP", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("set_window", "Subnet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("set_window", "GateWay", Q_NULLPTR));
        up_btn_3->setText(QApplication::translate("set_window", "^", Q_NULLPTR));
        home_btn_3->setText(QApplication::translate("set_window", "\355\231\210", Q_NULLPTR));
        before_btn_3->setText(QApplication::translate("set_window", "\354\235\264\354\240\204", Q_NULLPTR));
        down_btn_3->setText(QApplication::translate("set_window", "v", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("set_window", "\354\240\201\354\232\251", Q_NULLPTR));
        s_year_btn->setText(QApplication::translate("set_window", "\353\205\204", Q_NULLPTR));
        s_month_btn->setText(QApplication::translate("set_window", "\354\233\224", Q_NULLPTR));
        s_day_btn->setText(QApplication::translate("set_window", "\354\235\274", Q_NULLPTR));
        s_hour_btn->setText(QApplication::translate("set_window", "\354\213\234", Q_NULLPTR));
        s_min_btn->setText(QApplication::translate("set_window", "\353\266\204", Q_NULLPTR));
        s_sec_btn->setText(QApplication::translate("set_window", "\354\264\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class set_window: public Ui_set_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WINDOW_H
