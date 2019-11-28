/********************************************************************************
** Form generated from reading UI file 'info_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_WINDOW_H
#define UI_INFO_WINDOW_H

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

class Ui_info_window
{
public:
    QPushButton *home_btn;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QPushButton *slot_btn_3;
    QPushButton *slot_btn_8;
    QPushButton *slot_btn_5;
    QPushButton *main_up_btn;
    QPushButton *main_down_btn;
    QPushButton *slot_btn_10;
    QPushButton *slot_btn_4;
    QLabel *info_window_main_label;
    QPushButton *slot_btn_1;
    QPushButton *slot_btn_2;
    QPushButton *slot_btn_11;
    QPushButton *slot_btn_7;
    QPushButton *slot_btn_9;
    QPushButton *main_before_btn;
    QPushButton *slot_btn_6;
    QWidget *slot_page;
    QPushButton *slot_before_btn;
    QLabel *info_window_slot_label;
    QPushButton *port_btn_1;
    QPushButton *port_btn_2;
    QPushButton *port_btn_3;
    QPushButton *port_btn_4;
    QPushButton *port_btn_5;
    QPushButton *port_btn_6;
    QPushButton *port_btn_12;
    QPushButton *port_btn_9;
    QPushButton *port_btn_8;
    QPushButton *port_btn_11;
    QPushButton *port_btn_7;
    QPushButton *port_btn_10;
    QPushButton *slot_up_btn_2;
    QPushButton *slot_down_btn;
    QLabel *slot_board_set_label;
    QWidget *port_page;

    void setupUi(QWidget *info_window)
    {
        if (info_window->objectName().isEmpty())
            info_window->setObjectName(QStringLiteral("info_window"));
        info_window->resize(480, 240);
        home_btn = new QPushButton(info_window);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        stackedWidget = new QStackedWidget(info_window);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 480, 240));
        main_page = new QWidget();
        main_page->setObjectName(QStringLiteral("main_page"));
        slot_btn_3 = new QPushButton(main_page);
        slot_btn_3->setObjectName(QStringLiteral("slot_btn_3"));
        slot_btn_3->setGeometry(QRect(190, 70, 71, 41));
        slot_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_8 = new QPushButton(main_page);
        slot_btn_8->setObjectName(QStringLiteral("slot_btn_8"));
        slot_btn_8->setGeometry(QRect(190, 120, 71, 41));
        slot_btn_8->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_5 = new QPushButton(main_page);
        slot_btn_5->setObjectName(QStringLiteral("slot_btn_5"));
        slot_btn_5->setGeometry(QRect(350, 70, 71, 41));
        slot_btn_5->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        main_up_btn = new QPushButton(main_page);
        main_up_btn->setObjectName(QStringLiteral("main_up_btn"));
        main_up_btn->setGeometry(QRect(455, 50, 26, 30));
        main_up_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        main_down_btn = new QPushButton(main_page);
        main_down_btn->setObjectName(QStringLiteral("main_down_btn"));
        main_down_btn->setGeometry(QRect(455, 170, 26, 30));
        main_down_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        slot_btn_10 = new QPushButton(main_page);
        slot_btn_10->setObjectName(QStringLiteral("slot_btn_10"));
        slot_btn_10->setGeometry(QRect(350, 120, 71, 41));
        slot_btn_10->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_4 = new QPushButton(main_page);
        slot_btn_4->setObjectName(QStringLiteral("slot_btn_4"));
        slot_btn_4->setGeometry(QRect(270, 70, 71, 41));
        slot_btn_4->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        info_window_main_label = new QLabel(main_page);
        info_window_main_label->setObjectName(QStringLiteral("info_window_main_label"));
        info_window_main_label->setGeometry(QRect(190, 20, 71, 41));
        info_window_main_label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        info_window_main_label->setAlignment(Qt::AlignCenter);
        slot_btn_1 = new QPushButton(main_page);
        slot_btn_1->setObjectName(QStringLiteral("slot_btn_1"));
        slot_btn_1->setGeometry(QRect(30, 70, 71, 41));
        slot_btn_1->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_1->setCheckable(false);
        slot_btn_2 = new QPushButton(main_page);
        slot_btn_2->setObjectName(QStringLiteral("slot_btn_2"));
        slot_btn_2->setGeometry(QRect(110, 70, 71, 41));
        slot_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_11 = new QPushButton(main_page);
        slot_btn_11->setObjectName(QStringLiteral("slot_btn_11"));
        slot_btn_11->setGeometry(QRect(350, 170, 71, 41));
        slot_btn_11->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_7 = new QPushButton(main_page);
        slot_btn_7->setObjectName(QStringLiteral("slot_btn_7"));
        slot_btn_7->setGeometry(QRect(110, 120, 71, 41));
        slot_btn_7->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_9 = new QPushButton(main_page);
        slot_btn_9->setObjectName(QStringLiteral("slot_btn_9"));
        slot_btn_9->setGeometry(QRect(270, 120, 71, 41));
        slot_btn_9->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        main_before_btn = new QPushButton(main_page);
        main_before_btn->setObjectName(QStringLiteral("main_before_btn"));
        main_before_btn->setGeometry(QRect(55, 205, 45, 30));
        main_before_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        slot_btn_6 = new QPushButton(main_page);
        slot_btn_6->setObjectName(QStringLiteral("slot_btn_6"));
        slot_btn_6->setGeometry(QRect(30, 120, 71, 41));
        slot_btn_6->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        stackedWidget->addWidget(main_page);
        slot_page = new QWidget();
        slot_page->setObjectName(QStringLiteral("slot_page"));
        slot_before_btn = new QPushButton(slot_page);
        slot_before_btn->setObjectName(QStringLiteral("slot_before_btn"));
        slot_before_btn->setGeometry(QRect(55, 205, 45, 30));
        slot_before_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        info_window_slot_label = new QLabel(slot_page);
        info_window_slot_label->setObjectName(QStringLiteral("info_window_slot_label"));
        info_window_slot_label->setGeometry(QRect(20, 20, 91, 41));
        info_window_slot_label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        info_window_slot_label->setAlignment(Qt::AlignCenter);
        port_btn_1 = new QPushButton(slot_page);
        port_btn_1->setObjectName(QStringLiteral("port_btn_1"));
        port_btn_1->setGeometry(QRect(20, 80, 66, 41));
        port_btn_2 = new QPushButton(slot_page);
        port_btn_2->setObjectName(QStringLiteral("port_btn_2"));
        port_btn_2->setGeometry(QRect(90, 80, 66, 41));
        port_btn_3 = new QPushButton(slot_page);
        port_btn_3->setObjectName(QStringLiteral("port_btn_3"));
        port_btn_3->setGeometry(QRect(160, 80, 66, 41));
        port_btn_4 = new QPushButton(slot_page);
        port_btn_4->setObjectName(QStringLiteral("port_btn_4"));
        port_btn_4->setGeometry(QRect(230, 80, 66, 41));
        port_btn_5 = new QPushButton(slot_page);
        port_btn_5->setObjectName(QStringLiteral("port_btn_5"));
        port_btn_5->setGeometry(QRect(300, 80, 66, 41));
        port_btn_6 = new QPushButton(slot_page);
        port_btn_6->setObjectName(QStringLiteral("port_btn_6"));
        port_btn_6->setGeometry(QRect(370, 80, 66, 41));
        port_btn_12 = new QPushButton(slot_page);
        port_btn_12->setObjectName(QStringLiteral("port_btn_12"));
        port_btn_12->setGeometry(QRect(370, 140, 66, 41));
        port_btn_9 = new QPushButton(slot_page);
        port_btn_9->setObjectName(QStringLiteral("port_btn_9"));
        port_btn_9->setGeometry(QRect(160, 140, 66, 41));
        port_btn_8 = new QPushButton(slot_page);
        port_btn_8->setObjectName(QStringLiteral("port_btn_8"));
        port_btn_8->setGeometry(QRect(90, 140, 66, 41));
        port_btn_11 = new QPushButton(slot_page);
        port_btn_11->setObjectName(QStringLiteral("port_btn_11"));
        port_btn_11->setGeometry(QRect(300, 140, 66, 41));
        port_btn_7 = new QPushButton(slot_page);
        port_btn_7->setObjectName(QStringLiteral("port_btn_7"));
        port_btn_7->setGeometry(QRect(20, 140, 66, 41));
        port_btn_10 = new QPushButton(slot_page);
        port_btn_10->setObjectName(QStringLiteral("port_btn_10"));
        port_btn_10->setGeometry(QRect(230, 140, 66, 41));
        slot_up_btn_2 = new QPushButton(slot_page);
        slot_up_btn_2->setObjectName(QStringLiteral("slot_up_btn_2"));
        slot_up_btn_2->setGeometry(QRect(455, 50, 26, 30));
        slot_up_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        slot_down_btn = new QPushButton(slot_page);
        slot_down_btn->setObjectName(QStringLiteral("slot_down_btn"));
        slot_down_btn->setGeometry(QRect(455, 170, 26, 30));
        slot_down_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        slot_board_set_label = new QLabel(slot_page);
        slot_board_set_label->setObjectName(QStringLiteral("slot_board_set_label"));
        slot_board_set_label->setGeometry(QRect(120, 20, 131, 41));
        slot_board_set_label->setStyleSheet(QLatin1String("\n"
"background-color: rgb(170, 255, 255);"));
        slot_board_set_label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(slot_page);
        port_page = new QWidget();
        port_page->setObjectName(QStringLiteral("port_page"));
        stackedWidget->addWidget(port_page);
        stackedWidget->raise();
        home_btn->raise();

        retranslateUi(info_window);

        QMetaObject::connectSlotsByName(info_window);
    } // setupUi

    void retranslateUi(QWidget *info_window)
    {
        info_window->setWindowTitle(QApplication::translate("info_window", "Form", Q_NULLPTR));
        home_btn->setText(QApplication::translate("info_window", "\355\231\210", Q_NULLPTR));
        slot_btn_3->setText(QApplication::translate("info_window", "SLOT 3", Q_NULLPTR));
        slot_btn_8->setText(QApplication::translate("info_window", "SLOT 8", Q_NULLPTR));
        slot_btn_5->setText(QApplication::translate("info_window", "SLOT 5", Q_NULLPTR));
        main_up_btn->setText(QApplication::translate("info_window", "^", Q_NULLPTR));
        main_down_btn->setText(QApplication::translate("info_window", "v", Q_NULLPTR));
        slot_btn_10->setText(QApplication::translate("info_window", "SLOT 10", Q_NULLPTR));
        slot_btn_4->setText(QApplication::translate("info_window", "SLOT 4", Q_NULLPTR));
        info_window_main_label->setText(QApplication::translate("info_window", "Main", Q_NULLPTR));
        slot_btn_1->setText(QApplication::translate("info_window", "SLOT 1", Q_NULLPTR));
        slot_btn_2->setText(QApplication::translate("info_window", "SLOT 2", Q_NULLPTR));
        slot_btn_11->setText(QApplication::translate("info_window", "SLOT 11", Q_NULLPTR));
        slot_btn_7->setText(QApplication::translate("info_window", "SLOT 7", Q_NULLPTR));
        slot_btn_9->setText(QApplication::translate("info_window", "SLOT 9", Q_NULLPTR));
        main_before_btn->setText(QApplication::translate("info_window", "\354\235\264\354\240\204", Q_NULLPTR));
        slot_btn_6->setText(QApplication::translate("info_window", "SLOT 6", Q_NULLPTR));
        slot_before_btn->setText(QApplication::translate("info_window", "\354\235\264\354\240\204", Q_NULLPTR));
        info_window_slot_label->setText(QApplication::translate("info_window", "\353\263\264\353\223\234 \354\242\205\353\245\230", Q_NULLPTR));
        port_btn_1->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 1", Q_NULLPTR));
        port_btn_2->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 2", Q_NULLPTR));
        port_btn_3->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 3", Q_NULLPTR));
        port_btn_4->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 4", Q_NULLPTR));
        port_btn_5->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 5", Q_NULLPTR));
        port_btn_6->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 6", Q_NULLPTR));
        port_btn_12->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 12", Q_NULLPTR));
        port_btn_9->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 9", Q_NULLPTR));
        port_btn_8->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 8", Q_NULLPTR));
        port_btn_11->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 11", Q_NULLPTR));
        port_btn_7->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 7", Q_NULLPTR));
        port_btn_10->setText(QApplication::translate("info_window", "\355\217\254\355\212\270 10", Q_NULLPTR));
        slot_up_btn_2->setText(QApplication::translate("info_window", "^", Q_NULLPTR));
        slot_down_btn->setText(QApplication::translate("info_window", "v", Q_NULLPTR));
        slot_board_set_label->setText(QApplication::translate("info_window", "\353\263\264\353\223\234 \354\242\205\353\245\230 \353\235\274\353\262\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info_window: public Ui_info_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_WINDOW_H
