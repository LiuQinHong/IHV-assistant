#ifndef SENSORCONFIG_H
#define SENSORCONFIG_H

#include <QWidget>

namespace Ui {
class SensorConfig;
}

class SensorConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SensorConfig(QWidget *parent = nullptr);
    ~SensorConfig();

private:
    Ui::SensorConfig *ui;
};

#endif // SENSORCONFIG_H
