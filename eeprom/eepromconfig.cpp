#include "eepromconfig.h"
#include "ui_eepromconfig.h"
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <QIODevice>
#include <QTextStream>

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


int EepromConfig::generateEepromFileForNew(const QString& outPutBasePath)
{
    QString fileName;
    QString tmpStr = outPutBasePath;
    QDir dir(outPutBasePath);
    dir.mkpath("eeprom");


#ifdef Q_OS_WIN
    tmpStr +="\\eeprom\\";
#endif

#ifdef Q_OS_LINUX
    tmpStr +="/eeprom/";
#endif

    fileName = QString("%1_eeprom.xml").arg(mEepromslaveInfoConfig->getEepromName());
    tmpStr += fileName;
    QFile outFile(tmpStr);
    if (!outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug()<<"open "<<tmpStr<<"error !";
        return -1;
    }

    QTextStream fileOutPut(&outFile);
    tmpStr = QString(EEPROM_HEAD).arg(QDateTime::currentDateTime().toString("yyyy"));

    mEepromslaveInfoConfig->writeText(tmpStr);
    mMemoryMap->writeText(tmpStr);

    mEepromAF->writeText(tmpStr, ui->isSupportAF->isChecked());
    mEepromWB->writeText(tmpStr, ui->isSupportWB->isChecked());
    mEepromLSC->writeText(tmpStr, ui->isSupportLSC->isChecked());
    tmpStr += QString(EEPROM_DUAL_CAMERA);
    tmpStr += QString(EEPROM_SPC);
    mEepromPDAFDCC->writeText(tmpStr, ui->isSupportPDAFDCC->isChecked());
    mEepromPDAF2D->writeText(tmpStr, ui->isSupportPDAF2D->isChecked());
    tmpStr += QString(EEPROM_END);

    fileOutPut << tmpStr;

    outFile.close();
    return 0;
}


int EepromConfig::generateEepromFileForOld(const QString& outPutBasePath)
{
    return 0;
}
