#ifndef EEPROMSLAVEINFOCONFIG_H
#define EEPROMSLAVEINFOCONFIG_H

#include <QWidget>
#include <QString>

namespace Ui {
class EepromslaveInfoConfig;
}

class EepromslaveInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit EepromslaveInfoConfig(QWidget *parent = 0);
    ~EepromslaveInfoConfig();
    void writeText(QString& str);
    QString getEepromName();

private:
    Ui::EepromslaveInfoConfig *ui;
};

#endif // EEPROMSLAVEINFOCONFIG_H
