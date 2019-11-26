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
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *slot_btn_1;
    QPushButton *slot_btn_2;
    QPushButton *slot_btn_3;
    QPushButton *slot_btn_4;
    QPushButton *slot_btn_5;
    QPushButton *down_btn;
    QPushButton *up_btn;
    QPushButton *before_btn;
    QPushButton *slot_btn_6;
    QPushButton *slot_btn_7;
    QPushButton *slot_btn_8;
    QPushButton *slot_btn_9;
    QPushButton *slot_btn_10;
    QPushButton *slot_btn_11;
    QLabel *label;
    QPushButton *home_btn;

    void setupUi(QWidget *info_window)
    {
        if (info_window->objectName().isEmpty())
            info_window->setObjectName(QStringLiteral("info_window"));
        info_window->resize(480, 240);
        stackedWidget = new QStackedWidget(info_window);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 480, 240));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        slot_btn_1 = new QPushButton(page);
        slot_btn_1->setObjectName(QStringLiteral("slot_btn_1"));
        slot_btn_1->setGeometry(QRect(30, 60, 71, 41));
        slot_btn_1->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_1->setCheckable(false);
        slot_btn_2 = new QPushButton(page);
        slot_btn_2->setObjectName(QStringLiteral("slot_btn_2"));
        slot_btn_2->setGeometry(QRect(110, 60, 71, 41));
        slot_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_3 = new QPushButton(page);
        slot_btn_3->setObjectName(QStringLiteral("slot_btn_3"));
        slot_btn_3->setGeometry(QRect(190, 60, 71, 41));
        slot_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_4 = new QPushButton(page);
        slot_btn_4->setObjectName(QStringLiteral("slot_btn_4"));
        slot_btn_4->setGeometry(QRect(270, 60, 71, 41));
        slot_btn_4->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_5 = new QPushButton(page);
        slot_btn_5->setObjectName(QStringLiteral("slot_btn_5"));
        slot_btn_5->setGeometry(QRect(350, 60, 71, 41));
        slot_btn_5->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        down_btn = new QPushButton(page);
        down_btn->setObjectName(QStringLiteral("down_btn"));
        down_btn->setGeometry(QRect(455, 170, 26, 30));
        down_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        up_btn = new QPushButton(page);
        up_btn->setObjectName(QStringLiteral("up_btn"));
        up_btn->setGeometry(QRect(455, 50, 26, 30));
        up_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        before_btn = new QPushButton(page);
        before_btn->setObjectName(QStringLiteral("before_btn"));
        before_btn->setGeometry(QRect(55, 205, 45, 30));
        before_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        slot_btn_6 = new QPushButton(page);
        slot_btn_6->setObjectName(QStringLiteral("slot_btn_6"));
        slot_btn_6->setGeometry(QRect(30, 110, 71, 41));
        slot_btn_6->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_7 = new QPushButton(page);
        slot_btn_7->setObjectName(QStringLiteral("slot_btn_7"));
        slot_btn_7->setGeometry(QRect(110, 110, 71, 41));
        slot_btn_7->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_8 = new QPushButton(page);
        slot_btn_8->setObjectName(QStringLiteral("slot_btn_8"));
        slot_btn_8->setGeometry(QRect(190, 110, 71, 41));
        slot_btn_8->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_9 = new QPushButton(page);
        slot_btn_9->setObjectName(QStringLiteral("slot_btn_9"));
        slot_btn_9->setGeometry(QRect(270, 110, 71, 41));
        slot_btn_9->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_10 = new QPushButton(page);
        slot_btn_10->setObjectName(QStringLiteral("slot_btn_10"));
        slot_btn_10->setGeometry(QRect(350, 110, 71, 41));
        slot_btn_10->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        slot_btn_11 = new QPushButton(page);
        slot_btn_11->setObjectName(QStringLiteral("slot_btn_11"));
        slot_btn_11->setGeometry(QRect(350, 160, 71, 41));
        slot_btn_11->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 71, 41));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        home_btn = new QPushButton(info_window);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setGeometry(QRect(5, 205, 45, 30));
        home_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));

        retranslateUi(info_window);

        QMetaObject::connectSlotsByName(info_window);
    } // setupUi

    void retranslateUi(QWidget *info_window)
    {
        info_window->setWindowTitle(QApplication::translate("info_window", "Form", Q_NULLPTR));
        slot_btn_1->setText(QApplication::translate("info_window", "SLOT 1", Q_NULLPTR));
        slot_btn_2->setText(QApplication::translate("info_window", "SLOT 2", Q_NULLPTR));
        slot_btn_3->setText(QApplication::translate("info_window", "SLOT 3", Q_NULLPTR));
        slot_btn_4->setText(QApplication::translate("info_window", "SLOT 4", Q_NULLPTR));
        slot_btn_5->setText(QApplication::translate("info_window", "SLOT 5", Q_NULLPTR));
        down_btn->setText(QApplication::translate("info_window", "v", Q_NULLPTR));
        up_btn->setText(QApplication::translate("info_window", "^", Q_NULLPTR));
        before_btn->setText(QApplication::translate("info_window", "\354\235\264\354\240\204", Q_NULLPTR));
        slot_btn_6->setText(QApplication::translate("info_window", "SLOT 6", Q_NULLPTR));
        slot_btn_7->setText(QApplication::translate("info_window", "SLOT 7", Q_NULLPTR));
        slot_btn_8->setText(QApplication::translate("info_window", "SLOT 8", Q_NULLPTR));
        slot_btn_9->setText(QApplication::translate("info_window", "SLOT 9", Q_NULLPTR));
        slot_btn_10->setText(QApplication::translate("info_window", "SLOT 10", Q_NULLPTR));
        slot_btn_11->setText(QApplication::translate("info_window", "SLOT 11", Q_NULLPTR));
        label->setText(QApplication::translate("info_window", "Main", Q_NULLPTR));
        home_btn->setText(QApplication::translate("info_window", "\355\231\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info_window: public Ui_info_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_WINDOW_H
