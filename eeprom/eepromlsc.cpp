#include "eepromlsc.h"
#include "ui_eepromlsc.h"
#include <eeprom/eepromconfig.h>

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



void EepromLSC::writeText(QString& str, bool isSupport)
{
    QString tmp = "flase";

    if (isSupport) {
        tmp = "true";
    }

    str += QString(EEPROM_LSC)
            .arg(ui->le_endianness->text())
            .arg(ui->le_rGainMSB->text())
            .arg(ui->le_rGainLSB->text())
            .arg(ui->le_grGainMSB->text())
            .arg(ui->le_grGainLSB->text())
            .arg(ui->le_gbGainMSB->text())
            .arg(ui->le_gbGainLSB->text())
            .arg(ui->le_bGainMSB->text())
            .arg(ui->le_bGainLSB->text())
            .arg(ui->le_rolloffsize->text())
            .arg(ui->le_rIncrement->text())
            .arg(ui->le_grIncrement->text())
            .arg(ui->le_gbIncrement->text())
            .arg(ui->le_bIncrement->text())
            .arg(tmp);
}
