#ifndef EEPROMLSC_H
#define EEPROMLSC_H

#include <QWidget>

namespace Ui {
class EepromLSC;
}

class EepromLSC : public QWidget
{
    Q_OBJECT

public:
    explicit EepromLSC(QWidget *parent = 0);
    ~EepromLSC();

private:
    Ui::EepromLSC *ui;
};

#endif // EEPROMLSC_H
