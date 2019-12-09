#ifndef INFO_WINDOW_H
#define INFO_WINDOW_H

#include <QWidget>

namespace Ui {
class info_window;
}

class info_window : public QWidget{
    Q_OBJECT

public:
    explicit info_window(QWidget *parent = 0);
    ~info_window();

    __int8 window_index;
    __int8 slot_index;
    __int8 port_index;

private:
    Ui::info_window *info_ui;
    QHash<QString, QString> tmp_hash;
    QVector<QString> tmp_vec;
    void set_up_info_ui();


    void main_slot_info_window(QVector<bool>& T);
    void sub1_slot_info_window(QVector<bool>& T);
    void sub2_slot_info_window(QVector<bool>& T);

    void set_port_info_window(QVector<QVector<QVector<QString>>>& T);

    void set_0port_info_window();
    void set_3port_info_window();
    void set_4port_info_window();
    void set_12port_info_window();

    void tmp_setting(QVector<QVector<QVector<QString>>>& T, __int8 &PI);
    void shift_port_device_window(QVector<QString>& T);

signals:
    void Home_clicked();
    void title_change(QString text);
    //void buttonClicked(int);

private slots:
    void on_home_btn_clicked();
    void on_main_before_btn_clicked();
    void on_main_up_btn_clicked();
    void on_main_down_btn_clicked();
    void on_slot_btn_1_clicked();
    void on_slot_btn_2_clicked();
    void on_slot_btn_3_clicked();
    void on_slot_btn_4_clicked();
    void on_slot_btn_5_clicked();
    void on_slot_btn_6_clicked();
    void on_slot_btn_7_clicked();
    void on_slot_btn_8_clicked();
    void on_slot_btn_9_clicked();
    void on_slot_btn_10_clicked();
    void on_slot_btn_11_clicked();
    void on_slot_before_btn_clicked();
    void on_port_before_btn_clicked();

    //void onGroupButtonClicked(int id);
    void on_port_btn_1_clicked();
    void on_port_btn_2_clicked();
    void on_port_btn_3_clicked();
    void on_port_btn_4_clicked();
    void on_port_btn_5_clicked();
    void on_port_btn_6_clicked();
    void on_port_btn_7_clicked();
    void on_port_btn_8_clicked();
    void on_port_btn_9_clicked();
    void on_port_btn_10_clicked();
    void on_port_btn_11_clicked();
    void on_port_btn_12_clicked();
    void on_port_up_btn_clicked();
    void on_port_down_btn_clicked();
};

#endif // INFO_WINDOW_H
