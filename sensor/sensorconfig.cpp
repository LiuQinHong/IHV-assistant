#include "sensorconfig.h"
#include "ui_sensorconfig.h"
#include <QFileDialog>

SensorConfig::SensorConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorConfig)
{
    ui->setupUi(this);

    mSlaveInfoConfig = new SlaveInfoConfig();
    mRegAddrInfoConfig = new RegAddrInfoConfig();
    mExposureControlInfoConfig = new ExposureControlInfoConfig();
    mGroupHoldConfig = new GroupHoldConfig();
    mResolutionInfoConfig = new ResolutionInfoConfig();
    mStreamSettingConfig = new StreamSettingConfig();
    mTestPatternInfoConfig = new TestPatternInfoConfig();

    setWindowTitle(tr("sensor configure"));
    setWindowIcon(QIcon(":/images/icon"));
}

SensorConfig::~SensorConfig()
{
    delete mSlaveInfoConfig;
    delete mRegAddrInfoConfig;
    delete mExposureControlInfoConfig;
    delete mGroupHoldConfig;
    delete mResolutionInfoConfig;
    delete mStreamSettingConfig;
    delete mTestPatternInfoConfig;

    delete ui;
}

void SensorConfig::on_btn_slaveInfo_clicked()
{
    if (mSlaveInfoConfig->isVisible()) {
        mSlaveInfoConfig->close();
        return;
    }
    mSlaveInfoConfig->show();
}

void SensorConfig::on_btn_regAddrInfo_clicked()
{
    if (mRegAddrInfoConfig->isVisible()) {
        mRegAddrInfoConfig->close();
        return;
    }

    mRegAddrInfoConfig->show();
}

void SensorConfig::on_btn_resolutionInfo_clicked()
{
    if (mResolutionInfoConfig->isVisible()) {
        mResolutionInfoConfig->close();
        return;
    }

    mResolutionInfoConfig->show();
}

void SensorConfig::on_btn_exposureControlInfo_clicked()
{
    if (mExposureControlInfoConfig->isVisible()) {
        mExposureControlInfoConfig->close();
        return;
    }

    mExposureControlInfoConfig->show();
}

void SensorConfig::on_btn_stream_clicked()
{
    if (mStreamSettingConfig->isVisible()) {
        mStreamSettingConfig->close();
        return;
    }

    mStreamSettingConfig->show();
}

void SensorConfig::on_btn_groupHold_clicked()
{
    if (mGroupHoldConfig->isVisible()) {
        mGroupHoldConfig->close();
        return;
    }

    mGroupHoldConfig->show();
}

void SensorConfig::on_btn_testPatternInfo_clicked()
{
    if (mTestPatternInfoConfig->isVisible()) {
        mTestPatternInfoConfig->close();
        return;
    }

    mTestPatternInfoConfig->show();
}

void SensorConfig::on_btn_initSettings_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->le_initsetting->setText(path);
}
