#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "form_format/main_form.h"

class window : public main_form{
    Q_OBJECT
public:
    explicit window(main_form *parent = 0);

signals:

public slots:
};

#endif // WINDOW_H
