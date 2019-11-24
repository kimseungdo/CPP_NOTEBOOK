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

private:
    Ui::set_window *ui;
};

#endif // SET_WINDOW_H
