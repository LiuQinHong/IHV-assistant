#include "memorymap.h"
#include "ui_memorymap.h"
#include <eeprom/eepromconfig.h>

MemoryMap::MemoryMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemoryMap)
{
    ui->setupUi(this);
}

MemoryMap::~MemoryMap()
{
    delete ui;
}

void MemoryMap::writeText(QString& str)
{
    str += QString(EEPROM_MEMORYMAP)
            .arg(ui->le_slaveAddr->text())
            .arg(ui->le_registerAddr->text())
            .arg(ui->le_registerData->text())
            .arg(ui->le_regAddrType->text())
            .arg(ui->le_regDataType->text());
}

