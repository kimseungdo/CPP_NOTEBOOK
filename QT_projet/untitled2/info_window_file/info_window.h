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

signals:
    void Home_clicked();

private slots:
    void on_home_btn_clicked();
};

#endif // INFO_WINDOW_H
