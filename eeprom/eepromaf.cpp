#include "eepromaf.h"
#include "ui_eepromaf.h"
#include <eeprom/eepromconfig.h>

EepromAF::EepromAF(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromAF)
{
    ui->setupUi(this);
}

EepromAF::~EepromAF()
{
    delete ui;
}


void EepromAF::writeText(QString& str, bool isSupport)
{
    QString tmp = "flase";

    if (isSupport) {
        tmp = "true";
    }

    str += QString(EEPROM_AF)
            .arg(ui->le_endianness->text())
            .arg(ui->le_macro_offset->text())
            .arg(ui->le_infinity_offset->text())
            .arg(tmp);

}
