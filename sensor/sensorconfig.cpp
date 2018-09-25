#include "sensorconfig.h"
#include "ui_sensorconfig.h"

SensorConfig::SensorConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorConfig)
{
    ui->setupUi(this);
}

SensorConfig::~SensorConfig()
{
    delete ui;
}
