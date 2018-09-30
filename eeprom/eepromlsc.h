#ifndef EEPROMLSC_H
#define EEPROMLSC_H

#include <QWidget>
#include <QString>

namespace Ui {
class EepromLSC;
}

class EepromLSC : public QWidget
{
    Q_OBJECT

public:
    explicit EepromLSC(QWidget *parent = 0);
    ~EepromLSC();
    void writeText(QString& str, bool isSupport);

private:
    Ui::EepromLSC *ui;
};

#endif // EEPROMLSC_H
