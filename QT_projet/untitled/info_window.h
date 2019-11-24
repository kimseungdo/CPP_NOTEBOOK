#ifndef INFO_WINDOW_H
#define INFO_WINDOW_H

#include <QWidget>
#include "form_format/basic_form.h"

class QLabel;
class QPushButton;

namespace Ui{ class info_window; }

class info_window : public basic_form{
    Q_OBJECT

public:
    explicit info_window(basic_form *parent = 0);
private:
    Ui::info_window *info_ui;

signals:

public slots:
};

#endif // INFO_WINDOW_H
