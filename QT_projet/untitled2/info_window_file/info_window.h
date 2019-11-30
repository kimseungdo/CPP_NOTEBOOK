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

private:
    Ui::info_window *info_ui;
    int slot_counter; //line_clount == 1 only main
                       //line_clunt > 1 exists other sub slot
    int window_index;

    bool main_flag;
    bool sub1_flag; // on/off flag
    bool sub2_flag; //

    QVector<bool> main_slots; //슬롯정보를 담을거
    QVector<bool> sub1_slots;
    QVector<bool> sub2_slots;


    void info_file_check();
    void init_info_window();

    void main_slot_info_window(QVector<bool>& T);
    void sub1_slot_info_window(QVector<bool>& T);
    void sub2_slot_info_window(QVector<bool>& T);

signals:
    void Home_clicked();
    void title_change(QString text);

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
};

#endif // INFO_WINDOW_H
