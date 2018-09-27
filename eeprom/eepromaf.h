#ifndef EEPROMAF_H
#define EEPROMAF_H

#include <QWidget>

namespace Ui {
class EepromAF;
}

class EepromAF : public QWidget
{
    Q_OBJECT

public:
    explicit EepromAF(QWidget *parent = 0);
    ~EepromAF();

private:
    Ui::EepromAF *ui;
};

#endif // EEPROMAF_H
