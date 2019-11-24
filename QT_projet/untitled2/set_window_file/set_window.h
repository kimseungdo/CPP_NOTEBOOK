#ifndef SET_WINDOW_H
#define SET_WINDOW_H

#include <QWidget>

namespace Ui {
class set_window;
}

class set_window : public QWidget
{
    Q_OBJECT

public:
    explicit set_window(QWidget *parent = 0);
    ~set_window();


private slots:
    void on_home_btn_clicked(); //집으로들
    void on_home_btn_2_clicked();
    void on_home_btn_3_clicked();

    void on_up_btn_clicked(); //위로들
    void on_up_btn_2_clicked();
    void on_up_btn_3_clicked();

    void on_down_btn_clicked(); //아래로들
    void on_down_btn_2_clicked();
    void on_down_btn_3_clicked();

private:
    Ui::set_window *sui;

signals:
    void Home_clicked();
};

#endif // SET_WINDOW_H
