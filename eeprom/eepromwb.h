#ifndef EEPROMWB_H
#define EEPROMWB_H

#include <QWidget>

namespace Ui {
class EepromWB;
}

class EepromWB : public QWidget
{
    Q_OBJECT

public:
    explicit EepromWB(QWidget *parent = 0);
    ~EepromWB();

private:
    Ui::EepromWB *ui;
};

#endif // EEPROMWB_H
