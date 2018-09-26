#include "streamsettingconfig.h"
#include "ui_streamsettingconfig.h"

StreamSettingConfig::StreamSettingConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StreamSettingConfig)
{
    ui->setupUi(this);
}

StreamSettingConfig::~StreamSettingConfig()
{
    delete ui;
}
