#include "resolutioninfoconfig.h"
#include "ui_resolutioninfoconfig.h"
#include <QFileDialog>

ResolutionInfoConfig::ResolutionInfoConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResolutionInfoConfig)
{
    ui->setupUi(this);
}

ResolutionInfoConfig::~ResolutionInfoConfig()
{
    delete ui;
}

/* fullsize setting */
void ResolutionInfoConfig::on_resSettings_load_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->resSettings->setText(path);
}

/* 1/4 fullsize setting */
void ResolutionInfoConfig::on_resSettings_load_2_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->resSettings_2->setText(path);

}

/* 60fps setting */
void ResolutionInfoConfig::on_resSettings_load_3_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->resSettings_3->setText(path);

}

/* 90fps setting */
void ResolutionInfoConfig::on_resSettings_load_4_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->resSettings_4->setText(path);

}

/* 120fps setting */
void ResolutionInfoConfig::on_resSettings_load_5_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt)"));
    ui->resSettings_5->setText(path);

}
