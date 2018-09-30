#ifndef EEPROMPDAF2D_H
#define EEPROMPDAF2D_H

#include <QWidget>
#include <QString>

namespace Ui {
class EepromPDAF2D;
}

class EepromPDAF2D : public QWidget
{
    Q_OBJECT

public:
    explicit EepromPDAF2D(QWidget *parent = 0);
    ~EepromPDAF2D();
    void writeText(QString& str, bool isSupport);

private:
    Ui::EepromPDAF2D *ui;
};

#endif // EEPROMPDAF2D_H
