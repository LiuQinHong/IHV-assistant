#include "eepromconfig.h"
#include "ui_eepromconfig.h"

EepromConfig::EepromConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EepromConfig)
{
    ui->setupUi(this);

    mEepromslaveInfoConfig = new EepromslaveInfoConfig();
    mMemoryMap = new MemoryMap();
    mEepromAF = new EepromAF();
    mEepromWB = new EepromWB();
    mEepromLSC = new EepromLSC();
    mEepromPDAFDCC = new EepromPDAFDCC();
    mEepromPDAF2D = new EepromPDAF2D();

    setWindowTitle(tr("eepron config"));
    setWindowIcon(QIcon(":/images/icon"));
}

EepromConfig::~EepromConfig()
{
    delete mEepromslaveInfoConfig;
    delete mMemoryMap;
    delete mEepromAF;
    delete mEepromWB;
    delete mEepromLSC;
    delete mEepromPDAFDCC;
    delete mEepromPDAF2D;
    delete ui;
}

int EepromConfig::generateEepromFile()
{

}


void EepromConfig::on_btn_slaveInfo_clicked()
{
    if (mEepromslaveInfoConfig->isVisible()) {
        mEepromslaveInfoConfig->close();
        return;
    }
    mEepromslaveInfoConfig->show();
}

void EepromConfig::on_btn_memoryMap_clicked()
{
    if (mMemoryMap->isVisible()) {
        mMemoryMap->close();
        return;
    }

    mMemoryMap->show();
}

void EepromConfig::on_btn_AF_clicked()
{
    if (mEepromAF->isVisible()) {
        mEepromAF->close();
        return;
    }

    mEepromAF->show();
}

void EepromConfig::on_btn_WB_clicked()
{
    if (mEepromWB->isVisible()) {
        mEepromWB->close();
        return;
    }

    mEepromWB->show();
}

void EepromConfig::on_btn_LSC_clicked()
{
    if (mEepromLSC->isVisible()) {
        mEepromLSC->close();
        return;
    }

    mEepromLSC->show();
}

void EepromConfig::on_btn_PDAFDCC_clicked()
{
    if (mEepromPDAFDCC->isVisible()) {
        mEepromPDAFDCC->close();
        return;
    }

    mEepromPDAFDCC->show();
}

void EepromConfig::on_btn_PDAF2D_clicked()
{
    if (mEepromPDAF2D->isVisible()) {
        mEepromPDAF2D->close();
        return;
    }

    mEepromPDAF2D->show();
}
