#include "pdafconfig.h"
#include "ui_pdafconfig.h"

PdafConfig::PdafConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PdafConfig)
{
    ui->setupUi(this);
}

PdafConfig::~PdafConfig()
{
    delete ui;
}
