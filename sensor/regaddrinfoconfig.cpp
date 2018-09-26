#include "regaddrinfoconfig.h"
#include "ui_regaddrinfoconfig.h"

RegAddrInfoConfig::RegAddrInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegAddrInfoConfig)
{
    ui->setupUi(this);
}

RegAddrInfoConfig::~RegAddrInfoConfig()
{
    delete ui;
}
