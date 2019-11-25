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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spec_window
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *spec_window)
    {
        if (spec_window->objectName().isEmpty())
            spec_window->setObjectName(QStringLiteral("spec_window"));
        spec_window->resize(480, 240);
        pushButton = new QPushButton(spec_window);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 110, 75, 23));

        retranslateUi(spec_window);

        QMetaObject::connectSlotsByName(spec_window);
    } // setupUi

    void retranslateUi(QWidget *spec_window)
    {
        spec_window->setWindowTitle(QApplication::translate("spec_window", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("spec_window", "\354\203\201\354\204\270\353\236\221\352\272\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class spec_window: public Ui_spec_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEC_WINDOW_H
