#include "groupholdconfig.h"
#include "ui_groupholdconfig.h"

GroupHoldConfig::GroupHoldConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupHoldConfig)
{
    ui->setupUi(this);
}

GroupHoldConfig::~GroupHoldConfig()
{
    delete ui;
}
