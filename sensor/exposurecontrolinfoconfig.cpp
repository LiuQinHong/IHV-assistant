#include "exposurecontrolinfoconfig.h"
#include "ui_exposurecontrolinfoconfig.h"

ExposureControlInfoConfig::ExposureControlInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExposureControlInfoConfig)
{
    ui->setupUi(this);
}

ExposureControlInfoConfig::~ExposureControlInfoConfig()
{
    delete ui;
}
