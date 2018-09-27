#ifndef ACTUATORCONFIG_H
#define ACTUATORCONFIG_H

#include <QWidget>

namespace Ui {
class ActuatorConfig;
}

class ActuatorConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ActuatorConfig(QWidget *parent = 0);
    ~ActuatorConfig();

private slots:
    void on_btn_load_clicked();

private:
    Ui::ActuatorConfig *ui;
};

#endif // ACTUATORCONFIG_H
