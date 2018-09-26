#include "slaveinfoconfig.h"
#include "ui_slaveinfoconfig.h"

SlaveInfoConfig::SlaveInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SlaveInfoConfig)
{
    ui->setupUi(this);
}

SlaveInfoConfig::~SlaveInfoConfig()
{
    delete ui;
}
