#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("IHV assistant"));
    setWindowIcon(QIcon(":/images/icon"));

    mSensorConfig = new SensorConfig();
    mEepromConfig = new EepromConfig();
    mActuatorConfig = new ActuatorConfig();
    mPdafConfig = new PdafConfig();
    mModuleConfig = new ModuleConfig();
}

MainWindow::~MainWindow()
{
    delete mSensorConfig;
    delete mEepromConfig;
    delete mActuatorConfig;
    delete mPdafConfig;
    delete mModuleConfig;
    delete ui;
}


/* sensor config */
void MainWindow::on_btn_sensor_configure_clicked()
{
    if (mSensorConfig->isVisible()) {
        mSensorConfig->close();
        return;
    }
    mSensorConfig->show();
}

/* eeprom config */
void MainWindow::on_btn_eeprom_configure_clicked()
{
    if (mEepromConfig->isVisible()) {
        mEepromConfig->close();
        return;
    }
    mEepromConfig->show();
}

/* actuator config */
void MainWindow::on_btn_actuator_configure_clicked()
{
    if (mActuatorConfig->isVisible()) {
        mActuatorConfig->close();
        return;
    }
    mActuatorConfig->show();
}

/* pdaf config */
void MainWindow::on_btn_pdaf_configure_clicked()
{
    if (mPdafConfig->isVisible()) {
        mPdafConfig->close();
        return;
    }
    mPdafConfig->show();
}

/* module config */
void MainWindow::on_btn_module_configure_clicked()
{
    if (mModuleConfig->isVisible()) {
        mModuleConfig->close();
        return;
    }
    mModuleConfig->show();
}

/* report */
void MainWindow::on_btn_report_clicked()
{

}

/* cancel */
void MainWindow::on_btn_cancel_clicked()
{
    close();
}


/* GCDB check */
void MainWindow::on_btn_check_clicked()
{

}

/* GCDB cancel */
void MainWindow::on_btn_cancel_gcdb_clicked()
{
    close();
}
