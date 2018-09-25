#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sensor/sensorconfig.h>

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

private:
    Ui::MainWindow *ui;
    SensorConfig *mSensorConfig;
};

#endif // MAINWINDOW_H
