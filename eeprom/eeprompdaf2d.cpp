#include "eeprompdaf2d.h"
#include "ui_eeprompdaf2d.h"
#include <eeprom/eepromconfig.h>

EepromPDAF2D::EepromPDAF2D(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromPDAF2D)
{
    ui->setupUi(this);
}

EepromPDAF2D::~EepromPDAF2D()
{
    delete ui;
}


void EepromPDAF2D::writeText(QString& str, bool isSupport)
{
    QString tmp = "flase";

    if (isSupport) {
        tmp = "true";
    }

    str += QString(EEPROM_PDAF2D)
            .arg(ui->le_endianness->text())
            .arg(ui->le_version->text())
            .arg(ui->le_mapWidth->text())
            .arg(ui->le_mapHeight->text())
            .arg(ui->le_gainWidth->text())
            .arg(ui->le_gainHeight->text())
            .arg(ui->le_leftGainMap->text())
            .arg(ui->le_rightGainMap->text())
            .arg(ui->le_conversion_count->text())
            .arg(ui->le_conversionCoefficient->text())
            .arg(ui->le_DCCQFormat->text())
            .arg(ui->le_DCCMapWidth->text())
            .arg(ui->le_DCCMapHeight->text())
            .arg(tmp);
}
