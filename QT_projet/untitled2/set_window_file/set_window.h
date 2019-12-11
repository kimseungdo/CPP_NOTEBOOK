#ifndef SET_WINDOW_H
#define SET_WINDOW_H

#include <QWidget>

namespace Ui {
class set_window;
}

class set_window : public QWidget{
    Q_OBJECT

public:
    explicit set_window(QWidget *parent = 0);
    ~set_window();

private:
    Ui::set_window *set_ui;

signals:
    void Home_clicked();
    void title_change(QString text);

private slots:
    void on_home_btn_clicked(); //집으로들
    void on_before_btn_clicked(); //index 0번이 메인으로

    void on_ip_set_btn_clicked();
    void on_time_set_btn_clicked();

    void on_before_btn_2_clicked();
    void on_before_btn_3_clicked();




};

#endif // SET_WINDOW_H
