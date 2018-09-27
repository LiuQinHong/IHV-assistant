#include "moduleconfig.h"
#include "ui_moduleconfig.h"

ModuleConfig::ModuleConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModuleConfig)
{
    ui->setupUi(this);
}

ModuleConfig::~ModuleConfig()
{
    delete ui;
}
