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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *s_down_btn_1;
    QPushButton *s_before_btn_1;
    QPushButton *s_up_btn_1;
    QWidget *spec_window_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
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
        pushButton = new QPushButton(spec_window_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 20, 111, 51));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_2 = new QPushButton(spec_window_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 20, 111, 51));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_3 = new QPushButton(spec_window_1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 20, 111, 51));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_4 = new QPushButton(spec_window_1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 80, 111, 51));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_5 = new QPushButton(spec_window_1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 80, 111, 51));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_6 = new QPushButton(spec_window_1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(310, 80, 111, 51));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_7 = new QPushButton(spec_window_1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 140, 111, 51));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_8 = new QPushButton(spec_window_1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 140, 111, 51));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_9 = new QPushButton(spec_window_1);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(310, 140, 111, 51));
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
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
        pushButton_10 = new QPushButton(spec_window_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(50, 20, 111, 51));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_11 = new QPushButton(spec_window_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(180, 20, 111, 51));
        pushButton_11->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_12 = new QPushButton(spec_window_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(310, 20, 111, 51));
        pushButton_12->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        pushButton_13 = new QPushButton(spec_window_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(50, 80, 111, 51));
        pushButton_13->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
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
        pushButton->setText(QApplication::translate("spec_window", "\354\240\225\353\245\230\352\270\260\353\245\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("spec_window", "\354\240\204\353\240\245\352\264\200\353\245\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("spec_window", "\353\203\211\353\260\251\352\270\260\353\245\230", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("spec_window", "\354\230\250\354\212\265\353\217\204\353\245\230", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("spec_window", "\355\225\230\353\241\240\353\245\230", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("spec_window", "\355\231\224\354\236\254", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("spec_window", "\354\235\270\354\262\264\352\260\220\354\247\200", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("spec_window", "\354\271\250\354\210\230\354\204\274\354\204\234\353\245\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("spec_window", "\354\266\234\354\236\205\353\254\270", Q_NULLPTR));
        s_down_btn_1->setText(QApplication::translate("spec_window", "v", Q_NULLPTR));
        s_before_btn_1->setText(QApplication::translate("spec_window", "\354\235\264\354\240\204", Q_NULLPTR));
        s_up_btn_1->setText(QApplication::translate("spec_window", "^", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("spec_window", "\354\240\221\354\247\200", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("spec_window", "\353\260\234\353\217\231\353\260\234\354\240\204\352\270\260", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("spec_window", "\353\260\260\355\222\215\352\270\260", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("spec_window", "BMU", Q_NULLPTR));
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
