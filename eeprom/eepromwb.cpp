#include "eepromwb.h"
#include "ui_eepromwb.h"

EepromWB::EepromWB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromWB)
{
    ui->setupUi(this);
}

EepromWB::~EepromWB()
{
    delete ui;
}
