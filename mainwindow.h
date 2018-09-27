#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sensor/sensorconfig.h>
#include <eeprom/eepromconfig.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_sensor_configure_clicked();

    void on_btn_eeprom_configure_clicked();

    void on_btn_report_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::MainWindow *ui;
    SensorConfig *mSensorConfig;
    EepromConfig *mEepromConfig;
};

#endif // MAINWINDOW_H
