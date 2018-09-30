#include "eepromslaveinfoconfig.h"
#include "ui_eepromslaveinfoconfig.h"
#include <eeprom/eepromconfig.h>

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

void EepromslaveInfoConfig::writeText(QString& str)
{
    str += QString(EEPROM_SLAVEINFO)
            .arg(ui->le_EEPROMName->text())
            .arg(ui->le_slaveAddress->text())
            .arg(ui->le_regAddrType->text())
            .arg(ui->le_regDataType->text());
}


QString EepromslaveInfoConfig::getEepromName()
{
    return ui->le_EEPROMName->text();
}
