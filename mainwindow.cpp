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
}

MainWindow::~MainWindow()
{
    delete mSensorConfig;
    delete mEepromConfig;
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


/* report */
void MainWindow::on_btn_report_clicked()
{

}

/* cancel */
void MainWindow::on_btn_cancel_clicked()
{
    close();
}


