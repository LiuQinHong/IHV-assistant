#ifndef SENSORCONFIG_H
#define SENSORCONFIG_H

#include <QWidget>
#include <sensor/slaveinfoconfig.h>
#include <sensor/regaddrinfoconfig.h>
#include <sensor/exposurecontrolinfoconfig.h>
#include <sensor/groupholdconfig.h>
#include <sensor/resolutioninfoconfig.h>
#include <sensor/streamsettingconfig.h>
#include <sensor/testpatterninfoconfig.h>

namespace Ui {
class SensorConfig;
}

class SensorConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SensorConfig(QWidget *parent = nullptr);
    ~SensorConfig();

private slots:
    void on_btn_slaveInfo_clicked();

    void on_btn_regAddrInfo_clicked();

    void on_btn_resolutionInfo_clicked();

    void on_btn_exposureControlInfo_clicked();

    void on_btn_stream_clicked();

    void on_btn_groupHold_clicked();

    void on_btn_testPatternInfo_clicked();

    void on_btn_initSettings_clicked();

private:
    Ui::SensorConfig *ui;
    SlaveInfoConfig *mSlaveInfoConfig;
    RegAddrInfoConfig *mRegAddrInfoConfig;
    ExposureControlInfoConfig *mExposureControlInfoConfig;
    GroupHoldConfig *mGroupHoldConfig;
    ResolutionInfoConfig *mResolutionInfoConfig;
    StreamSettingConfig *mStreamSettingConfig;
    TestPatternInfoConfig *mTestPatternInfoConfig;
};

#endif // SENSORCONFIG_H
