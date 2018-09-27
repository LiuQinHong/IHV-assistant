#ifndef PDAFCONFIG_H
#define PDAFCONFIG_H

#include <QWidget>

namespace Ui {
class PdafConfig;
}

class PdafConfig : public QWidget
{
    Q_OBJECT

public:
    explicit PdafConfig(QWidget *parent = 0);
    ~PdafConfig();

private:
    Ui::PdafConfig *ui;
};

#endif // PDAFCONFIG_H
