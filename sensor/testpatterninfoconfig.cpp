#include "testpatterninfoconfig.h"
#include "ui_testpatterninfoconfig.h"

TestPatternInfoConfig::TestPatternInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestPatternInfoConfig)
{
    ui->setupUi(this);
}

TestPatternInfoConfig::~TestPatternInfoConfig()
{
    delete ui;
}
