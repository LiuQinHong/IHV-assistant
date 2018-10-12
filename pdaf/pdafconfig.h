#ifndef PDAFCONFIG_H
#define PDAFCONFIG_H

#include <QWidget>


#define PDAF_HEAD "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"\
        "<!--\n"\
        "========================================================================\n"\
        "   Copyright(c) %1 Qualcomm Technologies, Inc.\n"\
        "   All Rights Reserved.\n"\
        "   Confidential and Proprietary - Qualcomm Technologies, Inc.\n"\
        "========================================================================\n"\
        "-->\n"\
        "<PDConfigData\n"\
        "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n"\
        "  xsi:noNamespaceSchemaLocation=\"..\..\..\..\cdk\sensor\camxpdafconfig.xsd\">\n"\
        "  <module_version major_revision=\"1\" minor_revision=\"0\" incr_revision=\"0\"/>\n"\
        "  <!--PDAF information\n"\
        "       element for stats data type\n"\
        "       element for orientation\n"\
        "       element for blackLevel\n"\
        "       element for defocus confidence threshold\n"\
        "       element for defocus bit shift\n"\
        "       element for PD Type\n"\
        "       Complex Type Definitions  -->\n"\


#define PDAF_INFO "  <PDInfo>\n"\
        "    <!-- PDAF Name -->\n"\
        "    <PDAFName>%1</PDAFName>\n"\
        "    <PDAFLibraryName>com.qti.stats.pdlib</PDAFLibraryName>\n"\
        "    <!--PDAF Stats Data Type -->\n"\
        "    <PDStatsDataType>%2</PDStatsDataType>\n"\
        "    <!--PDAF Sensor Orientation\n"\
        "        PDAF Sensor orientation\n"\
        "        Valid values: DEFAULT, MIRROR, FLIP, MIRRORANDFLIP -->\n"\
        "    <PDOrientation>DEFAULT</PDOrientation>\n"\
        "    <!--Sensor Black level -->\n"\
        "    <PDBlackLevel>64</PDBlackLevel>\n"\
        "    <!--Defocus confidence threshold level -->\n"\
        "    <PDDefocusConfidenceThreshold>200</PDDefocusConfidenceThreshold>\n"\
        "    <!--Defocus Bit Shift\n"\
        "        For T1 calibration with 10 bit DAC\n"\
        "        set it to 12 if actuator driver uses 12-bit DAC\n"\
        "        set it to 14 if actuator driver uses 10-bit DAC -->\n"\
        "    <PDDefocusBitShift>0</PDDefocusBitShift>\n"\
        "    <!--Sensor PD Stats Format for Type1 -->\n"\
        "    <PDSensorPDStatsFormat>SensorPDStatsCustom</PDSensorPDStatsFormat>\n"\
        "    <!--PD Offset Correction -->\n"\
        "    <PDOffsetCorrection>0</PDOffsetCorrection>\n"\
        "    <!--PDAF Pixel Order Type\n"\
        "        PD Pixel Order Type\n"\
        "        Valid Values: LEFTTORIGHT, RIGHTTOLEFT -->\n"\
        "    <PDPixelOrderType>LEFTTORIGHT</PDPixelOrderType>\n"\

#define PDAF_TYPE "    <!--PDAF Type\n"\
        "        PD Type\n"\
        "        Valid Values: PDType1, PDType2, PDType3, PDType2PD -->\n"\
        "    <PDType>%1</PDType>\n"\
        "  </PDInfo>\n"\

#define PDAF_TYPE1 "  <!--TYPE1 Sensor only need setup the PDInfo. below info will be ignore-->\n"\
    "  <!--Sensor Native pattern infomation\n"\
    "       element for pdBlockCountHorizontal\n"\
    "       element for pdBlockCountVertical\n"\
    "       element for PD Block Pattern\n"\
    "       element for PD Crop Region\n"\
    "       element for downscale factor horizontal\n"\
    "       element for downscale factor vertical  -->\n"\
    "  <PDSensorNativePatternInfo>\n"\
    "    <!--Number of PD blocks in X direction\n"\
    "        2PD: PD Image Width -->\n"\
    "    <PDBlockCountHorizontal>130</PDBlockCountHorizontal>\n"\
    "    <!--Number of PD blocks in Y direction\n"\
    "        2PD: PD Image Height -->\n"\
    "    <PDBlockCountVertical>96</PDBlockCountVertical>\n"\
    "    <!--Block Pattern details of one block\n"\
    "        PDPixelCount:  PDAF pixel number inside a window\n"\
    "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
    "        Should not contain the offset.\n"\
    "        Offset should add back for correct skip pattern.\n"\
    "        PD Block Pattern -->\n"\
    "    <PDBlockPattern>\n"\
    "      <PDPixelCount>16</PDPixelCount>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>26</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>42</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>33</PDXCoordinate>\n"\
    "        <PDYCoordinate>48</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>49</PDXCoordinate>\n"\
    "        <PDYCoordinate>48</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>25</PDXCoordinate>\n"\
    "        <PDYCoordinate>32</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>41</PDXCoordinate>\n"\
    "        <PDYCoordinate>32</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>34</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>50</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--Width and height of the frame or subframe -->\n"\
    "      <PDBlockDimensions>\n"\
    "        <width>16</width>\n"\
    "        <height>32</height>\n"\
    "      </PDBlockDimensions>\n"\
    "      <PDOffsetHorizontal>16</PDOffsetHorizontal>\n"\
    "      <PDOffsetVertical>24</PDOffsetVertical>\n"\
    "    </PDBlockPattern>\n"\
    "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
    "        In-sensor Cropped region -->\n"\
    "    <PDCropRegion>\n"\
    "      <xStart>0</xStart>\n"\
    "      <yStart>0</yStart>\n"\
    "      <width>0</width>\n"\
    "      <height>0</height>\n"\
    "    </PDCropRegion>\n"\
    "    <!--Horizontal Downscale factor -->\n"\
    "    <PDDownscaleFactorHorizontal>1</PDDownscaleFactorHorizontal>\n"\
    "    <!--Vertical Downscale factor -->\n"\
    "    <PDDownscaleFactorVertical>1</PDDownscaleFactorVertical>\n"\
    "  </PDSensorNativePatternInfo>\n"\
    "  <!--Sensor Native pattern infomation\n"\
    "       element for pdBlockCountHorizontal\n"\
    "       element for pdBlockCountVertical\n"\
    "       element for PD Block Pattern\n"\
    "       element for PD Crop Region\n"\
    "       element for downscale factor horizontal\n"\
    "       element for downscale factor vertical  -->\n"\
    "  <PDSensorNativePatternInfo>\n"\
    "    <!--Number of PD blocks in X direction\n"\
    "        2PD: PD Image Width -->\n"\
    "    <PDBlockCountHorizontal>130</PDBlockCountHorizontal>\n"\
    "    <!--Number of PD blocks in Y direction\n"\
    "        2PD: PD Image Height -->\n"\
    "    <PDBlockCountVertical>72</PDBlockCountVertical>\n"\
    "    <!--Block Pattern details of one block\n"\
    "        PDPixelCount:  PDAF pixel number inside a window\n"\
    "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
    "        Should not contain the offset.\n"\
    "        Offset should add back for correct skip pattern.\n"\
    "        PD Block Pattern -->\n"\
    "    <PDBlockPattern>\n"\
    "      <PDPixelCount>8</PDPixelCount>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>26</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>42</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>33</PDXCoordinate>\n"\
    "        <PDYCoordinate>48</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>49</PDXCoordinate>\n"\
    "        <PDYCoordinate>48</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>25</PDXCoordinate>\n"\
    "        <PDYCoordinate>32</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>41</PDXCoordinate>\n"\
    "        <PDYCoordinate>32</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>34</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>50</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--Width and height of the frame or subframe -->\n"\
    "      <PDBlockDimensions>\n"\
    "        <width>32</width>\n"\
    "        <height>32</height>\n"\
    "      </PDBlockDimensions>\n"\
    "      <PDOffsetHorizontal>24</PDOffsetHorizontal>\n"\
    "      <PDOffsetVertical>24</PDOffsetVertical>\n"\
    "    </PDBlockPattern>\n"\
    "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
    "        In-sensor Cropped region -->\n"\
    "    <PDCropRegion>\n"\
    "      <xStart>0</xStart>\n"\
    "      <yStart>0</yStart>\n"\
    "      <width>0</width>\n"\
    "      <height>0</height>\n"\
    "    </PDCropRegion>\n"\
    "    <!--Horizontal Downscale factor -->\n"\
    "    <PDDownscaleFactorHorizontal>1</PDDownscaleFactorHorizontal>\n"\
    "    <!--Vertical Downscale factor -->\n"\
    "    <PDDownscaleFactorVertical>1</PDDownscaleFactorVertical>\n"\
    "  </PDSensorNativePatternInfo>\n"\
    "  <!--Block Pattern Info about all the blocks\n"\
    "      PDStride: This is the number of pixels in the PD stats buffer\n"\
    "      after which there is a jump to a new line.\n"\
    "      PDBufferDataFormat: This is the data type of output stats buffer. -->\n"\
    "  <PDBufferBlockPatternInfo>\n"\
    "    <PDStride>800</PDStride>\n"\
    "    <!--PDAF Buffer Data Format\n"\
    "        MIPI10:   compressed, [9:2] [9:2] [9:2] [9:2] [1:0][1:0][1:0][1:0]\n"\
    "        PACKED10: Q10 format -->\n"\
    "    <PDBufferFormat>UNPACKED16</PDBufferFormat>\n"\
    "    <!--Block Pattern details of one block\n"\
    "        PDPixelCount:  PDAF pixel number inside a window\n"\
    "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
    "        Should not contain the offset.\n"\
    "        Offset should add back for correct skip pattern. -->\n"\
    "    <PDBlockPattern>\n"\
    "      <PDPixelCount>8</PDPixelCount>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>80</PDXCoordinate>\n"\
    "        <PDYCoordinate>0</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>81</PDXCoordinate>\n"\
    "        <PDYCoordinate>0</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>0</PDXCoordinate>\n"\
    "        <PDYCoordinate>1</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>1</PDXCoordinate>\n"\
    "        <PDYCoordinate>1</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>80</PDXCoordinate>\n"\
    "        <PDYCoordinate>2</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>81</PDXCoordinate>\n"\
    "        <PDYCoordinate>2</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>0</PDXCoordinate>\n"\
    "        <PDYCoordinate>3</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>1</PDXCoordinate>\n"\
    "        <PDYCoordinate>3</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--Width and height of the frame or subframe -->\n"\
    "      <PDBlockDimensions>\n"\
    "        <width>2</width>\n"\
    "        <height>4</height>\n"\
    "      </PDBlockDimensions>\n"\
    "      <PDOffsetHorizontal>0</PDOffsetHorizontal>\n"\
    "      <PDOffsetVertical>0</PDOffsetVertical>\n"\
    "    </PDBlockPattern>\n"\
    "  </PDBufferBlockPatternInfo>\n"\
    "  <!--Block Pattern Info about all the blocks\n"\
    "      PDStride: This is the number of pixels in the PD stats buffer\n"\
    "      after which there is a jump to a new line.\n"\
    "      PDBufferDataFormat: This is the data type of output stats buffer. -->\n"\
    "  <PDBufferBlockPatternInfo>\n"\
    "    <PDStride>800</PDStride>\n"\
    "    <!--PDAF Buffer Data Format\n"\
    "        MIPI10:   compressed, [9:2] [9:2] [9:2] [9:2] [1:0][1:0][1:0][1:0]\n"\
    "        PACKED10: Q10 format -->\n"\
    "    <PDBufferFormat>UNPACKED16</PDBufferFormat>\n"\
    "    <!--Block Pattern details of one block\n"\
    "        PDPixelCount:  PDAF pixel number inside a window\n"\
    "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
    "        Should not contain the offset.\n"\
    "        Offset should add back for correct skip pattern. -->\n"\
    "    <PDBlockPattern>\n"\
    "      <PDPixelCount>8</PDPixelCount>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>80</PDXCoordinate>\n"\
    "        <PDYCoordinate>0</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>81</PDXCoordinate>\n"\
    "        <PDYCoordinate>0</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>0</PDXCoordinate>\n"\
    "        <PDYCoordinate>1</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>1</PDXCoordinate>\n"\
    "        <PDYCoordinate>1</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>80</PDXCoordinate>\n"\
    "        <PDYCoordinate>2</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>81</PDXCoordinate>\n"\
    "        <PDYCoordinate>2</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>0</PDXCoordinate>\n"\
    "        <PDYCoordinate>3</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>1</PDXCoordinate>\n"\
    "        <PDYCoordinate>3</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--Width and height of the frame or subframe -->\n"\
    "      <PDBlockDimensions>\n"\
    "        <width>2</width>\n"\
    "        <height>4</height>\n"\
    "      </PDBlockDimensions>\n"\
    "      <PDOffsetHorizontal>0</PDOffsetHorizontal>\n"\
    "      <PDOffsetVertical>0</PDOffsetVertical>\n"\
    "    </PDBlockPattern>\n"\
    "  </PDBufferBlockPatternInfo>\n"\
    "</PDConfigData>\n"\


#define PDAF_TYPE2 "  <!--Sensor Native pattern infomation\n"\
        "       element for pdBlockCountHorizontal\n"\
        "       element for pdBlockCountVertical\n"\
        "       element for PD Block Pattern\n"\
        "       element for PD Crop Region\n"\
        "       element for downscale factor horizontal\n"\
        "       element for downscale factor vertical  -->\n"\
        "  <PDSensorNativePatternInfo>\n"\
        "    <!--Number of PD blocks in X direction\n"\
        "        2PD: PD Image Width -->\n"\
        "    <PDBlockCountHorizontal>130</PDBlockCountHorizontal>\n"\
        "    <!--Number of PD blocks in Y direction\n"\
        "        2PD: PD Image Height -->\n"\
        "    <PDBlockCountVertical>96</PDBlockCountVertical>\n"\
        "    <!--Block Pattern details of one block\n"\
        "        PDPixelCount:  PDAF pixel number inside a window\n"\
        "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
        "        Should not contain the offset.\n"\
        "        Offset should add back for correct skip pattern.\n"\
        "        PD Block Pattern -->\n"\
        "    <PDBlockPattern>\n"\
        "      <PDPixelCount>8</PDPixelCount>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>26</PDXCoordinate>\n"\
        "        <PDYCoordinate>29</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>42</PDXCoordinate>\n"\
        "        <PDYCoordinate>29</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>33</PDXCoordinate>\n"\
        "        <PDYCoordinate>48</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>49</PDXCoordinate>\n"\
        "        <PDYCoordinate>48</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>25</PDXCoordinate>\n"\
        "        <PDYCoordinate>32</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>41</PDXCoordinate>\n"\
        "        <PDYCoordinate>32</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>34</PDXCoordinate>\n"\
        "        <PDYCoordinate>45</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>50</PDXCoordinate>\n"\
        "        <PDYCoordinate>45</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--Width and height of the frame or subframe -->\n"\
        "      <PDBlockDimensions>\n"\
        "        <width>32</width>\n"\
        "        <height>32</height>\n"\
        "      </PDBlockDimensions>\n"\
        "      <PDOffsetHorizontal>24</PDOffsetHorizontal>\n"\
        "      <PDOffsetVertical>24</PDOffsetVertical>\n"\
        "    </PDBlockPattern>\n"\
        "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
        "        In-sensor Cropped region -->\n"\
        "    <PDCropRegion>\n"\
        "      <xStart>0</xStart>\n"\
        "      <yStart>0</yStart>\n"\
        "      <width>0</width>\n"\
        "      <height>0</height>\n"\
        "    </PDCropRegion>\n"\
        "    <!--Horizontal Downscale factor -->\n"\
        "    <PDDownscaleFactorHorizontal>1</PDDownscaleFactorHorizontal>\n"\
        "    <!--Vertical Downscale factor -->\n"\
        "    <PDDownscaleFactorVertical>1</PDDownscaleFactorVertical>\n"\
        "  </PDSensorNativePatternInfo>\n"\
         "  <!--Block Pattern Info about all the blocks\n"\
        "      PDStride: This is the number of pixels in the PD stats buffer\n"\
        "      after which there is a jump to a new line.\n"\
        "      PDBufferDataFormat: This is the data type of output stats buffer. -->\n"\
        "  <PDBufferBlockPatternInfo>\n"\
        "    <PDStride>800</PDStride>\n"\
        "    <!--PDAF Buffer Data Format\n"\
        "        MIPI10:   compressed, [9:2] [9:2] [9:2] [9:2] [1:0][1:0][1:0][1:0]\n"\
        "        PACKED10: Q10 format -->\n"\
        "    <PDBufferFormat>UNPACKED16</PDBufferFormat>\n"\
        "    <!--Block Pattern details of one block\n"\
        "        PDPixelCount:  PDAF pixel number inside a window\n"\
        "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
        "        Should not contain the offset.\n"\
        "        Offset should add back for correct skip pattern. -->\n"\
        "    <PDBlockPattern>\n"\
        "      <PDPixelCount>8</PDPixelCount>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>80</PDXCoordinate>\n"\
        "        <PDYCoordinate>0</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>81</PDXCoordinate>\n"\
        "        <PDYCoordinate>0</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>0</PDXCoordinate>\n"\
        "        <PDYCoordinate>1</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>1</PDXCoordinate>\n"\
        "        <PDYCoordinate>1</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>80</PDXCoordinate>\n"\
        "        <PDYCoordinate>2</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>81</PDXCoordinate>\n"\
        "        <PDYCoordinate>2</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>0</PDXCoordinate>\n"\
        "        <PDYCoordinate>3</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--One pixel coordinate in a block -->\n"\
        "      <PDPixelCoordinates>\n"\
        "        <PDXCoordinate>1</PDXCoordinate>\n"\
        "        <PDYCoordinate>3</PDYCoordinate>\n"\
        "        <!--PDAF Pixel Shield Information\n"\
        "             Simple Type Definitions  -->\n"\
        "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
        "      </PDPixelCoordinates>\n"\
        "      <!--Width and height of the frame or subframe -->\n"\
        "      <PDBlockDimensions>\n"\
        "        <width>2</width>\n"\
        "        <height>4</height>\n"\
        "      </PDBlockDimensions>\n"\
        "      <PDOffsetHorizontal>0</PDOffsetHorizontal>\n"\
        "      <PDOffsetVertical>0</PDOffsetVertical>\n"\
        "    </PDBlockPattern>\n"\
        "  </PDBufferBlockPatternInfo>\n"\
        "</PDConfigData>\n"\

#define PDAF_TYPE3 "  <!--Sensor Native pattern infomation\n"\
    "       element for pdBlockCountHorizontal\n"\
    "       element for pdBlockCountVertical\n"\
    "       element for PD Block Pattern\n"\
    "       element for PD Crop Region\n"\
    "       element for downscale factor horizontal\n"\
    "       element for downscale factor vertical  -->\n"\
    "  <PDSensorNativePatternInfo>\n"\
    "    <!--Number of PD blocks in X direction\n"\
    "        2PD: PD Image Width -->\n"\
    "    <PDBlockCountHorizontal>320</PDBlockCountHorizontal>\n"\
    "    <!--Number of PD blocks in Y direction\n"\
    "        2PD: PD Image Height -->\n"\
    "    <PDBlockCountVertical>120</PDBlockCountVertical>\n"\
    "    <!--Block Pattern details of one block\n"\
    "        PDPixelCount:  PDAF pixel number inside a window\n"\
    "        PDPixelCoordinates: Pixel 2D pos, left_pixel,right_pixel\n"\
    "        Should not contain the offset.\n"\
    "        Offset should add back for correct skip pattern.\n"\
    "        PD Block Pattern -->\n"\
    "    <PDBlockPattern>\n"\
    "      <PDPixelCount>16</PDPixelCount>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>36</PDXCoordinate>\n"\
    "        <PDYCoordinate>21</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>38</PDXCoordinate>\n"\
    "        <PDYCoordinate>21</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>36</PDXCoordinate>\n"\
    "        <PDYCoordinate>23</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>38</PDXCoordinate>\n"\
    "        <PDYCoordinate>23</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>44</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>46</PDXCoordinate>\n"\
    "        <PDYCoordinate>45</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>44</PDXCoordinate>\n"\
    "        <PDYCoordinate>47</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>46</PDXCoordinate>\n"\
    "        <PDYCoordinate>47</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>LEFTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>36</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>38</PDXCoordinate>\n"\
    "        <PDYCoordinate>29</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>36</PDXCoordinate>\n"\
    "        <PDYCoordinate>31</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>38</PDXCoordinate>\n"\
    "        <PDYCoordinate>31</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "	  <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>44</PDXCoordinate>\n"\
    "        <PDYCoordinate>37</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>46</PDXCoordinate>\n"\
    "        <PDYCoordinate>37</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>44</PDXCoordinate>\n"\
    "        <PDYCoordinate>39</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--One pixel coordinate in a block -->\n"\
    "      <PDPixelCoordinates>\n"\
    "        <PDXCoordinate>46</PDXCoordinate>\n"\
    "        <PDYCoordinate>39</PDYCoordinate>\n"\
    "        <!--PDAF Pixel Shield Information\n"\
    "             Simple Type Definitions  -->\n"\
    "        <PDPixelShieldInformation>RIGHTSHIELDED</PDPixelShieldInformation>\n"\
    "      </PDPixelCoordinates>\n"\
    "      <!--Width and height of the frame or subframe -->\n"\
    "      <PDBlockDimensions>\n"\
    "        <width>16</width>\n"\
    "        <height>32</height>\n"\
    "      </PDBlockDimensions>\n"\
    "      <PDOffsetHorizontal>32</PDOffsetHorizontal>\n"\
    "      <PDOffsetVertical>20</PDOffsetVertical>\n"\
    "    </PDBlockPattern>\n"\
    "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
    "        In-sensor Cropped region -->\n"\
    "    <PDCropRegion>\n"\
    "      <xStart>0</xStart>\n"\
    "      <yStart>0</yStart>\n"\
    "      <width>0</width>\n"\
    "      <height>0</height>\n"\
    "    </PDCropRegion>\n"\
    "    <!--Horizontal Downscale factor -->\n"\
    "    <PDDownscaleFactorHorizontal>1</PDDownscaleFactorHorizontal>\n"\
    "    <!--Vertical Downscale factor -->\n"\
    "    <PDDownscaleFactorVertical>1</PDDownscaleFactorVertical>\n"\
    "  </PDSensorNativePatternInfo>\n"\
    "</PDConfigData>\n"\

#define PDAF_PDTYPE2PD "  <!--Sensor Native pattern infomation\n"\
    "       element for pdBlockCountHorizontal\n"\
    "       element for pdBlockCountVertical\n"\
    "       element for PD Block Pattern\n"\
    "       element for PD Crop Region\n"\
    "       element for downscale factor horizontal\n"\
    "       element for downscale factor vertical  -->\n"\
    "  <PDSensorNativePatternInfo>\n"\
    "    <!--Number of PD blocks in X direction\n"\
    "        2PD: PD Image Width -->\n"\
    "    <PDBlockCountHorizontal>4032</PDBlockCountHorizontal>\n"\
    "    <!--Number of PD blocks in Y direction\n"\
    "        2PD: PD Image Height -->\n"\
    "    <PDBlockCountVertical>756</PDBlockCountVertical>\n"\
    "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
    "        In-sensor Cropped region -->\n"\
    "    <PDCropRegion>\n"\
    "      <xStart>0</xStart>\n"\
    "      <yStart>0</yStart>\n"\
    "      <width>0</width>\n"\
    "      <height>0</height>\n"\
    "    </PDCropRegion>\n"\
    "    <!--Horizontal Downscale factor -->\n"\
    "    <PDDownscaleFactorHorizontal>2</PDDownscaleFactorHorizontal>\n"\
    "    <!--Vertical Downscale factor -->\n"\
    "    <PDDownscaleFactorVertical>4</PDDownscaleFactorVertical>\n"\
    "  </PDSensorNativePatternInfo>\n"\
    "  <PDSensorNativePatternInfo>\n"\
    "    <!--Number of PD blocks in X direction\n"\
    "        2PD: PD Image Width -->\n"\
    "    <PDBlockCountHorizontal>2016</PDBlockCountHorizontal>\n"\
    "    <!--Number of PD blocks in Y direction\n"\
    "        2PD: PD Image Height -->\n"\
    "    <PDBlockCountVertical>378</PDBlockCountVertical>\n"\
    "    <!--Frame dimension: contains xStart, yStart, width and height\n"\
    "        In-sensor Cropped region -->\n"\
    "    <PDCropRegion>\n"\
    "      <xStart>0</xStart>\n"\
    "      <yStart>0</yStart>\n"\
    "      <width>0</width>\n"\
    "      <height>0</height>\n"\
    "    </PDCropRegion>\n"\
    "    <!--Horizontal Downscale factor -->\n"\
    "    <PDDownscaleFactorHorizontal>2</PDDownscaleFactorHorizontal>\n"\
    "    <!--Vertical Downscale factor -->\n"\
    "    <PDDownscaleFactorVertical>4</PDDownscaleFactorVertical>\n"\
    "  </PDSensorNativePatternInfo>\n"\
    "  <!--Block Pattern Info about all the blocks\n"\
    "      PDStride: This is the number of pixels in the PD stats buffer\n"\
    "      after which there is a jump to a new line.\n"\
    "      PDBufferDataFormat: This is the data type of output stats buffer. -->>\n"\
    "  <PDBufferBlockPatternInfo>\n"\
    "    <PDStride>5040</PDStride>\n"\
    "    <!--PDAF Buffer Data Type\n"\
    "        RAW10PACKED: compressed, [9:2] [9:2] [9:2] [9:2] [1:0][1:0][1:0][1:0]\n"\
    "        RAW10LSB:    Q10 format -->\n"\
    "    <PDBufferFormat>MIPI10</PDBufferFormat>\n"\
    "  </PDBufferBlockPatternInfo>\n"\
    "  <PDBufferBlockPatternInfo>\n"\
    "    <PDStride>2520</PDStride>\n"\
    "    <!--PDAF Buffer Data Type\n"\
    "        RAW10PACKED: compressed, [9:2] [9:2] [9:2] [9:2] [1:0][1:0][1:0][1:0]\n"\
    "        RAW10LSB:    Q10 format -->\n"\
    "    <PDBufferFormat>MIPI10</PDBufferFormat>\n"\
    "  </PDBufferBlockPatternInfo>\n"\
    "</PDConfigData>\n"\


namespace Ui {
class PdafConfig;
}

class PdafConfig : public QWidget
{
    Q_OBJECT

public:
    explicit PdafConfig(QWidget *parent = 0);
    ~PdafConfig();
    int generatePdafFileForNew(const QString& outPutBasePath);

private:
    Ui::PdafConfig *ui;
};

#endif // PDAFCONFIG_H
