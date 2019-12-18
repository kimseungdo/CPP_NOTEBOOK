#include "spec_window2.h"
#include "ui_spec_window2.h"

spec_window2::spec_window2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::spec_window2)
{
    ui->setupUi(this);
}

spec_window2::~spec_window2()
{
    delete ui;
}
