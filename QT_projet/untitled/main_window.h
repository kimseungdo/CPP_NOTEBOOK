#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include "form_format/main_form.h"

namespace Ui { class main_window; }

class main_window : public main_form{
    Q_OBJECT
public:
    explicit main_window(main_form *parent = 0);

private:
    Ui::main_window *main_ui;

signals:

public slots:
};

#endif // WINDOW_H
