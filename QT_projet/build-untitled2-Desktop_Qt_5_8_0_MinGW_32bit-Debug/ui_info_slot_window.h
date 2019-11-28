/********************************************************************************
** Form generated from reading UI file 'info_slot_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_SLOT_WINDOW_H
#define UI_INFO_SLOT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info_slot_window
{
public:
    QPushButton *before_btn;
    QPushButton *home_btn;
    QLabel *label;
    QLabel *label_2;
    QPushButton *port_btn_1;
    QPushButton *port_btn_2;
    QPushButton *port_btn_3;
    QPushButton *port_btn_4;
    QPushButton *port_btn_5;
    QPushButton *port_btn_6;
    QPushButton *port_btn_11;
    QPushButton *port_btn_7;
    QPushButton *port_btn_10;
    QPushButton *port_btn_8;
    QPushButton *port_btn_9;
    QPushButton *port_btn_12;
    QPushButton *up_btn;
    QPushButton *down_btn;

    void setupUi(QWidget *info_slot_window)
    {
        if (info_slot_window->objectName().isEmpty())
            info_slot_window->setObjectName(QStringLiteral("info_slot_window"));
        info_slot_window->resize(480, 240);
        before_btn = new QPushButton(info_slot_window);
        before_btn->setObjectName(QStringLiteral("before_btn"));
        before_btn->setGeometry(QRect(55, 205, 45, 30));
        before_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        home_btn = new QPushButton(info_slot_window);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        label = new QLabel(info_slot_window);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 111, 41));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(info_slot_window);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 20, 161, 41));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        port_btn_1 = new QPushButton(info_slot_window);
        port_btn_1->setObjectName(QStringLiteral("port_btn_1"));
        port_btn_1->setGeometry(QRect(20, 80, 61, 41));
        port_btn_2 = new QPushButton(info_slot_window);
        port_btn_2->setObjectName(QStringLiteral("port_btn_2"));
        port_btn_2->setGeometry(QRect(90, 80, 61, 41));
        port_btn_3 = new QPushButton(info_slot_window);
        port_btn_3->setObjectName(QStringLiteral("port_btn_3"));
        port_btn_3->setGeometry(QRect(160, 80, 61, 41));
        port_btn_4 = new QPushButton(info_slot_window);
        port_btn_4->setObjectName(QStringLiteral("port_btn_4"));
        port_btn_4->setGeometry(QRect(230, 80, 61, 41));
        port_btn_5 = new QPushButton(info_slot_window);
        port_btn_5->setObjectName(QStringLiteral("port_btn_5"));
        port_btn_5->setGeometry(QRect(300, 80, 61, 41));
        port_btn_6 = new QPushButton(info_slot_window);
        port_btn_6->setObjectName(QStringLiteral("port_btn_6"));
        port_btn_6->setGeometry(QRect(370, 80, 61, 41));
        port_btn_11 = new QPushButton(info_slot_window);
        port_btn_11->setObjectName(QStringLiteral("port_btn_11"));
        port_btn_11->setGeometry(QRect(300, 140, 61, 41));
        port_btn_7 = new QPushButton(info_slot_window);
        port_btn_7->setObjectName(QStringLiteral("port_btn_7"));
        port_btn_7->setGeometry(QRect(20, 140, 61, 41));
        port_btn_10 = new QPushButton(info_slot_window);
        port_btn_10->setObjectName(QStringLiteral("port_btn_10"));
        port_btn_10->setGeometry(QRect(230, 140, 61, 41));
        port_btn_8 = new QPushButton(info_slot_window);
        port_btn_8->setObjectName(QStringLiteral("port_btn_8"));
        port_btn_8->setGeometry(QRect(90, 140, 61, 41));
        port_btn_9 = new QPushButton(info_slot_window);
        port_btn_9->setObjectName(QStringLiteral("port_btn_9"));
        port_btn_9->setGeometry(QRect(160, 140, 61, 41));
        port_btn_12 = new QPushButton(info_slot_window);
        port_btn_12->setObjectName(QStringLiteral("port_btn_12"));
        port_btn_12->setGeometry(QRect(370, 140, 61, 41));
        up_btn = new QPushButton(info_slot_window);
        up_btn->setObjectName(QStringLiteral("up_btn"));
        up_btn->setGeometry(QRect(455, 50, 26, 30));
        up_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        down_btn = new QPushButton(info_slot_window);
        down_btn->setObjectName(QStringLiteral("down_btn"));
        down_btn->setGeometry(QRect(455, 170, 26, 30));
        down_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        retranslateUi(info_slot_window);

        QMetaObject::connectSlotsByName(info_slot_window);
    } // setupUi

    void retranslateUi(QWidget *info_slot_window)
    {
        info_slot_window->setWindowTitle(QApplication::translate("info_slot_window", "Form", Q_NULLPTR));
        before_btn->setText(QApplication::translate("info_slot_window", "\354\235\264\354\240\204", Q_NULLPTR));
        home_btn->setText(QApplication::translate("info_slot_window", "\355\231\210", Q_NULLPTR));
        label->setText(QApplication::translate("info_slot_window", "\353\263\264\353\223\234 \354\242\205\353\245\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("info_slot_window", "\353\263\264\353\223\234\354\242\205\353\245\230", Q_NULLPTR));
        port_btn_1->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 1", Q_NULLPTR));
        port_btn_2->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 2", Q_NULLPTR));
        port_btn_3->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 3", Q_NULLPTR));
        port_btn_4->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 4", Q_NULLPTR));
        port_btn_5->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 5", Q_NULLPTR));
        port_btn_6->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 6", Q_NULLPTR));
        port_btn_11->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 11", Q_NULLPTR));
        port_btn_7->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 7", Q_NULLPTR));
        port_btn_10->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 10", Q_NULLPTR));
        port_btn_8->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 8", Q_NULLPTR));
        port_btn_9->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 9", Q_NULLPTR));
        port_btn_12->setText(QApplication::translate("info_slot_window", "\355\217\254\355\212\270 12", Q_NULLPTR));
        up_btn->setText(QApplication::translate("info_slot_window", "^", Q_NULLPTR));
        down_btn->setText(QApplication::translate("info_slot_window", "v", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info_slot_window: public Ui_info_slot_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_SLOT_WINDOW_H
