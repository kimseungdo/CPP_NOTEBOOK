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
};

#endif // SPEC_WINDOW_H
