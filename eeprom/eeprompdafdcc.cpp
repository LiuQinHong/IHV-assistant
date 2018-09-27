#include "eeprompdafdcc.h"
#include "ui_eeprompdafdcc.h"

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
