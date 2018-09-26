#include "resolutioninfoconfig.h"
#include "ui_resolutioninfoconfig.h"

ResolutionInfoConfig::ResolutionInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResolutionInfoConfig)
{
    ui->setupUi(this);
}

ResolutionInfoConfig::~ResolutionInfoConfig()
{
    delete ui;
}
