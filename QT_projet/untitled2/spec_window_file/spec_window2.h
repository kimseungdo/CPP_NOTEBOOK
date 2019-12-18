#ifndef SPEC_WINDOW2_H
#define SPEC_WINDOW2_H

#include <QWidget>

namespace Ui {
class spec_window2;
}

class spec_window2 : public QWidget
{
    Q_OBJECT

public:
    explicit spec_window2(QWidget *parent = 0);
    ~spec_window2();

private:
    Ui::spec_window2 *ui;
};

#endif // SPEC_WINDOW2_H
