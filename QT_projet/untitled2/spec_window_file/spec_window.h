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
    void title_change(QString text);

private slots:
    void on_home_btn_clicked();
    void on_s_before_btn_1_clicked();
    void on_s_before_btn_2_clicked();

    void on_s_up_btn_1_clicked();
    void on_s_up_btn_2_clicked();

    void on_s_down_btn_1_clicked();
    void on_s_down_btn_2_clicked();
    void on_rectifier_btn_clicked(); // 정류기류
    void on_power_flow_btn_clicked(); // 전력관류
    void on_air_condition_btn_clicked(); // 냉방기류
    void on_temp_btn_clicked(); // 온습도류
    void on_haron_btn_clicked(); // 하론류
    void on_fire_btn_clicked(); // 화재류
    void on_human_btn_clicked(); // 인체감지
    void on_flood_btn_clicked(); // 침수센서
    void on_gate_btn_clicked(); // 출입문
    void on_ground_btn_clicked(); // 접지
    void on_gene_btn_clicked(); // 발동발전기
    void on_exhaust_btn_clicked(); // 배풍기
    void on_bmu_btn_clicked(); //BMU
};

#endif // SPEC_WINDOW_H
