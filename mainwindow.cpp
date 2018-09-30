#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>

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

    if (!ui->isSupportSensor->isChecked() &&
        !ui->isSupportEeprom->isChecked() &&
        !ui->isSupportActuator->isChecked() &&
        !ui->isSupportPdaf->isChecked() &&
        !ui->isSupportModule->isChecked()) {
        QMessageBox::warning(this, tr("warning"), tr("please select <sensor|eeprom|actuator|pdaf|module>"), QMessageBox::Yes, QMessageBox::Yes);
        return;
    }

    if (ui->le_output_dir->text().isEmpty()) {
        QMessageBox::warning(this, tr("warning"), tr("please select <output dir>"), QMessageBox::Yes, QMessageBox::Yes);
        return;
    }

    if (!ui->selectNewPlatform->isChecked() &&
        !ui->selectOldPlatform->isChecked()) {
        QMessageBox::warning(this, tr("warning"), tr("please select <NewPlatform|OldPlatform>"), QMessageBox::Yes, QMessageBox::Yes);
        return;
    }

    /* new platfrom */
    if (ui->selectNewPlatform->isChecked()) {
        if (ui->isSupportActuator->isChecked()) {
            mActuatorConfig->generateActuatorFileForNew(ui->le_output_dir->text());
        }

        if (ui->isSupportEeprom->isChecked()) {
            mEepromConfig->generateEepromFileForNew(ui->le_output_dir->text());
        }

    }

    /* old platfrom */
    if (ui->selectOldPlatform->isChecked()) {
        if (ui->isSupportActuator->isChecked()) {
            mActuatorConfig->generateActuatorFileForOld(ui->le_output_dir->text());
        }

        if (ui->isSupportEeprom->isChecked()) {
            mEepromConfig->generateEepromFileForOld(ui->le_output_dir->text());
        }

    }

    QMessageBox::information(this, tr("succeed"), tr("report succeed"), QMessageBox::Yes, QMessageBox::Yes);
}

/* cancel */
void MainWindow::on_btn_cancel_clicked()
{
    int iRet;

    iRet = QMessageBox::warning(this, tr("warning"), tr("Are you sure you want to exit the application?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if (iRet == QMessageBox::Yes) {
        delete mSensorConfig;
        delete mEepromConfig;
        delete mActuatorConfig;
        delete mPdafConfig;
        delete mModuleConfig;
        close();
    }
}


/* GCDB check */
void MainWindow::on_btn_check_clicked()
{

}

/* GCDB cancel */
void MainWindow::on_btn_cancel_gcdb_clicked()
{
    QMessageBox::warning(this, tr("warning"), tr("please select <NewPlatform|OldPlatform>"), QMessageBox::Yes, QMessageBox::Yes);
    close();
}

void MainWindow::on_btn_select_dir_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("select output dir"), "./");
    ui->le_output_dir->setText(path);
}
