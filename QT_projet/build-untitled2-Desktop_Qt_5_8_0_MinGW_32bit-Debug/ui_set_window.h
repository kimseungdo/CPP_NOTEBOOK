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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_window
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *set_window)
    {
        if (set_window->objectName().isEmpty())
            set_window->setObjectName(QStringLiteral("set_window"));
        set_window->resize(480, 240);
        pushButton = new QPushButton(set_window);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 90, 75, 23));

        retranslateUi(set_window);

        QMetaObject::connectSlotsByName(set_window);
    } // setupUi

    void retranslateUi(QWidget *set_window)
    {
        set_window->setWindowTitle(QApplication::translate("set_window", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("set_window", "\354\204\244\354\240\225\354\235\264\353\236\221\352\272\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class set_window: public Ui_set_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WINDOW_H
