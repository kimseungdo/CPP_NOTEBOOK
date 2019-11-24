#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>

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

private:
    Ui::application *ui;

};

#endif // APPLICATION_H
