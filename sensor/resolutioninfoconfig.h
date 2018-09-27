#ifndef RESOLUTIONINFOCONFIG_H
#define RESOLUTIONINFOCONFIG_H

#include <QWidget>

namespace Ui {
class ResolutionInfoConfig;
}

class ResolutionInfoConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ResolutionInfoConfig(QWidget *parent = 0);
    ~ResolutionInfoConfig();

private slots:
    void on_resSettings_load_clicked();

    void on_resSettings_load_2_clicked();

    void on_resSettings_load_3_clicked();

    void on_resSettings_load_4_clicked();

    void on_resSettings_load_5_clicked();

private:
    Ui::ResolutionInfoConfig *ui;
};

#endif // RESOLUTIONINFOCONFIG_H
