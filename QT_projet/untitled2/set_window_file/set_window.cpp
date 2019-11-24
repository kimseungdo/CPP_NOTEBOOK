#include "set_window.h"
#include "ui_set_window.h"

set_window::set_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_window)
{
    ui->setupUi(this);
}

set_window::~set_window()
{
    delete ui;
}
