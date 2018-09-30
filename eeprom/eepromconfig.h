#ifndef EEPROMCONFIG_H
#define EEPROMCONFIG_H

#include <QWidget>
#include <eeprom/eepromslaveinfoconfig.h>
#include <eeprom/memorymap.h>
#include <eeprom/eepromaf.h>
#include <eeprom/eepromwb.h>
#include <eeprom/eepromlsc.h>
#include <eeprom/eeprompdafdcc.h>
#include <eeprom/eeprompdaf2d.h>

namespace Ui {
class EepromConfig;
}

class EepromConfig : public QWidget
{
    Q_OBJECT

public:
    explicit EepromConfig(QWidget *parent = 0);
    ~EepromConfig();
    int generateEepromFile();

private slots:
    void on_btn_slaveInfo_clicked();

    void on_btn_memoryMap_clicked();

    void on_btn_AF_clicked();

    void on_btn_WB_clicked();

    void on_btn_LSC_clicked();

    void on_btn_PDAFDCC_clicked();

    void on_btn_PDAF2D_clicked();

private:
    Ui::EepromConfig *ui;
    EepromslaveInfoConfig *mEepromslaveInfoConfig;
    MemoryMap *mMemoryMap;
    EepromAF *mEepromAF;
    EepromWB *mEepromWB;
    EepromLSC *mEepromLSC;
    EepromPDAFDCC *mEepromPDAFDCC;
    EepromPDAF2D *mEepromPDAF2D;
};

#endif // EEPROMCONFIG_H
