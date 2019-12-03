/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

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

class Ui_application
{
public:
    QLabel *time_label;
    QLabel *title_label;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QPushButton *info_btn;
    QPushButton *spec_btn;
    QPushButton *set_btn;
    QLabel *main_label_1;
    QLabel *main_label_2;
    QLabel *main_label_3;
    QLabel *Station_label;
    QLabel *IP_label;
    QLabel *Version_label;

    void setupUi(QWidget *application)
    {
        if (application->objectName().isEmpty())
            application->setObjectName(QStringLiteral("application"));
        application->resize(480, 272);
        application->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        time_label = new QLabel(application);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(0, 256, 480, 16));
        time_label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        time_label->setAlignment(Qt::AlignCenter);
        title_label = new QLabel(application);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(0, 0, 480, 16));
        title_label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        title_label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(application);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 16, 480, 240));
        main_page = new QWidget();
        main_page->setObjectName(QStringLiteral("main_page"));
        info_btn = new QPushButton(main_page);
        info_btn->setObjectName(QStringLiteral("info_btn"));
        info_btn->setGeometry(QRect(50, 160, 100, 50));
        info_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        spec_btn = new QPushButton(main_page);
        spec_btn->setObjectName(QStringLiteral("spec_btn"));
        spec_btn->setGeometry(QRect(190, 160, 100, 50));
        spec_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        set_btn = new QPushButton(main_page);
        set_btn->setObjectName(QStringLiteral("set_btn"));
        set_btn->setGeometry(QRect(330, 160, 100, 50));
        set_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        main_label_1 = new QLabel(main_page);
        main_label_1->setObjectName(QStringLiteral("main_label_1"));
        main_label_1->setGeometry(QRect(80, 30, 101, 31));
        main_label_1->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        main_label_1->setAlignment(Qt::AlignCenter);
        main_label_2 = new QLabel(main_page);
        main_label_2->setObjectName(QStringLiteral("main_label_2"));
        main_label_2->setGeometry(QRect(80, 70, 101, 31));
        main_label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        main_label_2->setAlignment(Qt::AlignCenter);
        main_label_3 = new QLabel(main_page);
        main_label_3->setObjectName(QStringLiteral("main_label_3"));
        main_label_3->setGeometry(QRect(80, 110, 101, 31));
        main_label_3->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        main_label_3->setAlignment(Qt::AlignCenter);
        Station_label = new QLabel(main_page);
        Station_label->setObjectName(QStringLiteral("Station_label"));
        Station_label->setGeometry(QRect(190, 29, 171, 31));
        Station_label->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        Station_label->setAlignment(Qt::AlignCenter);
        IP_label = new QLabel(main_page);
        IP_label->setObjectName(QStringLiteral("IP_label"));
        IP_label->setGeometry(QRect(190, 70, 171, 31));
        IP_label->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        IP_label->setAlignment(Qt::AlignCenter);
        Version_label = new QLabel(main_page);
        Version_label->setObjectName(QStringLiteral("Version_label"));
        Version_label->setGeometry(QRect(190, 110, 171, 31));
        Version_label->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        Version_label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(main_page);

        retranslateUi(application);

        QMetaObject::connectSlotsByName(application);
    } // setupUi

    void retranslateUi(QWidget *application)
    {
        application->setWindowTitle(QApplication::translate("application", "application", Q_NULLPTR));
        time_label->setText(QApplication::translate("application", "\354\213\234\352\260\204", Q_NULLPTR));
        title_label->setText(QApplication::translate("application", "\355\203\200\354\235\264\355\213\200", Q_NULLPTR));
        info_btn->setText(QApplication::translate("application", "\354\240\225\353\263\264", Q_NULLPTR));
        spec_btn->setText(QApplication::translate("application", "\354\203\201\354\204\270", Q_NULLPTR));
        set_btn->setText(QApplication::translate("application", "\354\204\244\354\240\225", Q_NULLPTR));
        main_label_1->setText(QApplication::translate("application", "\352\270\260\354\247\200\352\265\255 ID", Q_NULLPTR));
        main_label_2->setText(QApplication::translate("application", "IP", Q_NULLPTR));
        main_label_3->setText(QApplication::translate("application", "Version", Q_NULLPTR));
        Station_label->setText(QApplication::translate("application", "\352\270\260\354\247\200\352\265\255\353\235\274\353\262\250", Q_NULLPTR));
        IP_label->setText(QApplication::translate("application", "IP\353\235\274\353\262\250", Q_NULLPTR));
        Version_label->setText(QApplication::translate("application", "\353\262\204\354\240\204\353\235\274\353\262\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class application: public Ui_application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
