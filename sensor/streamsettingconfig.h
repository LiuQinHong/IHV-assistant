#ifndef STREAMSETTINGCONFIG_H
#define STREAMSETTINGCONFIG_H

#include <QWidget>

namespace Ui {
class StreamSettingConfig;
}

class StreamSettingConfig : public QWidget
{
    Q_OBJECT

public:
    explicit StreamSettingConfig(QWidget *parent = 0);
    ~StreamSettingConfig();

private:
    Ui::StreamSettingConfig *ui;
};

#endif // STREAMSETTINGCONFIG_H
