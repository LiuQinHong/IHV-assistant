#include "eeprompdafdcc.h"
#include "ui_eeprompdafdcc.h"
#include <eeprom/eepromconfig.h>

EepromPDAFDCC::EepromPDAFDCC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromPDAFDCC)
{
    ui->setupUi(this);
}

EepromPDAFDCC::~EepromPDAFDCC()
{
    delete ui;
}



void EepromPDAFDCC::writeText(QString& str, bool isSupport)
{
    QString tmp = "flase";

    if (isSupport) {
        tmp = "true";
    }

    str += QString(EEPROM_PDAFDCC)
            .arg(ui->le_endianness->text())
            .arg(ui->le_slopeDataOffset->text())
            .arg(ui->le_offsetDataOffset->text())
            .arg(tmp);
}
