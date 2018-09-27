#include "eepromlsc.h"
#include "ui_eepromlsc.h"

EepromLSC::EepromLSC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromLSC)
{
    ui->setupUi(this);
}

EepromLSC::~EepromLSC()
{
    delete ui;
}
