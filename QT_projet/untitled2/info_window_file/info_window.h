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

    int line_count = 0 ; //line_clount == 1 only main
                     //line_clunt > 1 exists other sub slot
    bool slot_on_off_switch = 0; // bool
    QVector<bool> info_slots; //슬롯정보를 담을겨
signals:
    void Home_clicked();

private slots:
    void on_home_btn_clicked();
    void on_before_btn_clicked();
};

#endif // INFO_WINDOW_H
