#ifndef EEPROMAF_H
#define EEPROMAF_H

#include <QWidget>
#include <QString>

namespace Ui {
class EepromAF;
}

class EepromAF : public QWidget
{
    Q_OBJECT

public:
    explicit EepromAF(QWidget *parent = 0);
    ~EepromAF();
    void writeText(QString& str, bool isSupport);

private:
    Ui::EepromAF *ui;
};

#endif // EEPROMAF_H
