#ifndef EEPROMPDAFDCC_H
#define EEPROMPDAFDCC_H

#include <QWidget>

namespace Ui {
class EepromPDAFDCC;
}

class EepromPDAFDCC : public QWidget
{
    Q_OBJECT

public:
    explicit EepromPDAFDCC(QWidget *parent = 0);
    ~EepromPDAFDCC();

private:
    Ui::EepromPDAFDCC *ui;
};

#endif // EEPROMPDAFDCC_H
