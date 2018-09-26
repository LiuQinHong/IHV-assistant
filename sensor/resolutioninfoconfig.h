#ifndef RESOLUTIONINFOCONFIG_H
#define RESOLUTIONINFOCONFIG_H

#include <QWidget>

namespace Ui {
class ResolutionInfoConfig;
}

class ResolutionInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ResolutionInfoConfig(QWidget *parent = 0);
    ~ResolutionInfoConfig();

private:
    Ui::ResolutionInfoConfig *ui;
};

#endif // RESOLUTIONINFOCONFIG_H
