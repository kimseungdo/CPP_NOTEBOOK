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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_application
{
public:
    QWidget *home_window;
    QLabel *time_label;
    QLabel *title_label;
    QWidget *main_widget;
    QPushButton *info_btn;
    QPushButton *spec_btn;
    QPushButton *set_btn;
    QLabel *main_label_1;
    QLabel *main_label_3;
    QLabel *main_label_2;
    QLabel *Station_label;
    QLabel *Ip_label;
    QLabel *Version_label;

    void setupUi(QWidget *application)
    {
        if (application->objectName().isEmpty())
            application->setObjectName(QStringLiteral("application"));
        application->resize(480, 272);
        application->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        home_window = new QWidget(application);
        home_window->setObjectName(QStringLiteral("home_window"));
        home_window->setGeometry(QRect(0, 0, 480, 272));
        home_window->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        time_label = new QLabel(home_window);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(0, 256, 480, 16));
        time_label->setAlignment(Qt::AlignCenter);
        title_label = new QLabel(home_window);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(0, 0, 480, 16));
        title_label->setAlignment(Qt::AlignCenter);
        main_widget = new QWidget(home_window);
        main_widget->setObjectName(QStringLiteral("main_widget"));
        main_widget->setGeometry(QRect(0, 16, 480, 240));
        info_btn = new QPushButton(main_widget);
        info_btn->setObjectName(QStringLiteral("info_btn"));
        info_btn->setGeometry(QRect(50, 150, 100, 50));
        info_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        spec_btn = new QPushButton(main_widget);
        spec_btn->setObjectName(QStringLiteral("spec_btn"));
        spec_btn->setGeometry(QRect(190, 150, 100, 50));
        spec_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        set_btn = new QPushButton(main_widget);
        set_btn->setObjectName(QStringLiteral("set_btn"));
        set_btn->setGeometry(QRect(330, 150, 100, 50));
        set_btn->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        main_label_1 = new QLabel(main_widget);
        main_label_1->setObjectName(QStringLiteral("main_label_1"));
        main_label_1->setGeometry(QRect(130, 40, 75, 20));
        main_label_1->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        main_label_1->setAlignment(Qt::AlignCenter);
        main_label_3 = new QLabel(main_widget);
        main_label_3->setObjectName(QStringLiteral("main_label_3"));
        main_label_3->setGeometry(QRect(130, 90, 75, 20));
        main_label_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        main_label_3->setAlignment(Qt::AlignCenter);
        main_label_2 = new QLabel(main_widget);
        main_label_2->setObjectName(QStringLiteral("main_label_2"));
        main_label_2->setGeometry(QRect(130, 65, 75, 20));
        main_label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        main_label_2->setAlignment(Qt::AlignCenter);
        Station_label = new QLabel(main_widget);
        Station_label->setObjectName(QStringLiteral("Station_label"));
        Station_label->setGeometry(QRect(220, 40, 150, 20));
        Station_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        Station_label->setAlignment(Qt::AlignCenter);
        Ip_label = new QLabel(main_widget);
        Ip_label->setObjectName(QStringLiteral("Ip_label"));
        Ip_label->setGeometry(QRect(220, 65, 150, 20));
        Ip_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        Ip_label->setAlignment(Qt::AlignCenter);
        Version_label = new QLabel(main_widget);
        Version_label->setObjectName(QStringLiteral("Version_label"));
        Version_label->setGeometry(QRect(220, 90, 150, 20));
        Version_label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        Version_label->setAlignment(Qt::AlignCenter);

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
        main_label_3->setText(QApplication::translate("application", "Version", Q_NULLPTR));
        main_label_2->setText(QApplication::translate("application", "IP", Q_NULLPTR));
        Station_label->setText(QApplication::translate("application", "\352\270\260\354\247\200\352\265\255 ID", Q_NULLPTR));
        Ip_label->setText(QApplication::translate("application", "IP", Q_NULLPTR));
        Version_label->setText(QApplication::translate("application", "Version", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class application: public Ui_application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
