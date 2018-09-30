#include "actuatorconfig.h"
#include "ui_actuatorconfig.h"
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <QIODevice>
#include <QTextStream>

ActuatorConfig::ActuatorConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ActuatorConfig)
{
    ui->setupUi(this);
}

ActuatorConfig::~ActuatorConfig()
{
    delete ui;
}

void ActuatorConfig::on_btn_load_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->le_initSettings->setText(path);
}


int ActuatorConfig::generateActuatorFileForNew(const QString& outPutBasePath)
{
    QString fileName;
    QString tmpStr = outPutBasePath;
    QDir dir(outPutBasePath);
    dir.mkpath("actuator/default/");


#ifdef Q_OS_WIN
    tmpStr +="\\actuator\default\\";
#endif

#ifdef Q_OS_LINUX
    tmpStr +="/actuator/default/";
#endif


    fileName = QString("%1_actuator.xml").arg(ui->le_actuatorName->text());
    tmpStr += fileName;
    QFile outFile(tmpStr);
    if (!outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug()<<"open "<<tmpStr<<"error !";
        return -1;
    }

    QTextStream fileOutPut(&outFile);
    tmpStr = QString(ACTUATOR_HEAD).arg(QDateTime::currentDateTime().toString("yyyy"));
    tmpStr += QString(ACTUATOR_SLAVEINFO)
            .arg(ui->le_actuatorName->text())
            .arg(ui->le_slaveAddress->text())
            .arg(ui->le_actuatorType->text());
    tmpStr += QString(ACTUATOR_REGISTER_CONFIG)
            .arg(ui->le_registerAddr->text())
            .arg(ui->le_hwMask->text())
            .arg(ui->le_dataShift->text());
    tmpStr += QString(ACTUATOR_REGISTER_INITSETTING_HEAD);

    /* load initsetting */
    QFile initSettingFile(ui->le_initSettings->text());
    if (!initSettingFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"open "<<ui->le_initSettings->text()<<"error !";
        return -1;
    }
    QTextStream textInitSetting(&initSettingFile);
    QString lineStr;
    QString registerAddr;
    QString registerData;
    QString operation;
    QString delayUs;

    while (!textInitSetting.atEnd()) {
        /* {0xFFFF,0xFFFF,WRITE,0x0000} */
        lineStr = textInitSetting.readLine();
        registerAddr = lineStr.section(QRegExp(QString("[{,}]")), 0, 0);  //get registerAddr str
        registerData = lineStr.section(QRegExp(QString("[{,}]")), 1, 1);  //get registerData str
        operation = lineStr.section(QRegExp(QString("[{,}]")), 2, 2);  //get operation str
        delayUs = lineStr.section(QRegExp(QString("[{,}]")), 3, 3);  //get delayUs str

        tmpStr += QString(ACTUATOR_REGISTER_INITSETTING)
                .arg(registerAddr)
                .arg(registerData)
                .arg(operation)
                .arg(delayUs);
    }
    initSettingFile.close();

    tmpStr += QString(ACTUATOR_REGISTER_INITSETTING_END);
    tmpStr += QString(ACTUATOR_END);

    fileOutPut << tmpStr;

    outFile.close();
    return 0;
}


int ActuatorConfig::generateActuatorFileForOld(const QString& outPutBasePath)
{
    return 0;
}
