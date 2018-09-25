#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("IHV assistant"));
    setWindowIcon(QIcon(":/images/icon"));

    mSensorConfig = NULL;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btn_sensor_configure_clicked()
{
    if (mSensorConfig == NULL) {
        mSensorConfig = new SensorConfig();
    }

    mSensorConfig->show();
}
