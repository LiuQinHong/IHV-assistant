#include "actuatorconfig.h"
#include "ui_actuatorconfig.h"
#include <QFileDialog>

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
