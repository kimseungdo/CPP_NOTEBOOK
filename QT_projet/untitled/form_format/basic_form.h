#ifndef BASIC_FORM_H
#define BASIC_FORM_H

#include <QWidget>

class QLabel;
class QPushButton;

class basic_form : public QWidget{
    Q_OBJECT
public:
    explicit basic_form(QWidget *parent = 0);
private:
    QLabel *test_label;

    QPushButton *home_btn; //setGeometry(10, 210, 50, 30);
    QPushButton *before_btn; //setGeometry(70, 210, 50 30);
    QPushButton *up_btn; //setGeometry(460, 70, 20, 30);
    QPushButton *down_btn; //setGeometry(460, 170, 20, 30);

signals:

public slots:
};

#endif // BASIC_FORM_H
