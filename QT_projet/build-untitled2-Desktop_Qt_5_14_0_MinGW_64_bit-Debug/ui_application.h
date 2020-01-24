/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_application
{
public:
    QLabel *time_label;
    QLabel *title_label;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QPushButton *info_btn;
    QPushButton *spec_btn;
    QLabel *main_label_1;
    QLabel *main_label_2;
    QLabel *main_label_3;
    QLabel *Station_label;
    QLabel *IP_label;
    QLabel *Version_label;

    void setupUi(QWidget *application)
    {
        if (application->objectName().isEmpty())
            application->setObjectName(QString::fromUtf8("application"));
        application->resize(480, 272);
        application->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        time_label = new QLabel(application);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(0, 256, 480, 16));
        time_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        time_label->setAlignment(Qt::AlignCenter);
        title_label = new QLabel(application);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(0, 0, 480, 16));
        title_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        title_label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(application);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 16, 480, 240));
        main_page = new QWidget();
        main_page->setObjectName(QString::fromUtf8("main_page"));
        info_btn = new QPushButton(main_page);
        info_btn->setObjectName(QString::fromUtf8("info_btn"));
        info_btn->setGeometry(QRect(120, 160, 100, 50));
        info_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        spec_btn = new QPushButton(main_page);
        spec_btn->setObjectName(QString::fromUtf8("spec_btn"));
        spec_btn->setGeometry(QRect(260, 160, 100, 50));
        spec_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        main_label_1 = new QLabel(main_page);
        main_label_1->setObjectName(QString::fromUtf8("main_label_1"));
        main_label_1->setGeometry(QRect(100, 30, 101, 31));
        main_label_1->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        main_label_1->setAlignment(Qt::AlignCenter);
        main_label_2 = new QLabel(main_page);
        main_label_2->setObjectName(QString::fromUtf8("main_label_2"));
        main_label_2->setGeometry(QRect(100, 70, 101, 31));
        main_label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        main_label_2->setAlignment(Qt::AlignCenter);
        main_label_3 = new QLabel(main_page);
        main_label_3->setObjectName(QString::fromUtf8("main_label_3"));
        main_label_3->setGeometry(QRect(100, 110, 101, 31));
        main_label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        main_label_3->setAlignment(Qt::AlignCenter);
        Station_label = new QLabel(main_page);
        Station_label->setObjectName(QString::fromUtf8("Station_label"));
        Station_label->setGeometry(QRect(210, 29, 171, 31));
        Station_label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        Station_label->setAlignment(Qt::AlignCenter);
        IP_label = new QLabel(main_page);
        IP_label->setObjectName(QString::fromUtf8("IP_label"));
        IP_label->setGeometry(QRect(210, 70, 171, 31));
        IP_label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        IP_label->setAlignment(Qt::AlignCenter);
        Version_label = new QLabel(main_page);
        Version_label->setObjectName(QString::fromUtf8("Version_label"));
        Version_label->setGeometry(QRect(210, 110, 171, 31));
        Version_label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        Version_label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(main_page);

        retranslateUi(application);

        QMetaObject::connectSlotsByName(application);
    } // setupUi

    void retranslateUi(QWidget *application)
    {
        application->setWindowTitle(QCoreApplication::translate("application", "application", nullptr));
        time_label->setText(QCoreApplication::translate("application", "\354\213\234\352\260\204", nullptr));
        title_label->setText(QCoreApplication::translate("application", "\355\203\200\354\235\264\355\213\200", nullptr));
        info_btn->setText(QCoreApplication::translate("application", "\354\240\225\353\263\264", nullptr));
        spec_btn->setText(QCoreApplication::translate("application", "\354\203\201\354\204\270", nullptr));
        main_label_1->setText(QCoreApplication::translate("application", "\352\270\260\354\247\200\352\265\255 ID", nullptr));
        main_label_2->setText(QCoreApplication::translate("application", "IP", nullptr));
        main_label_3->setText(QCoreApplication::translate("application", "Version", nullptr));
        Station_label->setText(QCoreApplication::translate("application", "\352\270\260\354\247\200\352\265\255\353\235\274\353\262\250", nullptr));
        IP_label->setText(QCoreApplication::translate("application", "IP\353\235\274\353\262\250", nullptr));
        Version_label->setText(QCoreApplication::translate("application", "\353\262\204\354\240\204\353\235\274\353\262\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class application: public Ui_application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
