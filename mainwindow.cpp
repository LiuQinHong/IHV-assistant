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
}

MainWindow::~MainWindow()
{
    delete mSensorConfig;
    delete mEepromConfig;
    delete mActuatorConfig;
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




/* report */
void MainWindow::on_btn_report_clicked()
{

}

/* cancel */
void MainWindow::on_btn_cancel_clicked()
{
    close();
}
