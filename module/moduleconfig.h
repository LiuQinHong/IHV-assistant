#ifndef MODULECONFIG_H
#define MODULECONFIG_H

#include <QWidget>

namespace Ui {
class ModuleConfig;
}

class ModuleConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ModuleConfig(QWidget *parent = 0);
    ~ModuleConfig();

private:
    Ui::ModuleConfig *ui;
};

#endif // MODULECONFIG_H
