#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>
#include <QTimer>

#include "info_window_file/info_window.h"
#include "spec_window_file/spec_window.h"

namespace Ui {
class application;
}

class application : public QWidget{
    Q_OBJECT

public:
    explicit application(QWidget *parent = 0);
    ~application();

private slots:
    void on_info_btn_clicked();
    void on_spec_btn_clicked();
    void on_set_btn_clicked();
    void move_to_home();
    void main_title(const QString &text_label);
    void onTimer();
    void read_all_system_per_3tic();

private:
    Ui::application *ui;
    info_window _info_window;
    spec_window _spec_window;

    QTimer *timer;
    QTimer *thread_tic;
    void set_up_main();
    void initial_system();
    void read_all_system_file(QVector<bool>& _MS, QVector<bool>& _SUB1, QVector<bool>& _SUB2);
};

#endif // APPLICATION_H
