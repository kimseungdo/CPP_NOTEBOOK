#ifndef MAIN_FORM_H
#define MAIN_FORM_H

#include <QWidget>

class QLabel;
class QPushButton;

class main_form : public QWidget{
    Q_OBJECT
public:
    explicit main_form(QWidget *parent = 0);
private:
    QLabel *test_label2;

    QPushButton *info_btn; //setGeometry(50, 150, 100, 50);
    QPushButton *spec_btn; //setGeometry(190, 150, 100, 50);
    QPushButton *set_btn; //setGeometry(330, 150, 100, 50);

signals:

public slots:
};

#endif // MAIN_FORM_H
