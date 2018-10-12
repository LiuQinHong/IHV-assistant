#include "pdafconfig.h"
#include "ui_pdafconfig.h"
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <QIODevice>
#include <QTextStream>
#include <QMessageBox>

PdafConfig::PdafConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PdafConfig)
{
    ui->setupUi(this);
    ui->le_PDStatsDataType->setText("PDType2");
}

PdafConfig::~PdafConfig()
{
    delete ui;
}

int PdafConfig::generatePdafFileForNew(const QString &outPutBasePath)
{
    QString fileName;
    QString tmpStr = outPutBasePath;
    QDir dir(outPutBasePath);
    dir.mkpath("sensor");


#ifdef Q_OS_WIN
    tmpStr +="\\sensor\\";
#endif

#ifdef Q_OS_LINUX
    tmpStr +="/sensor/";
#endif

    fileName = QString("%1.xml").arg(ui->le_PDAFName->text());
    tmpStr += fileName;
    QFile outFile(tmpStr);
    if (!outFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug()<<"open "<<tmpStr<<"error !";
        return -1;
    }

    QTextStream fileOutPut(&outFile);
    tmpStr = QString(PDAF_HEAD).arg(QDateTime::currentDateTime().toString("yyyy"));
    tmpStr += QString(PDAF_INFO).arg(ui->le_PDAFName->text())
                                .arg(ui->le_PDStatsDataType->text());

    if(ui->select_type1->isChecked()){
         tmpStr += QString(PDAF_TYPE).arg("PDType1");
         tmpStr += QString(PDAF_TYPE1);
    }
    else if(ui->select_type2->isChecked()){
        tmpStr += QString(PDAF_TYPE).arg("PDType2");
        tmpStr += QString(PDAF_TYPE2);
    }
    else if(ui->select_type3->isChecked()){
        tmpStr += QString(PDAF_TYPE).arg("PDType3");
        tmpStr += QString(PDAF_TYPE3);
    }
    else if(ui->select_PDType2PD->isChecked()){
        tmpStr += QString(PDAF_TYPE).arg("PDType2PD");
        tmpStr += QString(PDAF_PDTYPE2PD);
    }
    else
        QMessageBox::warning(this, tr("warning"), tr("please select <PD type>"), QMessageBox::Yes, QMessageBox::Yes);

    fileOutPut << tmpStr;

    outFile.close();
    return 0;
}

