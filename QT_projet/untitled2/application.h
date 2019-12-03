#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>


#include "info_window_file/info_window.h"
#include "spec_window_file/spec_window.h"
#include "set_window_file/set_window.h"

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

private:
    Ui::application *ui;
    info_window _info_window;
    spec_window _spec_window;
    set_window _set_window;

    void set_up_main();
};

#endif // APPLICATION_H
