#ifndef MODULECONFIG_H
#define MODULECONFIG_H

#include <QWidget>

#define MODULE_HEAD "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"\
        "<!--========================================================================-->\n"\
        "<!-- Copyright (c) %1 Qualcomm Technologies, Inc.                         -->\n"\
        "<!-- All Rights Reserved.                                                   -->\n"\
        "<!-- Confidential and Proprietary - Qualcomm Technologies, Inc.             -->\n"\
        "<!--========================================================================-->\n"\
        "<cameraModuleData\n"\
        "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n"\
        "  xsi:noNamespaceSchemaLocation=\"..\..\cdk\sensor\camxmoduleconfig.xsd\">\n"\
        "  <module_version major_revision=\"1\" minor_revision=\"0\" incr_revision=\"0\"/>\n"\
        "    <!--Module group can contain either 1 module or 2 modules\n"\
        "      Dual camera, stereo camera use cases contain 2 modules in the group -->\n"


#define MODULE_INFO "  <moduleGroup>\n"\
        "    <!--Module configuration -->\n"\
        "    <moduleConfiguration description=\"Module configuration\">\n"\
        "      <!--CameraId is the id to which DTSI node is mapped.\n"\
        "          Typically CameraId is the slot Id for non combo mode. -->\n"\
        "      <cameraId>%1</cameraId>\n"\
        "      <!--Name of the module integrator -->\n"\
        "      <moduleName>%2</moduleName>\n"\
        "      <!--Name of the sensor in the image sensor module -->\n"\
        "      <sensorName>%3</sensorName>\n"\
        "      <!--Actuator name in the image sensor module\n"\
        "          This is an optional element. Skip this element if actuator is not present -->\n"\
        "      <actuatorName>%4</actuatorName>\n"\
        "      <oisName></oisName>\n"\
        "      <!--EEPROM name in the image sensor module\n"\
        "          This is an optional element. Skip this element if EEPROM is not present -->\n"\
        "      <eepromName>%5</eepromName>\n"\
        "      <!--Flash name is used to used to open binary.\n"\
        "          Binary name is of form flashName_flash.bin Ex:- pmic_flash.bin -->\n"\
        "      <flashName>pmic</flashName>\n"\
        "      <!--Chromatix name is used to used to open binary.\n"\
        "          Binary name is of the form sensor_model_chromatix.bin -->\n"\
        "      <chromatixName>%6</chromatixName>\n"\
        "      <!--Position of the sensor module.\n"\
        "          Valid values are: REAR, FRONT, REAR_AUX, FRONT_AUX, EXTERNAL -->\n"\
        "      <position>%7</position>\n"\
        "      <!--CSI Information -->\n"\
        "      <CSIInfo description=\"CSI Information\">\n"\
        "          <laneAssign>0x3210</laneAssign>\n"\
        "          <isComboMode>0</isComboMode>\n"\
        "      </CSIInfo>\n"\
        "      <!--Lens information -->\n"\
        "      <lensInfo description=\"Lens Information\">\n"\
        "        <!--Focal length of the lens in millimeters. -->\n"\
        "        <focalLength>4.36</focalLength>\n"\
        "        <!--F-Number of the optical system. -->\n"\
        "        <fNumber>1.8</fNumber>\n"\
        "        <!--Minimum focus distance in meters. -->\n"\
        "        <minFocusDistance>0.1</minFocusDistance>\n"\
        "        <!--Total focus distance in meters. -->\n"\
        "        <maxFocusDistance>1.9</maxFocusDistance>\n"\
        "        <!--Horizontal view angle in degrees. -->\n"\
        "        <horizontalViewAngle>60.0</horizontalViewAngle>\n"\
        "        <!--Vertical view angle in degrees. -->\n"\
        "        <verticalViewAngle>45.0</verticalViewAngle>\n"\
        "        <!--Maximum Roll Degree. Valid values are: 0 to 359 -->\n"\
        "        <maxRollDegree>270</maxRollDegree>\n"\
        "        <!--Maximum Pitch Degree. Valid values are: 0, 90, 180, 270 -->\n"\
        "        <maxPitchDegree>360</maxPitchDegree>\n"\
        "        <!--Maximum Yaw Degree. Valid values are: 0 to 359 -->\n"\
        "        <maxYawDegree>360</maxYawDegree>\n"\
        "      </lensInfo>\n"\
        "      <pdafName>%8</pdafName>\n"\
        "    </moduleConfiguration>\n"\
        "  </moduleGroup>\n"\
        "</cameraModuleData>\n"\


namespace Ui {
class ModuleConfig;
}

class ModuleConfig : public QWidget
{
    Q_OBJECT

public:
    explicit ModuleConfig(QWidget *parent = 0);
    ~ModuleConfig();

private:
    Ui::ModuleConfig *ui;
};

#endif // MODULECONFIG_H
