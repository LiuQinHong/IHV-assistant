#include "eeprompdaf2d.h"
#include "ui_eeprompdaf2d.h"

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
