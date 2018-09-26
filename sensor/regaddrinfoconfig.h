#ifndef REGADDRINFOCONFIG_H
#define REGADDRINFOCONFIG_H

#include <QWidget>

namespace Ui {
class RegAddrInfoConfig;
}

class RegAddrInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit RegAddrInfoConfig(QWidget *parent = 0);
    ~RegAddrInfoConfig();

private:
    Ui::RegAddrInfoConfig *ui;
};

#endif // REGADDRINFOCONFIG_H
