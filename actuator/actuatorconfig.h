#ifndef ACTUATORCONFIG_H
#define ACTUATORCONFIG_H

#include <QWidget>


#define ACTUATOR_HEAD "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"\
        "<!--========================================================================-->\n"\
        "<!-- Copyright (c) %1 Qualcomm Technologies, Inc.                         -->\n"\
        "<!-- All Rights Reserved.                                                   -->\n"\
        "<!-- Confidential and Proprietary - Qualcomm Technologies, Inc.             -->\n"\
        "<!--========================================================================-->\n"\
        "<actuatorDriver\n"\
        "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n"\
        "  xsi:noNamespaceSchemaLocation=\"../../../cdk/sensor/camxactuatordriver.xsd\">\n"\
        "  <module_version major_revision=\"1\" minor_revision=\"0\" incr_revision=\"0\"/>\n"\
        "  <!--Actuator slave information -->\n"



#define ACTUATOR_SLAVEINFO "  <slaveInfo>\n"\
        "    <!--Name of  the actuator -->\n"\
        "    <actuatorName>%1</actuatorName>\n"\
        "    <!--8-bit or 10-bit write slave address 0x1C-->\n"\
        "    <slaveAddress>%2</slaveAddress>\n"\
        "    <!--I2C frequency mode of slave\n"\
        "        Supported modes are: STANDARD (100 KHz), FAST (400 KHz), FAST_PLUS (1 MHz), CUSTOM (Custom frequency in DTSI) -->\n"\
        "    <i2cFrequencyMode>FAST</i2cFrequencyMode>\n"\
        "    <!--Actuator type Supported types are: VCM, BIVCM -->\n"\
        "    <actuatorType>%3</actuatorType>\n"\
        "    <!--Data width in bits -->\n"\
        "    <dataBitWidth>10</dataBitWidth>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerUpSequence>\n"\
        "      <!--Power setting configuration\n"\
        "          Contains: configType, configValue and delay in milli seconds -->\n"\
        "      <powerSetting>\n"\
        "        <!--Power configuration type\n"\
        "            Supported types are: MCLK, VANA, VDIG, VIO, VAF, RESET, STANDBY -->\n"\
        "        <configType>MCLK</configType>\n"\
        "        <!--Configuration value for the type of configuration -->\n"\
        "        <configValue>0</configValue>\n"\
        "        <!--Delay in milli seconds -->\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerUpSequence>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerDownSequence>\n"\
        "      <!--Power setting configuration\n"\
        "          Contains: configType, configValue and delay in milli seconds -->\n"\
        "      <powerSetting>\n"\
        "        <!--Power configuration type\n"\
        "            Supported types are: MCLK, VANA, VDIG, VIO, VAF, RESET, STANDBY -->\n"\
        "        <configType>MCLK</configType>\n"\
        "        <!--Configuration value for the type of configuration -->\n"\
        "        <configValue>0</configValue>\n"\
        "        <!--Delay in milli seconds -->\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerDownSequence>\n"\
        "  </slaveInfo>\n"




#define ACTUATOR_REGISTER_CONFIG "  <!--Sequence of register configuration -->\n"\
        "  <registerConfig>\n"\
        "    <!--Actuator register configuration -->\n"\
        "    <registerParam>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">1</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">2</regDataType>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>%1</registerAddr>\n"\
        "      <!--Register data to be programmed -->\n"\
        "      <registerData>0</registerData>\n"\
        "      <!--Actuator operations\n"\
        "          Supported operations are: WRITE_HW_DAMP, WRITE_DAC, WRITE, WRITE_DIR_REG, POLL, READ_WRITE -->\n"\
        "      <operation>WRITE_DAC_VALUE</operation>\n"\
        "      <!--Delay in micro seconds -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "      <!--Hardware mask -->\n"\
        "      <hwMask>%2</hwMask>\n"\
        "      <!--Number of bits to shift for HW -->\n"\
        "      <hwShift>0</hwShift>\n"\
        "      <!--Number of bits to shift for data -->\n"\
        "      <dataShift>%3</dataShift>\n"\
        "    </registerParam>\n"\
        "  </registerConfig>\n"\
        "  <!--Sequence of register settings to configure the device -->\n"



#define ACTUATOR_REGISTER_INITSETTING_HEAD  "  <initSettings>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type, operation and delay in micro seconds -->\n"\

#define ACTUATOR_REGISTER_INITSETTING "    <regSetting>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>%1</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>%2</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">1</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">1</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>%3</operation>\n"\
        "      <!--Delay in micro seconds -->\n"\
        "      <delayUs>%4</delayUs>\n"\
        "    </regSetting>\n"


#define ACTUATOR_REGISTER_INITSETTING_END "  </initSettings>\n"




#define ACTUATOR_END  "  <!--Actuator tuning parameters -->\n"\
        "  <tunedParams>\n"\
        "    <!--Initial DAC code -->\n"\
        "    <initialCode>40</initialCode>\n"\
        "    <!--Actuator region parameters for all regions -->\n"\
        "    <regionParams>\n"\
        "      <!--Actuator region parameters -->\n"\
        "      <region>\n"\
        "        <!--Macro step boundary. In Near / forward direction -->\n"\
        "        <macroStepBoundary>400</macroStepBoundary>\n"\
        "        <!--Infinity step boundary. In Far / backward direction -->\n"\
        "        <infinityStepBoundary>0</infinityStepBoundary>\n"\
        "        <!--Code per step -->\n"\
        "        <codePerStep>1</codePerStep>\n"\
        "        <!--Q Value to convert float / double to integer format -->\n"\
        "        <qValue>128</qValue>\n"\
        "      </region>\n"\
        "    </regionParams>\n"\
        "    <!--Actuator scenario ringing and damping information\n"\
        "        Damping parameters in forward / near direction -->\n"\
        "    <forwardDamping>\n"\
        "      <!--Actuator ringing scenario value -->\n"\
        "      <ringingScenario>400</ringingScenario>\n"\
        "      <!--Actuator damping parameters for all scenarios -->\n"\
        "      <scenarioDampingParams>\n"\
        "        <!--Actuator damping parameters for all regions -->\n"\
        "        <scenario>\n"\
        "          <!--Actuator damping parameters -->\n"\
        "          <region>\n"\
        "            <!--Actuator damping step -->\n"\
        "            <dampingStep>0x1FF</dampingStep>\n"\
        "            <!--Actuator damping delay in micro seconds that must be applied after programming damping step -->\n"\
        "            <dampingDelayUs>7000</dampingDelayUs>\n"\
        "            <!--Actuator HW parameters -->\n"\
        "            <hwParams>0x0</hwParams>\n"\
        "          </region>\n"\
        "        </scenario>\n"\
        "      </scenarioDampingParams>\n"\
        "    </forwardDamping>\n"\
        "    <!--Actuator scenario ringing and damping information\n"\
        "        Damping parameters in backward / far direction -->\n"\
        "    <backwardDamping>\n"\
        "      <!--Actuator ringing scenario value -->\n"\
        "      <ringingScenario>400</ringingScenario>\n"\
        "      <!--Actuator damping parameters for all scenarios -->\n"\
        "      <scenarioDampingParams>\n"\
        "        <!--Actuator damping parameters for all regions -->\n"\
        "        <scenario>\n"\
        "          <!--Actuator damping parameters -->\n"\
        "          <region>\n"\
        "            <!--Actuator damping step -->\n"\
        "            <dampingStep>0x1FF</dampingStep>\n"\
        "            <!--Actuator damping delay in micro seconds that must be applied after programming damping step -->\n"\
        "            <dampingDelayUs>7000</dampingDelayUs>\n"\
        "            <!--Actuator HW parameters -->\n"\
        "            <hwParams>0x0</hwParams>\n"\
        "          </region>\n"\
        "        </scenario>\n"\
        "      </scenarioDampingParams>\n"\
        "    </backwardDamping>\n"\
        "  </tunedParams>\n"\
        "</actuatorDriver\n"


namespace Ui {
class ActuatorConfig;
}

class ActuatorConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ActuatorConfig(QWidget *parent = 0);
    ~ActuatorConfig();

    int generateActuatorFileForNew(const QString& outPutBasePath);
    int generateActuatorFileForOld(const QString& outPutBasePath);

private slots:
    void on_btn_load_clicked();

private:
    Ui::ActuatorConfig *ui;
};

#endif // ACTUATORCONFIG_H
