#ifndef SLAVEINFOCONFIG_H
#define SLAVEINFOCONFIG_H

#include <QWidget>

namespace Ui {
class SlaveInfoConfig;
}

class SlaveInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SlaveInfoConfig(QWidget *parent = 0);
    ~SlaveInfoConfig();

private:
    Ui::SlaveInfoConfig *ui;
};

#endif // SLAVEINFOCONFIG_H
