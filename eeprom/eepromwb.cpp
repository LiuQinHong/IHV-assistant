#include "eepromwb.h"
#include "ui_eepromwb.h"
#include <eeprom/eepromconfig.h>

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

void EepromWB::writeText(QString& str, bool isSupport)
{
    QString tmp = "flase";

    if (isSupport) {
        tmp = "true";
    }

    str += QString(EEPROM_WB)
            .arg(ui->le_wb_endianness->text())
            .arg(ui->le_wb_datatype->text())
            .arg(ui->le_rValue->text())
            .arg(ui->le_grValue->text())
            .arg(ui->le_gbValue->text())
            .arg(ui->le_bValue->text())
            .arg(ui->le_rOverGValue->text())
            .arg(ui->le_bOverGValue->text())
            .arg(ui->le_grOverGBValue->text())
            .arg(ui->le_qValue->text())
            .arg(tmp);
}
