#ifndef SPEC_WINDOW_H
#define SPEC_WINDOW_H

#include <QWidget>

namespace Ui {
class spec_window;
}

class spec_window : public QWidget{
    Q_OBJECT

public:
    explicit spec_window(QWidget *parent = 0);
    ~spec_window();


private:
    Ui::spec_window *spec_ui;

signals:
    void Home_clicked();

private slots:
    void on_home_btn_clicked();
    void on_s_before_btn_1_clicked();
    void on_s_before_btn_2_clicked();

    void on_s_up_btn_1_clicked();
    void on_s_up_btn_2_clicked();

    void on_s_down_btn_1_clicked();
    void on_s_down_btn_2_clicked();
};

#endif // SPEC_WINDOW_H
