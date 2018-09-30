#ifndef EEPROMWB_H
#define EEPROMWB_H

#include <QWidget>
#include <QString>

namespace Ui {
class EepromWB;
}

class EepromWB : public QWidget
{
    Q_OBJECT

public:
    explicit EepromWB(QWidget *parent = 0);
    ~EepromWB();
    void writeText(QString& str, bool isSupport);
private:
    Ui::EepromWB *ui;
};

#endif // EEPROMWB_H
