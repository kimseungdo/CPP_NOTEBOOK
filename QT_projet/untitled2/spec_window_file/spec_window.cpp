#include "spec_window.h"
#include "ui_spec_window.h"

spec_window::spec_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::spec_window)
{
    ui->setupUi(this);
}

spec_window::~spec_window()
{
    delete ui;
}