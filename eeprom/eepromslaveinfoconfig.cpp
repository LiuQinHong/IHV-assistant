#include "eepromslaveinfoconfig.h"
#include "ui_eepromslaveinfoconfig.h"

EepromslaveInfoConfig::EepromslaveInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromslaveInfoConfig)
{
    ui->setupUi(this);
}

EepromslaveInfoConfig::~EepromslaveInfoConfig()
{
    delete ui;
}
