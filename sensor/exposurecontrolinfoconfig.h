#ifndef EXPOSURECONTROLINFOCONFIG_H
#define EXPOSURECONTROLINFOCONFIG_H

#include <QWidget>

namespace Ui {
class ExposureControlInfoConfig;
}

class ExposureControlInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ExposureControlInfoConfig(QWidget *parent = 0);
    ~ExposureControlInfoConfig();

private:
    Ui::ExposureControlInfoConfig *ui;
};

#endif // EXPOSURECONTROLINFOCONFIG_H
