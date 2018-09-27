#include "eepromaf.h"
#include "ui_eepromaf.h"

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
