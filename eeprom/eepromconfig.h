#ifndef EEPROMCONFIG_H
#define EEPROMCONFIG_H

#include <QWidget>
#include <eeprom/eepromslaveinfoconfig.h>
#include <eeprom/memorymap.h>
#include <eeprom/eepromaf.h>
#include <eeprom/eepromwb.h>
#include <eeprom/eepromlsc.h>
#include <eeprom/eeprompdafdcc.h>
#include <eeprom/eeprompdaf2d.h>


#define EEPROM_HEAD "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"\
        "<!--\n"\
        "========================================================================\n"\
        "   Copyright(c) %1 Qualcomm Technologies, Inc.\n"\
        "   All Rights Reserved.\n"\
        "   Confidential and Proprietary - Qualcomm Technologies, Inc.\n"\
        "========================================================================\n"\
        "-->\n"\
        "<EEPROMDriverData\n"\
        "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n"\
        "  xsi:noNamespaceSchemaLocation=\"../../cdk/sensor/camxeepromdriver.xsd\">\n"\
        "  <module_version major_revision=\"1\" minor_revision=\"0\" incr_revision=\"0\"/>\n"\
        "  <!--EEPROM slave information\n"\
        "       element for EEPROMName\n"\
        "       element for slaveAddress\n"\
        "       elemet for regAddrType\n"\
        "       element for regDataType\n"\
        "       element for I2CFrequencyMode\n"\
        "       element for power up sequence\n"\
        "       element for power down sequence  -->\n"


#define EEPROM_SLAVEINFO "  <slaveInfo description=\"EEPROM Slave Information\">\n"\
        "    <!--Name of the EEPROM device -->\n"\
        "    <EEPROMName>%1</EEPROMName>\n"\
        "    <!--8-bit or 10-bit I2C slave Write address -->\n"\
        "    <slaveAddress>%2</slaveAddress>\n"\
        "    <!--Register address / data size in bytes -->\n"\
        "    <regAddrType range=\"[1,4]\">%3</regAddrType>\n"\
        "    <!--Register address / data size in bytes -->\n"\
        "    <regDataType range=\"[1,4]\">%4</regDataType>\n"\
        "    <!--I2C frequency mode of slave\n"\
        "        Supported modes are: STANDARD (100 KHz), FAST (400 KHz), FAST_PLUS (1 MHz), CUSTOM (Custom frequency in DTSI) -->\n"\
        "    <i2cFrequencyMode>FAST</i2cFrequencyMode>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerUpSequence>\n"\
        "      <!--Power setting configuration\n"\
        "          Contains: configType, configValue and delay in milli seconds -->\n"\
        "      <powerSetting>\n"\
        "        <!--Power configuration type\n"\
        "            Supported types are: MCLK, VANA, VDIG, VIO, VAF, RESET, STANDBY -->\n"\
        "        <configType>VIO</configType>\n"\
        "        <!--Configuration value for the type of configuration -->\n"\
        "        <configValue>0</configValue>\n"\
        "        <!--Delay in milli seconds -->\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerUpSequence>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerDownSequence>\n"\
        "      <!--Power setting configuration\n"\
        "          Contains: configType, configValue and delay in milli seconds -->\n"\
        "      <powerSetting>\n"\
        "        <!--Power configuration type\n"\
        "            Supported types are: MCLK, VANA, VDIG, VIO, VAF, RESET, STANDBY -->\n"\
        "        <configType>VIO</configType>\n"\
        "        <!--Configuration value for the type of configuration -->\n"\
        "        <configValue>0</configValue>\n"\
        "        <!--Delay in milli seconds -->\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerDownSequence>\n"\
        "  </slaveInfo>\n"\
        "  <!--Sequence of register settings to configure the device -->\n"\

#define EEPROM_MEMORYMAP "  <memoryMap>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type,\n"\
        "        operation and delay in micro seconds\n"\
        "         element for slaveAddr\n"\
        "         element for registerAddr\n"\
        "         element for registerData\n"\
        "         element for regAddrType\n"\
        "         element for regDataType\n"\
        "         element for operation\n"\
        "         element for delayUs  -->\n"\
        "    <regSetting>\n"\
        "      <!--Slave address to communicate withe the device -->\n"\
        "      <slaveAddr>%1</slaveAddr>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>%2</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>%3</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">%4</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">%5</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>READ</operation>\n"\
        "      <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "    </regSetting>\n"\
        "  </memoryMap>\n"\



#define EEPROM_AF "  <!--EEPROM data format information\n"\
        "       element for auto focus information\n"\
        "       element for white balance information\n"\
        "       element for lens shading information\n"\
        "       element for dual camera information\n"\
        "       element for shield pixel information\n"\
        "       element for PDAF DCC information\n"\
        "       element for pdaf 2D information  -->\n"\
        "  <formatInfo description=\"EEPROM Data Format Information\">\n"\
        "    <!--Specifies auto focus data information to format the OTP data\n"\
        "         element for AF data availablity and endian\n"\
        "         element for macro information\n"\
        "         element for infinity information\n"\
        "         element for hall information\n"\
        "         element for hall bias information\n"\
        "         element for vertical macro information\n"\
        "         element for vertical infinity information\n"\
        "         element for horizontal macro information\n"\
        "         element for horizontal infinity\n"\
        "         element for macro margin value information\n"\
        "         element for infinity margin value  -->\n"\
        "    <AF>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <autoFocusData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>%4</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>%1</endianness>\n"\
        "      </autoFocusData>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <macro>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%2</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </macro>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <infinity>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%3</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </infinity>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <hall>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </hall>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <hallBias>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </hallBias>\n"\
        "      <!--Hall register address to update with calibrated data -->\n"\
        "      <hallRegisterAddr>0</hallRegisterAddr>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <verticalMacro>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </verticalMacro>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <verticalInfinity>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </verticalInfinity>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <horizontalMacro>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </horizontalMacro>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <horizontalInfinity>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </horizontalInfinity>\n"\
        "      <!--Margin value to extend towards macro region -->\n"\
        "      <macroMargin>0.2</macroMargin>\n"\
        "      <!--margin value to extend towards infinity region -->\n"\
        "      <infinityMargin>-0.1</infinityMargin>\n"\
        "      <!--lens sag in macro calibration -->\n"\
        "      <lensSagCalMac>DEFAULT</lensSagCalMac>\n"\
        "      <!--lens sag in infinity calibration -->\n"\
        "      <lensSagCalInf>DEFAULT</lensSagCalInf>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <otpGravityOfs0to90>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </otpGravityOfs0to90>\n"\
        "       <!--Specifies memory offset value and mask information -->\n"\
        "      <otpGravityOfs90to180>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </otpGravityOfs90to180>\n"\
        "      <!--average value of gravity offset from 0 to 90 -->\n"\
        "      <avgGravityOfs0to90>0</avgGravityOfs0to90>\n"\
        "      <!--average value of gravity offset from 90 to 180 -->\n"\
        "      <avgGravityOfs90to180>0</avgGravityOfs90to180>\n"\
        "    </AF>\n"


#define EEPROM_WB "    <!--Specifies white balance data information to format the OTP data\n"\
        "         element for WB data availablity and endian\n"\
        "         element for WBType information\n"\
        "         element for WB light information\n"\
        "         element for mirror information\n"\
        "         element for flip information\n"\
        "         element for qValue information\n"\
        "         element for isInvertGROverGB information  -->\n"\
        "    <WB>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <WBData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>%11</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>%1</endianness>\n"\
        "      </WBData>\n"\
        "      <!--Type of the white balance data\n"\
        "          Valid values are: INDIVIDUAL, RATIO -->\n"\
        "      <datatype>%2</datatype>\n"\
        "      <!--whitebalance information for a particular light type\n"\
        "           element for light type\n"\
        "           element for R value information\n"\
        "           element for gr Value information\n"\
        "           element for b Value information\n"\
        "           element for gb Value information\n"\
        "           element for rOverG Value information\n"\
        "           element for bOverG Value information\n"\
        "           element for grOverGB Value information  -->\n"\
        "      <lightInfo description=\"White balance light Information\">\n"\
        "        <!--Type of the illuminant\n"\
        "            Supported illuminants are D65, TL84, A, D50 and H -->\n"\
        "        <illuminantType>D65</illuminantType>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <rValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%3</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </rValue>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <grValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%4</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </grValue>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <gbValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%5</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </gbValue>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <bValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%6</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </bValue>\n"\
        "		  <!--Specifies memory offset value and mask information -->\n"\
        "        <rOverGValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%7</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </rOverGValue>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <bOverGValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%8</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </bOverGValue>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <grOverGBValue>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%9</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFFFF</mask>\n"\
        "        </grOverGBValue>\n"\
        "      </lightInfo>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <mirror>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </mirror>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <flip>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </flip>\n"\
        "      <!--Q value -->\n"\
        "      <qValue>%10</qValue>\n"\
        "      <!--Set to TRUE if GRoverGB needs to be inverted -->\n"\
        "      <isInvertGROverGB>false</isInvertGROverGB>\n"\
        "    </WB>\n"



#define EEPROM_LSC "    <!--Specifies LSC data information to format the OTP data\n"\
        "         element for LSC data availablity and endian\n"\
        "         element for LSC light information\n"\
        "         element for mesh HW roll off size information\n"\
        "         element for incrimenting value for obtaing R value information\n"\
        "         element for incrimenting value for obtaing GR value information\n"\
        "         element for incrimenting value for obtaing GB value information\n"\
        "         element for incrimenting value for obtaing B value information  -->\n"\
        "    <LSC>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <LSCData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>%15</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>%1</endianness>\n"\
        "      </LSCData>\n"\
        "      <!--Lens shading information for a particular rolloff light\n"\
        "           element for light type\n"\
        "           element for MSB part of the R gain value information\n"\
        "           element for LSB part of the R gain value information\n"\
        "           element for MSB part of the gr gain value information\n"\
        "           element for LSB part of the gr gain value information\n"\
        "           element for MSB part of the gb gain value information\n"\
        "           element for LSB part of the gb gain value information\n"\
        "           element for MSB part of the b gain value information\n"\
        "           element for LSB part of the b gain value information  -->\n"\
        "      <lightInfo description=\"Lens shading light information\">\n"\
        "        <!--Type of the illuminant\n"\
        "            Supported illuminants are D65, TL84, A, D50 and H -->\n"\
        "        <illuminantType>D65</illuminantType>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <rGainMSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%2</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </rGainMSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <rGainLSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%3</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </rGainLSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <grGainMSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%4</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </grGainMSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <grGainLSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%5</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </grGainLSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <gbGainMSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%6</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </gbGainMSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <gbGainLSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%7</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </gbGainLSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <bGainMSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%8</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </bGainMSB>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <bGainLSB>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>%9</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0xFF</mask>\n"\
        "        </bGainLSB>\n"\
        "      </lightInfo>\n"\
        "      <!--mesh HW rolloff size -->\n"\
        "      <meshHWRollOffSize>%10</meshHWRollOffSize>\n"\
        "      <!--position of the next R value from the current R -->\n"\
        "      <rIncrement>%11</rIncrement>\n"\
        "      <!--position of the next GR value from the current GR -->\n"\
        "      <grIncrement>%12</grIncrement>\n"\
        "      <!--position of the next GB value from the current GB -->\n"\
        "      <gbIncrement>%13</gbIncrement>\n"\
        "      <!--position of the next B value from the current B -->\n"\
        "      <bIncrement>%14</bIncrement>\n"\
        "    </LSC>\n"



#define EEPROM_DUAL_CAMERA "    <!--Specifies dual camera data information to format the OTP data\n"\
        "         element for dual camera data availablity and endian\n"\
        "         element for offset address of the dual camera data\n"\
        "         element for size of the dual camera data information\n"\
        "         element for master sensor information\n"\
        "         element for aux sensor information\n"\
        "         element for dual camera system information  -->\n"\
        "    <dualCamera>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <DualCameraData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>false</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>BIG</endianness>\n"\
        "      </DualCameraData>\n"\
        "      <!--offset value to locate dual camera data -->\n"\
        "      <offset>0</offset>\n"\
        "      <!--size of the dual camera settings -->\n"\
        "      <settingsize>0</settingsize>\n"\
        "      <!--Specifies lens information to format the dual camera data\n"\
        "           element for focal length information\n"\
        "           element for focal length ratio information\n"\
        "           element for native sensor resolution width information\n"\
        "           element for native sensor resolution height information\n"\
        "           element for calibration resolution width information\n"\
        "           element for incrimenting value for obtaing B value information  -->\n"\
        "      <masterInfo>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <focalLength>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </focalLength>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <focalLengthRatio>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </focalLengthRatio>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <nativeSensorResolutionWidth>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </nativeSensorResolutionWidth>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <nativeSensorResolutionHeight>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </nativeSensorResolutionHeight>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <calibrationResolutionWidth>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </calibrationResolutionWidth>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <calibrationResolutionHeight>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </calibrationResolutionHeight>\n"\
        "      </masterInfo>\n"\
        "      <!--Specifies lens information to format the dual camera data\n"\
        "           element for focal length information\n"\
        "           element for focal length ratio information\n"\
        "           element for native sensor resolution width information\n"\
        "           element for native sensor resolution height information\n"\
        "           element for calibration resolution width information\n"\
        "           element for incrimenting value for obtaing B value information  -->\n"\
        "      <auxInfo>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <focalLength>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </focalLength>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <focalLengthRatio>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </focalLengthRatio>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <nativeSensorResolutionWidth>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </nativeSensorResolutionWidth>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <nativeSensorResolutionHeight>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </nativeSensorResolutionHeight>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <calibrationResolutionWidth>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </calibrationResolutionWidth>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <calibrationResolutionHeight>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </calibrationResolutionHeight>\n"\
        "      </auxInfo>\n"\
        "      <!--Specifies dural camera system information to format the dual camera data\n"\
        "           element for calibration format version information\n"\
        "           element for rotation matrix size information\n"\
        "           element for relative rotation matrix offset information\n"\
        "           element for geometric matrix size information\n"\
        "           element for relative geometric surface parameters offset information\n"\
        "           element for relative principle point X information\n"\
        "           element for relative principle point Y information\n"\
        "           element for relative position flag information\n"\
        "           element for relative baseline distance information\n"\
        "           element for master sensor mirror flip setting information\n"\
        "           element for auxilary sensor mirror flip setting information\n"\
        "           element for module orientation flag information\n"\
        "           element for rotation flag information  -->\n"\
        "      <systemInfo>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <calibrationFormatVersion>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </calibrationFormatVersion>\n"\
        "        <!--size of the rotation matrix -->\n"\
        "        <rotationMatrixSize>0</rotationMatrixSize>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativeRotationMatrixOffset>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativeRotationMatrixOffset>\n"\
        "        <!--size of the geometric matrix -->\n"\
        "        <geometricMatrixSize>0</geometricMatrixSize>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativeGeometricSurfaceParametersOffset>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativeGeometricSurfaceParametersOffset>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativePrinciplePointX>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativePrinciplePointX>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativePrinciplePointY>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativePrinciplePointY>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativePositionFlag>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativePositionFlag>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <relativeBaselineDistance>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </relativeBaselineDistance>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <masterSensorMirrorFlipSetting>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </masterSensorMirrorFlipSetting>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <auxSensorMirrorFlipSetting>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </auxSensorMirrorFlipSetting>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <moduleOrientationFlag>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </moduleOrientationFlag>\n"\
        "        <!--Specifies memory offset value and mask information -->\n"\
        "        <rotationFlag>\n"\
        "          <!--Offset value in the OTP memory -->\n"\
        "          <offset>0</offset>\n"\
        "          <!--mask value which will be applied to obtain required data bits -->\n"\
        "          <mask>0</mask>\n"\
        "        </rotationFlag>\n"\
        "      </systemInfo>\n"\
        "    </dualCamera>\n"



#define EEPROM_SPC "    <!--Specifies shield pixel correction data information to format the OTP data\n"\
        "         element for SPC data availablity and endian\n"\
        "         element for offset address of the SPC data\n"\
        "         element for SPC address information\n"\
        "         element for size of the SPC settings information\n"\
        "         element for address type information\n"\
        "         element for data type information\n"\
        "         element for delay to write each registry entry information  -->\n"\
        "    <SPC>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <SPCData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>false</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>BIG</endianness>\n"\
        "      </SPCData>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <dataOffset>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>0</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0</mask>\n"\
        "      </dataOffset>\n"\
        "      <!--register address value to write SPC data -->\n"\
        "      <SPCAddress>0</SPCAddress>\n"\
        "      <!--size of the SPC data settings -->\n"\
        "      <settingsSize>0</settingsSize>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <addressType range=\"[1,4]\">2</addressType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <dataType range=\"[1,4]\">1</dataType>\n"\
        "      <!--Delay in milli seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delay>0</delay>\n"\
        "    </SPC>\n"\
        "    <OIS>\n"\
        "      <OISData description=\"Memory Type\">\n"\
        "        <isAvailable>false</isAvailable>\n"\
        "        <endianness>LITTLE</endianness>\n"\
        "      </OISData>\n"\
        "      <dataOffset>\n"\
        "        <offset>0</offset>\n"\
        "        <mask>0xFF</mask>\n"\
        "      </dataOffset>\n"\
        "      <OISAddressArray>0</OISAddressArray>\n"\
        "      <settingsSize>0</settingsSize>\n"\
        "      <addressType range=\"[1,4]\">2</addressType>\n"\
        "      <dataType range=\"[1,4]\">1</dataType>\n"\
        "      <delay>0</delay>\n"\
        "    </OIS>\n"\
        "    <!--Specifies PDAF defocus conversion coefficient data information to format the OTP data\n"\
        "         element for DCC data availablity and endian\n"\
        "         element for offset address of the slope data\n"\
        "         element for offset data offset information\n"\
        "         element for knot X information\n"\
        "         element for knot Y information\n"\
        "         element for offset X information\n"\
        "         element for offset Y information\n"\
        "         element for area X information\n"\
        "         element for area Y information\n"\
        "         element for Q value information  -->\n"



#define EEPROM_PDAFDCC "    <PDAFDCC>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <DCCData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>%4</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>%1</endianness>\n"\
        "      </DCCData>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <slopeDataOffset>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%2</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFF</mask>\n"\
        "      </slopeDataOffset>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <offsetDataOffset>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%3</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFF</mask>\n"\
        "      </offsetDataOffset>\n"\
        "      <!--knot X value -->\n"\
        "      <knotX>0</knotX>\n"\
        "      <!--knot Y value -->\n"\
        "      <knotY>0</knotY>\n"\
        "      <!--offset X value -->\n"\
        "      <offsetX>0</offsetX>\n"\
        "      <!--offset Y value -->\n"\
        "      <offsetY>0</offsetY>\n"\
        "      <!--area X value -->\n"\
        "      <areaX>0</areaX>\n"\
        "      <!--area Y value -->\n"\
        "      <areaY>0</areaY>\n"\
        "      <!--Q value -->\n"\
        "      <qValue>0</qValue>\n"\
        "    </PDAFDCC>\n"




#define EEPROM_PDAF2D "    <!--Specifies PDAF defocus conversion coefficient data information to format the OTP data\n"\
        "         element for PDAF 2D data availablity and endian\n"\
        "         element for version information\n"\
        "         element for X information\n"\
        "         element for Y information\n"\
        "         element for X ratio information\n"\
        "         element for Y ratio information\n"\
        "         element for map width information\n"\
        "         element for map height information\n"\
        "         element for gain width information\n"\
        "         element for gain height information\n"\
        "         element for left gain map information\n"\
        "         element for right gain map information\n"\
        "         element for conversion Coefficient Count information\n"\
        "         element for conversion Coefficient information  -->\n"\
        "    <PDAF2D>\n"\
        "      <!--Specifies the availability of the specified data and type of endianness\n"\
        "           element for operation  -->\n"\
        "      <PDAF2DData description=\"Memory Type\">\n"\
        "        <!--Specifies whether a particular OTP data available or not -->\n"\
        "        <isAvailable>%14</isAvailable>\n"\
        "        <!--Type of the Endianness\n"\
        "            Valid values are: BIG, LITTLE -->\n"\
        "        <endianness>%1</endianness>\n"\
        "      </PDAF2DData>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <version>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%2</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </version>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <mapWidth>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%3</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </mapWidth>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <mapHeight>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%4</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </mapHeight>\n"\
        "      <!--gain width -->\n"\
        "      <gainWidth>%5</gainWidth>\n"\
        "      <!--gain height -->\n"\
        "      <gainHeight>%6</gainHeight>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <leftGainMap>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>%7</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </leftGainMap>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <rightGainMap>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>>%8</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </rightGainMap>\n"\
        "      <!--count of the conversion coefficient -->\n"\
        "      <conversionCoefficientCount>>%9</conversionCoefficientCount>\n"\
        "      <!--Specifies memory offset value and mask information -->\n"\
        "      <conversionCoefficient>\n"\
        "        <!--Offset value in the OTP memory -->\n"\
        "        <offset>>%10</offset>\n"\
        "        <!--mask value which will be applied to obtain required data bits -->\n"\
        "        <mask>0xFFFF</mask>\n"\
        "      </conversionCoefficient>\n"\
        "      <DCCQFormat>>%11</DCCQFormat>\n"\
        "      <DCCMapWidth>>%12</DCCMapWidth>\n"\
        "      <DCCMapHeight>>%13</DCCMapHeight>\n"\
        "    </PDAF2D>\n"



#define EEPROM_END "  </formatInfo>\n"\
        "  <!--Custom Information for formating the OTP data or for any other purpose\n"\
        "       custom element name\n"\
        "       custom element value  -->\n"\
        "  <customInfo>\n"\
        "    <!--Name of the custom element to identify what kind of information it is -->\n"\
        "    <name>AFOffset</name>\n"\
        "    <!--value of the custom element corresponding to the custom name -->\n"\
        "    <value>-1</value>\n"\
        "  </customInfo>\n"\
        "  <!--Custom Information for formating the OTP data or for any other purpose\n"\
        "       custom element name\n"\
        "       custom element value  -->\n"\
        "  <customInfo>\n"\
        "    <!--Name of the custom element to identify what kind of information it is -->\n"\
        "    <name>WBOffset</name>\n"\
        "    <!--value of the custom element corresponding to the custom name -->\n"\
        "    <value>-1</value>\n"\
        "  </customInfo>\n"\
        "  <!--Custom Information for formating the OTP data or for any other purpose\n"\
        "       custom element name\n"\
        "       custom element value  -->\n"\
        "  <customInfo>\n"\
        "    <!--Name of the custom element to identify what kind of information it is -->\n"\
        "    <name>SensorVersionOffset</name>\n"\
        "    <!--value of the custom element corresponding to the custom name -->\n"\
        "    <value>-1</value>\n"\
        "  </customInfo>\n"\
        "  <!--Custom Information for formating the OTP data or for any other purpose\n"\
        "       custom element name\n"\
        "       custom element value  -->\n"\
        "  <customInfo>\n"\
        "    <!--Name of the custom element to identify what kind of information it is -->\n"\
        "    <name>ModuleVersionOffset</name>\n"\
        "    <!--value of the custom element corresponding to the custom name -->\n"\
        "    <value>-1</value>\n"\
        "  </customInfo>\n"\
        "</EEPROMDriverData>\n"\




namespace Ui {
class EepromConfig;
}

class EepromConfig : public QWidget
{
    Q_OBJECT

public:
    explicit EepromConfig(QWidget *parent = 0);
    ~EepromConfig();
    int generateEepromFileForNew(const QString& outPutBasePath);
    int generateEepromFileForOld(const QString& outPutBasePath);

private slots:
    void on_btn_slaveInfo_clicked();

    void on_btn_memoryMap_clicked();

    void on_btn_AF_clicked();

    void on_btn_WB_clicked();

    void on_btn_LSC_clicked();

    void on_btn_PDAFDCC_clicked();

    void on_btn_PDAF2D_clicked();

private:
    Ui::EepromConfig *ui;
    EepromslaveInfoConfig *mEepromslaveInfoConfig;
    MemoryMap *mMemoryMap;
    EepromAF *mEepromAF;
    EepromWB *mEepromWB;
    EepromLSC *mEepromLSC;
    EepromPDAFDCC *mEepromPDAFDCC;
    EepromPDAF2D *mEepromPDAF2D;
};

#endif // EEPROMCONFIG_H
