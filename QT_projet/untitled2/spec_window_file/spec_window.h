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
    bool spec_window_flag;

    void device_read();
// 장비id, 장비코드, 장비정보 n개 나열, 메인경로, 슬롯경로, 포트경로
// 대분류(QString), 장비명(QString), 변수개수(QString) = 장비코드(QString)
// Q
    QVector<QVector<QString>> recti_list;    //정류기류
    QVector<QVector<QString>> power_list;    //전력
    QVector<QVector<QString>> aircon_list;   //냉방기

    QVector<QVector<QString>> temp_list;     //온습도류
    QVector<QString> haron_list;    //하론류
    QVector<QString> fire_list;     //화재류

    QVector<QString> human_list;    //인체
    QVector<QString> submerg_list;  //침수
    QVector<QString> gate_list;     //출입문

    QVector<QString> ground_list;   //접지
    QVector<QString> generate_list;  //발전기
    QVector<QString> exhaust_list;   //배풍

    QVector<QString> bmu_list;      //BMU

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
    void on_s_before_btn_3_clicked();
    void on_s_up_btn_3_clicked();
    void on_s_down_btn_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // SPEC_WINDOW_H
