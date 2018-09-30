#ifndef SENSORCONFIG_H
#define SENSORCONFIG_H

#include <QWidget>
#include <sensor/slaveinfoconfig.h>
#include <sensor/regaddrinfoconfig.h>
#include <sensor/exposurecontrolinfoconfig.h>
#include <sensor/groupholdconfig.h>
#include <sensor/resolutioninfoconfig.h>
#include <sensor/streamsettingconfig.h>
#include <sensor/testpatterninfoconfig.h>



#define SENSOR_HEAD "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"\
        "<!--========================================================================-->\n"\
        "<!-- Copyright (c) 2018 Qualcomm Technologies, Inc.                         -->\n"\
        "<!-- All Rights Reserved.                                                   -->\n"\
        "<!-- Confidential and Proprietary - Qualcomm Technologies, Inc.             -->\n"\
        "<!--========================================================================-->\n"\
        "<sensorDriverData\n"\
        "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n"\
        "  xsi:noNamespaceSchemaLocation=\"../../../../cdk/sensor/camxsensordriver.xsd\">\n"\
        "  <module_version major_revision=\"1\" minor_revision=\"0\" incr_revision=\"0\"/>\n"\
        "  <!--Sensor slave information -->\n"



#define SENSOR_INFO "  <slaveInfo>\n"\
        "    <!--Name of the sensor -->\n"\
        "    <sensorName>s5k2t7sm</sensorName>\n"\
        "    <!--8-bit or 10-bit write slave address -->\n"\
        "    <slaveAddress>0x20</slaveAddress>\n"\
        "    <!--Register address / data size in bytes -->\n"\
        "    <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "    <!--Register address / data size in bytes -->\n"\
        "    <regDataType range=\"[1,4]\">2</regDataType>\n"\
        "    <!--Register address for sensor Id -->\n"\
        "    <sensorIdRegAddr>0x0000</sensorIdRegAddr>\n"\
        "    <!--Sensor Id -->\n"\
        "    <sensorId>0x2147</sensorId>\n"\
        "    <!--Mask for sensor id. Sensor Id may only be few bits -->\n"\
        "    <sensorIdMask>4294967295</sensorIdMask>\n"\
        "    <!--I2C frequency mode of slave\n"\
        "        Supported modes are: STANDARD (100 KHz), FAST (400 KHz), FAST_PLUS (1 MHz), CUSTOM (Custom frequency in DTSI) -->\n"\
        "    <i2cFrequencyMode>FAST</i2cFrequencyMode>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerUpSequence>\n"\
        "      <powerSetting>\n"\
        "        <configType>VANA</configType>\n"\
        "        <configValue>1</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>VDIG</configType>\n"\
        "        <configValue>1</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>VIO</configType>\n"\
        "        <configValue>1</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>RESET</configType>\n"\
        "        <configValue>1</configValue>\n"\
        "        <delayMs>18</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>MCLK</configType>\n"\
        "        <configValue>24000000</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerUpSequence>\n"\
        "    <!--Sequence of power configuration type and configuration value required to control power to the device -->\n"\
        "    <powerDownSequence>\n"\
        "      <powerSetting>\n"\
        "        <configType>MCLK</configType>\n"\
        "        <configValue>0</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>RESET</configType>\n"\
        "        <configValue>0</configValue>\n"\
        "        <delayMs>1</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>VIO</configType>\n"\
        "        <configValue>0</configValue>\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>VDIG</configType>\n"\
        "        <configValue>0</configValue>\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "      <powerSetting>\n"\
        "        <configType>VANA</configType>\n"\
        "        <configValue>0</configValue>\n"\
        "        <delayMs>0</delayMs>\n"\
        "      </powerSetting>\n"\
        "    </powerDownSequence>\n"\
        "  </slaveInfo>\n"



#define SENSOR_REGADDRINFO "  <!--Addresses for various sensor registers -->\n"\
        "  <regAddrInfo>\n"\
        "    <!--Register address to program width -->\n"\
        "    <xOutput>0x034C</xOutput>\n"\
        "    <!--Register address to program height -->\n"\
        "    <yOutput>0x034E</yOutput>\n"\
        "    <!--Register address to program Frame length lines -->\n"\
        "    <frameLengthLines>0x0340</frameLengthLines>\n"\
        "    <!--Register address to program Line length pixel clock -->\n"\
        "    <lineLengthPixelClock>0x0342</lineLengthPixelClock>\n"\
        "    <!--Register address to program coarse integration time -->\n"\
        "    <coarseIntgTimeAddr>0x0202</coarseIntgTimeAddr>\n"\
        "    <!--Register address to program gain channel -->\n"\
        "    <globalGainAddr>0x0204</globalGainAddr>\n"\
        "    <!--Register address to program manual test pattern value for Red channel -->\n"\
        "    <testPatternRAddr>0x0602</testPatternRAddr>\n"\
        "    <!--Register address to program manual test pattern value for Green Red channel -->\n"\
        "    <testPatternGRAddr>0x0604</testPatternGRAddr>\n"\
        "    <!--Register address to program manual test pattern value for Blue channel -->\n"\
        "    <testPatternBAddr>0x0606</testPatternBAddr>\n"\
        "    <!--Register address to program manual test pattern value for Green Blue channel -->\n"\
        "    <testPatternGBAddr>0x0608</testPatternGBAddr>\n"\
        "  </regAddrInfo>\n"










#define SENSOR_RESOLUTIONINFO_HEAD "  <!--Information of all the resolutions\n"\
        "      Number of resolutions is detected from number of resolutionData nodes -->\n"\
        "  <resolutionInfo>\n"\
        "    <!--Specify which sensor version can support this setting-->\n"\
        "    <sensorVersion>0</sensorVersion>\n"


#define SENSOR_RESOLUTIONINFODATA_HEAD "    <resolutionData>\n"\
        "      <colorFilterArrangement>BAYER_GRBG</colorFilterArrangement>\n"


#define SENSOR_STEAMINFO  "      <streamInfo>\n"\
        "        <streamConfiguration>\n"\
        "          <vc range=\"[0,3]\">0</vc>\n"\
        "          <dt>43</dt>\n"\
        "          <frameDimension>\n"\
        "            <xStart>0</xStart>\n"\
        "            <yStart>0</yStart>\n"\
        "            <width>5184</width>\n"\
        "            <height>3880</height>\n"\
        "          </frameDimension>\n"\
        "          <bitWidth>10</bitWidth>\n"\
        "          <type>IMAGE</type>\n"\
        "        </streamConfiguration>\n"\
        "      </streamInfo>\n"


#define SENSOR_OUTPUT_INFO "      <lineLengthPixelClock>5640</lineLengthPixelClock>\n"\
        "      <frameLengthLines>4008</frameLengthLines>\n"\
        "      <minHorizontalBlanking>456</minHorizontalBlanking>\n"\
        "      <minVerticalBlanking>128</minVerticalBlanking>\n"\
        "      <outputPixelClock>672000000</outputPixelClock>\n"\
        "      <horizontalBinning>1</horizontalBinning>\n"\
        "      <verticalBinning>1</verticalBinning>\n"\
        "      <frameRate>30</frameRate>\n"\
        "      <laneCount>4</laneCount>\n"\
        "      <downScaleFactor>1.0</downScaleFactor>\n"\
        "      <settleTimeNs>14</settleTimeNs>\n"\
        "      <is3Phase>0</is3Phase>\n"\
        "      <integrationInfo>\n"\
        "        <integrationTimeMin>0</integrationTimeMin>\n"\
        "        <integrationTimeStep>0</integrationTimeStep>\n"\
        "        <integrationTimeMargin>0</integrationTimeMargin>\n"\
        "      </integrationInfo>\n"

#define SENSOR_RESSETTING_HEAD "      <resSettings>\n"


#define SENSOR_RESSETTING "        <regSetting>\n"\
        "          <registerAddr>0x6028</registerAddr>\n"\
        "          <registerData>0x2000</registerData>\n"\
        "          <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "          <regDataType range=\"[1,4]\">2</regDataType>\n"\
        "          <operation>WRITE</operation>\n"\
        "          <delayUs>0x00</delayUs>\n"\
        "        </regSetting>\n"

#define SENSOR_RESSETTING_END  "      </resSettings>\n"

#define SENSOR_RESOLUTIONINFODATA_END "      <cropInfo>\n"\
        "        <left>0</left>\n"\
        "        <right>0</right>\n"\
        "        <top>0</top>\n"\
        "        <bottom>0</bottom>\n"\
        "      </cropInfo>\n"\
        "      <capability>NORMAL</capability>\n"\
        "    </resolutionData>\n"

#define SENSOR_RESOLUTIONINFO_END "  </resolutionInfo>\n"


#define SENSOR_EXPOSUREINFO "  <!--Exposure control information -->\n"\
        "  <exposureControlInfo>\n"\
        "    <!--Maximum analog again supported by sensor -->\n"\
        "    <maxAnalogGain>16</maxAnalogGain>\n"\
        "    <!--Maximum digital again supported by sensor -->\n"\
        "    <maxDigitalGain>1</maxDigitalGain>\n"\
        "    <!--Minimum offset to be maintained between line count and frame length lines -->\n"\
        "    <verticalOffset>8</verticalOffset>\n"\
        "    <!--Maximum line count supported by sensor -->\n"\
        "    <maxLineCount>65527</maxLineCount>\n"\
        "    <!--Conversion factor to convert real digital gain to register digital gain -->\n"\
        "    <realToRegDigitalGainConversionFactor>256</realToRegDigitalGainConversionFactor>\n"\
        "    <!--Real gain to register gain equation\n"\
        "        The equation must contain \"realGain\" in its equation\n"\
        "        Ex:= 512 - (512 / realGain) -->\n"\
        "    <realToRegGain></realToRegGain>\n"\
        "    <!--Register gain to real gain equation\n"\
        "        The equation must contain \"regGain\" in its equation\n"\
        "        Ex:= 512 / (512 - regGain) -->\n"\
        "    <regToRealGain></regToRealGain>\n"\
        "  </exposureControlInfo>\n"


#define SENSOR_STREAMON "  <!--Sequence of register settings to configure the device -->\n"\
        "  <streamOnSettings>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type,\n"\
        "            operation and delay in micro seconds -->\n"\
        "    <regSetting>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>0x0100</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>0x1</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">1</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>WRITE</operation>\n"\
        "      <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "    </regSetting>\n"\
        "  </streamOnSettings>\n"

#define SENSOR_STREAMOFF "  <!--Sequence of register settings to configure the device -->\n"\
        "  <streamOffSettings>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type,\n"\
        "            operation and delay in micro seconds -->\n"\
        "    <regSetting>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>0x0100</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>0x0</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">1</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>WRITE</operation>\n"\
        "      <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "    </regSetting>\n"\
        "  </streamOffSettings>\n"

#define SENSOR_GROUPHOLDON "  <!--Sequence of register settings to configure the device -->\n"\
        "  <groupHoldOnSettings>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type,\n"\
        "            operation and delay in micro seconds -->\n"\
        "    <regSetting>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>0x0104</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>0x1</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">1</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>WRITE</operation>\n"\
        "      <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "    </regSetting>\n"\
        "  </groupHoldOnSettings>\n"

#define SENSOR_GROUPHOLDOFF "  <!--Sequence of register settings to configure the device -->\n"\
        "  <groupHoldOffSettings>\n"\
        "    <!--Register setting configuration\n"\
        "        Contains: register address, register data, register address type, register data type,\n"\
        "            operation and delay in micro seconds -->\n"\
        "    <regSetting>\n"\
        "      <!--Register address that is accessed -->\n"\
        "      <registerAddr>0x0104</registerAddr>\n"\
        "      <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "          If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "      <registerData>0x0</registerData>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "      <!--Register address / data size in bytes -->\n"\
        "      <regDataType range=\"[1,4]\">1</regDataType>\n"\
        "      <!--Type of the operation\n"\
        "          Valid values are: WRITE, READ, POLL -->\n"\
        "      <operation>WRITE</operation>\n"\
        "      <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "      <delayUs>0</delayUs>\n"\
        "    </regSetting>\n"\
        "  </groupHoldOffSettings>\n"



#define SENSOR_INITSETTING_HEAD "  <!--Sequence of register settings to configure the device -->\n"\
        "  <initSettings>\n"\
        "    <sensorVersion>0</sensorVersion>\n"\
        "    <initSetting>\n"

#define SENSOR_INITSETTING "      <regSetting>\n"\
        "        <registerAddr>0x6028</registerAddr>\n"\
        "        <registerData>0x4000</registerData>\n"\
        "        <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "        <regDataType range=\"[1,4]\">2</regDataType>\n"\
        "        <operation>WRITE</operation>\n"\
        "        <delayUs>0x00</delayUs>\n"\
        "      </regSetting>\n"

#define SENSOR_INITSETTING_END "    </initSetting>\n"\
        "  </initSettings>\n"


#define SENSOR_TESTPATTERNINFO_HEAD "  <testPatternInfo>\n"

#define SENSOR_TESTPATTERNINFO "    <testPatternData>\n"\
        "      <!--Test pattern mode\n"\
        "          Supported modes are: OFF, SOLID_COLOR, COLOR_BARS, COLOR_BARS_FADE_TO_GRAY, PN9, CUSTOM1 -->\n"\
        "      <mode>OFF</mode>\n"\
        "      <!--Sequence of register settings to configure the device -->\n"\
        "      <settings>\n"\
        "        <!--Register setting configuration\n"\
        "            Contains: register address, register data, register address type, register data type,\n"\
        "            operation and delay in micro seconds -->\n"\
        "        <regSetting>\n"\
        "          <!--Register address that is accessed -->\n"\
        "          <registerAddr>0x0600</registerAddr>\n"\
        "          <!--If operation is WRITE, registerData is the data value to be written into the specified register address\n"\
        "              If operation is READ, registerData is the number of bytes to be read from the specified register address -->\n"\
        "          <registerData>0</registerData>\n"\
        "          <!--Register address / data size in bytes -->\n"\
        "          <regAddrType range=\"[1,4]\">2</regAddrType>\n"\
        "          <!--Register address / data size in bytes -->\n"\
        "          <regDataType range=\"[1,4]\">2</regDataType>\n"\
        "          <!--Type of the operation\n"\
        "              Valid values are: WRITE, READ, POLL -->\n"\
        "          <operation>WRITE</operation>\n"\
        "          <!--Delay in micro seconds. Delay is 0 if not explicitly provided -->\n"\
        "          <delayUs>0</delayUs>\n"\
        "        </regSetting>\n"\
        "      </settings>\n"\
        "    </testPatternData>\n"

#define SENSOR_TESTPATTERNINFO_END "  </testPatternInfo>\n"


#define SENSOR_COLORLEVELINFO "  <!--Color level information\n"\
        "      These are the default currents in various channels in complete dark light -->\n"\
        "  <colorLevelInfo>\n"\
        "    <!--White level value -->\n"\
        "    <whiteLevel>1023</whiteLevel>\n"\
        "    <!--Pedestal value for Red channel -->\n"\
        "    <rPedestal>64</rPedestal>\n"\
        "    <!--Pedestal value for GreenRed channel -->\n"\
        "    <grPedestal>64</grPedestal>\n"\
        "    <!--Pedestal value for Blue channel -->\n"\
        "    <bPedestal>64</bPedestal>\n"\
        "    <!--Pedestal value for Green Blue channel -->\n"\
        "    <gbPedestal>64</gbPedestal>\n"\
        "  </colorLevelInfo>\n"\
        "  <!--Information about black regions\n"\
        "      Multiple black regions can be provided if applicable -->\n"\
        "  <opticalBlackRegionInfo>\n"\
        "    <!--Frame dimension: contains xStart, yStart, width and height -->\n"\
        "    <dimension>\n"\
        "      <xStart>0</xStart>\n"\
        "      <yStart>0</yStart>\n"\
        "      <width>0</width>\n"\
        "      <height>0</height>\n"\
        "    </dimension>\n"\
        "  </opticalBlackRegionInfo>\n"\
        "  <!--Information about the pixel array\n"\
        "      Active dimension and dummy pixels width are provided -->\n"

#define SENSOR_PIXELARRATINFO "  <pixelArrayInfo>\n"\
        "    <!--Width and height of the frame or subframe -->\n"\
        "    <activeDimension>\n"\
        "      <width>5184</width>\n"\
        "      <height>3880</height>\n"\
        "    </activeDimension>\n"\
        "    <!--Dummy pixels surrounding the active pixel array -->\n"\
        "    <dummyInfo>\n"\
        "      <left>8</left>\n"\
        "      <right>8</right>\n"\
        "      <top>8</top>\n"\
        "      <bottom>8</bottom>\n"\
        "    </dummyInfo>\n"\
        "  </pixelArrayInfo>\n"

#define SENSOR_END "  <!--Application delay information -->\n"\
        "  <delayInfo>\n"\
        "    <!--Number of frames required to apply the linecount -->\n"\
        "    <linecount>0</linecount>\n"\
        "    <!--Number of frames required to apply the gain -->\n"\
        "    <gain>0</gain>\n"\
        "    <!--Maximum pipeline delay in number of frames -->\n"\
        "    <maxPipeline>2</maxPipeline>\n"\
        "    <!--Number of frames to skip -->\n"\
        "    <frameSkip>1</frameSkip>\n"\
        "  </delayInfo>\n"\
        "  <sensorProperty>\n"\
        "    <!--Pixel size in micro meters -->\n"\
        "    <pixelSize>1.4</pixelSize>\n"\
        "    <!--Crop factor -->\n"\
        "    <cropFactor>5.78</cropFactor>\n"\
        "    <!--Sensing method of senosor\n"\
        "        Supported sensing methods: UNDEFINED, ONE_CHIP_COLOR_AREA, TWO_CHIP_COLOR_AREA\n"\
        "        THREE_CHIP_COLOR_AREA, COLOR_SEQUENCE_AREA, TRILINEAR, COLOR_SEQUENCE_LINEAR -->\n"\
        "    <sensingMethod>ONE_CHIP_COLOR_AREA</sensingMethod>\n"\
        "    <ADCReadoutTime>0</ADCReadoutTime>\n"\
        "  </sensorProperty>\n"\
        "</sensorDriverData>\n"



namespace Ui {
class SensorConfig;
}

class SensorConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SensorConfig(QWidget *parent = nullptr);
    ~SensorConfig();

private slots:
    void on_btn_slaveInfo_clicked();

    void on_btn_regAddrInfo_clicked();

    void on_btn_resolutionInfo_clicked();

    void on_btn_exposureControlInfo_clicked();

    void on_btn_stream_clicked();

    void on_btn_groupHold_clicked();

    void on_btn_testPatternInfo_clicked();

    void on_btn_initSettings_clicked();

private:
    Ui::SensorConfig *ui;
    SlaveInfoConfig *mSlaveInfoConfig;
    RegAddrInfoConfig *mRegAddrInfoConfig;
    ExposureControlInfoConfig *mExposureControlInfoConfig;
    GroupHoldConfig *mGroupHoldConfig;
    ResolutionInfoConfig *mResolutionInfoConfig;
    StreamSettingConfig *mStreamSettingConfig;
    TestPatternInfoConfig *mTestPatternInfoConfig;
};

#endif // SENSORCONFIG_H
