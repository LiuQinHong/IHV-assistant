#include "moduleconfig.h"
#include "ui_moduleconfig.h"
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <QIODevice>
#include <QTextStream>

ModuleConfig::ModuleConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModuleConfig)
{
    ui->setupUi(this);
    ui->le_cameraId->setText("0");
    ui->le_position->setText("REAR");
}

ModuleConfig::~ModuleConfig()
{
    delete ui;
}

int ModuleConfig::generateModuleFileForNew(const QString &outPutBasePath)
{
    QString fileName;
    QString tmpStr = outPutBasePath;
    QDir dir(outPutBasePath);
    dir.mkpath("module");


#ifdef Q_OS_WIN
    tmpStr +="\\module\\";
#endif

#ifdef Q_OS_LINUX
    tmpStr +="/module/";
#endif

    fileName = QString("%1_%2_module.xml").arg(ui->le_moduleName->text())
                                          .arg(ui->le_sensorName->text());
    tmpStr += fileName;
    QFile outFile(tmpStr);
    if (!outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug()<<"open "<<tmpStr<<"error !";
        return -1;
    }

    QTextStream fileOutPut(&outFile);
    tmpStr = QString(MODULE_HEAD).arg(QDateTime::currentDateTime().toString("yyyy"));
    tmpStr += QString(MODULE_INFO).arg(ui->le_cameraId->text())
                                .arg(ui->le_moduleName->text())
                                .arg(ui->le_sensorName->text())
                                .arg(ui->le_actuatorName->text())
                                .arg(ui->le_eepromName->text())
                                .arg(ui->le_chromatixName->text())
                                .arg(ui->le_position->text())
                                .arg(ui->le_pdafName->text());
    fileOutPut << tmpStr;

    outFile.close();
    return 0;
}
