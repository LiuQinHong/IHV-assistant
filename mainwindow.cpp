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
}

MainWindow::~MainWindow()
{
    delete mSensorConfig;
    delete ui;
}



void MainWindow::on_btn_sensor_configure_clicked()
{
    if (mSensorConfig->isVisible()) {
        mSensorConfig->close();
        goto done;
    }
    mSensorConfig->show();
done:
    return;
}
