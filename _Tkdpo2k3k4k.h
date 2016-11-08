

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 20:14:07 2038
 */
/* Compiler settings for Tkdpo2k3k4k.nimbus.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef ___Tkdpo2k3k4k_h__
#define ___Tkdpo2k3k4k_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITkdpo2k3k4k_FWD_DEFINED__
#define __ITkdpo2k3k4k_FWD_DEFINED__
typedef interface ITkdpo2k3k4k ITkdpo2k3k4k;

#endif 	/* __ITkdpo2k3k4k_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kChannel_FWD_DEFINED__
#define __ITkdpo2k3k4kChannel_FWD_DEFINED__
typedef interface ITkdpo2k3k4kChannel ITkdpo2k3k4kChannel;

#endif 	/* __ITkdpo2k3k4kChannel_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kChannels_FWD_DEFINED__
#define __ITkdpo2k3k4kChannels_FWD_DEFINED__
typedef interface ITkdpo2k3k4kChannels ITkdpo2k3k4kChannels;

#endif 	/* __ITkdpo2k3k4kChannels_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kAcquisition_FWD_DEFINED__
#define __ITkdpo2k3k4kAcquisition_FWD_DEFINED__
typedef interface ITkdpo2k3k4kAcquisition ITkdpo2k3k4kAcquisition;

#endif 	/* __ITkdpo2k3k4kAcquisition_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAEdge_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerAEdge_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerAEdge ITkdpo2k3k4kTriggerAEdge;

#endif 	/* __ITkdpo2k3k4kTriggerAEdge_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTrigger_FWD_DEFINED__
#define __ITkdpo2k3k4kTrigger_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTrigger ITkdpo2k3k4kTrigger;

#endif 	/* __ITkdpo2k3k4kTrigger_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kBuses_FWD_DEFINED__
#define __ITkdpo2k3k4kBuses_FWD_DEFINED__
typedef interface ITkdpo2k3k4kBuses ITkdpo2k3k4kBuses;

#endif 	/* __ITkdpo2k3k4kBuses_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kBus_FWD_DEFINED__
#define __ITkdpo2k3k4kBus_FWD_DEFINED__
typedef interface ITkdpo2k3k4kBus ITkdpo2k3k4kBus;

#endif 	/* __ITkdpo2k3k4kBus_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursor_FWD_DEFINED__
#define __ITkdpo2k3k4kCursor_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursor ITkdpo2k3k4kCursor;

#endif 	/* __ITkdpo2k3k4kCursor_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorHBars_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorHBars_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorHBars ITkdpo2k3k4kCursorHBars;

#endif 	/* __ITkdpo2k3k4kCursorHBars_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorVBars_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorVBars_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorVBars ITkdpo2k3k4kCursorVBars;

#endif 	/* __ITkdpo2k3k4kCursorVBars_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXY_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorXY_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorXY ITkdpo2k3k4kCursorXY;

#endif 	/* __ITkdpo2k3k4kCursorXY_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYRectangle_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorXYRectangle_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorXYRectangle ITkdpo2k3k4kCursorXYRectangle;

#endif 	/* __ITkdpo2k3k4kCursorXYRectangle_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYRatio_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorXYRatio_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorXYRatio ITkdpo2k3k4kCursorXYRatio;

#endif 	/* __ITkdpo2k3k4kCursorXYRatio_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYProduct_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorXYProduct_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorXYProduct ITkdpo2k3k4kCursorXYProduct;

#endif 	/* __ITkdpo2k3k4kCursorXYProduct_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYPolarCoordinates_FWD_DEFINED__
#define __ITkdpo2k3k4kCursorXYPolarCoordinates_FWD_DEFINED__
typedef interface ITkdpo2k3k4kCursorXYPolarCoordinates ITkdpo2k3k4kCursorXYPolarCoordinates;

#endif 	/* __ITkdpo2k3k4kCursorXYPolarCoordinates_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kDisplay_FWD_DEFINED__
#define __ITkdpo2k3k4kDisplay_FWD_DEFINED__
typedef interface ITkdpo2k3k4kDisplay ITkdpo2k3k4kDisplay;

#endif 	/* __ITkdpo2k3k4kDisplay_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kHardCopy_FWD_DEFINED__
#define __ITkdpo2k3k4kHardCopy_FWD_DEFINED__
typedef interface ITkdpo2k3k4kHardCopy ITkdpo2k3k4kHardCopy;

#endif 	/* __ITkdpo2k3k4kHardCopy_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kHistogram_FWD_DEFINED__
#define __ITkdpo2k3k4kHistogram_FWD_DEFINED__
typedef interface ITkdpo2k3k4kHistogram ITkdpo2k3k4kHistogram;

#endif 	/* __ITkdpo2k3k4kHistogram_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kHorizontal_FWD_DEFINED__
#define __ITkdpo2k3k4kHorizontal_FWD_DEFINED__
typedef interface ITkdpo2k3k4kHorizontal ITkdpo2k3k4kHorizontal;

#endif 	/* __ITkdpo2k3k4kHorizontal_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMark_FWD_DEFINED__
#define __ITkdpo2k3k4kMark_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMark ITkdpo2k3k4kMark;

#endif 	/* __ITkdpo2k3k4kMark_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMaths_FWD_DEFINED__
#define __ITkdpo2k3k4kMaths_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMaths ITkdpo2k3k4kMaths;

#endif 	/* __ITkdpo2k3k4kMaths_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMath_FWD_DEFINED__
#define __ITkdpo2k3k4kMath_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMath ITkdpo2k3k4kMath;

#endif 	/* __ITkdpo2k3k4kMath_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMathSpectral_FWD_DEFINED__
#define __ITkdpo2k3k4kMathSpectral_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMathSpectral ITkdpo2k3k4kMathSpectral;

#endif 	/* __ITkdpo2k3k4kMathSpectral_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementImmediate_FWD_DEFINED__
#define __ITkdpo2k3k4kMeasurementImmediate_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMeasurementImmediate ITkdpo2k3k4kMeasurementImmediate;

#endif 	/* __ITkdpo2k3k4kMeasurementImmediate_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurements_FWD_DEFINED__
#define __ITkdpo2k3k4kMeasurements_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMeasurements ITkdpo2k3k4kMeasurements;

#endif 	/* __ITkdpo2k3k4kMeasurements_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementSlot_FWD_DEFINED__
#define __ITkdpo2k3k4kMeasurementSlot_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMeasurementSlot ITkdpo2k3k4kMeasurementSlot;

#endif 	/* __ITkdpo2k3k4kMeasurementSlot_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementsIndicators_FWD_DEFINED__
#define __ITkdpo2k3k4kMeasurementsIndicators_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMeasurementsIndicators ITkdpo2k3k4kMeasurementsIndicators;

#endif 	/* __ITkdpo2k3k4kMeasurementsIndicators_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSaveRecall_FWD_DEFINED__
#define __ITkdpo2k3k4kSaveRecall_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSaveRecall ITkdpo2k3k4kSaveRecall;

#endif 	/* __ITkdpo2k3k4kSaveRecall_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearches_FWD_DEFINED__
#define __ITkdpo2k3k4kSearches_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearches ITkdpo2k3k4kSearches;

#endif 	/* __ITkdpo2k3k4kSearches_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearch_FWD_DEFINED__
#define __ITkdpo2k3k4kSearch_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearch ITkdpo2k3k4kSearch;

#endif 	/* __ITkdpo2k3k4kSearch_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABus_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABus_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABus ITkdpo2k3k4kTriggerABus;

#endif 	/* __ITkdpo2k3k4kTriggerABus_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusAudio_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusAudio_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusAudio ITkdpo2k3k4kTriggerABusAudio;

#endif 	/* __ITkdpo2k3k4kTriggerABusAudio_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusCAN_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusCAN_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusCAN ITkdpo2k3k4kTriggerABusCAN;

#endif 	/* __ITkdpo2k3k4kTriggerABusCAN_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusFlexray_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusFlexray_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusFlexray ITkdpo2k3k4kTriggerABusFlexray;

#endif 	/* __ITkdpo2k3k4kTriggerABusFlexray_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusI2C_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusI2C_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusI2C ITkdpo2k3k4kTriggerABusI2C;

#endif 	/* __ITkdpo2k3k4kTriggerABusI2C_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusLIN_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusLIN_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusLIN ITkdpo2k3k4kTriggerABusLIN;

#endif 	/* __ITkdpo2k3k4kTriggerABusLIN_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusRS232_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusRS232_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusRS232 ITkdpo2k3k4kTriggerABusRS232;

#endif 	/* __ITkdpo2k3k4kTriggerABusRS232_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusSPI_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusSPI_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusSPI ITkdpo2k3k4kTriggerABusSPI;

#endif 	/* __ITkdpo2k3k4kTriggerABusSPI_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusUSB_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerABusUSB_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerABusUSB ITkdpo2k3k4kTriggerABusUSB;

#endif 	/* __ITkdpo2k3k4kTriggerABusUSB_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerALogic_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerALogic_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerALogic ITkdpo2k3k4kTriggerALogic;

#endif 	/* __ITkdpo2k3k4kTriggerALogic_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAWidth_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerAWidth_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerAWidth ITkdpo2k3k4kTriggerAWidth;

#endif 	/* __ITkdpo2k3k4kTriggerAWidth_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerARunt_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerARunt_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerARunt ITkdpo2k3k4kTriggerARunt;

#endif 	/* __ITkdpo2k3k4kTriggerARunt_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerASetupHold_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerASetupHold_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerASetupHold ITkdpo2k3k4kTriggerASetupHold;

#endif 	/* __ITkdpo2k3k4kTriggerASetupHold_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerATransition_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerATransition_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerATransition ITkdpo2k3k4kTriggerATransition;

#endif 	/* __ITkdpo2k3k4kTriggerATransition_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAVideo_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerAVideo_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerAVideo ITkdpo2k3k4kTriggerAVideo;

#endif 	/* __ITkdpo2k3k4kTriggerAVideo_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerBEdge_FWD_DEFINED__
#define __ITkdpo2k3k4kTriggerBEdge_FWD_DEFINED__
typedef interface ITkdpo2k3k4kTriggerBEdge ITkdpo2k3k4kTriggerBEdge;

#endif 	/* __ITkdpo2k3k4kTriggerBEdge_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBus_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBus_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBus ITkdpo2k3k4kSearchBus;

#endif 	/* __ITkdpo2k3k4kSearchBus_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusAudio_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusAudio_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusAudio ITkdpo2k3k4kSearchBusAudio;

#endif 	/* __ITkdpo2k3k4kSearchBusAudio_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusUSB_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusUSB_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusUSB ITkdpo2k3k4kSearchBusUSB;

#endif 	/* __ITkdpo2k3k4kSearchBusUSB_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusSPI_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusSPI_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusSPI ITkdpo2k3k4kSearchBusSPI;

#endif 	/* __ITkdpo2k3k4kSearchBusSPI_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusRS232_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusRS232_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusRS232 ITkdpo2k3k4kSearchBusRS232;

#endif 	/* __ITkdpo2k3k4kSearchBusRS232_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusLIN_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusLIN_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusLIN ITkdpo2k3k4kSearchBusLIN;

#endif 	/* __ITkdpo2k3k4kSearchBusLIN_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusI2C_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusI2C_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusI2C ITkdpo2k3k4kSearchBusI2C;

#endif 	/* __ITkdpo2k3k4kSearchBusI2C_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusFlexray_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusFlexray_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusFlexray ITkdpo2k3k4kSearchBusFlexray;

#endif 	/* __ITkdpo2k3k4kSearchBusFlexray_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusCAN_FWD_DEFINED__
#define __ITkdpo2k3k4kSearchBusCAN_FWD_DEFINED__
typedef interface ITkdpo2k3k4kSearchBusCAN ITkdpo2k3k4kSearchBusCAN;

#endif 	/* __ITkdpo2k3k4kSearchBusCAN_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kReferences_FWD_DEFINED__
#define __ITkdpo2k3k4kReferences_FWD_DEFINED__
typedef interface ITkdpo2k3k4kReferences ITkdpo2k3k4kReferences;

#endif 	/* __ITkdpo2k3k4kReferences_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kReference_FWD_DEFINED__
#define __ITkdpo2k3k4kReference_FWD_DEFINED__
typedef interface ITkdpo2k3k4kReference ITkdpo2k3k4kReference;

#endif 	/* __ITkdpo2k3k4kReference_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kDigitalChannels_FWD_DEFINED__
#define __ITkdpo2k3k4kDigitalChannels_FWD_DEFINED__
typedef interface ITkdpo2k3k4kDigitalChannels ITkdpo2k3k4kDigitalChannels;

#endif 	/* __ITkdpo2k3k4kDigitalChannels_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kDigitalChannel_FWD_DEFINED__
#define __ITkdpo2k3k4kDigitalChannel_FWD_DEFINED__
typedef interface ITkdpo2k3k4kDigitalChannel ITkdpo2k3k4kDigitalChannel;

#endif 	/* __ITkdpo2k3k4kDigitalChannel_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kZoom_FWD_DEFINED__
#define __ITkdpo2k3k4kZoom_FWD_DEFINED__
typedef interface ITkdpo2k3k4kZoom ITkdpo2k3k4kZoom;

#endif 	/* __ITkdpo2k3k4kZoom_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kWaveformTransfer_FWD_DEFINED__
#define __ITkdpo2k3k4kWaveformTransfer_FWD_DEFINED__
typedef interface ITkdpo2k3k4kWaveformTransfer ITkdpo2k3k4kWaveformTransfer;

#endif 	/* __ITkdpo2k3k4kWaveformTransfer_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kUtilityEx_FWD_DEFINED__
#define __ITkdpo2k3k4kUtilityEx_FWD_DEFINED__
typedef interface ITkdpo2k3k4kUtilityEx ITkdpo2k3k4kUtilityEx;

#endif 	/* __ITkdpo2k3k4kUtilityEx_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kInstrumentIO_FWD_DEFINED__
#define __ITkdpo2k3k4kInstrumentIO_FWD_DEFINED__
typedef interface ITkdpo2k3k4kInstrumentIO ITkdpo2k3k4kInstrumentIO;

#endif 	/* __ITkdpo2k3k4kInstrumentIO_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysis_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysis_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysis ITkdpo2k3k4kPowerAnalysis;

#endif 	/* __ITkdpo2k3k4kPowerAnalysis_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisQuality_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisQuality_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisQuality ITkdpo2k3k4kPowerAnalysisQuality;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisQuality_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisSwitchingLoss ITkdpo2k3k4kPowerAnalysisSwitchingLoss;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisHarmonics_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisHarmonics_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisHarmonics ITkdpo2k3k4kPowerAnalysisHarmonics;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisHarmonics_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisRipple_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisRipple_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisRipple ITkdpo2k3k4kPowerAnalysisRipple;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisRipple_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisModulation_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisModulation_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisModulation ITkdpo2k3k4kPowerAnalysisModulation;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisModulation_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_FWD_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_FWD_DEFINED__
typedef interface ITkdpo2k3k4kPowerAnalysisSafeOperatingArea ITkdpo2k3k4kPowerAnalysisSafeOperatingArea;

#endif 	/* __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequency_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequency_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequency ITkdpo2k3k4kFrequency;

#endif 	/* __ITkdpo2k3k4kFrequency_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRF_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyRF_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyRF ITkdpo2k3k4kFrequencyRF;

#endif 	/* __ITkdpo2k3k4kFrequencyRF_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyRFFrequencyAndSpan ITkdpo2k3k4kFrequencyRFFrequencyAndSpan;

#endif 	/* __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFAmplitude_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFAmplitude_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyRFAmplitude ITkdpo2k3k4kFrequencyRFAmplitude;

#endif 	/* __ITkdpo2k3k4kFrequencyRFAmplitude_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFBandwidth_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFBandwidth_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyRFBandwidth ITkdpo2k3k4kFrequencyRFBandwidth;

#endif 	/* __ITkdpo2k3k4kFrequencyRFBandwidth_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementsFrequency_FWD_DEFINED__
#define __ITkdpo2k3k4kMeasurementsFrequency_FWD_DEFINED__
typedef interface ITkdpo2k3k4kMeasurementsFrequency ITkdpo2k3k4kMeasurementsFrequency;

#endif 	/* __ITkdpo2k3k4kMeasurementsFrequency_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyMarker_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyMarker_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyMarker ITkdpo2k3k4kFrequencyMarker;

#endif 	/* __ITkdpo2k3k4kFrequencyMarker_FWD_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyTrace_FWD_DEFINED__
#define __ITkdpo2k3k4kFrequencyTrace_FWD_DEFINED__
typedef interface ITkdpo2k3k4kFrequencyTrace ITkdpo2k3k4kFrequencyTrace;

#endif 	/* __ITkdpo2k3k4kFrequencyTrace_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4k_FWD_DEFINED__
#define __Tkdpo2k3k4k_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4k Tkdpo2k3k4k;
#else
typedef struct Tkdpo2k3k4k Tkdpo2k3k4k;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4k_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kChannel_FWD_DEFINED__
#define __Tkdpo2k3k4kChannel_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kChannel Tkdpo2k3k4kChannel;
#else
typedef struct Tkdpo2k3k4kChannel Tkdpo2k3k4kChannel;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kChannel_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kBus_FWD_DEFINED__
#define __Tkdpo2k3k4kBus_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kBus Tkdpo2k3k4kBus;
#else
typedef struct Tkdpo2k3k4kBus Tkdpo2k3k4kBus;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kBus_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kMath_FWD_DEFINED__
#define __Tkdpo2k3k4kMath_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kMath Tkdpo2k3k4kMath;
#else
typedef struct Tkdpo2k3k4kMath Tkdpo2k3k4kMath;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kMath_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kMeasurementSlot_FWD_DEFINED__
#define __Tkdpo2k3k4kMeasurementSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kMeasurementSlot Tkdpo2k3k4kMeasurementSlot;
#else
typedef struct Tkdpo2k3k4kMeasurementSlot Tkdpo2k3k4kMeasurementSlot;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kMeasurementSlot_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kSearch_FWD_DEFINED__
#define __Tkdpo2k3k4kSearch_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kSearch Tkdpo2k3k4kSearch;
#else
typedef struct Tkdpo2k3k4kSearch Tkdpo2k3k4kSearch;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kSearch_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kReference_FWD_DEFINED__
#define __Tkdpo2k3k4kReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kReference Tkdpo2k3k4kReference;
#else
typedef struct Tkdpo2k3k4kReference Tkdpo2k3k4kReference;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kReference_FWD_DEFINED__ */


#ifndef __Tkdpo2k3k4kDigitalChannel_FWD_DEFINED__
#define __Tkdpo2k3k4kDigitalChannel_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tkdpo2k3k4kDigitalChannel Tkdpo2k3k4kDigitalChannel;
#else
typedef struct Tkdpo2k3k4kDigitalChannel Tkdpo2k3k4kDigitalChannel;
#endif /* __cplusplus */

#endif 	/* __Tkdpo2k3k4kDigitalChannel_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Tkdpo2k3k4k2Enimbus_0000_0000 */
/* [local] */ 


















































































extern RPC_IF_HANDLE __MIDL_itf_Tkdpo2k3k4k2Enimbus_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Tkdpo2k3k4k2Enimbus_0000_0000_v0_0_s_ifspec;


#ifndef __Tkdpo2k3k4kLib_LIBRARY_DEFINED__
#define __Tkdpo2k3k4kLib_LIBRARY_DEFINED__

/* library Tkdpo2k3k4kLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("bfa02f90-d55e-4b73-980f-14ee13bfe00f") 
enum Tkdpo2k3k4kTriggerTypeEnum
    {
        Tkdpo2k3k4kTriggerEdge	= 1,
        Tkdpo2k3k4kTriggerPulseWidth	= 2,
        Tkdpo2k3k4kTriggerRunt	= 3,
        Tkdpo2k3k4kTriggerLogic	= 4,
        Tkdpo2k3k4kTriggerSetupHold	= 5,
        Tkdpo2k3k4kTriggerRiseFallTime	= 6,
        Tkdpo2k3k4kTriggerVideo	= 7,
        Tkdpo2k3k4kTriggerBus	= 0,
        Tkdpo2k3k4kTriggerSequence	= 8
    } 	Tkdpo2k3k4kTriggerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3aeef338-fb81-4186-a0bb-98620a6810be") 
enum Tkdpo2k3k4kTriggerSlopeEnum
    {
        Tkdpo2k3k4kTriggerSlopeRise	= 1,
        Tkdpo2k3k4kTriggerSlopeFall	= 0
    } 	Tkdpo2k3k4kTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ed75247d-5390-47e4-b2d7-eb084158825a") 
enum Tkdpo2k3k4kAcquisitionModeEnum
    {
        Tkdpo2k3k4kAcquisitionModeSample	= 0,
        Tkdpo2k3k4kAcquisitionModePeakDetect	= 1,
        Tkdpo2k3k4kAcquisitionModeHiRes	= 2,
        Tkdpo2k3k4kAcquisitionModeAverage	= 4,
        Tkdpo2k3k4kAcquisitionModeEnvelope	= 3
    } 	Tkdpo2k3k4kAcquisitionModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d0cf99de-e365-47ca-878d-273db73d97f5") 
enum Tkdpo2k3k4kBusSourceEnum
    {
        Tkdpo2k3k4kBusSourceCH1	= 0,
        Tkdpo2k3k4kBusSourceCH2	= 1,
        Tkdpo2k3k4kBusSourceCH3	= 2,
        Tkdpo2k3k4kBusSourceCH4	= 3,
        Tkdpo2k3k4kBusSourceD0	= 4,
        Tkdpo2k3k4kBusSourceD1	= 5,
        Tkdpo2k3k4kBusSourceD2	= 6,
        Tkdpo2k3k4kBusSourceD3	= 7,
        Tkdpo2k3k4kBusSourceD4	= 8,
        Tkdpo2k3k4kBusSourceD5	= 9,
        Tkdpo2k3k4kBusSourceD6	= 10,
        Tkdpo2k3k4kBusSourceD7	= 11,
        Tkdpo2k3k4kBusSourceD8	= 12,
        Tkdpo2k3k4kBusSourceD9	= 13,
        Tkdpo2k3k4kBusSourceD10	= 14,
        Tkdpo2k3k4kBusSourceD11	= 15,
        Tkdpo2k3k4kBusSourceD12	= 16,
        Tkdpo2k3k4kBusSourceD13	= 17,
        Tkdpo2k3k4kBusSourceD14	= 18,
        Tkdpo2k3k4kBusSourceD15	= 19
    } 	Tkdpo2k3k4kBusSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("72023543-bd15-454b-817a-49fa425d3fbc") 
enum Tkdpo2k3k4kBusI2CRWInAddressEnum
    {
        Tkdpo2k3k4kBusI2CRWInAddressYES	= 1,
        Tkdpo2k3k4kBusI2CRWInAddressNO	= 0
    } 	Tkdpo2k3k4kBusI2CRWInAddressEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0c65e5bf-e694-469d-a140-e3c04e1e4f2f") 
enum Tkdpo2k3k4kBusSPIClockPolarityEnum
    {
        Tkdpo2k3k4kBusSPIClockPolarityRISE	= 0,
        Tkdpo2k3k4kBusSPIClockPolarityFALL	= 1
    } 	Tkdpo2k3k4kBusSPIClockPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("480405f6-e2b2-4594-88e1-25ac69d234e8") 
enum Tkdpo2k3k4kBusBitOrderEnum
    {
        Tkdpo2k3k4kBusBitOrderLSB	= 0,
        Tkdpo2k3k4kBusBitOrderMSB	= 1
    } 	Tkdpo2k3k4kBusBitOrderEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("915d8565-226b-46af-8d33-33d88ca6476c") 
enum Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum
    {
        Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW	= 0,
        Tkdpo2k3k4kBusSPISlaveSelectPolarityHIGH	= 1
    } 	Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b3f6aed2-56a6-4902-a878-253450a00ce8") 
enum Tkdpo2k3k4kBusSPIDataPolarityEnum
    {
        Tkdpo2k3k4kBusSPIDataPolarityLOW	= 0,
        Tkdpo2k3k4kBusSPIDataPolarityHIGH	= 1
    } 	Tkdpo2k3k4kBusSPIDataPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4bee876f-eed9-4463-97e3-c3906a2df0ac") 
enum Tkdpo2k3k4kBusRS232PolarityEnum
    {
        Tkdpo2k3k4kBusRS232PolarityNormal	= 0,
        Tkdpo2k3k4kBusRS232PolarityInverted	= 1
    } 	Tkdpo2k3k4kBusRS232PolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("56b91934-6dc7-4929-bc6f-f8a184e13e86") 
enum Tkdpo2k3k4kBusRS232ParityEnum
    {
        Tkdpo2k3k4kBusRS232ParityNone	= 0,
        Tkdpo2k3k4kBusRS232ParityOdd	= 1,
        Tkdpo2k3k4kBusRS232ParityEven	= 2
    } 	Tkdpo2k3k4kBusRS232ParityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5e61ab0f-a5ee-4896-9481-38f6077b6d0a") 
enum Tkdpo2k3k4kBusUSBProbeEnum
    {
        Tkdpo2k3k4kBusUSBProbeSingleEnded	= 0,
        Tkdpo2k3k4kBusUSBProbeDifferential	= 1
    } 	Tkdpo2k3k4kBusUSBProbeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5729f66b-82cc-45d9-be46-8b8dc296c49b") 
enum Tkdpo2k3k4kBusUSBBitrateEnum
    {
        Tkdpo2k3k4kBusUSBBitrateLow	= 0,
        Tkdpo2k3k4kBusUSBBitrateHigh	= 1,
        Tkdpo2k3k4kBusUSBBitrateFull	= 2
    } 	Tkdpo2k3k4kBusUSBBitrateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4369ae67-9320-4269-83ab-8969b6d54dd1") 
enum Tkdpo2k3k4kChannelEnum
    {
        Tkdpo2k3k4kChannel1	= 0,
        Tkdpo2k3k4kChannel2	= 1,
        Tkdpo2k3k4kChannel3	= 2,
        Tkdpo2k3k4kChannel4	= 3
    } 	Tkdpo2k3k4kChannelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1468b04d-79e8-4710-bba9-79a71b9e0509") 
enum Tkdpo2k3k4kBusTypeEnum
    {
        Tkdpo2k3k4kBusTypePARALLEL	= 0,
        Tkdpo2k3k4kBusTypeI2C	= 1,
        Tkdpo2k3k4kBusTypeSPI	= 2,
        Tkdpo2k3k4kBusTypeRS232	= 3,
        Tkdpo2k3k4kBusTypeUSB	= 4,
        Tkdpo2k3k4kBusTypeAudio	= 5,
        Tkdpo2k3k4kBusTypeCAN	= 6,
        Tkdpo2k3k4kBusTypeLIN	= 7
    } 	Tkdpo2k3k4kBusTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("341ad9e7-a7c5-42b6-8b9a-25921a1d9c91") 
enum Tkdpo2k3k4kBusStateEnum
    {
        Tkdpo2k3k4kBusStateOFF	= 0,
        Tkdpo2k3k4kBusStateON	= 1
    } 	Tkdpo2k3k4kBusStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("96708ddf-a697-4e5a-a0f0-e95531b08cb9") 
enum Tkdpo2k3k4kBusDisplayTypeEnum
    {
        Tkdpo2k3k4kBusDisplayTypeBUS	= 0,
        Tkdpo2k3k4kBusDisplayTypeBOTH	= 1
    } 	Tkdpo2k3k4kBusDisplayTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3be5a8a1-ec10-41c4-84f9-ec451da6b2dc") 
enum Tkdpo2k3k4kBusDisplayFormatEnum
    {
        Tkdpo2k3k4kBusDisplayFormatBinary	= 0,
        Tkdpo2k3k4kBusDisplayFormatHexadecimal	= 1,
        Tkdpo2k3k4kBusDisplayFormatASCII	= 2,
        Tkdpo2k3k4kBusDisplayFormatMixed	= 3,
        Tkdpo2k3k4kBusDisplayFormatMixed2	= 4
    } 	Tkdpo2k3k4kBusDisplayFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("669e712d-e2db-4874-8ced-8b1c41e83ada") 
enum Tkdpo2k3k4kBusParallelBusClockEdgeEnum
    {
        Tkdpo2k3k4kBusParallelBusClockEdgeEither	= 0,
        Tkdpo2k3k4kBusParallelBusClockEdgeRising	= 1,
        Tkdpo2k3k4kBusParallelBusClockEdgeFalling	= 2
    } 	Tkdpo2k3k4kBusParallelBusClockEdgeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c2d01850-31e2-4392-9605-f5cf5220f5e8") 
enum Tkdpo2k3k4kBusRS232DelimiterEnum
    {
        Tkdpo2k3k4kBusRS232DelimiterCR	= 0,
        Tkdpo2k3k4kBusRS232DelimiterXFF	= 1,
        Tkdpo2k3k4kBusRS232DelimiterLF	= 2,
        Tkdpo2k3k4kBusRS232DelimiterNull	= 3,
        Tkdpo2k3k4kBusRS232DelimiterSpace	= 4
    } 	Tkdpo2k3k4kBusRS232DelimiterEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("099bb598-7c9e-4984-a9d7-c717b3962861") 
enum Tkdpo2k3k4kBusRS232DisplayModeEnum
    {
        Tkdpo2k3k4kBusRS232DisplayModeFrame	= 0,
        Tkdpo2k3k4kBusRS232DisplayModePacket	= 1
    } 	Tkdpo2k3k4kBusRS232DisplayModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ebad1107-97a7-4238-a1bf-7585e998b4df") 
enum Tkdpo2k3k4kBusSPIFramingEnum
    {
        Tkdpo2k3k4kBusSPIFramingSS	= 0,
        Tkdpo2k3k4kBusSPIFramingIdletime	= 1
    } 	Tkdpo2k3k4kBusSPIFramingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b87896d4-59c1-44da-83bf-11083f44d38e") 
enum Tkdpo2k3k4kAudioBusTypeEnum
    {
        Tkdpo2k3k4kAudioBusTypeI2S	= 0,
        Tkdpo2k3k4kAudioBusTypeLJ	= 1,
        Tkdpo2k3k4kAudioBusTypeRJ	= 2,
        Tkdpo2k3k4kAudioBusTypeTDM	= 3
    } 	Tkdpo2k3k4kAudioBusTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d0bb9428-12ef-4e68-ba4b-586ded34fafb") 
enum Tkdpo2k3k4kAudioPolarityEnum
    {
        Tkdpo2k3k4kAudioPolarityFall	= 0,
        Tkdpo2k3k4kAudioPolarityRise	= 1
    } 	Tkdpo2k3k4kAudioPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a005e553-f9a2-4135-b822-f4b4e695ba66") 
enum Tkdpo2k3k4kAudioDataPolarityEnum
    {
        Tkdpo2k3k4kAudioDataPolarityNormal	= 0,
        Tkdpo2k3k4kAudioDataPolarityInverted	= 1
    } 	Tkdpo2k3k4kAudioDataPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1d5d49bf-09fd-4a67-9c5b-e4c6ef895754") 
enum Tkdpo2k3k4kDisplayFormatEnum
    {
        Tkdpo2k3k4kDisplayFormatBinary	= 0,
        Tkdpo2k3k4kDisplayFormatHexadecimal	= 1,
        Tkdpo2k3k4kDisplayFormatSignedDecimal	= 2
    } 	Tkdpo2k3k4kDisplayFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("50541aeb-d112-46f4-b796-1e9d5aabe610") 
enum Tkdpo2k3k4kCANProbeTypeEnum
    {
        Tkdpo2k3k4kCANProbeTypeCANH	= 0,
        Tkdpo2k3k4kCANProbeTypeCANL	= 1,
        Tkdpo2k3k4kCANProbeTypeRX	= 2,
        Tkdpo2k3k4kCANProbeTypeTX	= 3,
        Tkdpo2k3k4kCANProbeTypeDifferential	= 4
    } 	Tkdpo2k3k4kCANProbeTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3c4f1f6e-535d-4347-a9e4-b75b3087c13f") 
enum Tkdpo2k3k4kCANBitRateEnum
    {
        Tkdpo2k3k4kCANBitRateRATE10K	= 0,
        Tkdpo2k3k4kCANBitRateRATE20K	= 1,
        Tkdpo2k3k4kCANBitRateRATE33K	= 2,
        Tkdpo2k3k4kCANBitRateRATE37K	= 3,
        Tkdpo2k3k4kCANBitRateRATE50K	= 4,
        Tkdpo2k3k4kCANBitRateRATE62K	= 5,
        Tkdpo2k3k4kCANBitRateRATE83K	= 6,
        Tkdpo2k3k4kCANBitRateRATE92K	= 7,
        Tkdpo2k3k4kCANBitRateRATE100K	= 8,
        Tkdpo2k3k4kCANBitRateRATE125K	= 9,
        Tkdpo2k3k4kCANBitRateRATE250K	= 10,
        Tkdpo2k3k4kCANBitRateRATE500K	= 11,
        Tkdpo2k3k4kCANBitRateRATE800K	= 12,
        Tkdpo2k3k4kCANBitRateRATE1M	= 13
    } 	Tkdpo2k3k4kCANBitRateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4353c2ea-1e75-4553-a205-aa93dc6f3967") 
enum Tkdpo2k3k4kFlexraySignalEnum
    {
        Tkdpo2k3k4kFlexraySignalBDIFFBP	= 0,
        Tkdpo2k3k4kFlexraySignalBM	= 1,
        Tkdpo2k3k4kFlexraySignalTXRX	= 2
    } 	Tkdpo2k3k4kFlexraySignalEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5566758f-22d5-4898-91aa-d09d3a3a902c") 
enum Tkdpo2k3k4kFlexrayChannelEnum
    {
        Tkdpo2k3k4kFlexrayChannelA	= 0,
        Tkdpo2k3k4kFlexrayChannelB	= 1
    } 	Tkdpo2k3k4kFlexrayChannelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c161ecfa-7417-4e53-8596-e52988d088ed") 
enum Tkdpo2k3k4kLINIDFormatEnum
    {
        Tkdpo2k3k4kLINIDFormatNoParity	= 0,
        Tkdpo2k3k4kLINIDFormatParity	= 1
    } 	Tkdpo2k3k4kLINIDFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7ecf5164-f07a-4535-8d3d-934f579c0325") 
enum Tkdpo2k3k4kLINPolarityEnum
    {
        Tkdpo2k3k4kLINPolarityNormal	= 0,
        Tkdpo2k3k4kLINPolarityInverted	= 1
    } 	Tkdpo2k3k4kLINPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("77865102-4157-4b6f-9468-5d19c2ba13c5") 
enum Tkdpo2k3k4kLINStandardEnum
    {
        Tkdpo2k3k4kLINStandardV1X	= 0,
        Tkdpo2k3k4kLINStandardV2X	= 1,
        Tkdpo2k3k4kLINStandardMixed	= 2
    } 	Tkdpo2k3k4kLINStandardEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fe817080-cf4b-4907-bc09-c56c1a1a216d") 
enum Tkdpo2k3k4kBusSPIBitOrderEnum
    {
        Tkdpo2k3k4kBusSPIBitOrderLSB	= 0,
        Tkdpo2k3k4kBusSPIBitOrderMSB	= 1
    } 	Tkdpo2k3k4kBusSPIBitOrderEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("933c637f-586f-47d0-a21c-cc6c7a50b846") 
enum Tkdpo2k3k4kDigitalChannelEnum
    {
        Tkdpo2k3k4kDigitalChannelD0	= 0,
        Tkdpo2k3k4kDigitalChannelD1	= 1,
        Tkdpo2k3k4kDigitalChannelD2	= 2,
        Tkdpo2k3k4kDigitalChannelD3	= 3,
        Tkdpo2k3k4kDigitalChannelD4	= 4,
        Tkdpo2k3k4kDigitalChannelD5	= 5,
        Tkdpo2k3k4kDigitalChannelD6	= 6,
        Tkdpo2k3k4kDigitalChannelD7	= 7,
        Tkdpo2k3k4kDigitalChannelD8	= 8,
        Tkdpo2k3k4kDigitalChannelD9	= 9,
        Tkdpo2k3k4kDigitalChannelD10	= 10,
        Tkdpo2k3k4kDigitalChannelD11	= 11,
        Tkdpo2k3k4kDigitalChannelD12	= 12,
        Tkdpo2k3k4kDigitalChannelD13	= 13,
        Tkdpo2k3k4kDigitalChannelD14	= 14,
        Tkdpo2k3k4kDigitalChannelD15	= 15
    } 	Tkdpo2k3k4kDigitalChannelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e9cfe7ae-7b99-4fca-a8de-658bb06d91d6") 
enum Tkdpo2k3k4kCursorTrackModeEnum
    {
        Tkdpo2k3k4kCursorTrackModeIndependent	= 0,
        Tkdpo2k3k4kCursorTrackModeTrack	= 1
    } 	Tkdpo2k3k4kCursorTrackModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("10ade037-7a2e-4bfd-a225-ddc840766576") 
enum Tkdpo2k3k4kCursorTypeEnum
    {
        Tkdpo2k3k4kCursorTypeOFF	= 0,
        Tkdpo2k3k4kCursorTypeScreen	= 1,
        Tkdpo2k3k4kCursorTypeWaveform	= 2
    } 	Tkdpo2k3k4kCursorTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d13f8cef-95d1-4648-b498-a300ccbc141a") 
enum Tkdpo2k3k4kCursorMeasurementScaleEnum
    {
        Tkdpo2k3k4kCursorMeasurementScaleCurrent	= 0,
        Tkdpo2k3k4kCursorMeasurementScaleHalfGraticule	= 1,
        Tkdpo2k3k4kCursorMeasurementScaleFiveDivisions	= 2
    } 	Tkdpo2k3k4kCursorMeasurementScaleEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9ff89784-e631-4756-a545-fc530a4ddf06") 
enum Tkdpo2k3k4kCursorHBarsUnitsEnum
    {
        Tkdpo2k3k4kCursorHBarsUnitsBase	= 0,
        Tkdpo2k3k4kCursorHBarsUnitsPercent	= 1
    } 	Tkdpo2k3k4kCursorHBarsUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2c121e39-a96f-4197-b420-dcd8e18bc6f0") 
enum Tkdpo2k3k4kCursorVBarsUnitsEnum
    {
        Tkdpo2k3k4kCursorVBarsUnitsSeconds	= 0,
        Tkdpo2k3k4kCursorVBarsUnitsHertz	= 1,
        Tkdpo2k3k4kCursorVBarsUnitsDegrees	= 2,
        Tkdpo2k3k4kCursorVBarsUnitsPercent	= 3
    } 	Tkdpo2k3k4kCursorVBarsUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0cd05f6f-c190-4712-bebc-daa35d02c559") 
enum Tkdpo2k3k4kCursorXYReadoutEnum
    {
        Tkdpo2k3k4kCursorXYReadoutRectangular	= 0,
        Tkdpo2k3k4kCursorXYReadoutPolarCoordinates	= 1,
        Tkdpo2k3k4kCursorXYReadoutProduct	= 2,
        Tkdpo2k3k4kCursorXYReadoutRatio	= 3
    } 	Tkdpo2k3k4kCursorXYReadoutEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c2851e82-999d-49b8-a51a-d0aa0f725d7b") 
enum Tkdpo2k3k4kDisplayClockStateEnum
    {
        Tkdpo2k3k4kDisplayClockStateDataOnly	= 0,
        Tkdpo2k3k4kDisplayClockStateTimeOnly	= 1,
        Tkdpo2k3k4kDisplayClockStateOn	= 2,
        Tkdpo2k3k4kDisplayClockStateOff	= 3
    } 	Tkdpo2k3k4kDisplayClockStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ce6670bc-e42d-4bb0-ad6b-6c6568107106") 
enum Tkdpo2k3k4kDisplayBackLightIntensityEnum
    {
        Tkdpo2k3k4kDisplayBackLightIntensityLow	= 0,
        Tkdpo2k3k4kDisplayBackLightIntensityMedium	= 1,
        Tkdpo2k3k4kDisplayBackLightIntensityHigh	= 2
    } 	Tkdpo2k3k4kDisplayBackLightIntensityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("70390121-2900-40da-b598-1f77392be214") 
enum Tkdpo2k3k4kDisplayGraticuleEnum
    {
        Tkdpo2k3k4kDisplayGraticuleCrossHair	= 0,
        Tkdpo2k3k4kDisplayGraticuleFrame	= 1,
        Tkdpo2k3k4kDisplayGraticuleFull	= 2,
        Tkdpo2k3k4kDisplayGraticuleGrid	= 3
    } 	Tkdpo2k3k4kDisplayGraticuleEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f01f39e9-086b-4269-a435-85f38de62007") 
enum Tkdpo2k3k4kDisplayDisplayFormatEnum
    {
        Tkdpo2k3k4kDisplayDisplayFormatYT	= 1,
        Tkdpo2k3k4kDisplayDisplayFormatXY	= 0
    } 	Tkdpo2k3k4kDisplayDisplayFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("047694e5-c169-48b6-ab32-7bc745a47f46") 
enum Tkdpo2k3k4kDisplayPersistenceEnum
    {
        Tkdpo2k3k4kDisplayPersistenceClear	= 0,
        Tkdpo2k3k4kDisplayPersistenceAuto	= 1,
        Tkdpo2k3k4kDisplayPersistenceMinimum	= 2,
        Tkdpo2k3k4kDisplayPersistenceInfinite	= 3
    } 	Tkdpo2k3k4kDisplayPersistenceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c7dd062a-887f-4c6a-8a23-3276144e3b3c") 
enum Tkdpo2k3k4kPrintLayoutEnum
    {
        Tkdpo2k3k4kPrintLayoutPortrait	= 0,
        Tkdpo2k3k4kPrintLayoutLandscape	= 1
    } 	Tkdpo2k3k4kPrintLayoutEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9d50b5a7-1d34-46f2-b264-e7a7bc0446d2") 
enum Tkdpo2k3k4kHistogramModeEnum
    {
        Tkdpo2k3k4kHistogramModeOff	= 0,
        Tkdpo2k3k4kHistogramModeHorizontal	= 1,
        Tkdpo2k3k4kHistogramModeVertical	= 2
    } 	Tkdpo2k3k4kHistogramModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("aab5d8f0-7fd1-472b-bd7b-2fc924eabc56") 
enum Tkdpo2k3k4kSourceEnum
    {
        Tkdpo2k3k4kSourceCH1	= 0,
        Tkdpo2k3k4kSourceCH2	= 1,
        Tkdpo2k3k4kSourceCH3	= 2,
        Tkdpo2k3k4kSourceCH4	= 3,
        Tkdpo2k3k4kSourceMATH	= 4,
        Tkdpo2k3k4kSourceREF1	= 5,
        Tkdpo2k3k4kSourceREF2	= 6,
        Tkdpo2k3k4kSourceREF3	= 7,
        Tkdpo2k3k4kSourceREF4	= 8,
        Tkdpo2k3k4kSourceD0	= 9,
        Tkdpo2k3k4kSourceD1	= 10,
        Tkdpo2k3k4kSourceD2	= 11,
        Tkdpo2k3k4kSourceD3	= 12,
        Tkdpo2k3k4kSourceD4	= 13,
        Tkdpo2k3k4kSourceD5	= 14,
        Tkdpo2k3k4kSourceD6	= 15,
        Tkdpo2k3k4kSourceD7	= 16,
        Tkdpo2k3k4kSourceD8	= 17,
        Tkdpo2k3k4kSourceD9	= 18,
        Tkdpo2k3k4kSourceD10	= 19,
        Tkdpo2k3k4kSourceD11	= 20,
        Tkdpo2k3k4kSourceD12	= 21,
        Tkdpo2k3k4kSourceD13	= 22,
        Tkdpo2k3k4kSourceD14	= 23,
        Tkdpo2k3k4kSourceD15	= 24,
        Tkdpo2k3k4kSourceRFAmplitude	= 25,
        Tkdpo2k3k4kSourceRFFrequency	= 26,
        Tkdpo2k3k4kSourceRFPhase	= 27
    } 	Tkdpo2k3k4kSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1b3c8832-0e60-47e0-a29b-dcc40c9985bc") 
enum Tkdpo2k3k4kHistogramDisplayEnum
    {
        Tkdpo2k3k4kHistogramDisplayLog	= 0,
        Tkdpo2k3k4kHistogramDisplayLinear	= 1
    } 	Tkdpo2k3k4kHistogramDisplayEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("549695c8-7b30-4d7a-956f-4e0911a15d17") 
enum Tkdpo2k3k4kMarkEnum
    {
        Tkdpo2k3k4kMarkCH1	= 0,
        Tkdpo2k3k4kMarkCH2	= 1,
        Tkdpo2k3k4kMarkCH3	= 2,
        Tkdpo2k3k4kMarkCH4	= 3,
        Tkdpo2k3k4kMarkMATH	= 4,
        Tkdpo2k3k4kMarkREF1	= 5,
        Tkdpo2k3k4kMarkREF2	= 6,
        Tkdpo2k3k4kMarkREF3	= 7,
        Tkdpo2k3k4kMarkREF4	= 8,
        Tkdpo2k3k4kMarkB1	= 9,
        Tkdpo2k3k4kMarkB2	= 10,
        Tkdpo2k3k4kMarkB3	= 11,
        Tkdpo2k3k4kMarkB4	= 12,
        Tkdpo2k3k4kMarkDigital	= 13,
        Tkdpo2k3k4kMarkColumn	= 14,
        Tkdpo2k3k4kMarkRFAmplitude	= 15,
        Tkdpo2k3k4kMarkRFFrequency	= 16,
        Tkdpo2k3k4kMarkRFPhase	= 17
    } 	Tkdpo2k3k4kMarkEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9f990c28-3030-4534-b421-59166e0e36e5") 
enum Tkdpo2k3k4kMathTypeEnum
    {
        Tkdpo2k3k4kMathTypeDual	= 0,
        Tkdpo2k3k4kMathTypeFFT	= 1,
        Tkdpo2k3k4kMathTypeAdvanced	= 2,
        Tkdpo2k3k4kMathTypeSpectrum	= 3
    } 	Tkdpo2k3k4kMathTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f2eea3bb-df81-4150-a230-db60246d4c5b") 
enum Tkdpo2k3k4kMarkMoveZoomToMarkEnum
    {
        Tkdpo2k3k4kMarkMoveZoomToMarkNEXT	= 0,
        Tkdpo2k3k4kMarkMoveZoomToMarkPREVIOUS	= 1
    } 	Tkdpo2k3k4kMarkMoveZoomToMarkEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6f070e4a-1a74-43ea-8e1e-3b74790a63e8") 
enum Tkdpo2k3k4kSpectralWindowEnum
    {
        Tkdpo2k3k4kSpectralWindowRectangular	= 0,
        Tkdpo2k3k4kSpectralWindowHamming	= 1,
        Tkdpo2k3k4kSpectralWindowHanning	= 2,
        Tkdpo2k3k4kSpectralWindowBlackmanharris	= 3
    } 	Tkdpo2k3k4kSpectralWindowEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a884c38b-1685-4379-9e77-984319425904") 
enum Tkdpo2k3k4kSpectralMagUnitEnum
    {
        Tkdpo2k3k4kSpectralMagUnitLinear	= 0,
        Tkdpo2k3k4kSpectralMagUnitDB	= 1
    } 	Tkdpo2k3k4kSpectralMagUnitEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f23e48a4-0821-41c4-b525-cf22f257c0f3") 
enum Tkdpo2k3k4kMeasurementDelayDirectionEnum
    {
        Tkdpo2k3k4kMeasurementDelayDirectionBackward	= 0,
        Tkdpo2k3k4kMeasurementDelayDirectionForward	= 1
    } 	Tkdpo2k3k4kMeasurementDelayDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9a246b70-d353-4583-a017-20449a48eb02") 
enum Tkdpo2k3k4kMeasurementEdgeEnum
    {
        Tkdpo2k3k4kMeasurementEdgeFall	= 0,
        Tkdpo2k3k4kMeasurementEdgeRise	= 1
    } 	Tkdpo2k3k4kMeasurementEdgeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c82fdf86-39bf-4b2c-a0e2-266b5175df65") 
enum Tkdpo2k3k4kMeasurementMethodEnum
    {
        Tkdpo2k3k4kMeasurementMethodHistogram	= 0,
        Tkdpo2k3k4kMeasurementMethodMinMax	= 1,
        Tkdpo2k3k4kMeasurementMethodAuto	= 2
    } 	Tkdpo2k3k4kMeasurementMethodEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("356ee52f-9532-4f90-9da4-7b6325a891af") 
enum Tkdpo2k3k4kMeasurementUnitEnum
    {
        Tkdpo2k3k4kMeasurementUnitAbsolute	= 0,
        Tkdpo2k3k4kMeasurementUnitPercent	= 1
    } 	Tkdpo2k3k4kMeasurementUnitEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7f15d7e1-0849-46d6-8d23-5a208dc0425d") 
enum Tkdpo2k3k4kMeasurementTypeEnum
    {
        Tkdpo2k3k4kMeasurementTypeRise	= 0,
        Tkdpo2k3k4kMeasurementTypeFall	= 1,
        Tkdpo2k3k4kMeasurementTypeFrequency	= 2,
        Tkdpo2k3k4kMeasurementTypePeriod	= 3,
        Tkdpo2k3k4kMeasurementTypeRMS	= 4,
        Tkdpo2k3k4kMeasurementTypePk2Pk	= 5,
        Tkdpo2k3k4kMeasurementTypeMaximum	= 6,
        Tkdpo2k3k4kMeasurementTypeMinimum	= 7,
        Tkdpo2k3k4kMeasurementTypeHigh	= 8,
        Tkdpo2k3k4kMeasurementTypeLow	= 9,
        Tkdpo2k3k4kMeasurementTypeMean	= 10,
        Tkdpo2k3k4kMeasurementTypeNWidth	= 11,
        Tkdpo2k3k4kMeasurementTypePWidth	= 12,
        Tkdpo2k3k4kMeasurementTypeNDuty	= 13,
        Tkdpo2k3k4kMeasurementTypePDuty	= 14,
        Tkdpo2k3k4kMeasurementTypeAmplitude	= 15,
        Tkdpo2k3k4kMeasurementTypeCRMS	= 16,
        Tkdpo2k3k4kMeasurementTypeCMean	= 17,
        Tkdpo2k3k4kMeasurementTypePOverShoot	= 18,
        Tkdpo2k3k4kMeasurementTypeNOverShoot	= 19,
        Tkdpo2k3k4kMeasurementTypeArea	= 20,
        Tkdpo2k3k4kMeasurementTypeBurst	= 21,
        Tkdpo2k3k4kMeasurementTypeCArea	= 22,
        Tkdpo2k3k4kMeasurementTypeDelay	= 23,
        Tkdpo2k3k4kMeasurementTypePhase	= 24,
        Tkdpo2k3k4kMeasurementTypeWaveforms	= 25,
        Tkdpo2k3k4kMeasurementTypeHits	= 26,
        Tkdpo2k3k4kMeasurementTypePeakHits	= 27,
        Tkdpo2k3k4kMeasurementTypeMedian	= 28,
        Tkdpo2k3k4kMeasurementTypeStdDev	= 29,
        Tkdpo2k3k4kMeasurementTypeSigma1	= 30,
        Tkdpo2k3k4kMeasurementTypeSigma2	= 31,
        Tkdpo2k3k4kMeasurementTypeSigma3	= 32,
        Tkdpo2k3k4kMeasurementTypeNEdgeCount	= 33,
        Tkdpo2k3k4kMeasurementTypeNPulseCount	= 34,
        Tkdpo2k3k4kMeasurementTypePEdgeCount	= 35,
        Tkdpo2k3k4kMeasurementTypePPulseCount	= 36
    } 	Tkdpo2k3k4kMeasurementTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("849922ba-e205-4a24-ab2b-539f2d00b7ce") 
enum Tkdpo2k3k4kMeasurementGatingEnum
    {
        Tkdpo2k3k4kMeasurementGatingOff	= 0,
        Tkdpo2k3k4kMeasurementGatingScreen	= 1,
        Tkdpo2k3k4kMeasurementGatingCursor	= 3
    } 	Tkdpo2k3k4kMeasurementGatingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("018b5865-c519-4ca1-a08d-95de8ffe393d") 
enum Tkdpo2k3k4kMeasurementIndicatorStateEnum
    {
        Tkdpo2k3k4kMeasurementIndicatorStateOFF	= 0,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas1	= 1,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas2	= 2,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas3	= 3,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas4	= 4,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas5	= 5,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas6	= 6,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas7	= 7,
        Tkdpo2k3k4kMeasurementIndicatorStateMeas8	= 8
    } 	Tkdpo2k3k4kMeasurementIndicatorStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b3e0330d-6c3b-43c4-94dc-95f8bdb1d8fa") 
enum Tkdpo2k3k4kMemoryLocationEnum
    {
        Tkdpo2k3k4kMemoryLocation1	= 1,
        Tkdpo2k3k4kMemoryLocation2	= 2,
        Tkdpo2k3k4kMemoryLocation3	= 3,
        Tkdpo2k3k4kMemoryLocation4	= 4,
        Tkdpo2k3k4kMemoryLocation5	= 5,
        Tkdpo2k3k4kMemoryLocation6	= 6,
        Tkdpo2k3k4kMemoryLocation7	= 7,
        Tkdpo2k3k4kMemoryLocation8	= 8,
        Tkdpo2k3k4kMemoryLocation9	= 9,
        Tkdpo2k3k4kMemoryLocation10	= 10
    } 	Tkdpo2k3k4kMemoryLocationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("22035692-518c-4d45-af87-82f097fde60b") 
enum Tkdpo2k3k4kReferenceEnum
    {
        Tkdpo2k3k4kReference1	= 0,
        Tkdpo2k3k4kReference2	= 1,
        Tkdpo2k3k4kReference3	= 2,
        Tkdpo2k3k4kReference4	= 3
    } 	Tkdpo2k3k4kReferenceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f8752676-2849-400f-8add-3d50a09c0c57") 
enum Tkdpo2k3k4kSaveWaveformFileFormatEnum
    {
        Tkdpo2k3k4kSaveWaveformFileFormatInternal	= 0,
        Tkdpo2k3k4kSaveWaveformFileFormatSpreadSheet	= 3
    } 	Tkdpo2k3k4kSaveWaveformFileFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("89258c1c-b418-4107-be95-592cfa6d90a3") 
enum Tkdpo2k3k4kSaveButtonTypeEnum
    {
        Tkdpo2k3k4kSaveButtonTypeImage	= 0,
        Tkdpo2k3k4kSaveButtonTypeWaveform	= 1,
        Tkdpo2k3k4kSaveButtonTypeSetup	= 2
    } 	Tkdpo2k3k4kSaveButtonTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("cb118639-b459-4430-a4ed-1db3931590f7") 
enum Tkdpo2k3k4kImageFormatEnum
    {
        Tkdpo2k3k4kImageFormatPNG	= 0,
        Tkdpo2k3k4kImageFormatBMP	= 1,
        Tkdpo2k3k4kImageFormatTIFF	= 2
    } 	Tkdpo2k3k4kImageFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f52643fe-d84b-4276-9439-e7b69e5be3d6") 
enum Tkdpo2k3k4kImageLayoutEnum
    {
        Tkdpo2k3k4kImageLayoutLandscape	= 0,
        Tkdpo2k3k4kImageLayoutPortrait	= 1
    } 	Tkdpo2k3k4kImageLayoutEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("38ce421f-a3c6-4636-a33d-a656fb0d4425") 
enum Tkdpo2k3k4kSearchCopyEnum
    {
        Tkdpo2k3k4kSearchCopySearchTriggerToSearch	= 0,
        Tkdpo2k3k4kSearchCopySearchSearchToTrigger	= 1
    } 	Tkdpo2k3k4kSearchCopyEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4e607628-450a-4213-a2e2-2330744a9110") 
enum Tkdpo2k3k4kSearchSourceEnum
    {
        Tkdpo2k3k4kSearchSourceCH1	= 0,
        Tkdpo2k3k4kSearchSourceCH2	= 1,
        Tkdpo2k3k4kSearchSourceCH3	= 2,
        Tkdpo2k3k4kSearchSourceCH4	= 3,
        Tkdpo2k3k4kSearchSourceMath	= 4
    } 	Tkdpo2k3k4kSearchSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8a41011a-d61f-47e2-94b5-4f7e3b462117") 
enum Tkdpo2k3k4kTriggerRuntConditionEnum
    {
        Tkdpo2k3k4kTriggerRuntConditionLessthan	= 0,
        Tkdpo2k3k4kTriggerRuntConditionMorethan	= 1,
        Tkdpo2k3k4kTriggerRuntConditionEqual	= 2,
        Tkdpo2k3k4kTriggerRuntConditionUnequal	= 3,
        Tkdpo2k3k4kTriggerRuntConditionOccurs	= 4
    } 	Tkdpo2k3k4kTriggerRuntConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5c2bc445-87e6-491a-97e1-3d04381f1215") 
enum Tkdpo2k3k4kTriggerPulsePolarityEnum
    {
        Tkdpo2k3k4kTriggerPulsePolarityNegative	= 0,
        Tkdpo2k3k4kTriggerPulsePolarityPositive	= 1
    } 	Tkdpo2k3k4kTriggerPulsePolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("cd7c3871-8173-4669-9f1d-81bf32ef4adf") 
enum Tkdpo2k3k4kTriggerTransitionConditionEnum
    {
        Tkdpo2k3k4kTriggerTransitionConditionSlower	= 0,
        Tkdpo2k3k4kTriggerTransitionConditionFaster	= 1,
        Tkdpo2k3k4kTriggerTransitionConditionEqual	= 2,
        Tkdpo2k3k4kTriggerTransitionConditionUnequal	= 3
    } 	Tkdpo2k3k4kTriggerTransitionConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ca843791-a99c-450d-ba9f-60ecac9e6573") 
enum Tkdpo2k3k4kTriggerLogicInputChannelEnum
    {
        Tkdpo2k3k4kTriggerLogicInputChannelHigh	= 0,
        Tkdpo2k3k4kTriggerLogicInputChannelLow	= 1,
        Tkdpo2k3k4kTriggerLogicInputChannelX	= 2
    } 	Tkdpo2k3k4kTriggerLogicInputChannelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5aa9f92a-fd6d-4db9-ab00-8472b9c11b63") 
enum Tkdpo2k3k4kTriggerPatternConditionEnum
    {
        Tkdpo2k3k4kTriggerPatternConditionTrue	= 0,
        Tkdpo2k3k4kTriggerPatternConditionFalse	= 1,
        Tkdpo2k3k4kTriggerPatternConditionLessthan	= 2,
        Tkdpo2k3k4kTriggerPatternConditionMorethan	= 3,
        Tkdpo2k3k4kTriggerPatternConditionEqual	= 4,
        Tkdpo2k3k4kTriggerPatternConditionUnequal	= 5
    } 	Tkdpo2k3k4kTriggerPatternConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7ff67df4-4e51-4a10-9c11-48790d5c8bdb") 
enum Tkdpo2k3k4kSearchSource2Enum
    {
        Tkdpo2k3k4kSearchSource2CH1	= 0,
        Tkdpo2k3k4kSearchSource2CH2	= 1,
        Tkdpo2k3k4kSearchSource2CH3	= 2,
        Tkdpo2k3k4kSearchSource2CH4	= 3,
        Tkdpo2k3k4kSearchSource2Math	= 4,
        Tkdpo2k3k4kSearchSource2REF1	= 5,
        Tkdpo2k3k4kSearchSource2REF2	= 6,
        Tkdpo2k3k4kSearchSource2REF3	= 7,
        Tkdpo2k3k4kSearchSource2REF4	= 8,
        Tkdpo2k3k4kSearchSource2RFAmplitude	= 9,
        Tkdpo2k3k4kSearchSource2RFFrequency	= 10,
        Tkdpo2k3k4kSearchSource2RFPhase	= 11
    } 	Tkdpo2k3k4kSearchSource2Enum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f71e0ecd-8dec-4e35-93b6-59e3051b987d") 
enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum
    {
        Tkdpo2k3k4kTriggerLogicOperatorTypeAND	= 0,
        Tkdpo2k3k4kTriggerLogicOperatorTypeNAND	= 1,
        Tkdpo2k3k4kTriggerLogicOperatorTypeNOR	= 2,
        Tkdpo2k3k4kTriggerLogicOperatorTypeOR	= 3
    } 	Tkdpo2k3k4kTriggerLogicOperatorTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("502386bc-65e4-4740-8571-2cbe584905c8") 
enum Tkdpo2k3k4kSearchSource3Enum
    {
        Tkdpo2k3k4kSearchSource3CH1	= 0,
        Tkdpo2k3k4kSearchSource3CH2	= 1,
        Tkdpo2k3k4kSearchSource3CH3	= 2,
        Tkdpo2k3k4kSearchSource3CH4	= 3,
        Tkdpo2k3k4kSearchSource3Math	= 4,
        Tkdpo2k3k4kSearchSource3REF1	= 5,
        Tkdpo2k3k4kSearchSource3REF2	= 6,
        Tkdpo2k3k4kSearchSource3REF3	= 7,
        Tkdpo2k3k4kSearchSource3REF4	= 8,
        Tkdpo2k3k4kSearchSource3D0	= 9,
        Tkdpo2k3k4kSearchSource3D1	= 10,
        Tkdpo2k3k4kSearchSource3D2	= 11,
        Tkdpo2k3k4kSearchSource3D3	= 12,
        Tkdpo2k3k4kSearchSource3D4	= 13,
        Tkdpo2k3k4kSearchSource3D5	= 14,
        Tkdpo2k3k4kSearchSource3D6	= 15,
        Tkdpo2k3k4kSearchSource3D7	= 16,
        Tkdpo2k3k4kSearchSource3D8	= 17,
        Tkdpo2k3k4kSearchSource3D9	= 18,
        Tkdpo2k3k4kSearchSource3D10	= 19,
        Tkdpo2k3k4kSearchSource3D11	= 20,
        Tkdpo2k3k4kSearchSource3D12	= 21,
        Tkdpo2k3k4kSearchSource3D13	= 22,
        Tkdpo2k3k4kSearchSource3D14	= 23,
        Tkdpo2k3k4kSearchSource3D15	= 24,
        Tkdpo2k3k4kSearchSource3NONE	= 25,
        Tkdpo2k3k4kSearchSource3RFAmplitude	= 26,
        Tkdpo2k3k4kSearchSource3RFFrequency	= 27,
        Tkdpo2k3k4kSearchSource3RFPhase	= 28
    } 	Tkdpo2k3k4kSearchSource3Enum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5db4b632-249d-4fb8-9f89-1da54e5629a7") 
enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum
    {
        Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall	= 0,
        Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise	= 1,
        Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither	= 2
    } 	Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d89e1285-8aaa-4f21-842d-a63c977e6d0e") 
enum Tkdpo2k3k4kTriggerLogicClockSourceEnum
    {
        Tkdpo2k3k4kTriggerLogicClockSourceCH1	= 0,
        Tkdpo2k3k4kTriggerLogicClockSourceCH2	= 1,
        Tkdpo2k3k4kTriggerLogicClockSourceCH3	= 2,
        Tkdpo2k3k4kTriggerLogicClockSourceCH4	= 3,
        Tkdpo2k3k4kTriggerLogicClockSourceMath	= 4,
        Tkdpo2k3k4kTriggerLogicClockSourceREF1	= 5,
        Tkdpo2k3k4kTriggerLogicClockSourceREF2	= 6,
        Tkdpo2k3k4kTriggerLogicClockSourceREF3	= 7,
        Tkdpo2k3k4kTriggerLogicClockSourceREF4	= 8,
        Tkdpo2k3k4kTriggerLogicClockSourceD0	= 9,
        Tkdpo2k3k4kTriggerLogicClockSourceD1	= 10,
        Tkdpo2k3k4kTriggerLogicClockSourceD2	= 11,
        Tkdpo2k3k4kTriggerLogicClockSourceD3	= 12,
        Tkdpo2k3k4kTriggerLogicClockSourceD4	= 13,
        Tkdpo2k3k4kTriggerLogicClockSourceD5	= 14,
        Tkdpo2k3k4kTriggerLogicClockSourceD6	= 15,
        Tkdpo2k3k4kTriggerLogicClockSourceD7	= 16,
        Tkdpo2k3k4kTriggerLogicClockSourceD8	= 17,
        Tkdpo2k3k4kTriggerLogicClockSourceD9	= 18,
        Tkdpo2k3k4kTriggerLogicClockSourceD10	= 19,
        Tkdpo2k3k4kTriggerLogicClockSourceD11	= 20,
        Tkdpo2k3k4kTriggerLogicClockSourceD12	= 21,
        Tkdpo2k3k4kTriggerLogicClockSourceD13	= 22,
        Tkdpo2k3k4kTriggerLogicClockSourceD14	= 23,
        Tkdpo2k3k4kTriggerLogicClockSourceD15	= 24,
        Tkdpo2k3k4kTriggerLogicClockSourceNone	= 25,
        Tkdpo2k3k4kTriggerLogicClockSourceRF	= 26
    } 	Tkdpo2k3k4kTriggerLogicClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b615a87d-8cfb-4956-918b-eea8e613647e") 
enum Tkdpo2k3k4kSearchTypeEnum
    {
        Tkdpo2k3k4kSearchTypeEdge	= 0,
        Tkdpo2k3k4kSearchTypeSethold	= 1,
        Tkdpo2k3k4kSearchTypePulsewidth	= 2,
        Tkdpo2k3k4kSearchTypeRunt	= 3,
        Tkdpo2k3k4kSearchTypeTransition	= 4,
        Tkdpo2k3k4kSearchTypeLogic	= 5,
        Tkdpo2k3k4kSearchTypeBus	= 6
    } 	Tkdpo2k3k4kSearchTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3930f5fe-301f-4f8b-b297-b7e4f50af868") 
enum Tkdpo2k3k4kTrigABusSourceEnum
    {
        Tkdpo2k3k4kTrigABusSourceB1	= 0,
        Tkdpo2k3k4kTrigABusSourceB2	= 1,
        Tkdpo2k3k4kTrigABusSourceB3	= 2,
        Tkdpo2k3k4kTrigABusSourceB4	= 3
    } 	Tkdpo2k3k4kTrigABusSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4630bcb1-f2a5-4e03-8183-7c816fd82cbe") 
enum Tkdpo2k3k4kTrigABusAudioConditionEnum
    {
        Tkdpo2k3k4kTrigABusAudioConditionSOF	= 0,
        Tkdpo2k3k4kTrigABusAudioConditionData	= 1
    } 	Tkdpo2k3k4kTrigABusAudioConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1ad4e81e-bf07-46f4-a710-a9ace84f9099") 
enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum
    {
        Tkdpo2k3k4kTrigABusAudioDataQualifierLessthan	= 0,
        Tkdpo2k3k4kTrigABusAudioDataQualifierMorethan	= 1,
        Tkdpo2k3k4kTrigABusAudioDataQualifierEqual	= 2,
        Tkdpo2k3k4kTrigABusAudioDataQualifierUnequal	= 3,
        Tkdpo2k3k4kTrigABusAudioDataQualifierLessEqual	= 4,
        Tkdpo2k3k4kTrigABusAudioDataQualifierMoreEqual	= 5,
        Tkdpo2k3k4kTrigABusAudioDataQualifierInrange	= 6,
        Tkdpo2k3k4kTrigABusAudioDataQualifierOutrange	= 7
    } 	Tkdpo2k3k4kTrigABusAudioDataQualifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("24b5a87d-ffd8-431a-9ba1-6ec205503cae") 
enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum
    {
        Tkdpo2k3k4kTrigABusAudioDataAlignmentEither	= 0,
        Tkdpo2k3k4kTrigABusAudioDataAlignmentLeft	= 1,
        Tkdpo2k3k4kTrigABusAudioDataAlignmentRight	= 2
    } 	Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1c5c7f9e-a9a2-4776-b0a6-205fc6da8f89") 
enum Tkdpo2k3k4kTrigABusCANConditionEnum
    {
        Tkdpo2k3k4kTrigABusCANConditionSOF	= 0,
        Tkdpo2k3k4kTrigABusCANConditionFrameType	= 1,
        Tkdpo2k3k4kTrigABusCANConditionIdentifier	= 2,
        Tkdpo2k3k4kTrigABusCANConditionData	= 3,
        Tkdpo2k3k4kTrigABusCANConditionIdentifierData	= 4,
        Tkdpo2k3k4kTrigABusCANConditionEOF	= 5,
        Tkdpo2k3k4kTrigABusCANConditionACKMiss	= 6
    } 	Tkdpo2k3k4kTrigABusCANConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7019441f-3828-4dbc-b9e2-2ed4f2d71220") 
enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum
    {
        Tkdpo2k3k4kTrigABusCANDataDirectionREAD	= 0,
        Tkdpo2k3k4kTrigABusCANDataDirectionWRITE	= 1,
        Tkdpo2k3k4kTrigABusCANDataDirectionNOCARE	= 2
    } 	Tkdpo2k3k4kTrigABusCANDataDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("176e144e-1dff-4ff3-8ab9-1cfe01c0ebba") 
enum Tkdpo2k3k4kTrigABusCANQualifierEnum
    {
        Tkdpo2k3k4kTrigABusCANQualifierLessthan	= 0,
        Tkdpo2k3k4kTrigABusCANQualifierMorethan	= 1,
        Tkdpo2k3k4kTrigABusCANQualifierEqual	= 2,
        Tkdpo2k3k4kTrigABusCANQualifierUnequal	= 3,
        Tkdpo2k3k4kTrigABusCANQualifierLessEqual	= 4,
        Tkdpo2k3k4kTrigABusCANQualifierMoreEqual	= 5
    } 	Tkdpo2k3k4kTrigABusCANQualifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("13c43910-0ddf-4fde-ad1f-1c11a05b4ada") 
enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum
    {
        Tkdpo2k3k4kTrigABusCANFrameTypeData	= 0,
        Tkdpo2k3k4kTrigABusCANFrameTypeRemote	= 1,
        Tkdpo2k3k4kTrigABusCANFrameTypeError	= 2,
        Tkdpo2k3k4kTrigABusCANFrameTypeOverload	= 3
    } 	Tkdpo2k3k4kTrigABusCANFrameTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("722b6744-b75f-4034-a09c-9a2419313a7d") 
enum Tkdpo2k3k4kTrigABusCANAddressModeEnum
    {
        Tkdpo2k3k4kTrigABusCANAddressModeStandard	= 0,
        Tkdpo2k3k4kTrigABusCANAddressModeExtended	= 1
    } 	Tkdpo2k3k4kTrigABusCANAddressModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("890a1381-9775-4396-a3c8-ff3edbb99f48") 
enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum
    {
        Tkdpo2k3k4kTrigABusFlexrayConditionSOF	= 0,
        Tkdpo2k3k4kTrigABusFlexrayConditionFrameType	= 1,
        Tkdpo2k3k4kTrigABusFlexrayConditionData	= 2,
        Tkdpo2k3k4kTrigABusFlexrayConditionIdentifierData	= 3,
        Tkdpo2k3k4kTrigABusFlexrayConditionEOF	= 4,
        Tkdpo2k3k4kTrigABusFlexrayConditionCyclecount	= 5,
        Tkdpo2k3k4kTrigABusFlexrayConditionHeader	= 6,
        Tkdpo2k3k4kTrigABusFlexrayConditionError	= 7
    } 	Tkdpo2k3k4kTrigABusFlexrayConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("645b7e04-514a-4c40-960f-c0ee6d24b0a4") 
enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum
    {
        Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan	= 0,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan	= 1,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual	= 2,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal	= 3,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual	= 4,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual	= 5,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange	= 6,
        Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange	= 7
    } 	Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c0ad0ca2-eb06-4615-a05d-43caf2baeb45") 
enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum
    {
        Tkdpo2k3k4kTrigABusFlexrayEOFTypeStatic	= 0,
        Tkdpo2k3k4kTrigABusFlexrayEOFTypeDynamic	= 1,
        Tkdpo2k3k4kTrigABusFlexrayEOFTypeAny	= 2
    } 	Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d3296a95-7754-4c3a-9535-76d0f1a5bb5d") 
enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum
    {
        Tkdpo2k3k4kTrigABusFlexrayFrameTypeNormal	= 0,
        Tkdpo2k3k4kTrigABusFlexrayFrameTypePayload	= 1,
        Tkdpo2k3k4kTrigABusFlexrayFrameTypeNull	= 2,
        Tkdpo2k3k4kTrigABusFlexrayFrameTypeSync	= 3,
        Tkdpo2k3k4kTrigABusFlexrayFrameTypeStartup	= 4
    } 	Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b7a21515-7ef8-4a2c-835c-4d0d6f5dedbf") 
enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum
    {
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCHeader	= 0,
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCTrailer	= 1,
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeSYNCFrame	= 2,
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeSTARTupnosync	= 3,
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRStatic	= 4,
        Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRDynamic	= 5
    } 	Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9edcd872-ccd8-4d02-b73c-e2b078ac50cf") 
enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum
    {
        Tkdpo2k3k4kTrigABusI2CDataDirectionREAD	= 0,
        Tkdpo2k3k4kTrigABusI2CDataDirectionWRITE	= 1,
        Tkdpo2k3k4kTrigABusI2CDataDirectionNOCARE	= 2
    } 	Tkdpo2k3k4kTrigABusI2CDataDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d027aff5-b5dd-4e8c-a5be-7ad95b97c210") 
enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum
    {
        Tkdpo2k3k4kTrigABusI2CTrigConditionSTART	= 0,
        Tkdpo2k3k4kTrigABusI2CTrigConditionSTOP	= 1,
        Tkdpo2k3k4kTrigABusI2CTrigConditionREPEATSTART	= 2,
        Tkdpo2k3k4kTrigABusI2CTrigConditionACKMISS	= 3,
        Tkdpo2k3k4kTrigABusI2CTrigConditionADDRESS	= 4,
        Tkdpo2k3k4kTrigABusI2CTrigConditionDATA	= 5,
        Tkdpo2k3k4kTrigABusI2CTrigConditionADDRANDDATA	= 6
    } 	Tkdpo2k3k4kTrigABusI2CTrigConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0d643664-db58-4caa-b420-2806bfd5a0d6") 
enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum
    {
        Tkdpo2k3k4kTrigABusI2CAddrModeADDR7	= 0,
        Tkdpo2k3k4kTrigABusI2CAddrModeADDR10	= 1
    } 	Tkdpo2k3k4kTrigABusI2CAddrModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b510fc80-7e42-40df-b5b1-4242dc1b6f75") 
enum Tkdpo2k3k4kTrigABusLINConditionEnum
    {
        Tkdpo2k3k4kTrigABusLINConditionSYNCField	= 0,
        Tkdpo2k3k4kTrigABusLINConditionIDentifier	= 1,
        Tkdpo2k3k4kTrigABusLINConditionDATA	= 2,
        Tkdpo2k3k4kTrigABusLINConditionIDANDDATA	= 3,
        Tkdpo2k3k4kTrigABusLINConditionWAKEup	= 4,
        Tkdpo2k3k4kTrigABusLINConditionSLEEP	= 5,
        Tkdpo2k3k4kTrigABusLINConditionERROR	= 6
    } 	Tkdpo2k3k4kTrigABusLINConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0fc836a5-4694-485f-b186-9390fc53793d") 
enum Tkdpo2k3k4kTrigABusLINQualifierEnum
    {
        Tkdpo2k3k4kTrigABusLINQualifierLessthan	= 0,
        Tkdpo2k3k4kTrigABusLINQualifierMorethan	= 1,
        Tkdpo2k3k4kTrigABusLINQualifierEqual	= 2,
        Tkdpo2k3k4kTrigABusLINQualifierUnequal	= 3,
        Tkdpo2k3k4kTrigABusLINQualifierLessEqual	= 4,
        Tkdpo2k3k4kTrigABusLINQualifierMoreEqual	= 5,
        Tkdpo2k3k4kTrigABusLINQualifierInrange	= 6,
        Tkdpo2k3k4kTrigABusLINQualifierOutrange	= 7
    } 	Tkdpo2k3k4kTrigABusLINQualifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0a19243b-3c97-45ae-94c0-3aaa5f3de5b2") 
enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum
    {
        Tkdpo2k3k4kTrigABusLINErrorTypeSYNC	= 0,
        Tkdpo2k3k4kTrigABusLINErrorTypePARity	= 1,
        Tkdpo2k3k4kTrigABusLINErrorTypeCHecksum	= 2,
        Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime	= 3,
        Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime	= 4,
        Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime	= 5
    } 	Tkdpo2k3k4kTrigABusLINErrorTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8588ac54-3ad5-4f26-a106-410256206c12") 
enum Tkdpo2k3k4kTrigABusRS232ConditionEnum
    {
        Tkdpo2k3k4kTrigABusRS232ConditionRXData	= 0,
        Tkdpo2k3k4kTrigABusRS232ConditionRXEOP	= 1,
        Tkdpo2k3k4kTrigABusRS232ConditionRXParityError	= 2,
        Tkdpo2k3k4kTrigABusRS232ConditionRXStart	= 3,
        Tkdpo2k3k4kTrigABusRS232ConditionTXData	= 4,
        Tkdpo2k3k4kTrigABusRS232ConditionTXEOP	= 5,
        Tkdpo2k3k4kTrigABusRS232ConditionTXParityError	= 6,
        Tkdpo2k3k4kTrigABusRS232ConditionTXStart	= 7
    } 	Tkdpo2k3k4kTrigABusRS232ConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d40b6cb2-f880-42e4-9dc1-a077ceb61773") 
enum Tkdpo2k3k4kTrigABusSPIConditionEnum
    {
        Tkdpo2k3k4kTrigABusSPIConditionSS	= 0,
        Tkdpo2k3k4kTrigABusSPIConditionMISO	= 1,
        Tkdpo2k3k4kTrigABusSPIConditionMOSI	= 2,
        Tkdpo2k3k4kTrigABusSPIConditionMISOMOSI	= 3
    } 	Tkdpo2k3k4kTrigABusSPIConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("eec781b8-2253-41f4-b4bc-c3d32c93fc0e") 
enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum
    {
        Tkdpo2k3k4kTrigABusUSBSpecialTypeANY	= 0,
        Tkdpo2k3k4kTrigABusUSBSpecialPreamble	= 1,
        Tkdpo2k3k4kTrigABusUSBSpecialTypeRESERVED	= 2
    } 	Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("aa8083ff-2fae-44fb-aa3b-b231c5084c02") 
enum Tkdpo2k3k4kTrigABusUSBQualifierEnum
    {
        Tkdpo2k3k4kTrigABusUSBQualifierEQUAL	= 0,
        Tkdpo2k3k4kTrigABusUSBQualifierINRANGE	= 1,
        Tkdpo2k3k4kTrigABusUSBQualifierLESSEQUAL	= 2,
        Tkdpo2k3k4kTrigABusUSBQualifierMOREEQUAL	= 3,
        Tkdpo2k3k4kTrigABusUSBQualifierOUTRANGE	= 4,
        Tkdpo2k3k4kTrigABusUSBQualifierUNEQUAL	= 5,
        Tkdpo2k3k4kTrigABusUSBQualifierLESSTHAN	= 6,
        Tkdpo2k3k4kTrigABusUSBQualifierMORETHAN	= 7
    } 	Tkdpo2k3k4kTrigABusUSBQualifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c87c2b63-6b7d-4666-96fc-b592f8b87bd6") 
enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum
    {
        Tkdpo2k3k4kTrigABusUSBHandshakeTypeACK	= 0,
        Tkdpo2k3k4kTrigABusUSBHandshakeTypeANY	= 1,
        Tkdpo2k3k4kTrigABusUSBHandshakeTypeNAK	= 2,
        Tkdpo2k3k4kTrigABusUSBHandshakeTypeSTALL	= 3
    } 	Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b4708c16-12b1-45ad-bc46-1de4049b9e2f") 
enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum
    {
        Tkdpo2k3k4kTrigABusUSBERRTypeBitStuffing	= 0,
        Tkdpo2k3k4kTrigABusUSBERRTypeCRC16	= 1,
        Tkdpo2k3k4kTrigABusUSBERRTypeCRC5	= 2,
        Tkdpo2k3k4kTrigABusUSBERRTypePID	= 3
    } 	Tkdpo2k3k4kTrigABusUSBERRTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dfad24c0-5e88-44e2-b70b-64f278abf0d7") 
enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum
    {
        Tkdpo2k3k4kTrigABusUSBDATATypeDATA0	= 0,
        Tkdpo2k3k4kTrigABusUSBDATATypeDATA1	= 1,
        Tkdpo2k3k4kTrigABusUSBDATATypeAny	= 2
    } 	Tkdpo2k3k4kTrigABusUSBDATATypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("932d1e14-71ad-4ac0-ab38-d7c3ce32e77c") 
enum Tkdpo2k3k4kTrigABusUSBConditionEnum
    {
        Tkdpo2k3k4kTrigABusUSBConditionSYNC	= 0,
        Tkdpo2k3k4kTrigABusUSBConditionRESET	= 1,
        Tkdpo2k3k4kTrigABusUSBConditionSUSPEND	= 2,
        Tkdpo2k3k4kTrigABusUSBConditionRESUME	= 3,
        Tkdpo2k3k4kTrigABusUSBConditionEOP	= 4,
        Tkdpo2k3k4kTrigABusUSBConditionTOKENPacket	= 5,
        Tkdpo2k3k4kTrigABusUSBConditionDATAPacket	= 6,
        Tkdpo2k3k4kTrigABusUSBConditionHANDSHAKEPacket	= 7,
        Tkdpo2k3k4kTrigABusUSBConditionSPECIALPacket	= 8,
        Tkdpo2k3k4kTrigABusUSBConditionERRor	= 9
    } 	Tkdpo2k3k4kTrigABusUSBConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b5c3eed0-4dc2-4310-ab25-6dac81743bd8") 
enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum
    {
        Tkdpo2k3k4kTrigABusUSBTokenTypeANY	= 0,
        Tkdpo2k3k4kTrigABusUSBTokenTypeSOF	= 1,
        Tkdpo2k3k4kTrigABusUSBTokenTypeOUT	= 2,
        Tkdpo2k3k4kTrigABusUSBTokenTypeIN	= 3,
        Tkdpo2k3k4kTrigABusUSBTokenTypeSETUP	= 4
    } 	Tkdpo2k3k4kTrigABusUSBTokenTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("05fdf399-2a18-4ece-a7db-794bb475260c") 
enum Tkdpo2k3k4kTriggerSource2Enum
    {
        Tkdpo2k3k4kTriggerSource2CH1	= 0,
        Tkdpo2k3k4kTriggerSource2CH2	= 1,
        Tkdpo2k3k4kTriggerSource2CH3	= 2,
        Tkdpo2k3k4kTriggerSource2CH4	= 3,
        Tkdpo2k3k4kTriggerSource2D0	= 4,
        Tkdpo2k3k4kTriggerSource2D1	= 5,
        Tkdpo2k3k4kTriggerSource2D2	= 6,
        Tkdpo2k3k4kTriggerSource2D3	= 7,
        Tkdpo2k3k4kTriggerSource2D4	= 8,
        Tkdpo2k3k4kTriggerSource2D5	= 9,
        Tkdpo2k3k4kTriggerSource2D6	= 10,
        Tkdpo2k3k4kTriggerSource2D7	= 11,
        Tkdpo2k3k4kTriggerSource2D8	= 12,
        Tkdpo2k3k4kTriggerSource2D9	= 13,
        Tkdpo2k3k4kTriggerSource2D10	= 14,
        Tkdpo2k3k4kTriggerSource2D11	= 15,
        Tkdpo2k3k4kTriggerSource2D12	= 16,
        Tkdpo2k3k4kTriggerSource2D13	= 17,
        Tkdpo2k3k4kTriggerSource2D14	= 18,
        Tkdpo2k3k4kTriggerSource2D15	= 19,
        Tkdpo2k3k4kTriggerSource2EXT	= 20,
        Tkdpo2k3k4kTriggerSource2Line	= 21,
        Tkdpo2k3k4kTriggerSource2AUX	= 22,
        Tkdpo2k3k4kTriggerSource2RF	= 23
    } 	Tkdpo2k3k4kTriggerSource2Enum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("eb180996-f4a2-40a3-9008-8ad4c919e904") 
enum Tkdpo2k3k4kTriggerEdgeCouplingEnum
    {
        Tkdpo2k3k4kTriggerEdgeCouplingDC	= 0,
        Tkdpo2k3k4kTriggerEdgeCouplingHFRej	= 1,
        Tkdpo2k3k4kTriggerEdgeCouplingLFRej	= 2,
        Tkdpo2k3k4kTriggerEdgeCouplingNOISErej	= 3,
        Tkdpo2k3k4kTriggerEdgeCouplingAC	= 4
    } 	Tkdpo2k3k4kTriggerEdgeCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7f8e46b1-9f61-4097-b1a0-5a6472480fea") 
enum Tkdpo2k3k4kTriggerLevelEnum
    {
        Tkdpo2k3k4kTriggerLevelECL	= 0,
        Tkdpo2k3k4kTriggerLevelTTL	= 1
    } 	Tkdpo2k3k4kTriggerLevelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2f440f9a-c3c6-4820-816f-670c68935124") 
enum Tkdpo2k3k4kTriggerSourceEnum
    {
        Tkdpo2k3k4kTriggerSourceCH1	= 0,
        Tkdpo2k3k4kTriggerSourceCH2	= 1,
        Tkdpo2k3k4kTriggerSourceCH3	= 2,
        Tkdpo2k3k4kTriggerSourceCH4	= 3,
        Tkdpo2k3k4kTriggerSourceD0	= 4,
        Tkdpo2k3k4kTriggerSourceD1	= 5,
        Tkdpo2k3k4kTriggerSourceD2	= 6,
        Tkdpo2k3k4kTriggerSourceD3	= 7,
        Tkdpo2k3k4kTriggerSourceD4	= 8,
        Tkdpo2k3k4kTriggerSourceD5	= 9,
        Tkdpo2k3k4kTriggerSourceD6	= 10,
        Tkdpo2k3k4kTriggerSourceD7	= 11,
        Tkdpo2k3k4kTriggerSourceD8	= 12,
        Tkdpo2k3k4kTriggerSourceD9	= 13,
        Tkdpo2k3k4kTriggerSourceD10	= 14,
        Tkdpo2k3k4kTriggerSourceD11	= 15,
        Tkdpo2k3k4kTriggerSourceD12	= 16,
        Tkdpo2k3k4kTriggerSourceD13	= 17,
        Tkdpo2k3k4kTriggerSourceD14	= 18,
        Tkdpo2k3k4kTriggerSourceD15	= 19
    } 	Tkdpo2k3k4kTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dd96d3c7-20de-45be-a32d-1c67b2350895") 
enum Tkdpo2k3k4kTriggerVideoPolarityEnum
    {
        Tkdpo2k3k4kTriggerVideoPolarityNegative	= 0,
        Tkdpo2k3k4kTriggerVideoPolarityPositive	= 1
    } 	Tkdpo2k3k4kTriggerVideoPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7ac946a9-6554-475f-b999-e199522cb149") 
enum Tkdpo2k3k4kTriggerVideoStandardEnum
    {
        Tkdpo2k3k4kTriggerVideoStandardNTSc	= 0,
        Tkdpo2k3k4kTriggerVideoStandardPAL	= 1,
        Tkdpo2k3k4kTriggerVideoStandardSECAM	= 2,
        Tkdpo2k3k4kTriggerVideoStandardCUSTom	= 3,
        Tkdpo2k3k4kTriggerVideoStandardHDtv	= 4
    } 	Tkdpo2k3k4kTriggerVideoStandardEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("88735ce7-d294-4427-b0d1-8e3ea3f8945c") 
enum Tkdpo2k3k4kTriggerVideoFieldsEnum
    {
        Tkdpo2k3k4kTriggerVideoFieldsODD	= 0,
        Tkdpo2k3k4kTriggerVideoFieldsEVEN	= 1,
        Tkdpo2k3k4kTriggerVideoFieldsALLFields	= 2,
        Tkdpo2k3k4kTriggerVideoFieldsALLLines	= 3,
        Tkdpo2k3k4kTriggerVideoFieldsNUMERic	= 4
    } 	Tkdpo2k3k4kTriggerVideoFieldsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e9107328-bf74-45ff-a199-b93b5510f6cc") 
enum Tkdpo2k3k4kTriggerVideoCustomFormatEnum
    {
        Tkdpo2k3k4kTriggerVideoCustomFormatINTERLAced	= 0,
        Tkdpo2k3k4kTriggerVideoCustomFormatPROGressive	= 1
    } 	Tkdpo2k3k4kTriggerVideoCustomFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8cc6433b-6547-4910-a84f-50faadf76c0e") 
enum Tkdpo2k3k4kTriggerVideoCustomScanEnum
    {
        Tkdpo2k3k4kTriggerVideoCustomScanRATE15K	= 0,
        Tkdpo2k3k4kTriggerVideoCustomScanRATE20K	= 1,
        Tkdpo2k3k4kTriggerVideoCustomScanRATE25K	= 2,
        Tkdpo2k3k4kTriggerVideoCustomScanRATE35K	= 3,
        Tkdpo2k3k4kTriggerVideoCustomScanRATE50K	= 4
    } 	Tkdpo2k3k4kTriggerVideoCustomScanEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dddac7b7-c771-4587-b27a-1c25a0bdb718") 
enum Tkdpo2k3k4kTriggerVideoHDTvFormatEnum
    {
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P24	= 0,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD720P60	= 1,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD480P60	= 2,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I50	= 3,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P25	= 4,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I60	= 5,
        Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080PSF24	= 6
    } 	Tkdpo2k3k4kTriggerVideoHDTvFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("95193837-b5b6-4204-87c2-77ccca81d5fd") 
enum Tkdpo2k3k4kTriggerBusTypeEnum
    {
        Tkdpo2k3k4kTriggerBusTypeI2C	= 0,
        Tkdpo2k3k4kTriggerBusTypeSPI	= 1,
        Tkdpo2k3k4kTriggerBusTypeCAN	= 2,
        Tkdpo2k3k4kTriggerBusTypeRS232C	= 3,
        Tkdpo2k3k4kTriggerBusTypePARallel	= 4,
        Tkdpo2k3k4kTriggerBusTypeUSB	= 5
    } 	Tkdpo2k3k4kTriggerBusTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("845d425e-2977-4b61-b8c7-ad523d95ab0a") 
enum Tkdpo2k3k4kTriggerModeEnum
    {
        Tkdpo2k3k4kTriggerModeAUTO	= 0,
        Tkdpo2k3k4kTriggerModeNORMal	= 1
    } 	Tkdpo2k3k4kTriggerModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("173286d7-64e7-4962-8faf-74a3bab9b141") 
enum Tkdpo2k3k4kTriggerBByEnum
    {
        Tkdpo2k3k4kTriggerBByEvents	= 0,
        Tkdpo2k3k4kTriggerBByTime	= 1
    } 	Tkdpo2k3k4kTriggerBByEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a6e0c548-0f14-47de-8eb6-5a1ca4fb77e7") 
enum Tkdpo2k3k4kChannelProbeSignalEnum
    {
        Tkdpo2k3k4kChannelProbeSignalPASS	= 0,
        Tkdpo2k3k4kChannelProbeSignalBYPASS	= 1
    } 	Tkdpo2k3k4kChannelProbeSignalEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("74c1d49f-5f23-49f5-b3e4-92060b732af8") 
enum Tkdpo2k3k4kChannelCouplingEnum
    {
        Tkdpo2k3k4kChannelCouplingAC	= 0,
        Tkdpo2k3k4kChannelCouplingDC	= 1,
        Tkdpo2k3k4kChannelCouplingGND	= 2
    } 	Tkdpo2k3k4kChannelCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9d01d373-51aa-4602-bdd7-a59bbc584d67") 
enum Tkdpo2k3k4kChannelTerminationEnum
    {
        Tkdpo2k3k4kChannelTerminationFifty	= 0,
        Tkdpo2k3k4kChannelTerminationMega	= 1
    } 	Tkdpo2k3k4kChannelTerminationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3330e3c6-7783-4320-bf3f-4a49e3b4b3e5") 
enum Tkdpo2k3k4kChannelBandwidthEnum
    {
        Tkdpo2k3k4kChannelBandwidthTwenty	= 0,
        Tkdpo2k3k4kChannelBandwidthTwoFifty	= 1,
        Tkdpo2k3k4kChannelBandwidthFull	= 2
    } 	Tkdpo2k3k4kChannelBandwidthEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("61d11c09-03ae-4f6b-ac6f-7332e7b587a0") 
enum Tkdpo2k3k4kProbeDegaussStateEnum
    {
        Tkdpo2k3k4kProbeDegaussStateNEEDED	= 0,
        Tkdpo2k3k4kProbeDegaussStateRECOMMENDED	= 1,
        Tkdpo2k3k4kProbeDegaussStatePASSED	= 2,
        Tkdpo2k3k4kProbeDegaussStateFAILED	= 3,
        Tkdpo2k3k4kProbeDegaussStateRUNNING	= 4
    } 	Tkdpo2k3k4kProbeDegaussStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7a4eecf6-925c-40c7-ad7a-5b4ec0a47412") 
enum Tkdpo2k3k4kDataSourceEnum
    {
        Tkdpo2k3k4kDataSourceCH1	= 0,
        Tkdpo2k3k4kDataSourceCH2	= 1,
        Tkdpo2k3k4kDataSourceCH3	= 2,
        Tkdpo2k3k4kDataSourceCH4	= 3,
        Tkdpo2k3k4kDataSourceMath	= 4,
        Tkdpo2k3k4kDataSourceREF1	= 5,
        Tkdpo2k3k4kDataSourceREF2	= 6,
        Tkdpo2k3k4kDataSourceREF3	= 7,
        Tkdpo2k3k4kDataSourceREF4	= 8,
        Tkdpo2k3k4kDataSourceD0	= 9,
        Tkdpo2k3k4kDataSourceD1	= 10,
        Tkdpo2k3k4kDataSourceD2	= 11,
        Tkdpo2k3k4kDataSourceD3	= 12,
        Tkdpo2k3k4kDataSourceD4	= 13,
        Tkdpo2k3k4kDataSourceD5	= 14,
        Tkdpo2k3k4kDataSourceD6	= 15,
        Tkdpo2k3k4kDataSourceD7	= 16,
        Tkdpo2k3k4kDataSourceD8	= 17,
        Tkdpo2k3k4kDataSourceD9	= 18,
        Tkdpo2k3k4kDataSourceD10	= 19,
        Tkdpo2k3k4kDataSourceD11	= 20,
        Tkdpo2k3k4kDataSourceD12	= 21,
        Tkdpo2k3k4kDataSourceD13	= 22,
        Tkdpo2k3k4kDataSourceD14	= 23,
        Tkdpo2k3k4kDataSourceD15	= 24,
        Tkdpo2k3k4kDataSourceDigital	= 25,
        Tkdpo2k3k4kDataSourceRF_AMPlitude	= 26,
        Tkdpo2k3k4kDataSourceRF_FREQuency	= 27,
        Tkdpo2k3k4kDataSourceRF_PHASe	= 28,
        Tkdpo2k3k4kDataSourceRF_NORMal	= 29,
        Tkdpo2k3k4kDataSourceRF_AVErage	= 30,
        Tkdpo2k3k4kDataSourceRF_MAXHold	= 31,
        Tkdpo2k3k4kDataSourceRF_MINHold	= 32
    } 	Tkdpo2k3k4kDataSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e98f3431-c14c-4211-990a-21ee116cf246") 
enum Tkdpo2k3k4kWaveformFileFormatEnum
    {
        Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor	= 0,
        Tkdpo2k3k4kWaveformFileFormatWithScaleFactor	= 1
    } 	Tkdpo2k3k4kWaveformFileFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("74fe95e1-6313-4211-86aa-4db97fad0eb5") 
enum Tkdpo2k3k4kTiggerPulseSourceEnum
    {
        Tkdpo2k3k4kTiggerPulseSourceCH1	= 0,
        Tkdpo2k3k4kTiggerPulseSourceCH2	= 1,
        Tkdpo2k3k4kTiggerPulseSourceCH3	= 2,
        Tkdpo2k3k4kTiggerPulseSourceCH4	= 3,
        Tkdpo2k3k4kTiggerPulseSourceD0	= 4,
        Tkdpo2k3k4kTiggerPulseSourceD1	= 5,
        Tkdpo2k3k4kTiggerPulseSourceD2	= 6,
        Tkdpo2k3k4kTiggerPulseSourceD3	= 7,
        Tkdpo2k3k4kTiggerPulseSourceD4	= 8,
        Tkdpo2k3k4kTiggerPulseSourceD5	= 9,
        Tkdpo2k3k4kTiggerPulseSourceD6	= 10,
        Tkdpo2k3k4kTiggerPulseSourceD7	= 11,
        Tkdpo2k3k4kTiggerPulseSourceD8	= 12,
        Tkdpo2k3k4kTiggerPulseSourceD9	= 13,
        Tkdpo2k3k4kTiggerPulseSourceD10	= 14,
        Tkdpo2k3k4kTiggerPulseSourceD11	= 15,
        Tkdpo2k3k4kTiggerPulseSourceD12	= 16,
        Tkdpo2k3k4kTiggerPulseSourceD13	= 17,
        Tkdpo2k3k4kTiggerPulseSourceD14	= 18,
        Tkdpo2k3k4kTiggerPulseSourceD15	= 19,
        Tkdpo2k3k4kTiggerPulseSourceLINE	= 20,
        Tkdpo2k3k4kTiggerPulseSourceEXT	= 21,
        Tkdpo2k3k4kTiggerPulseSourceRF	= 22
    } 	Tkdpo2k3k4kTiggerPulseSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("42d67e97-9837-428c-8ab8-2eb0ed2124cf") 
enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum
    {
        Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan	= 0,
        Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan	= 1,
        Tkdpo2k3k4kTriggerPulseWidthConditionEQual	= 2,
        Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual	= 3
    } 	Tkdpo2k3k4kTriggerPulseWidthConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0a6b14bd-9a46-49ea-b138-1948b19c24de") 
enum Tkdpo2k3k4kTriggerRuntPolarityEnum
    {
        Tkdpo2k3k4kTriggerRuntPolarityEITher	= 0,
        Tkdpo2k3k4kTriggerRuntPolarityNEGative	= 1,
        Tkdpo2k3k4kTriggerRuntPolarityPOSitive	= 2
    } 	Tkdpo2k3k4kTriggerRuntPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3464a991-3045-45c4-96e8-df4fdf501e39") 
enum Tkdpo2k3k4kTriggerWidthPolarityEnum
    {
        Tkdpo2k3k4kTriggerWidthPolarityPositive	= 1,
        Tkdpo2k3k4kTriggerWidthPolarityNegative	= 2
    } 	Tkdpo2k3k4kTriggerWidthPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f524b112-87da-408b-a4f9-ee12fd152ef9") 
enum Tkdpo2k3k4kSearchStateEnum
    {
        Tkdpo2k3k4kSearchStateON	= 0,
        Tkdpo2k3k4kSearchStateOFF	= 1
    } 	Tkdpo2k3k4kSearchStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c49fd28a-043b-46aa-adc0-087cc5c19f68") 
enum Tkdpo2k3k4kTriggerPatternTypeEnum
    {
        Tkdpo2k3k4kTriggerPatternTypeAND	= 0,
        Tkdpo2k3k4kTriggerPatternTypeNAND	= 1,
        Tkdpo2k3k4kTriggerPatternTypeNOR	= 2,
        Tkdpo2k3k4kTriggerPatternTypeOR	= 3
    } 	Tkdpo2k3k4kTriggerPatternTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("331a0c5c-8bb9-445f-b877-64fbe4a1d973") 
enum Tkdpo2k3k4kChannelCalibrationEnum
    {
        Tkdpo2k3k4kChannelCalibrationPass	= 0,
        Tkdpo2k3k4kChannelCalibrationInitialized	= 1,
        Tkdpo2k3k4kChannelCalibrationRunning	= 2,
        Tkdpo2k3k4kChannelCalibrationFail	= 3
    } 	Tkdpo2k3k4kChannelCalibrationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("cbecd1b6-9173-44c9-8e64-4077168f7ee9") 
enum Tkdpo2k3k4kDigitalChannelStateEnum
    {
        Tkdpo2k3k4kDigitalChannelStateON	= 0,
        Tkdpo2k3k4kDigitalChannelStateOFF	= 1
    } 	Tkdpo2k3k4kDigitalChannelStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5ab7716b-38d2-4fe7-bbba-f83770329371") 
enum Tkdpo2k3k4kUtilityExCalibrationStatusEnum
    {
        Tkdpo2k3k4kUtilityExCalibrationStatusInit	= 0,
        Tkdpo2k3k4kUtilityExCalibrationStatusPass	= 1,
        Tkdpo2k3k4kUtilityExCalibrationStatusFail	= 2,
        Tkdpo2k3k4kUtilityExCalibrationStatusRunning	= 3
    } 	Tkdpo2k3k4kUtilityExCalibrationStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7af44210-0d00-47e0-a678-3b7f171edcde") 
enum Tkdpo2k3k4kUtilityExFrontPanelLockEnum
    {
        Tkdpo2k3k4kUtilityExFrontPanelLockAll	= 0,
        Tkdpo2k3k4kUtilityExFrontPanelLockNone	= 1
    } 	Tkdpo2k3k4kUtilityExFrontPanelLockEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("60d291ee-429b-4ba9-9ad1-b8aab09c9cc2") 
enum Tkdpo2k3k4kAcquisitionSamplingModeEnum
    {
        Tkdpo2k3k4kAcquisitionSamplingModeRT	= 0,
        Tkdpo2k3k4kAcquisitionSamplingModeET	= 1,
        Tkdpo2k3k4kAcquisitionSamplingModeIT	= 2
    } 	Tkdpo2k3k4kAcquisitionSamplingModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("03835724-cb53-4c0c-a7d8-5a1636d680d0") 
enum Tkdpo2k3k4kPowerTypeEnum
    {
        Tkdpo2k3k4kPowerTypeNONe	= 0,
        Tkdpo2k3k4kPowerTypeQUALity	= 1,
        Tkdpo2k3k4kPowerTypeSWITCHingloss	= 2,
        Tkdpo2k3k4kPowerTypeSOA	= 3,
        Tkdpo2k3k4kPowerTypeHARMonics	= 4,
        Tkdpo2k3k4kPowerTypeRIPPle	= 5,
        Tkdpo2k3k4kPowerTypeMODULationanalysis	= 6,
        Tkdpo2k3k4kPowerTypeDESKew	= 7
    } 	Tkdpo2k3k4kPowerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("31d9b8a4-c7a6-4ccc-8af8-afd150248042") 
enum Tkdpo2k3k4kPowerSourceEnum
    {
        Tkdpo2k3k4kPowerSourceCH1	= 0,
        Tkdpo2k3k4kPowerSourceCH2	= 1,
        Tkdpo2k3k4kPowerSourceCH3	= 2,
        Tkdpo2k3k4kPowerSourceCH4	= 3,
        Tkdpo2k3k4kPowerSourceREF1	= 4,
        Tkdpo2k3k4kPowerSourceREF2	= 5,
        Tkdpo2k3k4kPowerSourceREF3	= 6,
        Tkdpo2k3k4kPowerSourceREF4	= 7
    } 	Tkdpo2k3k4kPowerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b541c959-ed18-4020-bd87-7b48cfb8615a") 
enum Tkdpo2k3k4kPowerGateSourceEnum
    {
        Tkdpo2k3k4kPowerGateSourceCH1	= 0,
        Tkdpo2k3k4kPowerGateSourceCH2	= 1,
        Tkdpo2k3k4kPowerGateSourceCH3	= 2,
        Tkdpo2k3k4kPowerGateSourceCH4	= 3,
        Tkdpo2k3k4kPowerGateSourceREF1	= 4,
        Tkdpo2k3k4kPowerGateSourceREF2	= 5,
        Tkdpo2k3k4kPowerGateSourceREF3	= 6,
        Tkdpo2k3k4kPowerGateSourceREF4	= 7,
        Tkdpo2k3k4kPowerGateSourceNone	= 8
    } 	Tkdpo2k3k4kPowerGateSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fc810341-e2ae-49f2-8432-682493a4484f") 
enum Tkdpo2k3k4kPowerGatingEnum
    {
        Tkdpo2k3k4kPowerGatingOFF	= 0,
        Tkdpo2k3k4kPowerGatingSCREen	= 1,
        Tkdpo2k3k4kPowerGatingCURSor	= 2
    } 	Tkdpo2k3k4kPowerGatingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d6491de1-bbf9-4ed2-91e0-289b7f68f21f") 
enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum
    {
        Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute	= 0,
        Tkdpo2k3k4kPowerReferenceLevelTypePercent	= 1
    } 	Tkdpo2k3k4kPowerReferenceLevelTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c1eca642-0702-46be-9cd2-2c7306e9f0ec") 
enum Tkdpo2k3k4kPowerStatisticsModeEnum
    {
        Tkdpo2k3k4kPowerStatisticsModeOFF	= 0,
        Tkdpo2k3k4kPowerStatisticsModeALL	= 1
    } 	Tkdpo2k3k4kPowerStatisticsModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4ac0564a-70be-46d9-be94-8fb799f69d55") 
enum Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum
    {
        Tkdpo2k3k4kPowerQualityDisplayMeasurementAPPpwr	= 0,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementFREQuency	= 1,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementICRESTfactor	= 2,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementIRMS	= 3,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementPHASEangle	= 4,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementPOWERFACtor	= 5,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementREACTpwr	= 6,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementTRUEpwr	= 7,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementVCRESTfactor	= 8,
        Tkdpo2k3k4kPowerQualityDisplayMeasurementVRMS	= 9
    } 	Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2bc3ad1a-5e2b-4a76-9a73-56d338d2f17c") 
enum Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum
    {
        Tkdpo2k3k4kPowerQualityFrequencyReferenceVoltage	= 0,
        Tkdpo2k3k4kPowerQualityFrequencyReferenceCurrent	= 1
    } 	Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8b11ba19-d18e-4741-968b-4b2011916add") 
enum Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum
    {
        Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayALL	= 0,
        Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayENERGYLoss	= 1,
        Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayPOWERLoss	= 2
    } 	Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7d8247db-2ead-4234-962d-1808f2c35789") 
enum Tkdpo2k3k4kPowerGatingPolarityEnum
    {
        Tkdpo2k3k4kPowerGatingPolarityFALL	= 0,
        Tkdpo2k3k4kPowerGatingPolarityRise	= 1
    } 	Tkdpo2k3k4kPowerGatingPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("25f1bba5-9466-4491-ab39-c050bf2e7027") 
enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum
    {
        Tkdpo2k3k4kPowerSwitchingLossTypePower	= 0,
        Tkdpo2k3k4kPowerSwitchingLossTypeEnergy	= 1
    } 	Tkdpo2k3k4kPowerSwitchingLossTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a6a82888-c891-453b-83e0-2e144553091f") 
enum Tkdpo2k3k4kPowerHarmonicsStandardEnum
    {
        Tkdpo2k3k4kPowerHarmonicsStandardNone	= 0,
        Tkdpo2k3k4kPowerHarmonicsStandardIEC	= 1,
        Tkdpo2k3k4kPowerHarmonicsStandardMIL	= 2
    } 	Tkdpo2k3k4kPowerHarmonicsStandardEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("38515ff8-4e48-42a9-bf7c-b9ec2931f658") 
enum Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum
    {
        Tkdpo2k3k4kPowerHarmonicsDisplaySetOdd	= 0,
        Tkdpo2k3k4kPowerHarmonicsDisplaySetEven	= 1,
        Tkdpo2k3k4kPowerHarmonicsDisplaySetAll	= 2
    } 	Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3285fed3-e02e-455b-a6ea-94128e3a6d69") 
enum Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum
    {
        Tkdpo2k3k4kPowerHarmonicsDisplayTypeGraph	= 0,
        Tkdpo2k3k4kPowerHarmonicsDisplayTypeTable	= 1
    } 	Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2dca5d53-14aa-48d3-b58d-3bdae7bcab59") 
enum Tkdpo2k3k4kPowerHarmonicsIECClassEnum
    {
        Tkdpo2k3k4kPowerHarmonicsIECClassA	= 0,
        Tkdpo2k3k4kPowerHarmonicsIECClassB	= 1,
        Tkdpo2k3k4kPowerHarmonicsIECClassC1	= 2,
        Tkdpo2k3k4kPowerHarmonicsIECClassC2	= 3,
        Tkdpo2k3k4kPowerHarmonicsIECClassC3	= 4,
        Tkdpo2k3k4kPowerHarmonicsIECClassD	= 5
    } 	Tkdpo2k3k4kPowerHarmonicsIECClassEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("08d12ace-7c24-4c4b-86e4-91f4e4973b9e") 
enum Tkdpo2k3k4kPowerHarmonicsSourceEnum
    {
        Tkdpo2k3k4kPowerHarmonicsSourceVoltage	= 0,
        Tkdpo2k3k4kPowerHarmonicsSourceCurrent	= 1
    } 	Tkdpo2k3k4kPowerHarmonicsSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d0bb4dbd-5eea-45c9-b126-8c2dda0650fd") 
enum Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum
    {
        Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceVOLTage	= 0,
        Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceCURRent	= 1,
        Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce	= 2,
        Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceFIXEDFREQuency	= 3
    } 	Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8e199e68-1bf6-4ced-9baa-892cdd56a3ce") 
enum Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum
    {
        Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS	= 0,
        Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingUSER	= 1
    } 	Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("00fc1d91-e6ba-4e34-8847-ca629f2a3a2a") 
enum Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum
    {
        Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow	= 0,
        Tkdpo2k3k4kPowerHamronicsMILPowerLevelHigh	= 1
    } 	Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4ae8502d-8dc2-428c-aba0-93b83e696107") 
enum Tkdpo2k3k4kPowerHamronicsPassFailEnum
    {
        Tkdpo2k3k4kPowerHamronicsPassFailPASS	= 0,
        Tkdpo2k3k4kPowerHamronicsPassFailFAIL	= 1,
        Tkdpo2k3k4kPowerHamronicsPassFailNA	= 2
    } 	Tkdpo2k3k4kPowerHamronicsPassFailEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("394436f3-ef1b-4be0-ac5c-b19f55932c6b") 
enum Tkdpo2k3k4kPowerRippleSourceEnum
    {
        Tkdpo2k3k4kPowerRippleSourceVoltage	= 0,
        Tkdpo2k3k4kPowerRippleSourceCurrent	= 1
    } 	Tkdpo2k3k4kPowerRippleSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f3b29a0a-f869-41b0-8b98-d36e55b75154") 
enum Tkdpo2k3k4kPowerModulationSourceEnum
    {
        Tkdpo2k3k4kPowerModulationSourceVoltage	= 0,
        Tkdpo2k3k4kPowerModulationSourceCurrent	= 1
    } 	Tkdpo2k3k4kPowerModulationSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5ccfb0c1-492c-46e9-b74b-91227a0f048d") 
enum Tkdpo2k3k4kPowerModulationTypeEnum
    {
        Tkdpo2k3k4kPowerModulationTypePWIdth	= 0,
        Tkdpo2k3k4kPowerModulationTypeNWIdth	= 1,
        Tkdpo2k3k4kPowerModulationTypePERIod	= 2,
        Tkdpo2k3k4kPowerModulationTypePDUty	= 3,
        Tkdpo2k3k4kPowerModulationTypeNDUty	= 4,
        Tkdpo2k3k4kPowerModulationTypeFREQuency	= 5
    } 	Tkdpo2k3k4kPowerModulationTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("55b4439a-c799-4b6d-91f6-94dc1a59f3b1") 
enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum
    {
        Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG	= 0,
        Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear	= 1
    } 	Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d2a8d53b-4d51-4215-894d-48833e82e550") 
enum Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum
    {
        Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateOFF	= 0,
        Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateLIMITS	= 1,
        Tkdpo2k3k4kPowerSafeOperatingAreaMaskStatePOINTS	= 2
    } 	Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("01b702e3-575e-4e49-a199-cf05f1fd4869") 
enum Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum
    {
        Tkdpo2k3k4kPowerSafeOperatingAreaResultStatePASS	= 0,
        Tkdpo2k3k4kPowerSafeOperatingAreaResultStateFAIL	= 1
    } 	Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("cfaf3df2-36b7-49aa-8bfe-c27ee77ad6c4") 
enum Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum
    {
        Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVoltage	= 0,
        Tkdpo2k3k4kPowerSwitchingLossConductionCalculationRDSOn	= 1,
        Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVCESat	= 2
    } 	Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("baa83172-0d25-45b1-a00c-4a1143635585") 
enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum
    {
        Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal	= 0,
        Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold	= 1,
        Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold	= 2,
        Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage	= 3
    } 	Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dbd6b683-df2b-437b-8c0f-ed52f62af228") 
enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum
    {
        Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude	= 0,
        Tkdpo2k3k4kFrequencyRFTraceTypeFrequency	= 1,
        Tkdpo2k3k4kFrequencyRFTraceTypePhase	= 2
    } 	Tkdpo2k3k4kFrequencyRFTraceTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c0e2d3d4-a8a1-4ee4-827b-f50cfa54128d") 
enum Tkdpo2k3k4kFrequencyRFDetectionModeEnum
    {
        Tkdpo2k3k4kFrequencyRFDetectionModeAuto	= 0,
        Tkdpo2k3k4kFrequencyRFDetectionModeManual	= 1
    } 	Tkdpo2k3k4kFrequencyRFDetectionModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6d9f5d3d-fa3c-4ae7-9f65-5ab782c288fe") 
enum Tkdpo2k3k4kFrequencyRFDetectionMethodEnum
    {
        Tkdpo2k3k4kFrequencyRFDetectionMethodMINUSpeak	= 0,
        Tkdpo2k3k4kFrequencyRFDetectionMethodSAMple	= 1,
        Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak	= 2,
        Tkdpo2k3k4kFrequencyRFDetectionMethodAVErage	= 3
    } 	Tkdpo2k3k4kFrequencyRFDetectionMethodEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("956acf1a-20df-4de5-bb99-ceda6b20c193") 
enum Tkdpo2k3k4kFrequencySpectrumModeEnum
    {
        Tkdpo2k3k4kFrequencySpectrumModeTRIGgered	= 0,
        Tkdpo2k3k4kFrequencySpectrumModeFREErun	= 1
    } 	Tkdpo2k3k4kFrequencySpectrumModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a84a323b-ec69-4057-94a3-39779e239c93") 
enum Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum
    {
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDBM	= 0,
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUW	= 1,
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMV	= 2,
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDMUV	= 3,
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMA	= 4,
        Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUA	= 5
    } 	Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f1904e2d-f9a8-4330-869c-afd4ce504e79") 
enum Tkdpo2k3k4kFrequencyRFWindowEnum
    {
        Tkdpo2k3k4kFrequencyRFWindowRECTangular	= 0,
        Tkdpo2k3k4kFrequencyRFWindowHAMming	= 1,
        Tkdpo2k3k4kFrequencyRFWindowHANning	= 2,
        Tkdpo2k3k4kFrequencyRFWindowBLAckmanharris	= 3,
        Tkdpo2k3k4kFrequencyRFWindowKAIser	= 4,
        Tkdpo2k3k4kFrequencyRFWindowFLATtop	= 5
    } 	Tkdpo2k3k4kFrequencyRFWindowEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a6dafb66-64b1-401d-9c15-27ad474ad949") 
enum Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum
    {
        Tkdpo2k3k4kFrequencyRFMeasurementTypeNONe	= 0,
        Tkdpo2k3k4kFrequencyRFMeasurementTypeCP	= 1,
        Tkdpo2k3k4kFrequencyRFMeasurementTypeACPR	= 2,
        Tkdpo2k3k4kFrequencyRFMeasurementTypeOBW	= 3
    } 	Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dc834ed3-9d22-4204-9b98-e4e0584e3077") 
enum Tkdpo2k3k4kFrequencyRBWModeEnum
    {
        Tkdpo2k3k4kFrequencyRBWModeAuto	= 0,
        Tkdpo2k3k4kFrequencyRBWModeManual	= 1
    } 	Tkdpo2k3k4kFrequencyRBWModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4c0a776f-ba8c-41f5-aa16-5467591c1288") 
enum Tkdpo2k3k4kFrequencyRFMarkerTypeEnum
    {
        Tkdpo2k3k4kFrequencyRFMarkerTypeDelta	= 0,
        Tkdpo2k3k4kFrequencyRFMarkerTypeAbsolute	= 1
    } 	Tkdpo2k3k4kFrequencyRFMarkerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2ad2cd95-eee1-4efd-b5ba-42d7956e01f3") 
enum Tkdpo2k3k4kCursorSourceEnum
    {
        Tkdpo2k3k4kCursorSourceCH1	= 0,
        Tkdpo2k3k4kCursorSourceCH2	= 1,
        Tkdpo2k3k4kCursorSourceCH3	= 2,
        Tkdpo2k3k4kCursorSourceCH4	= 3,
        Tkdpo2k3k4kCursorSourceMath	= 4,
        Tkdpo2k3k4kCursorSourceREF1	= 5,
        Tkdpo2k3k4kCursorSourceREF2	= 6,
        Tkdpo2k3k4kCursorSourceREF3	= 7,
        Tkdpo2k3k4kCursorSourceREF4	= 8,
        Tkdpo2k3k4kCursorSourceD0	= 9,
        Tkdpo2k3k4kCursorSourceD1	= 10,
        Tkdpo2k3k4kCursorSourceD2	= 11,
        Tkdpo2k3k4kCursorSourceD3	= 12,
        Tkdpo2k3k4kCursorSourceD4	= 13,
        Tkdpo2k3k4kCursorSourceD5	= 14,
        Tkdpo2k3k4kCursorSourceD6	= 15,
        Tkdpo2k3k4kCursorSourceD7	= 16,
        Tkdpo2k3k4kCursorSourceD8	= 17,
        Tkdpo2k3k4kCursorSourceD9	= 18,
        Tkdpo2k3k4kCursorSourceD10	= 19,
        Tkdpo2k3k4kCursorSourceD11	= 20,
        Tkdpo2k3k4kCursorSourceD12	= 21,
        Tkdpo2k3k4kCursorSourceD13	= 22,
        Tkdpo2k3k4kCursorSourceD14	= 23,
        Tkdpo2k3k4kCursorSourceD15	= 24,
        Tkdpo2k3k4kCursorSourceAUTO	= 25,
        Tkdpo2k3k4kCursorSourceRFAmplitude	= 26,
        Tkdpo2k3k4kCursorSourceRFFrequency	= 27,
        Tkdpo2k3k4kCursorSourceRFPhase	= 28,
        Tkdpo2k3k4kCursorSourceBUS1	= 29,
        Tkdpo2k3k4kCursorSourceBUS2	= 30
    } 	Tkdpo2k3k4kCursorSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("db601c2d-c3d8-4d96-b8ce-67674de1ed9c") 
enum Tkdpo2k3k4kChannelChannelEnum
    {
        Tkdpo2k3k4kChannelChannel1	= 0,
        Tkdpo2k3k4kChannelChannel2	= 1,
        Tkdpo2k3k4kChannelChannel3	= 2,
        Tkdpo2k3k4kChannelChannel4	= 3,
        Tkdpo2k3k4kChannelChannelRF	= 4
    } 	Tkdpo2k3k4kChannelChannelEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("de5597e3-25c4-4ab3-adba-104a425dd6f2") 
enum Tkdpo2k3k4kSource1Enum
    {
        Tkdpo2k3k4kSource1CH1	= 0,
        Tkdpo2k3k4kSource1CH2	= 1,
        Tkdpo2k3k4kSource1CH3	= 2,
        Tkdpo2k3k4kSource1CH4	= 3,
        Tkdpo2k3k4kSource1MATH	= 4,
        Tkdpo2k3k4kSource1REF1	= 5,
        Tkdpo2k3k4kSource1REF2	= 6,
        Tkdpo2k3k4kSource1REF3	= 7,
        Tkdpo2k3k4kSource1REF4	= 8
    } 	Tkdpo2k3k4kSource1Enum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0c8bab5f-55fb-4537-ba38-d8b6c1b61d61") 
enum Tkdpo2k3k4kDataCompositionEnum
    {
        Tkdpo2k3k4kDataCompositionCompositeYT	= 0,
        Tkdpo2k3k4kDataCompositionCompositeEnvelope	= 1,
        Tkdpo2k3k4kDataCompositionSingularYT	= 2
    } 	Tkdpo2k3k4kDataCompositionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1bb65f3b-cdf2-4384-ab77-cd2575b9f235") 
enum Tkdpo2k3k4kDataResolutionEnum
    {
        Tkdpo2k3k4kDataResolutionFull	= 0,
        Tkdpo2k3k4kDataResolutionReduced	= 1
    } 	Tkdpo2k3k4kDataResolutionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("917ca8a5-997f-4984-91b1-4c6654ab13b5") 
enum Tkdpo2k3k4kErrorCodesEnum
    {
        E_TKDPO2K3K4K_IO_GENERAL	= -2147204588,
        E_TKDPO2K3K4K_IO_TIMEOUT	= -2147204587,
        E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED	= -2147204586,
        E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE	= -2147204591,
        E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED	= -2147204589,
        E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED	= -2147204590,
        E_TKDPO2K3K4K_NO_ACQUISITION_MADE	= -2147204582,
        E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED	= -2147204580,
        E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED	= -2147204579
    } 	Tkdpo2k3k4kErrorCodesEnum;


EXTERN_C const IID LIBID_Tkdpo2k3k4kLib;

#ifndef __ITkdpo2k3k4k_INTERFACE_DEFINED__
#define __ITkdpo2k3k4k_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4k */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4k;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2736d615-90f4-4185-bfb4-25a89eee2eec")
    ITkdpo2k3k4k : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ ITkdpo2k3k4kChannels **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Acquisition( 
            /* [retval][out] */ ITkdpo2k3k4kAcquisition **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ ITkdpo2k3k4kTrigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Buses( 
            /* [retval][out] */ ITkdpo2k3k4kBuses **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Cursor( 
            /* [retval][out] */ ITkdpo2k3k4kCursor **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ ITkdpo2k3k4kDisplay **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HardCopy( 
            /* [retval][out] */ ITkdpo2k3k4kHardCopy **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Histogram( 
            /* [retval][out] */ ITkdpo2k3k4kHistogram **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Horizontal( 
            /* [retval][out] */ ITkdpo2k3k4kHorizontal **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mark( 
            /* [retval][out] */ ITkdpo2k3k4kMark **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Maths( 
            /* [retval][out] */ ITkdpo2k3k4kMaths **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MeasurementImmediate( 
            /* [retval][out] */ ITkdpo2k3k4kMeasurementImmediate **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Measurements( 
            /* [retval][out] */ ITkdpo2k3k4kMeasurements **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SaveRecall( 
            /* [retval][out] */ ITkdpo2k3k4kSaveRecall **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Searches( 
            /* [retval][out] */ ITkdpo2k3k4kSearches **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_References( 
            /* [retval][out] */ ITkdpo2k3k4kReferences **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalChannels( 
            /* [retval][out] */ ITkdpo2k3k4kDigitalChannels **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Zoom( 
            /* [retval][out] */ ITkdpo2k3k4kZoom **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformTransfer( 
            /* [retval][out] */ ITkdpo2k3k4kWaveformTransfer **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UtilityEx( 
            /* [retval][out] */ ITkdpo2k3k4kUtilityEx **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InstrumentIO( 
            /* [retval][out] */ ITkdpo2k3k4kInstrumentIO **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PowerAnalysis( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysis **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ ITkdpo2k3k4kFrequency **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4k * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4k * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4k * This);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            ITkdpo2k3k4k * This,
            /* [out][idldescattr] */ IIviDriverOperation **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            ITkdpo2k3k4k * This,
            /* [out][idldescattr] */ IIviDriverIdentity **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            ITkdpo2k3k4k * This,
            /* [out][idldescattr] */ IIviDriverUtility **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ITkdpo2k3k4k * This,
            /* [in][idldescattr] */ BSTR ResourceName,
            /* [in][idldescattr] */ BOOLEAN IdQuery,
            /* [in][idldescattr] */ BOOLEAN Reset,
            /* [in][idldescattr] */ BSTR OptionString);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            ITkdpo2k3k4k * This,
            /* [out][idldescattr] */ BOOLEAN *pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            ITkdpo2k3k4k * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kChannels **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acquisition )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kAcquisition **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kTrigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buses )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kBuses **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cursor )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kCursor **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kDisplay **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HardCopy )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kHardCopy **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Histogram )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kHistogram **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Horizontal )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kHorizontal **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mark )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kMark **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Maths )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kMaths **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeasurementImmediate )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kMeasurementImmediate **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurements )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kMeasurements **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveRecall )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kSaveRecall **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Searches )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kSearches **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kReferences **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalChannels )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kDigitalChannels **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Zoom )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kZoom **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformTransfer )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kWaveformTransfer **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UtilityEx )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kUtilityEx **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstrumentIO )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kInstrumentIO **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerAnalysis )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysis **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            ITkdpo2k3k4k * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequency **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kVtbl;

    interface ITkdpo2k3k4k
    {
        CONST_VTBL struct ITkdpo2k3k4kVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4k_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define ITkdpo2k3k4k_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4k_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4k_get_DriverOperation(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal,retval) ) 

#define ITkdpo2k3k4k_get_Identity(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal,retval) ) 

#define ITkdpo2k3k4k_get_Utility(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal,retval) ) 

#define ITkdpo2k3k4k_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define ITkdpo2k3k4k_get_Initialized(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal,retval) ) 

#define ITkdpo2k3k4k_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define ITkdpo2k3k4k_get_Channels(This,Val)	\
    ( (This)->lpVtbl -> get_Channels(This,Val) ) 

#define ITkdpo2k3k4k_get_Acquisition(This,Val)	\
    ( (This)->lpVtbl -> get_Acquisition(This,Val) ) 

#define ITkdpo2k3k4k_get_Trigger(This,Val)	\
    ( (This)->lpVtbl -> get_Trigger(This,Val) ) 

#define ITkdpo2k3k4k_get_Buses(This,Val)	\
    ( (This)->lpVtbl -> get_Buses(This,Val) ) 

#define ITkdpo2k3k4k_get_Cursor(This,Val)	\
    ( (This)->lpVtbl -> get_Cursor(This,Val) ) 

#define ITkdpo2k3k4k_get_Display(This,Val)	\
    ( (This)->lpVtbl -> get_Display(This,Val) ) 

#define ITkdpo2k3k4k_get_HardCopy(This,Val)	\
    ( (This)->lpVtbl -> get_HardCopy(This,Val) ) 

#define ITkdpo2k3k4k_get_Histogram(This,Val)	\
    ( (This)->lpVtbl -> get_Histogram(This,Val) ) 

#define ITkdpo2k3k4k_get_Horizontal(This,Val)	\
    ( (This)->lpVtbl -> get_Horizontal(This,Val) ) 

#define ITkdpo2k3k4k_get_Mark(This,Val)	\
    ( (This)->lpVtbl -> get_Mark(This,Val) ) 

#define ITkdpo2k3k4k_get_Maths(This,Val)	\
    ( (This)->lpVtbl -> get_Maths(This,Val) ) 

#define ITkdpo2k3k4k_get_MeasurementImmediate(This,Val)	\
    ( (This)->lpVtbl -> get_MeasurementImmediate(This,Val) ) 

#define ITkdpo2k3k4k_get_Measurements(This,Val)	\
    ( (This)->lpVtbl -> get_Measurements(This,Val) ) 

#define ITkdpo2k3k4k_get_SaveRecall(This,Val)	\
    ( (This)->lpVtbl -> get_SaveRecall(This,Val) ) 

#define ITkdpo2k3k4k_get_Searches(This,Val)	\
    ( (This)->lpVtbl -> get_Searches(This,Val) ) 

#define ITkdpo2k3k4k_get_References(This,Val)	\
    ( (This)->lpVtbl -> get_References(This,Val) ) 

#define ITkdpo2k3k4k_get_DigitalChannels(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalChannels(This,Val) ) 

#define ITkdpo2k3k4k_get_Zoom(This,Val)	\
    ( (This)->lpVtbl -> get_Zoom(This,Val) ) 

#define ITkdpo2k3k4k_get_WaveformTransfer(This,Val)	\
    ( (This)->lpVtbl -> get_WaveformTransfer(This,Val) ) 

#define ITkdpo2k3k4k_get_UtilityEx(This,Val)	\
    ( (This)->lpVtbl -> get_UtilityEx(This,Val) ) 

#define ITkdpo2k3k4k_get_InstrumentIO(This,Val)	\
    ( (This)->lpVtbl -> get_InstrumentIO(This,Val) ) 

#define ITkdpo2k3k4k_get_PowerAnalysis(This,Val)	\
    ( (This)->lpVtbl -> get_PowerAnalysis(This,Val) ) 

#define ITkdpo2k3k4k_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4k_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kChannel_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kChannel_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kChannel */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3dbc9829-4173-4047-9188-1b0dc69df23d")
    ITkdpo2k3k4kChannel : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Position,
            /* [in] */ double Scale,
            /* [in] */ double Offset,
            /* [in] */ double Deskew,
            /* [in] */ enum Tkdpo2k3k4kChannelCouplingEnum Coupling,
            /* [in] */ enum Tkdpo2k3k4kChannelTerminationEnum Termination,
            /* [in] */ enum Tkdpo2k3k4kChannelBandwidthEnum Bandwidth,
            /* [in] */ VARIANT_BOOL DisplayState) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ double *Position,
            /* [out][in] */ double *Scale,
            /* [out][in] */ double *Offset,
            /* [out][in] */ double *Deskew,
            /* [out][in] */ enum Tkdpo2k3k4kChannelCouplingEnum *Coupling,
            /* [out][in] */ enum Tkdpo2k3k4kChannelTerminationEnum *Termination,
            /* [out][in] */ double *Bandwidth,
            /* [out][in] */ VARIANT_BOOL *DisplayState) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadProbeDetails( 
            /* [out][in] */ BSTR *Type,
            /* [out][in] */ double *Resistance,
            /* [out][in] */ double *Gain,
            /* [out][in] */ BSTR *SerialNumber,
            /* [out][in] */ BSTR *Unit,
            /* [out][in] */ double *ExternalAttenuation,
            /* [out][in] */ double *ExternalAttenuationDB,
            /* [out][in] */ enum Tkdpo2k3k4kChannelCalibrationEnum *Calibration) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAllDeskewsToRecommendedValues( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE InvertWaveform( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetTekVPIProbeAutoZero( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetTekVPIProbeCommand( 
            /* [in] */ BSTR Command,
            /* [in] */ BSTR State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetTekVPIProbeDegauss( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bandwidth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BandwidthEnum( 
            /* [in] */ enum Tkdpo2k3k4kChannelBandwidthEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum Tkdpo2k3k4kChannelCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum Tkdpo2k3k4kChannelCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Deskew( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Deskew( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LabelName( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LabelName( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeGain( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeResistance( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeSerialNumber( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeType( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TerminationEnum( 
            /* [in] */ enum Tkdpo2k3k4kChannelTerminationEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeSignal( 
            /* [retval][out] */ enum Tkdpo2k3k4kChannelProbeSignalEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ProbeSignal( 
            /* [in] */ enum Tkdpo2k3k4kChannelProbeSignalEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AmpsViaVoltsState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AmpsViaVoltsState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AmpsViaVoltsFactor( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AmpsViaVoltsFactor( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Impedance( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalSensitivity( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalSensitivity( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Yunits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Yunits( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TekVPIProbeDegaussState( 
            /* [retval][out] */ enum Tkdpo2k3k4kProbeDegaussStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TekVPIProbeRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TekVPIProbeRange( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Termination( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InvertState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InvertState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Position,
            /* [in] */ double Scale,
            /* [in] */ double Offset,
            /* [in] */ double Deskew,
            /* [in] */ enum Tkdpo2k3k4kChannelCouplingEnum Coupling,
            /* [in] */ enum Tkdpo2k3k4kChannelTerminationEnum Termination,
            /* [in] */ enum Tkdpo2k3k4kChannelBandwidthEnum Bandwidth,
            /* [in] */ VARIANT_BOOL DisplayState);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kChannel * This,
            /* [out][in] */ double *Position,
            /* [out][in] */ double *Scale,
            /* [out][in] */ double *Offset,
            /* [out][in] */ double *Deskew,
            /* [out][in] */ enum Tkdpo2k3k4kChannelCouplingEnum *Coupling,
            /* [out][in] */ enum Tkdpo2k3k4kChannelTerminationEnum *Termination,
            /* [out][in] */ double *Bandwidth,
            /* [out][in] */ VARIANT_BOOL *DisplayState);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadProbeDetails )( 
            ITkdpo2k3k4kChannel * This,
            /* [out][in] */ BSTR *Type,
            /* [out][in] */ double *Resistance,
            /* [out][in] */ double *Gain,
            /* [out][in] */ BSTR *SerialNumber,
            /* [out][in] */ BSTR *Unit,
            /* [out][in] */ double *ExternalAttenuation,
            /* [out][in] */ double *ExternalAttenuationDB,
            /* [out][in] */ enum Tkdpo2k3k4kChannelCalibrationEnum *Calibration);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAllDeskewsToRecommendedValues )( 
            ITkdpo2k3k4kChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *InvertWaveform )( 
            ITkdpo2k3k4kChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetTekVPIProbeAutoZero )( 
            ITkdpo2k3k4kChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetTekVPIProbeCommand )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ BSTR Command,
            /* [in] */ BSTR State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetTekVPIProbeDegauss )( 
            ITkdpo2k3k4kChannel * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BandwidthEnum )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ enum Tkdpo2k3k4kChannelBandwidthEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ enum Tkdpo2k3k4kChannelCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ enum Tkdpo2k3k4kChannelCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deskew )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Deskew )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayState )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayState )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelName )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LabelName )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeGain )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeResistance )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeSerialNumber )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeType )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeUnits )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScale )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalScale )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TerminationEnum )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ enum Tkdpo2k3k4kChannelTerminationEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeSignal )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ enum Tkdpo2k3k4kChannelProbeSignalEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProbeSignal )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ enum Tkdpo2k3k4kChannelProbeSignalEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmpsViaVoltsState )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmpsViaVoltsState )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmpsViaVoltsFactor )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmpsViaVoltsFactor )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Impedance )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalSensitivity )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalSensitivity )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Yunits )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Yunits )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TekVPIProbeDegaussState )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ enum Tkdpo2k3k4kProbeDegaussStateEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TekVPIProbeRange )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TekVPIProbeRange )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Termination )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvertState )( 
            ITkdpo2k3k4kChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvertState )( 
            ITkdpo2k3k4kChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kChannelVtbl;

    interface ITkdpo2k3k4kChannel
    {
        CONST_VTBL struct ITkdpo2k3k4kChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kChannel_Configure(This,Position,Scale,Offset,Deskew,Coupling,Termination,Bandwidth,DisplayState)	\
    ( (This)->lpVtbl -> Configure(This,Position,Scale,Offset,Deskew,Coupling,Termination,Bandwidth,DisplayState) ) 

#define ITkdpo2k3k4kChannel_Read(This,Position,Scale,Offset,Deskew,Coupling,Termination,Bandwidth,DisplayState)	\
    ( (This)->lpVtbl -> Read(This,Position,Scale,Offset,Deskew,Coupling,Termination,Bandwidth,DisplayState) ) 

#define ITkdpo2k3k4kChannel_ReadProbeDetails(This,Type,Resistance,Gain,SerialNumber,Unit,ExternalAttenuation,ExternalAttenuationDB,Calibration)	\
    ( (This)->lpVtbl -> ReadProbeDetails(This,Type,Resistance,Gain,SerialNumber,Unit,ExternalAttenuation,ExternalAttenuationDB,Calibration) ) 

#define ITkdpo2k3k4kChannel_SetAllDeskewsToRecommendedValues(This)	\
    ( (This)->lpVtbl -> SetAllDeskewsToRecommendedValues(This) ) 

#define ITkdpo2k3k4kChannel_InvertWaveform(This)	\
    ( (This)->lpVtbl -> InvertWaveform(This) ) 

#define ITkdpo2k3k4kChannel_SetTekVPIProbeAutoZero(This)	\
    ( (This)->lpVtbl -> SetTekVPIProbeAutoZero(This) ) 

#define ITkdpo2k3k4kChannel_SetTekVPIProbeCommand(This,Command,State)	\
    ( (This)->lpVtbl -> SetTekVPIProbeCommand(This,Command,State) ) 

#define ITkdpo2k3k4kChannel_SetTekVPIProbeDegauss(This)	\
    ( (This)->lpVtbl -> SetTekVPIProbeDegauss(This) ) 

#define ITkdpo2k3k4kChannel_get_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> put_Bandwidth(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_BandwidthEnum(This,Val)	\
    ( (This)->lpVtbl -> put_BandwidthEnum(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Deskew(This,Val)	\
    ( (This)->lpVtbl -> get_Deskew(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Deskew(This,Val)	\
    ( (This)->lpVtbl -> put_Deskew(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_LabelName(This,Val)	\
    ( (This)->lpVtbl -> get_LabelName(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_LabelName(This,Val)	\
    ( (This)->lpVtbl -> put_LabelName(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Offset(This,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Offset(This,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeGain(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeGain(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeResistance(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeResistance(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeSerialNumber(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeSerialNumber(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeType(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeType(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeUnits(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeUnits(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_TerminationEnum(This,Val)	\
    ( (This)->lpVtbl -> put_TerminationEnum(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_ProbeSignal(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeSignal(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_ProbeSignal(This,Val)	\
    ( (This)->lpVtbl -> put_ProbeSignal(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_AmpsViaVoltsState(This,Val)	\
    ( (This)->lpVtbl -> get_AmpsViaVoltsState(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_AmpsViaVoltsState(This,Val)	\
    ( (This)->lpVtbl -> put_AmpsViaVoltsState(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_AmpsViaVoltsFactor(This,Val)	\
    ( (This)->lpVtbl -> get_AmpsViaVoltsFactor(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_AmpsViaVoltsFactor(This,Val)	\
    ( (This)->lpVtbl -> put_AmpsViaVoltsFactor(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Impedance(This,Val)	\
    ( (This)->lpVtbl -> get_Impedance(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Impedance(This,Val)	\
    ( (This)->lpVtbl -> put_Impedance(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_VerticalSensitivity(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalSensitivity(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_VerticalSensitivity(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalSensitivity(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Yunits(This,Val)	\
    ( (This)->lpVtbl -> get_Yunits(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_Yunits(This,Val)	\
    ( (This)->lpVtbl -> put_Yunits(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_TekVPIProbeDegaussState(This,Val)	\
    ( (This)->lpVtbl -> get_TekVPIProbeDegaussState(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_TekVPIProbeRange(This,Val)	\
    ( (This)->lpVtbl -> get_TekVPIProbeRange(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_TekVPIProbeRange(This,Val)	\
    ( (This)->lpVtbl -> put_TekVPIProbeRange(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_Termination(This,Val)	\
    ( (This)->lpVtbl -> get_Termination(This,Val) ) 

#define ITkdpo2k3k4kChannel_get_InvertState(This,Val)	\
    ( (This)->lpVtbl -> get_InvertState(This,Val) ) 

#define ITkdpo2k3k4kChannel_put_InvertState(This,Val)	\
    ( (This)->lpVtbl -> put_InvertState(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kChannel_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kChannels_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kChannels_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kChannels */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f734a88-610b-4751-b460-4cec37c7d041")
    ITkdpo2k3k4kChannels : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAUXInTekVPIProbeAutoZero( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAUXInTekVPIProbeCommand( 
            /* [in] */ BSTR Command,
            /* [in] */ BSTR State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAUXInTekVPIProbeDegauss( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kChannel **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeSignal( 
            /* [retval][out] */ enum Tkdpo2k3k4kChannelProbeSignalEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AUXInProbeSignal( 
            /* [in] */ enum Tkdpo2k3k4kChannelProbeSignalEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeGain( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeResistance( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeSerialNumber( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeType( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInProbeUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInTekVPIProbeDegaussState( 
            /* [retval][out] */ enum Tkdpo2k3k4kProbeDegaussStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AUXInTekVPIProbeRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AUXInTekVPIProbeRange( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kChannels * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAUXInTekVPIProbeAutoZero )( 
            ITkdpo2k3k4kChannels * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAUXInTekVPIProbeCommand )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ BSTR Command,
            /* [in] */ BSTR State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAUXInTekVPIProbeDegauss )( 
            ITkdpo2k3k4kChannels * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kChannel **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeSignal )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ enum Tkdpo2k3k4kChannelProbeSignalEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AUXInProbeSignal )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ enum Tkdpo2k3k4kChannelProbeSignalEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeGain )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeResistance )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeSerialNumber )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeType )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInProbeUnits )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInTekVPIProbeDegaussState )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ enum Tkdpo2k3k4kProbeDegaussStateEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AUXInTekVPIProbeRange )( 
            ITkdpo2k3k4kChannels * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AUXInTekVPIProbeRange )( 
            ITkdpo2k3k4kChannels * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kChannelsVtbl;

    interface ITkdpo2k3k4kChannels
    {
        CONST_VTBL struct ITkdpo2k3k4kChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeAutoZero(This)	\
    ( (This)->lpVtbl -> SetAUXInTekVPIProbeAutoZero(This) ) 

#define ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeCommand(This,Command,State)	\
    ( (This)->lpVtbl -> SetAUXInTekVPIProbeCommand(This,Command,State) ) 

#define ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeDegauss(This)	\
    ( (This)->lpVtbl -> SetAUXInTekVPIProbeDegauss(This) ) 

#define ITkdpo2k3k4kChannels_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define ITkdpo2k3k4kChannels_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeSignal(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeSignal(This,Val) ) 

#define ITkdpo2k3k4kChannels_put_AUXInProbeSignal(This,Val)	\
    ( (This)->lpVtbl -> put_AUXInProbeSignal(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeGain(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeGain(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeResistance(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeResistance(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeSerialNumber(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeSerialNumber(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeType(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeType(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInProbeUnits(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInProbeUnits(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeDegaussState(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInTekVPIProbeDegaussState(This,Val) ) 

#define ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeRange(This,Val)	\
    ( (This)->lpVtbl -> get_AUXInTekVPIProbeRange(This,Val) ) 

#define ITkdpo2k3k4kChannels_put_AUXInTekVPIProbeRange(This,Val)	\
    ( (This)->lpVtbl -> put_AUXInTekVPIProbeRange(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kChannels_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kAcquisition_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kAcquisition_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kAcquisition */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kAcquisition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9290078e-b177-44a1-bee9-60a1d866362f")
    ITkdpo2k3k4kAcquisition : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRecord( 
            /* [in] */ double TimePerRecord,
            /* [in] */ long MinNumPts,
            /* [in] */ double AcquisitionStartTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AutoSet( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAverageMode( 
            /* [in] */ long NumberAverages) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberAverages( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumberAverages( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RecordLength( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfPointsMin( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfPointsMin( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimePerRecord( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimePerRecord( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum Tkdpo2k3k4kAcquisitionModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum Tkdpo2k3k4kAcquisitionModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberAcquisitions( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RunStop( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RunStop( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleSequence( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleSequence( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MagniVuState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MagniVuState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSampleRate( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SamplingMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kAcquisitionSamplingModeEnum *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kAcquisitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kAcquisition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRecord )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ double TimePerRecord,
            /* [in] */ long MinNumPts,
            /* [in] */ double AcquisitionStartTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AutoSet )( 
            ITkdpo2k3k4kAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAverageMode )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ long NumberAverages);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            ITkdpo2k3k4kAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ITkdpo2k3k4kAcquisition * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberAverages )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberAverages )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordLength )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfPointsMin )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfPointsMin )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartTime )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartTime )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimePerRecord )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimePerRecord )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ enum Tkdpo2k3k4kAcquisitionModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ enum Tkdpo2k3k4kAcquisitionModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberAcquisitions )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunStop )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunStop )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleSequence )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleSequence )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MagniVuState )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MagniVuState )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSampleRate )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SamplingMode )( 
            ITkdpo2k3k4kAcquisition * This,
            /* [retval][out] */ enum Tkdpo2k3k4kAcquisitionSamplingModeEnum *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kAcquisitionVtbl;

    interface ITkdpo2k3k4kAcquisition
    {
        CONST_VTBL struct ITkdpo2k3k4kAcquisitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kAcquisition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kAcquisition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kAcquisition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kAcquisition_ConfigureRecord(This,TimePerRecord,MinNumPts,AcquisitionStartTime)	\
    ( (This)->lpVtbl -> ConfigureRecord(This,TimePerRecord,MinNumPts,AcquisitionStartTime) ) 

#define ITkdpo2k3k4kAcquisition_AutoSet(This)	\
    ( (This)->lpVtbl -> AutoSet(This) ) 

#define ITkdpo2k3k4kAcquisition_SetAverageMode(This,NumberAverages)	\
    ( (This)->lpVtbl -> SetAverageMode(This,NumberAverages) ) 

#define ITkdpo2k3k4kAcquisition_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define ITkdpo2k3k4kAcquisition_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ITkdpo2k3k4kAcquisition_get_NumberAverages(This,Val)	\
    ( (This)->lpVtbl -> get_NumberAverages(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_NumberAverages(This,Val)	\
    ( (This)->lpVtbl -> put_NumberAverages(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_RecordLength(This,Val)	\
    ( (This)->lpVtbl -> get_RecordLength(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_SampleRate(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_NumberOfPointsMin(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfPointsMin(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_NumberOfPointsMin(This,Val)	\
    ( (This)->lpVtbl -> put_NumberOfPointsMin(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_StartTime(This,Val)	\
    ( (This)->lpVtbl -> get_StartTime(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_StartTime(This,Val)	\
    ( (This)->lpVtbl -> put_StartTime(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_TimePerRecord(This,Val)	\
    ( (This)->lpVtbl -> get_TimePerRecord(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_TimePerRecord(This,Val)	\
    ( (This)->lpVtbl -> put_TimePerRecord(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_NumberAcquisitions(This,Val)	\
    ( (This)->lpVtbl -> get_NumberAcquisitions(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_RunStop(This,Val)	\
    ( (This)->lpVtbl -> get_RunStop(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_RunStop(This,Val)	\
    ( (This)->lpVtbl -> put_RunStop(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_SingleSequence(This,Val)	\
    ( (This)->lpVtbl -> get_SingleSequence(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_SingleSequence(This,Val)	\
    ( (This)->lpVtbl -> put_SingleSequence(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_MagniVuState(This,Val)	\
    ( (This)->lpVtbl -> get_MagniVuState(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_put_MagniVuState(This,Val)	\
    ( (This)->lpVtbl -> put_MagniVuState(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_MaxSampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSampleRate(This,Val) ) 

#define ITkdpo2k3k4kAcquisition_get_SamplingMode(This,Val)	\
    ( (This)->lpVtbl -> get_SamplingMode(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kAcquisition_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAEdge_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerAEdge_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerAEdge */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerAEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3fec9f01-8bb0-4706-bf2b-2c2a9279e9dd")
    ITkdpo2k3k4kTriggerAEdge : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Source,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSource2Enum *Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Coupling) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLevelTo50Percent( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LevelEnum( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLevelEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerAEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerAEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerAEdge * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Source,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSource2Enum *Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Coupling);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLevelTo50Percent )( 
            ITkdpo2k3k4kTriggerAEdge * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LevelEnum )( 
            ITkdpo2k3k4kTriggerAEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLevelEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerAEdgeVtbl;

    interface ITkdpo2k3k4kTriggerAEdge
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerAEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerAEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerAEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerAEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerAEdge_Configure(This,Source,Level,Slope,Coupling)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Slope,Coupling) ) 

#define ITkdpo2k3k4kTriggerAEdge_Read(This,Source,Level,Slope,Coupling)	\
    ( (This)->lpVtbl -> Read(This,Source,Level,Slope,Coupling) ) 

#define ITkdpo2k3k4kTriggerAEdge_ConfigureLevelTo50Percent(This)	\
    ( (This)->lpVtbl -> ConfigureLevelTo50Percent(This) ) 

#define ITkdpo2k3k4kTriggerAEdge_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define ITkdpo2k3k4kTriggerAEdge_put_LevelEnum(This,Val)	\
    ( (This)->lpVtbl -> put_LevelEnum(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerAEdge_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTrigger_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTrigger_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTrigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d33098ed-1efc-46b7-a59f-36308f5006da")
    ITkdpo2k3k4kTrigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadAIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAOnlyTrigger( 
            /* [in] */ double HoldoffTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAThenBAfterEventsTrigger( 
            /* [in] */ double HoldoffTime,
            /* [in] */ long Events) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAThenBAfterTimeTrigger( 
            /* [in] */ double HoldoffTime,
            /* [in] */ double DelayTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureBIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadBIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadARFIndependentParameters( 
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureARFIndependentParameters( 
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AHoldoffTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AHoldoffTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kTriggerTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AEdge( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerAEdge **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BDelayTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BDelayTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentState( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EventCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EventCount( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BLevel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BLevel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerBBy( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerBByEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerBBy( 
            /* [in] */ enum Tkdpo2k3k4kTriggerBByEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeAttenuation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ProbeAttenuation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalUnitValue( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ABus( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABus **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ALogic( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerALogic **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AWidth( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerAWidth **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ARunt( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerARunt **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ASetupHold( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerASetupHold **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ATransition( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerATransition **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AVideo( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerAVideo **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BEdge( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerBEdge **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum Tkdpo2k3k4kTriggerModeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadAIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAOnlyTrigger )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double HoldoffTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAThenBAfterEventsTrigger )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double HoldoffTime,
            /* [in] */ long Events);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAThenBAfterTimeTrigger )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double HoldoffTime,
            /* [in] */ double DelayTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadBIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadARFIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureARFIndependentParameters )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AHoldoffTime )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AHoldoffTime )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AEdge )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerAEdge **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BState )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BState )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BDelayTime )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BDelayTime )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentState )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventCount )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventCount )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BLevel )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BLevel )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerBBy )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerBByEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerBBy )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerBByEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeAttenuation )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProbeAttenuation )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalUnitValue )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ABus )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABus **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ALogic )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerALogic **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AWidth )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerAWidth **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ARunt )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerARunt **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ASetupHold )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerASetupHold **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ATransition )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerATransition **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AVideo )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerAVideo **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BEdge )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerBEdge **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ITkdpo2k3k4kTrigger * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ITkdpo2k3k4kTrigger * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerModeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerVtbl;

    interface ITkdpo2k3k4kTrigger
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTrigger_ConfigureAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ConfigureAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_ReadAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ReadAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_ConfigureAOnlyTrigger(This,HoldoffTime)	\
    ( (This)->lpVtbl -> ConfigureAOnlyTrigger(This,HoldoffTime) ) 

#define ITkdpo2k3k4kTrigger_ConfigureAThenBAfterEventsTrigger(This,HoldoffTime,Events)	\
    ( (This)->lpVtbl -> ConfigureAThenBAfterEventsTrigger(This,HoldoffTime,Events) ) 

#define ITkdpo2k3k4kTrigger_ConfigureAThenBAfterTimeTrigger(This,HoldoffTime,DelayTime)	\
    ( (This)->lpVtbl -> ConfigureAThenBAfterTimeTrigger(This,HoldoffTime,DelayTime) ) 

#define ITkdpo2k3k4kTrigger_ConfigureBIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ConfigureBIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_ReadBIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ReadBIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_ReadARFIndependentParameters(This,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ReadARFIndependentParameters(This,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_ConfigureARFIndependentParameters(This,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ConfigureARFIndependentParameters(This,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kTrigger_get_AHoldoffTime(This,Val)	\
    ( (This)->lpVtbl -> get_AHoldoffTime(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_AHoldoffTime(This,Val)	\
    ( (This)->lpVtbl -> put_AHoldoffTime(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_AEdge(This,Val)	\
    ( (This)->lpVtbl -> get_AEdge(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_BState(This,Val)	\
    ( (This)->lpVtbl -> get_BState(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_BState(This,Val)	\
    ( (This)->lpVtbl -> put_BState(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_BDelayTime(This,Val)	\
    ( (This)->lpVtbl -> get_BDelayTime(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_BDelayTime(This,Val)	\
    ( (This)->lpVtbl -> put_BDelayTime(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_CurrentState(This,Val)	\
    ( (This)->lpVtbl -> get_CurrentState(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_EventCount(This,Val)	\
    ( (This)->lpVtbl -> get_EventCount(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_EventCount(This,Val)	\
    ( (This)->lpVtbl -> put_EventCount(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_BLevel(This,Source,Val)	\
    ( (This)->lpVtbl -> get_BLevel(This,Source,Val) ) 

#define ITkdpo2k3k4kTrigger_put_BLevel(This,Source,Val)	\
    ( (This)->lpVtbl -> put_BLevel(This,Source,Val) ) 

#define ITkdpo2k3k4kTrigger_get_TriggerBBy(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerBBy(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_TriggerBBy(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerBBy(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ProbeAttenuation(This,Val)	\
    ( (This)->lpVtbl -> get_ProbeAttenuation(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_ProbeAttenuation(This,Val)	\
    ( (This)->lpVtbl -> put_ProbeAttenuation(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_VerticalUnitValue(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalUnitValue(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ABus(This,Val)	\
    ( (This)->lpVtbl -> get_ABus(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ALogic(This,Val)	\
    ( (This)->lpVtbl -> get_ALogic(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_AWidth(This,Val)	\
    ( (This)->lpVtbl -> get_AWidth(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ARunt(This,Val)	\
    ( (This)->lpVtbl -> get_ARunt(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ASetupHold(This,Val)	\
    ( (This)->lpVtbl -> get_ASetupHold(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_ATransition(This,Val)	\
    ( (This)->lpVtbl -> get_ATransition(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_AVideo(This,Val)	\
    ( (This)->lpVtbl -> get_AVideo(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_BEdge(This,Val)	\
    ( (This)->lpVtbl -> get_BEdge(This,Val) ) 

#define ITkdpo2k3k4kTrigger_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define ITkdpo2k3k4kTrigger_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTrigger_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kBuses_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kBuses_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kBuses */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kBuses;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("976852b4-e011-473a-8725-bdf0aefce923")
    ITkdpo2k3k4kBuses : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kBus **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kBusesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kBuses * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kBuses * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kBuses * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kBuses * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kBuses * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kBuses * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kBus **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kBusesVtbl;

    interface ITkdpo2k3k4kBuses
    {
        CONST_VTBL struct ITkdpo2k3k4kBusesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kBuses_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kBuses_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kBuses_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kBuses_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kBuses_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kBuses_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kBuses_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kBus_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kBus_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kBus */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kBus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76a14773-b4f7-48f7-b8f7-249ed224e7b2")
    ITkdpo2k3k4kBus : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureI2C( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum ClockSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataSource,
            /* [in] */ enum Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadI2C( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *ClockSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusI2CRWInAddressEnum *RWInAddress) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAudioInputs( 
            /* [in] */ enum Tkdpo2k3k4kAudioBusTypeEnum Type,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum ClockSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum WordSelectSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum FrameSyncSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadAudioInputs( 
            /* [out][in] */ enum Tkdpo2k3k4kAudioBusTypeEnum *Type,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *ClockSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *WordSelectSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *FrameSyncSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAudio( 
            /* [in] */ long BitDelay,
            /* [in] */ enum Tkdpo2k3k4kBusBitOrderEnum BitOrder,
            /* [in] */ long BitsPerChannel,
            /* [in] */ enum Tkdpo2k3k4kAudioPolarityEnum ClockPolarity,
            /* [in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity,
            /* [in] */ long BitsPerWord,
            /* [in] */ enum Tkdpo2k3k4kDisplayFormatEnum DisplayFormat,
            /* [in] */ enum Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity,
            /* [in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity,
            /* [in] */ long ChannelsPerFrame) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadAudio( 
            /* [out][in] */ long *BitDelay,
            /* [out][in] */ enum Tkdpo2k3k4kBusBitOrderEnum *BitOrder,
            /* [out][in] */ long *BitsPerChannel,
            /* [out][in] */ enum Tkdpo2k3k4kAudioPolarityEnum *ClockPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum *DataPolarity,
            /* [out][in] */ long *BitsPerWord,
            /* [out][in] */ enum Tkdpo2k3k4kDisplayFormatEnum *DisplayFormat,
            /* [out][in] */ enum Tkdpo2k3k4kAudioPolarityEnum *FrameSyncPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum *WordSelectPolarity,
            /* [out][in] */ long *ChannelsPerFrame) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCAN( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ long SamplePoint,
            /* [in] */ enum Tkdpo2k3k4kCANProbeTypeEnum SignalType,
            /* [in] */ long BitRate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadCAN( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ long *SamplePoint,
            /* [out][in] */ enum Tkdpo2k3k4kCANProbeTypeEnum *SignalType,
            /* [out][in] */ long *BitRate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFlexray( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kFlexrayChannelEnum IDFormat,
            /* [in] */ enum Tkdpo2k3k4kFlexraySignalEnum Standard,
            /* [in] */ long BitRate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadFlexray( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kFlexrayChannelEnum *IDFormat,
            /* [out][in] */ enum Tkdpo2k3k4kFlexraySignalEnum *Standard,
            /* [out][in] */ long *BitRate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLIN( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kLINIDFormatEnum IDFormat,
            /* [in] */ long BitRate,
            /* [in] */ enum Tkdpo2k3k4kLINPolarityEnum Polarity,
            /* [in] */ long SamplePoint,
            /* [in] */ enum Tkdpo2k3k4kLINStandardEnum Standard) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadLIN( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kLINIDFormatEnum *IDFormat,
            /* [out][in] */ long *BitRate,
            /* [out][in] */ enum Tkdpo2k3k4kLINPolarityEnum *Polarity,
            /* [out][in] */ long *SamplePoint,
            /* [out][in] */ enum Tkdpo2k3k4kLINStandardEnum *Standard) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSPI( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Clocksource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity,
            /* [in] */ long DataSize,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataMISOSource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity,
            /* [in] */ enum Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum SlaveSelectSource,
            /* [in] */ enum Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataMOSISource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadSPI( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Clocksource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIClockPolarityEnum *ClockPolarity,
            /* [out][in] */ long *DataSize,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataMISOSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum *DataMISOPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIBitOrderEnum *BitOrder,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *SlaveSelectSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum *SlaveSelectPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataMOSISource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum *DataMOSIPolarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRS232( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum RXSource,
            /* [in] */ enum Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity,
            /* [in] */ double Bitrate,
            /* [in] */ long DataBits,
            /* [in] */ enum Tkdpo2k3k4kBusRS232ParityEnum InputParity,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum TXSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadRS232( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *RXSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusRS232PolarityEnum *InputPolarity,
            /* [out][in] */ double *Bitrate,
            /* [out][in] */ long *DataBits,
            /* [out][in] */ enum Tkdpo2k3k4kBusRS232ParityEnum *InputParity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *TXSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadUSB( 
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DifferentialSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusUSBProbeEnum *Probe,
            /* [out][in] */ enum Tkdpo2k3k4kBusUSBBitrateEnum *Bitrate,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DPLUSSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DMINUSSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureUSB( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DifferentialSource,
            /* [in] */ enum Tkdpo2k3k4kBusUSBProbeEnum Probe,
            /* [in] */ enum Tkdpo2k3k4kBusUSBBitrateEnum Bitrate,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DPLUSSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DMINUSSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetLowThresholdChannel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetThresholdChannel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetLowThreshholdChannel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetThresholdChannel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetThresholdDigitalChannel( 
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelEnum InputSource,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetThresholdDigitalChannel( 
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelEnum InputSource,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetUpperThreshhold( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetUpperThreshhold( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveEventTable( 
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CANBitRateEnum( 
            /* [in] */ enum Tkdpo2k3k4kCANBitRateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kBusTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ enum Tkdpo2k3k4kBusStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayType( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusDisplayTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayType( 
            /* [in] */ enum Tkdpo2k3k4kBusDisplayTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsClockedParallelBus( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IsClockedParallelBus( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayFormat( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusDisplayFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayFormat( 
            /* [in] */ enum Tkdpo2k3k4kBusDisplayFormatEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelBusClockSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelBusClockSource( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelBusClockEdge( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusParallelBusClockEdgeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelBusClockEdge( 
            /* [in] */ enum Tkdpo2k3k4kBusParallelBusClockEdgeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232Delimiter( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusRS232DelimiterEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RS232Delimiter( 
            /* [in] */ enum Tkdpo2k3k4kBusRS232DelimiterEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232DisplayMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusRS232DisplayModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RS232DisplayMode( 
            /* [in] */ enum Tkdpo2k3k4kBusRS232DisplayModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232TXSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RS232TXSource( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232RXSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RS232RXSource( 
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelBitSource( 
            /* [in] */ long Bit,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelBitSource( 
            /* [in] */ long Bit,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelWidth( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelWidth( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SPIFraming( 
            /* [retval][out] */ enum Tkdpo2k3k4kBusSPIFramingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SPIFraming( 
            /* [in] */ enum Tkdpo2k3k4kBusSPIFramingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SPIIdleTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SPIIdleTime( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kBusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kBus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kBus * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureI2C )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum ClockSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataSource,
            /* [in] */ enum Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadI2C )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *ClockSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusI2CRWInAddressEnum *RWInAddress);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAudioInputs )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kAudioBusTypeEnum Type,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum ClockSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum WordSelectSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum FrameSyncSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadAudioInputs )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kAudioBusTypeEnum *Type,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *ClockSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *WordSelectSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *FrameSyncSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAudio )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ long BitDelay,
            /* [in] */ enum Tkdpo2k3k4kBusBitOrderEnum BitOrder,
            /* [in] */ long BitsPerChannel,
            /* [in] */ enum Tkdpo2k3k4kAudioPolarityEnum ClockPolarity,
            /* [in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity,
            /* [in] */ long BitsPerWord,
            /* [in] */ enum Tkdpo2k3k4kDisplayFormatEnum DisplayFormat,
            /* [in] */ enum Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity,
            /* [in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity,
            /* [in] */ long ChannelsPerFrame);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadAudio )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ long *BitDelay,
            /* [out][in] */ enum Tkdpo2k3k4kBusBitOrderEnum *BitOrder,
            /* [out][in] */ long *BitsPerChannel,
            /* [out][in] */ enum Tkdpo2k3k4kAudioPolarityEnum *ClockPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum *DataPolarity,
            /* [out][in] */ long *BitsPerWord,
            /* [out][in] */ enum Tkdpo2k3k4kDisplayFormatEnum *DisplayFormat,
            /* [out][in] */ enum Tkdpo2k3k4kAudioPolarityEnum *FrameSyncPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kAudioDataPolarityEnum *WordSelectPolarity,
            /* [out][in] */ long *ChannelsPerFrame);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCAN )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ long SamplePoint,
            /* [in] */ enum Tkdpo2k3k4kCANProbeTypeEnum SignalType,
            /* [in] */ long BitRate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadCAN )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ long *SamplePoint,
            /* [out][in] */ enum Tkdpo2k3k4kCANProbeTypeEnum *SignalType,
            /* [out][in] */ long *BitRate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFlexray )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kFlexrayChannelEnum IDFormat,
            /* [in] */ enum Tkdpo2k3k4kFlexraySignalEnum Standard,
            /* [in] */ long BitRate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadFlexray )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kFlexrayChannelEnum *IDFormat,
            /* [out][in] */ enum Tkdpo2k3k4kFlexraySignalEnum *Standard,
            /* [out][in] */ long *BitRate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLIN )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kLINIDFormatEnum IDFormat,
            /* [in] */ long BitRate,
            /* [in] */ enum Tkdpo2k3k4kLINPolarityEnum Polarity,
            /* [in] */ long SamplePoint,
            /* [in] */ enum Tkdpo2k3k4kLINStandardEnum Standard);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadLIN )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kLINIDFormatEnum *IDFormat,
            /* [out][in] */ long *BitRate,
            /* [out][in] */ enum Tkdpo2k3k4kLINPolarityEnum *Polarity,
            /* [out][in] */ long *SamplePoint,
            /* [out][in] */ enum Tkdpo2k3k4kLINStandardEnum *Standard);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSPI )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Clocksource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity,
            /* [in] */ long DataSize,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataMISOSource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity,
            /* [in] */ enum Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum SlaveSelectSource,
            /* [in] */ enum Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DataMOSISource,
            /* [in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadSPI )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *Clocksource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIClockPolarityEnum *ClockPolarity,
            /* [out][in] */ long *DataSize,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataMISOSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum *DataMISOPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIBitOrderEnum *BitOrder,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *SlaveSelectSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum *SlaveSelectPolarity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DataMOSISource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSPIDataPolarityEnum *DataMOSIPolarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRS232 )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum RXSource,
            /* [in] */ enum Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity,
            /* [in] */ double Bitrate,
            /* [in] */ long DataBits,
            /* [in] */ enum Tkdpo2k3k4kBusRS232ParityEnum InputParity,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum TXSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadRS232 )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *RXSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusRS232PolarityEnum *InputPolarity,
            /* [out][in] */ double *Bitrate,
            /* [out][in] */ long *DataBits,
            /* [out][in] */ enum Tkdpo2k3k4kBusRS232ParityEnum *InputParity,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *TXSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadUSB )( 
            ITkdpo2k3k4kBus * This,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DifferentialSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusUSBProbeEnum *Probe,
            /* [out][in] */ enum Tkdpo2k3k4kBusUSBBitrateEnum *Bitrate,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DPLUSSource,
            /* [out][in] */ enum Tkdpo2k3k4kBusSourceEnum *DMINUSSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureUSB )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DifferentialSource,
            /* [in] */ enum Tkdpo2k3k4kBusUSBProbeEnum Probe,
            /* [in] */ enum Tkdpo2k3k4kBusUSBBitrateEnum Bitrate,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DPLUSSource,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum DMINUSSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetLowThresholdChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetThresholdChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetLowThreshholdChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetThresholdChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetThresholdDigitalChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelEnum InputSource,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetThresholdDigitalChannel )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelEnum InputSource,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetUpperThreshhold )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetUpperThreshhold )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum InputSource,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveEventTable )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ BSTR Filename);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CANBitRateEnum )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kCANBitRateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayType )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusDisplayTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayType )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusDisplayTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsClockedParallelBus )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsClockedParallelBus )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayFormat )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusDisplayFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayFormat )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusDisplayFormatEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelBusClockSource )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelBusClockSource )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelBusClockEdge )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusParallelBusClockEdgeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelBusClockEdge )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusParallelBusClockEdgeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232Delimiter )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusRS232DelimiterEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RS232Delimiter )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusRS232DelimiterEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232DisplayMode )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusRS232DisplayModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RS232DisplayMode )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusRS232DisplayModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232TXSource )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RS232TXSource )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232RXSource )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RS232RXSource )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelBitSource )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ long Bit,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelBitSource )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ long Bit,
            /* [in] */ enum Tkdpo2k3k4kBusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelWidth )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelWidth )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SPIFraming )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kBusSPIFramingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SPIFraming )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ enum Tkdpo2k3k4kBusSPIFramingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SPIIdleTime )( 
            ITkdpo2k3k4kBus * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SPIIdleTime )( 
            ITkdpo2k3k4kBus * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kBusVtbl;

    interface ITkdpo2k3k4kBus
    {
        CONST_VTBL struct ITkdpo2k3k4kBusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kBus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kBus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kBus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kBus_ConfigureI2C(This,ClockSource,DataSource,RWInAddress)	\
    ( (This)->lpVtbl -> ConfigureI2C(This,ClockSource,DataSource,RWInAddress) ) 

#define ITkdpo2k3k4kBus_ReadI2C(This,ClockSource,DataSource,RWInAddress)	\
    ( (This)->lpVtbl -> ReadI2C(This,ClockSource,DataSource,RWInAddress) ) 

#define ITkdpo2k3k4kBus_ConfigureAudioInputs(This,Type,ClockSource,DataSource,WordSelectSource,FrameSyncSource)	\
    ( (This)->lpVtbl -> ConfigureAudioInputs(This,Type,ClockSource,DataSource,WordSelectSource,FrameSyncSource) ) 

#define ITkdpo2k3k4kBus_ReadAudioInputs(This,Type,ClockSource,DataSource,WordSelectSource,FrameSyncSource)	\
    ( (This)->lpVtbl -> ReadAudioInputs(This,Type,ClockSource,DataSource,WordSelectSource,FrameSyncSource) ) 

#define ITkdpo2k3k4kBus_ConfigureAudio(This,BitDelay,BitOrder,BitsPerChannel,ClockPolarity,DataPolarity,BitsPerWord,DisplayFormat,FrameSyncPolarity,WordSelectPolarity,ChannelsPerFrame)	\
    ( (This)->lpVtbl -> ConfigureAudio(This,BitDelay,BitOrder,BitsPerChannel,ClockPolarity,DataPolarity,BitsPerWord,DisplayFormat,FrameSyncPolarity,WordSelectPolarity,ChannelsPerFrame) ) 

#define ITkdpo2k3k4kBus_ReadAudio(This,BitDelay,BitOrder,BitsPerChannel,ClockPolarity,DataPolarity,BitsPerWord,DisplayFormat,FrameSyncPolarity,WordSelectPolarity,ChannelsPerFrame)	\
    ( (This)->lpVtbl -> ReadAudio(This,BitDelay,BitOrder,BitsPerChannel,ClockPolarity,DataPolarity,BitsPerWord,DisplayFormat,FrameSyncPolarity,WordSelectPolarity,ChannelsPerFrame) ) 

#define ITkdpo2k3k4kBus_ConfigureCAN(This,Source,SamplePoint,SignalType,BitRate)	\
    ( (This)->lpVtbl -> ConfigureCAN(This,Source,SamplePoint,SignalType,BitRate) ) 

#define ITkdpo2k3k4kBus_ReadCAN(This,Source,SamplePoint,SignalType,BitRate)	\
    ( (This)->lpVtbl -> ReadCAN(This,Source,SamplePoint,SignalType,BitRate) ) 

#define ITkdpo2k3k4kBus_ConfigureFlexray(This,Source,IDFormat,Standard,BitRate)	\
    ( (This)->lpVtbl -> ConfigureFlexray(This,Source,IDFormat,Standard,BitRate) ) 

#define ITkdpo2k3k4kBus_ReadFlexray(This,Source,IDFormat,Standard,BitRate)	\
    ( (This)->lpVtbl -> ReadFlexray(This,Source,IDFormat,Standard,BitRate) ) 

#define ITkdpo2k3k4kBus_ConfigureLIN(This,Source,IDFormat,BitRate,Polarity,SamplePoint,Standard)	\
    ( (This)->lpVtbl -> ConfigureLIN(This,Source,IDFormat,BitRate,Polarity,SamplePoint,Standard) ) 

#define ITkdpo2k3k4kBus_ReadLIN(This,Source,IDFormat,BitRate,Polarity,SamplePoint,Standard)	\
    ( (This)->lpVtbl -> ReadLIN(This,Source,IDFormat,BitRate,Polarity,SamplePoint,Standard) ) 

#define ITkdpo2k3k4kBus_ConfigureSPI(This,Clocksource,ClockPolarity,DataSize,DataMISOSource,DataMISOPolarity,BitOrder,SlaveSelectSource,SlaveSelectPolarity,DataMOSISource,DataMOSIPolarity)	\
    ( (This)->lpVtbl -> ConfigureSPI(This,Clocksource,ClockPolarity,DataSize,DataMISOSource,DataMISOPolarity,BitOrder,SlaveSelectSource,SlaveSelectPolarity,DataMOSISource,DataMOSIPolarity) ) 

#define ITkdpo2k3k4kBus_ReadSPI(This,Clocksource,ClockPolarity,DataSize,DataMISOSource,DataMISOPolarity,BitOrder,SlaveSelectSource,SlaveSelectPolarity,DataMOSISource,DataMOSIPolarity)	\
    ( (This)->lpVtbl -> ReadSPI(This,Clocksource,ClockPolarity,DataSize,DataMISOSource,DataMISOPolarity,BitOrder,SlaveSelectSource,SlaveSelectPolarity,DataMOSISource,DataMOSIPolarity) ) 

#define ITkdpo2k3k4kBus_ConfigureRS232(This,RXSource,InputPolarity,Bitrate,DataBits,InputParity,TXSource)	\
    ( (This)->lpVtbl -> ConfigureRS232(This,RXSource,InputPolarity,Bitrate,DataBits,InputParity,TXSource) ) 

#define ITkdpo2k3k4kBus_ReadRS232(This,RXSource,InputPolarity,Bitrate,DataBits,InputParity,TXSource)	\
    ( (This)->lpVtbl -> ReadRS232(This,RXSource,InputPolarity,Bitrate,DataBits,InputParity,TXSource) ) 

#define ITkdpo2k3k4kBus_ReadUSB(This,DifferentialSource,Probe,Bitrate,DPLUSSource,DMINUSSource)	\
    ( (This)->lpVtbl -> ReadUSB(This,DifferentialSource,Probe,Bitrate,DPLUSSource,DMINUSSource) ) 

#define ITkdpo2k3k4kBus_ConfigureUSB(This,DifferentialSource,Probe,Bitrate,DPLUSSource,DMINUSSource)	\
    ( (This)->lpVtbl -> ConfigureUSB(This,DifferentialSource,Probe,Bitrate,DPLUSSource,DMINUSSource) ) 

#define ITkdpo2k3k4kBus_GetLowThresholdChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> GetLowThresholdChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_GetThresholdChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> GetThresholdChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_SetLowThreshholdChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> SetLowThreshholdChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_SetThresholdChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> SetThresholdChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_SetThresholdDigitalChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> SetThresholdDigitalChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_GetThresholdDigitalChannel(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> GetThresholdDigitalChannel(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_SetUpperThreshhold(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> SetUpperThreshhold(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_GetUpperThreshhold(This,InputSource,Threshold)	\
    ( (This)->lpVtbl -> GetUpperThreshhold(This,InputSource,Threshold) ) 

#define ITkdpo2k3k4kBus_SaveEventTable(This,Filename)	\
    ( (This)->lpVtbl -> SaveEventTable(This,Filename) ) 

#define ITkdpo2k3k4kBus_put_CANBitRateEnum(This,Val)	\
    ( (This)->lpVtbl -> put_CANBitRateEnum(This,Val) ) 

#define ITkdpo2k3k4kBus_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kBus_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kBus_get_Label(This,Val)	\
    ( (This)->lpVtbl -> get_Label(This,Val) ) 

#define ITkdpo2k3k4kBus_put_Label(This,Val)	\
    ( (This)->lpVtbl -> put_Label(This,Val) ) 

#define ITkdpo2k3k4kBus_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kBus_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kBus_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kBus_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kBus_get_DisplayType(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayType(This,Val) ) 

#define ITkdpo2k3k4kBus_put_DisplayType(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayType(This,Val) ) 

#define ITkdpo2k3k4kBus_get_IsClockedParallelBus(This,Val)	\
    ( (This)->lpVtbl -> get_IsClockedParallelBus(This,Val) ) 

#define ITkdpo2k3k4kBus_put_IsClockedParallelBus(This,Val)	\
    ( (This)->lpVtbl -> put_IsClockedParallelBus(This,Val) ) 

#define ITkdpo2k3k4kBus_get_DisplayFormat(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayFormat(This,Val) ) 

#define ITkdpo2k3k4kBus_put_DisplayFormat(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayFormat(This,Val) ) 

#define ITkdpo2k3k4kBus_get_ParallelBusClockSource(This,Val)	\
    ( (This)->lpVtbl -> get_ParallelBusClockSource(This,Val) ) 

#define ITkdpo2k3k4kBus_put_ParallelBusClockSource(This,Val)	\
    ( (This)->lpVtbl -> put_ParallelBusClockSource(This,Val) ) 

#define ITkdpo2k3k4kBus_get_ParallelBusClockEdge(This,Val)	\
    ( (This)->lpVtbl -> get_ParallelBusClockEdge(This,Val) ) 

#define ITkdpo2k3k4kBus_put_ParallelBusClockEdge(This,Val)	\
    ( (This)->lpVtbl -> put_ParallelBusClockEdge(This,Val) ) 

#define ITkdpo2k3k4kBus_get_RS232Delimiter(This,Val)	\
    ( (This)->lpVtbl -> get_RS232Delimiter(This,Val) ) 

#define ITkdpo2k3k4kBus_put_RS232Delimiter(This,Val)	\
    ( (This)->lpVtbl -> put_RS232Delimiter(This,Val) ) 

#define ITkdpo2k3k4kBus_get_RS232DisplayMode(This,Val)	\
    ( (This)->lpVtbl -> get_RS232DisplayMode(This,Val) ) 

#define ITkdpo2k3k4kBus_put_RS232DisplayMode(This,Val)	\
    ( (This)->lpVtbl -> put_RS232DisplayMode(This,Val) ) 

#define ITkdpo2k3k4kBus_get_RS232TXSource(This,Val)	\
    ( (This)->lpVtbl -> get_RS232TXSource(This,Val) ) 

#define ITkdpo2k3k4kBus_put_RS232TXSource(This,Val)	\
    ( (This)->lpVtbl -> put_RS232TXSource(This,Val) ) 

#define ITkdpo2k3k4kBus_get_RS232RXSource(This,Val)	\
    ( (This)->lpVtbl -> get_RS232RXSource(This,Val) ) 

#define ITkdpo2k3k4kBus_put_RS232RXSource(This,Val)	\
    ( (This)->lpVtbl -> put_RS232RXSource(This,Val) ) 

#define ITkdpo2k3k4kBus_get_ParallelBitSource(This,Bit,Val)	\
    ( (This)->lpVtbl -> get_ParallelBitSource(This,Bit,Val) ) 

#define ITkdpo2k3k4kBus_put_ParallelBitSource(This,Bit,Val)	\
    ( (This)->lpVtbl -> put_ParallelBitSource(This,Bit,Val) ) 

#define ITkdpo2k3k4kBus_get_ParallelWidth(This,Val)	\
    ( (This)->lpVtbl -> get_ParallelWidth(This,Val) ) 

#define ITkdpo2k3k4kBus_put_ParallelWidth(This,Val)	\
    ( (This)->lpVtbl -> put_ParallelWidth(This,Val) ) 

#define ITkdpo2k3k4kBus_get_SPIFraming(This,Val)	\
    ( (This)->lpVtbl -> get_SPIFraming(This,Val) ) 

#define ITkdpo2k3k4kBus_put_SPIFraming(This,Val)	\
    ( (This)->lpVtbl -> put_SPIFraming(This,Val) ) 

#define ITkdpo2k3k4kBus_get_SPIIdleTime(This,Val)	\
    ( (This)->lpVtbl -> get_SPIIdleTime(This,Val) ) 

#define ITkdpo2k3k4kBus_put_SPIIdleTime(This,Val)	\
    ( (This)->lpVtbl -> put_SPIIdleTime(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kBus_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursor_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursor_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursor */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3ea91ac6-c582-4fa2-bd59-0ef8f3d2292c")
    ITkdpo2k3k4kCursor : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DDT( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TrackMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorTrackModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TrackMode( 
            /* [in] */ enum Tkdpo2k3k4kCursorTrackModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kCursorTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HBars( 
            /* [retval][out] */ ITkdpo2k3k4kCursorHBars **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VBars( 
            /* [retval][out] */ ITkdpo2k3k4kCursorVBars **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XY( 
            /* [retval][out] */ ITkdpo2k3k4kCursorXY **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kCursorSourceEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursor * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DDT )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TrackMode )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorTrackModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TrackMode )( 
            ITkdpo2k3k4kCursor * This,
            /* [in] */ enum Tkdpo2k3k4kCursorTrackModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kCursor * This,
            /* [in] */ enum Tkdpo2k3k4kCursorTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HBars )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorHBars **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VBars )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorVBars **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XY )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorXY **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kCursor * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kCursor * This,
            /* [in] */ enum Tkdpo2k3k4kCursorSourceEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorVtbl;

    interface ITkdpo2k3k4kCursor
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursor_get_DDT(This,Val)	\
    ( (This)->lpVtbl -> get_DDT(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_TrackMode(This,Val)	\
    ( (This)->lpVtbl -> get_TrackMode(This,Val) ) 

#define ITkdpo2k3k4kCursor_put_TrackMode(This,Val)	\
    ( (This)->lpVtbl -> put_TrackMode(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kCursor_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_HBars(This,Val)	\
    ( (This)->lpVtbl -> get_HBars(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_VBars(This,Val)	\
    ( (This)->lpVtbl -> get_VBars(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_XY(This,Val)	\
    ( (This)->lpVtbl -> get_XY(This,Val) ) 

#define ITkdpo2k3k4kCursor_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kCursor_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursor_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorHBars_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorHBars_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorHBars */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorHBars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9690c988-152d-417d-928f-db1149a72e75")
    ITkdpo2k3k4kCursorHBars : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetMeasurementScale( 
            /* [in] */ enum Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorHBarsUnitsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Units( 
            /* [in] */ enum Tkdpo2k3k4kCursorHBarsUnitsEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position1( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position2( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorHBarsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorHBars * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorHBars * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetMeasurementScale )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [in] */ enum Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorHBarsUnitsEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Units )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [in] */ enum Tkdpo2k3k4kCursorHBarsUnitsEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delta )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position1 )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position1 )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position2 )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position2 )( 
            ITkdpo2k3k4kCursorHBars * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorHBarsVtbl;

    interface ITkdpo2k3k4kCursorHBars
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorHBarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorHBars_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorHBars_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorHBars_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorHBars_SetMeasurementScale(This,MeasurementScale)	\
    ( (This)->lpVtbl -> SetMeasurementScale(This,MeasurementScale) ) 

#define ITkdpo2k3k4kCursorHBars_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_put_Units(This,Val)	\
    ( (This)->lpVtbl -> put_Units(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_get_Delta(This,Val)	\
    ( (This)->lpVtbl -> get_Delta(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_get_Position1(This,Val)	\
    ( (This)->lpVtbl -> get_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_put_Position1(This,Val)	\
    ( (This)->lpVtbl -> put_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_get_Position2(This,Val)	\
    ( (This)->lpVtbl -> get_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorHBars_put_Position2(This,Val)	\
    ( (This)->lpVtbl -> put_Position2(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorHBars_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorVBars_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorVBars_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorVBars */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorVBars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0af7d104-4594-48d4-ab4a-85629f1f8c93")
    ITkdpo2k3k4kCursorVBars : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetMeasurementScale( 
            /* [in] */ enum Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position1( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position2( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorVBarsUnitsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Units( 
            /* [in] */ enum Tkdpo2k3k4kCursorVBarsUnitsEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalPosition1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalPosition2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VDelta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AlternativeReadout1( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AlternativeReadout2( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorVBarsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorVBars * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorVBars * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetMeasurementScale )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [in] */ enum Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delta )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position1 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position1 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position2 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position2 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorVBarsUnitsEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Units )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [in] */ enum Tkdpo2k3k4kCursorVBarsUnitsEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalPosition1 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalPosition2 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VDelta )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternativeReadout1 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlternativeReadout2 )( 
            ITkdpo2k3k4kCursorVBars * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorVBarsVtbl;

    interface ITkdpo2k3k4kCursorVBars
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorVBarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorVBars_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorVBars_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorVBars_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorVBars_SetMeasurementScale(This,MeasurementScale)	\
    ( (This)->lpVtbl -> SetMeasurementScale(This,MeasurementScale) ) 

#define ITkdpo2k3k4kCursorVBars_get_Delta(This,Val)	\
    ( (This)->lpVtbl -> get_Delta(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_Position1(This,Val)	\
    ( (This)->lpVtbl -> get_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_put_Position1(This,Val)	\
    ( (This)->lpVtbl -> put_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_Position2(This,Val)	\
    ( (This)->lpVtbl -> get_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_put_Position2(This,Val)	\
    ( (This)->lpVtbl -> put_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_put_Units(This,Val)	\
    ( (This)->lpVtbl -> put_Units(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_HorizontalPosition1(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_HorizontalPosition2(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_VDelta(This,Val)	\
    ( (This)->lpVtbl -> get_VDelta(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_AlternativeReadout1(This,Val)	\
    ( (This)->lpVtbl -> get_AlternativeReadout1(This,Val) ) 

#define ITkdpo2k3k4kCursorVBars_get_AlternativeReadout2(This,Val)	\
    ( (This)->lpVtbl -> get_AlternativeReadout2(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorVBars_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXY_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorXY_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorXY */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorXY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4d0ba98c-1a87-4460-8129-34819d39a27e")
    ITkdpo2k3k4kCursorXY : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Readout( 
            /* [retval][out] */ enum Tkdpo2k3k4kCursorXYReadoutEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Readout( 
            /* [in] */ enum Tkdpo2k3k4kCursorXYReadoutEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Rectangle( 
            /* [retval][out] */ ITkdpo2k3k4kCursorXYRectangle **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Ratio( 
            /* [retval][out] */ ITkdpo2k3k4kCursorXYRatio **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Product( 
            /* [retval][out] */ ITkdpo2k3k4kCursorXYProduct **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PolarCoordinates( 
            /* [retval][out] */ ITkdpo2k3k4kCursorXYPolarCoordinates **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorXYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorXY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorXY * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Readout )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [retval][out] */ enum Tkdpo2k3k4kCursorXYReadoutEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Readout )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [in] */ enum Tkdpo2k3k4kCursorXYReadoutEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rectangle )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorXYRectangle **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ratio )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorXYRatio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Product )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorXYProduct **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolarCoordinates )( 
            ITkdpo2k3k4kCursorXY * This,
            /* [retval][out] */ ITkdpo2k3k4kCursorXYPolarCoordinates **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorXYVtbl;

    interface ITkdpo2k3k4kCursorXY
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorXYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorXY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorXY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorXY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorXY_get_Readout(This,Val)	\
    ( (This)->lpVtbl -> get_Readout(This,Val) ) 

#define ITkdpo2k3k4kCursorXY_put_Readout(This,Val)	\
    ( (This)->lpVtbl -> put_Readout(This,Val) ) 

#define ITkdpo2k3k4kCursorXY_get_Rectangle(This,Val)	\
    ( (This)->lpVtbl -> get_Rectangle(This,Val) ) 

#define ITkdpo2k3k4kCursorXY_get_Ratio(This,Val)	\
    ( (This)->lpVtbl -> get_Ratio(This,Val) ) 

#define ITkdpo2k3k4kCursorXY_get_Product(This,Val)	\
    ( (This)->lpVtbl -> get_Product(This,Val) ) 

#define ITkdpo2k3k4kCursorXY_get_PolarCoordinates(This,Val)	\
    ( (This)->lpVtbl -> get_PolarCoordinates(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorXY_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYRectangle_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorXYRectangle_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorXYRectangle */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorXYRectangle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aba6ddab-0d77-4972-9bf3-e827ccc20453")
    ITkdpo2k3k4kCursorXYRectangle : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XDelta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XPosition1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_XPosition1( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XPosition2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_XPosition2( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_YDelta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_YPosition1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_YPosition1( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_YPosition2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_YPosition2( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_YUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorXYRectangleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorXYRectangle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorXYRectangle * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XDelta )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XPosition1 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XPosition1 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XPosition2 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XPosition2 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XUnits )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YDelta )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YPosition1 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YPosition1 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YPosition2 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YPosition2 )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YUnits )( 
            ITkdpo2k3k4kCursorXYRectangle * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorXYRectangleVtbl;

    interface ITkdpo2k3k4kCursorXYRectangle
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorXYRectangleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorXYRectangle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorXYRectangle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorXYRectangle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorXYRectangle_get_XDelta(This,Val)	\
    ( (This)->lpVtbl -> get_XDelta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_XPosition1(This,Val)	\
    ( (This)->lpVtbl -> get_XPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_put_XPosition1(This,Val)	\
    ( (This)->lpVtbl -> put_XPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_XPosition2(This,Val)	\
    ( (This)->lpVtbl -> get_XPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_put_XPosition2(This,Val)	\
    ( (This)->lpVtbl -> put_XPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_XUnits(This,Val)	\
    ( (This)->lpVtbl -> get_XUnits(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_YDelta(This,Val)	\
    ( (This)->lpVtbl -> get_YDelta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_YPosition1(This,Val)	\
    ( (This)->lpVtbl -> get_YPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_put_YPosition1(This,Val)	\
    ( (This)->lpVtbl -> put_YPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_YPosition2(This,Val)	\
    ( (This)->lpVtbl -> get_YPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_put_YPosition2(This,Val)	\
    ( (This)->lpVtbl -> put_YPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRectangle_get_YUnits(This,Val)	\
    ( (This)->lpVtbl -> get_YUnits(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorXYRectangle_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYRatio_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorXYRatio_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorXYRatio */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorXYRatio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f413fda1-abf4-431f-8270-914471f0e4d1")
    ITkdpo2k3k4kCursorXYRatio : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorXYRatioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorXYRatio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorXYRatio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorXYRatio * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delta )( 
            ITkdpo2k3k4kCursorXYRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position1 )( 
            ITkdpo2k3k4kCursorXYRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position2 )( 
            ITkdpo2k3k4kCursorXYRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kCursorXYRatio * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorXYRatioVtbl;

    interface ITkdpo2k3k4kCursorXYRatio
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorXYRatioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorXYRatio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorXYRatio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorXYRatio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorXYRatio_get_Delta(This,Val)	\
    ( (This)->lpVtbl -> get_Delta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRatio_get_Position1(This,Val)	\
    ( (This)->lpVtbl -> get_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRatio_get_Position2(This,Val)	\
    ( (This)->lpVtbl -> get_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYRatio_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorXYRatio_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYProduct_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorXYProduct_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorXYProduct */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorXYProduct;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b8f7dde0-2981-40d6-9337-435493c96664")
    ITkdpo2k3k4kCursorXYProduct : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorXYProductVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorXYProduct * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorXYProduct * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorXYProduct * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delta )( 
            ITkdpo2k3k4kCursorXYProduct * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position1 )( 
            ITkdpo2k3k4kCursorXYProduct * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position2 )( 
            ITkdpo2k3k4kCursorXYProduct * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kCursorXYProduct * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorXYProductVtbl;

    interface ITkdpo2k3k4kCursorXYProduct
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorXYProductVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorXYProduct_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorXYProduct_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorXYProduct_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorXYProduct_get_Delta(This,Val)	\
    ( (This)->lpVtbl -> get_Delta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYProduct_get_Position1(This,Val)	\
    ( (This)->lpVtbl -> get_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYProduct_get_Position2(This,Val)	\
    ( (This)->lpVtbl -> get_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYProduct_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorXYProduct_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kCursorXYPolarCoordinates_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kCursorXYPolarCoordinates_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kCursorXYPolarCoordinates */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kCursorXYPolarCoordinates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("272daa00-63d3-44b8-a6bd-05fbf46d79e0")
    ITkdpo2k3k4kCursorXYPolarCoordinates : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThetaDelta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThetaPosition1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThetaPosition2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThetaUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delta( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position1( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kCursorXYPolarCoordinatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThetaDelta )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThetaPosition1 )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThetaPosition2 )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThetaUnits )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delta )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position1 )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position2 )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kCursorXYPolarCoordinates * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kCursorXYPolarCoordinatesVtbl;

    interface ITkdpo2k3k4kCursorXYPolarCoordinates
    {
        CONST_VTBL struct ITkdpo2k3k4kCursorXYPolarCoordinatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kCursorXYPolarCoordinates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaDelta(This,Val)	\
    ( (This)->lpVtbl -> get_ThetaDelta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition1(This,Val)	\
    ( (This)->lpVtbl -> get_ThetaPosition1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition2(This,Val)	\
    ( (This)->lpVtbl -> get_ThetaPosition2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaUnits(This,Val)	\
    ( (This)->lpVtbl -> get_ThetaUnits(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_Delta(This,Val)	\
    ( (This)->lpVtbl -> get_Delta(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position1(This,Val)	\
    ( (This)->lpVtbl -> get_Position1(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position2(This,Val)	\
    ( (This)->lpVtbl -> get_Position2(This,Val) ) 

#define ITkdpo2k3k4kCursorXYPolarCoordinates_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kCursorXYPolarCoordinates_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kDisplay_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kDisplay_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kDisplay */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ad4efbd2-8daf-423b-bcb5-6201238fdba8")
    ITkdpo2k3k4kDisplay : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetMessageBoxCoordinates( 
            /* [in] */ long X1,
            /* [in] */ long Y1,
            /* [in] */ long X2,
            /* [in] */ long Y2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetMessageBoxCoordinates( 
            /* [out][in] */ long *X1,
            /* [out][in] */ long *Y1,
            /* [out][in] */ long *X2,
            /* [out][in] */ long *Y2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ShowMessage( 
            /* [in] */ BSTR Message) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearMessage( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetDisplayMessage( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ClockState( 
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayClockStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ClockState( 
            /* [in] */ enum Tkdpo2k3k4kDisplayClockStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BackLightIntensity( 
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayBackLightIntensityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BackLightIntensity( 
            /* [in] */ enum Tkdpo2k3k4kDisplayBackLightIntensityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayDisplayFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Format( 
            /* [in] */ enum Tkdpo2k3k4kDisplayDisplayFormatEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GraticuleStyle( 
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayGraticuleEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GraticuleStyle( 
            /* [in] */ enum Tkdpo2k3k4kDisplayGraticuleEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Persistence( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Persistence( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PersistenceEnum( 
            /* [in] */ enum Tkdpo2k3k4kDisplayPersistenceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformIntensity( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_WaveformIntensity( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GraticuleIntensity( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GraticuleIntensity( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DotsOnly( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DotsOnly( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayMessageBox( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayMessageBox( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GlitchCaptureState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GlitchCaptureState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GlitchIntensity( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GlitchIntensity( 
            /* [in] */ long Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kDisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kDisplay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kDisplay * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetMessageBoxCoordinates )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ long X1,
            /* [in] */ long Y1,
            /* [in] */ long X2,
            /* [in] */ long Y2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetMessageBoxCoordinates )( 
            ITkdpo2k3k4kDisplay * This,
            /* [out][in] */ long *X1,
            /* [out][in] */ long *Y1,
            /* [out][in] */ long *X2,
            /* [out][in] */ long *Y2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ShowMessage )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ BSTR Message);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearMessage )( 
            ITkdpo2k3k4kDisplay * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetDisplayMessage )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockState )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayClockStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockState )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ enum Tkdpo2k3k4kDisplayClockStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackLightIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayBackLightIntensityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackLightIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ enum Tkdpo2k3k4kDisplayBackLightIntensityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayDisplayFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Format )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ enum Tkdpo2k3k4kDisplayDisplayFormatEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraticuleStyle )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDisplayGraticuleEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GraticuleStyle )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ enum Tkdpo2k3k4kDisplayGraticuleEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Persistence )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Persistence )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistenceEnum )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ enum Tkdpo2k3k4kDisplayPersistenceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WaveformIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraticuleIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GraticuleIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DotsOnly )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DotsOnly )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayMessageBox )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayMessageBox )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GlitchCaptureState )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GlitchCaptureState )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GlitchIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GlitchIntensity )( 
            ITkdpo2k3k4kDisplay * This,
            /* [in] */ long Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kDisplayVtbl;

    interface ITkdpo2k3k4kDisplay
    {
        CONST_VTBL struct ITkdpo2k3k4kDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kDisplay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kDisplay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kDisplay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kDisplay_SetMessageBoxCoordinates(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> SetMessageBoxCoordinates(This,X1,Y1,X2,Y2) ) 

#define ITkdpo2k3k4kDisplay_GetMessageBoxCoordinates(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> GetMessageBoxCoordinates(This,X1,Y1,X2,Y2) ) 

#define ITkdpo2k3k4kDisplay_ShowMessage(This,Message)	\
    ( (This)->lpVtbl -> ShowMessage(This,Message) ) 

#define ITkdpo2k3k4kDisplay_ClearMessage(This)	\
    ( (This)->lpVtbl -> ClearMessage(This) ) 

#define ITkdpo2k3k4kDisplay_GetDisplayMessage(This,Val)	\
    ( (This)->lpVtbl -> GetDisplayMessage(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_ClockState(This,Val)	\
    ( (This)->lpVtbl -> get_ClockState(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_ClockState(This,Val)	\
    ( (This)->lpVtbl -> put_ClockState(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_BackLightIntensity(This,Val)	\
    ( (This)->lpVtbl -> get_BackLightIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_BackLightIntensity(This,Val)	\
    ( (This)->lpVtbl -> put_BackLightIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_Format(This,Val)	\
    ( (This)->lpVtbl -> get_Format(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_Format(This,Val)	\
    ( (This)->lpVtbl -> put_Format(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_GraticuleStyle(This,Val)	\
    ( (This)->lpVtbl -> get_GraticuleStyle(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_GraticuleStyle(This,Val)	\
    ( (This)->lpVtbl -> put_GraticuleStyle(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_Persistence(This,Val)	\
    ( (This)->lpVtbl -> get_Persistence(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_Persistence(This,Val)	\
    ( (This)->lpVtbl -> put_Persistence(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_PersistenceEnum(This,Val)	\
    ( (This)->lpVtbl -> put_PersistenceEnum(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_WaveformIntensity(This,Val)	\
    ( (This)->lpVtbl -> get_WaveformIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_WaveformIntensity(This,Val)	\
    ( (This)->lpVtbl -> put_WaveformIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_GraticuleIntensity(This,Val)	\
    ( (This)->lpVtbl -> get_GraticuleIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_GraticuleIntensity(This,Val)	\
    ( (This)->lpVtbl -> put_GraticuleIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_DotsOnly(This,Val)	\
    ( (This)->lpVtbl -> get_DotsOnly(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_DotsOnly(This,Val)	\
    ( (This)->lpVtbl -> put_DotsOnly(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_DisplayMessageBox(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayMessageBox(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_DisplayMessageBox(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayMessageBox(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_GlitchCaptureState(This,Val)	\
    ( (This)->lpVtbl -> get_GlitchCaptureState(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_GlitchCaptureState(This,Val)	\
    ( (This)->lpVtbl -> put_GlitchCaptureState(This,Val) ) 

#define ITkdpo2k3k4kDisplay_get_GlitchIntensity(This,Val)	\
    ( (This)->lpVtbl -> get_GlitchIntensity(This,Val) ) 

#define ITkdpo2k3k4kDisplay_put_GlitchIntensity(This,Val)	\
    ( (This)->lpVtbl -> put_GlitchIntensity(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kDisplay_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kHardCopy_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kHardCopy_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kHardCopy */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kHardCopy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("440ec702-4075-41a1-9836-cfbb8c2541c7")
    ITkdpo2k3k4kHardCopy : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Print( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Layout( 
            /* [retval][out] */ enum Tkdpo2k3k4kPrintLayoutEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Layout( 
            /* [in] */ enum Tkdpo2k3k4kPrintLayoutEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InkSaver( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InkSaver( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kHardCopyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kHardCopy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kHardCopy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kHardCopy * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Print )( 
            ITkdpo2k3k4kHardCopy * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layout )( 
            ITkdpo2k3k4kHardCopy * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPrintLayoutEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Layout )( 
            ITkdpo2k3k4kHardCopy * This,
            /* [in] */ enum Tkdpo2k3k4kPrintLayoutEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkSaver )( 
            ITkdpo2k3k4kHardCopy * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkSaver )( 
            ITkdpo2k3k4kHardCopy * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kHardCopyVtbl;

    interface ITkdpo2k3k4kHardCopy
    {
        CONST_VTBL struct ITkdpo2k3k4kHardCopyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kHardCopy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kHardCopy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kHardCopy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kHardCopy_Print(This)	\
    ( (This)->lpVtbl -> Print(This) ) 

#define ITkdpo2k3k4kHardCopy_get_Layout(This,Val)	\
    ( (This)->lpVtbl -> get_Layout(This,Val) ) 

#define ITkdpo2k3k4kHardCopy_put_Layout(This,Val)	\
    ( (This)->lpVtbl -> put_Layout(This,Val) ) 

#define ITkdpo2k3k4kHardCopy_get_InkSaver(This,Val)	\
    ( (This)->lpVtbl -> get_InkSaver(This,Val) ) 

#define ITkdpo2k3k4kHardCopy_put_InkSaver(This,Val)	\
    ( (This)->lpVtbl -> put_InkSaver(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kHardCopy_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kHistogram_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kHistogram_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kHistogram */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kHistogram;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eee03894-c12f-408f-b16e-3d13272424a6")
    ITkdpo2k3k4kHistogram : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kSource1Enum Source,
            /* [in] */ enum Tkdpo2k3k4kHistogramModeEnum Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ enum Tkdpo2k3k4kSource1Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kHistogramModeEnum *Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureBoxCoordinates( 
            /* [in] */ double Top,
            /* [in] */ double Left,
            /* [in] */ double Right,
            /* [in] */ double Bottom) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadBoxCoordinates( 
            /* [out][in] */ double *Top,
            /* [out][in] */ double *Left,
            /* [out][in] */ double *Right,
            /* [out][in] */ double *Bottom) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureBoxCoordinatesPercent( 
            /* [in] */ double Top,
            /* [in] */ double Left,
            /* [in] */ double Right,
            /* [in] */ double Bottom) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadBoxCoordinatesPercent( 
            /* [out][in] */ double *Top,
            /* [out][in] */ double *Left,
            /* [out][in] */ double *Right,
            /* [out][in] */ double *Bottom) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ enum Tkdpo2k3k4kHistogramDisplayEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Display( 
            /* [in] */ enum Tkdpo2k3k4kHistogramDisplayEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum Tkdpo2k3k4kHistogramModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum Tkdpo2k3k4kHistogramModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kSource1Enum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kSource1Enum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kHistogramVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kHistogram * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kHistogram * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ enum Tkdpo2k3k4kSource1Enum Source,
            /* [in] */ enum Tkdpo2k3k4kHistogramModeEnum Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kHistogram * This,
            /* [out][in] */ enum Tkdpo2k3k4kSource1Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kHistogramModeEnum *Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBoxCoordinates )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ double Top,
            /* [in] */ double Left,
            /* [in] */ double Right,
            /* [in] */ double Bottom);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadBoxCoordinates )( 
            ITkdpo2k3k4kHistogram * This,
            /* [out][in] */ double *Top,
            /* [out][in] */ double *Left,
            /* [out][in] */ double *Right,
            /* [out][in] */ double *Bottom);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBoxCoordinatesPercent )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ double Top,
            /* [in] */ double Left,
            /* [in] */ double Right,
            /* [in] */ double Bottom);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadBoxCoordinatesPercent )( 
            ITkdpo2k3k4kHistogram * This,
            /* [out][in] */ double *Top,
            /* [out][in] */ double *Left,
            /* [out][in] */ double *Right,
            /* [out][in] */ double *Bottom);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ITkdpo2k3k4kHistogram * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            ITkdpo2k3k4kHistogram * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            ITkdpo2k3k4kHistogram * This,
            /* [retval][out] */ enum Tkdpo2k3k4kHistogramDisplayEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Display )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ enum Tkdpo2k3k4kHistogramDisplayEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ITkdpo2k3k4kHistogram * This,
            /* [retval][out] */ enum Tkdpo2k3k4kHistogramModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ enum Tkdpo2k3k4kHistogramModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kHistogram * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSource1Enum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kHistogram * This,
            /* [in] */ enum Tkdpo2k3k4kSource1Enum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kHistogramVtbl;

    interface ITkdpo2k3k4kHistogram
    {
        CONST_VTBL struct ITkdpo2k3k4kHistogramVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kHistogram_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kHistogram_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kHistogram_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kHistogram_Configure(This,Source,Mode)	\
    ( (This)->lpVtbl -> Configure(This,Source,Mode) ) 

#define ITkdpo2k3k4kHistogram_Read(This,Source,Mode)	\
    ( (This)->lpVtbl -> Read(This,Source,Mode) ) 

#define ITkdpo2k3k4kHistogram_ConfigureBoxCoordinates(This,Top,Left,Right,Bottom)	\
    ( (This)->lpVtbl -> ConfigureBoxCoordinates(This,Top,Left,Right,Bottom) ) 

#define ITkdpo2k3k4kHistogram_ReadBoxCoordinates(This,Top,Left,Right,Bottom)	\
    ( (This)->lpVtbl -> ReadBoxCoordinates(This,Top,Left,Right,Bottom) ) 

#define ITkdpo2k3k4kHistogram_ConfigureBoxCoordinatesPercent(This,Top,Left,Right,Bottom)	\
    ( (This)->lpVtbl -> ConfigureBoxCoordinatesPercent(This,Top,Left,Right,Bottom) ) 

#define ITkdpo2k3k4kHistogram_ReadBoxCoordinatesPercent(This,Top,Left,Right,Bottom)	\
    ( (This)->lpVtbl -> ReadBoxCoordinatesPercent(This,Top,Left,Right,Bottom) ) 

#define ITkdpo2k3k4kHistogram_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define ITkdpo2k3k4kHistogram_get_Data(This,Val)	\
    ( (This)->lpVtbl -> get_Data(This,Val) ) 

#define ITkdpo2k3k4kHistogram_get_Display(This,Val)	\
    ( (This)->lpVtbl -> get_Display(This,Val) ) 

#define ITkdpo2k3k4kHistogram_put_Display(This,Val)	\
    ( (This)->lpVtbl -> put_Display(This,Val) ) 

#define ITkdpo2k3k4kHistogram_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define ITkdpo2k3k4kHistogram_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define ITkdpo2k3k4kHistogram_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kHistogram_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kHistogram_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kHorizontal_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kHorizontal_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kHorizontal */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kHorizontal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c0efea24-ea05-41da-9e27-1079389e4980")
    ITkdpo2k3k4kHorizontal : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Position,
            /* [in] */ double Scale,
            /* [in] */ long RecordLength) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDelay( 
            /* [in] */ VARIANT_BOOL Mode,
            /* [in] */ double Time) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ double *Position,
            /* [out][in] */ double *Scale,
            /* [out][in] */ long *RecordLength) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadDelay( 
            /* [out][in] */ VARIANT_BOOL *Mode,
            /* [out][in] */ double *Time) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayMode( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayMode( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalMainRecordLength( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalMagniVuRecordLength( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalMainSampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalMagniVuSampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Scale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RecordLength( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RecordLength( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerPosition( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerPosition( 
            /* [in] */ long Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kHorizontalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kHorizontal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kHorizontal * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ double Position,
            /* [in] */ double Scale,
            /* [in] */ long RecordLength);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDelay )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ VARIANT_BOOL Mode,
            /* [in] */ double Time);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [out][in] */ double *Position,
            /* [out][in] */ double *Scale,
            /* [out][in] */ long *RecordLength);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadDelay )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [out][in] */ VARIANT_BOOL *Mode,
            /* [out][in] */ double *Time);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayMode )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayMode )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayTime )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayTime )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalMainRecordLength )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalMagniVuRecordLength )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalMainSampleRate )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalMagniVuSampleRate )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scale )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordLength )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecordLength )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRate )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerPosition )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerPosition )( 
            ITkdpo2k3k4kHorizontal * This,
            /* [in] */ long Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kHorizontalVtbl;

    interface ITkdpo2k3k4kHorizontal
    {
        CONST_VTBL struct ITkdpo2k3k4kHorizontalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kHorizontal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kHorizontal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kHorizontal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kHorizontal_Configure(This,Position,Scale,RecordLength)	\
    ( (This)->lpVtbl -> Configure(This,Position,Scale,RecordLength) ) 

#define ITkdpo2k3k4kHorizontal_ConfigureDelay(This,Mode,Time)	\
    ( (This)->lpVtbl -> ConfigureDelay(This,Mode,Time) ) 

#define ITkdpo2k3k4kHorizontal_Read(This,Position,Scale,RecordLength)	\
    ( (This)->lpVtbl -> Read(This,Position,Scale,RecordLength) ) 

#define ITkdpo2k3k4kHorizontal_ReadDelay(This,Mode,Time)	\
    ( (This)->lpVtbl -> ReadDelay(This,Mode,Time) ) 

#define ITkdpo2k3k4kHorizontal_get_DelayMode(This,Val)	\
    ( (This)->lpVtbl -> get_DelayMode(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_DelayMode(This,Val)	\
    ( (This)->lpVtbl -> put_DelayMode(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_DelayTime(This,Val)	\
    ( (This)->lpVtbl -> get_DelayTime(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_DelayTime(This,Val)	\
    ( (This)->lpVtbl -> put_DelayTime(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_DigitalMainRecordLength(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalMainRecordLength(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_DigitalMagniVuRecordLength(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalMagniVuRecordLength(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_DigitalMainSampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalMainSampleRate(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_DigitalMagniVuSampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalMagniVuSampleRate(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_Scale(This,Val)	\
    ( (This)->lpVtbl -> get_Scale(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_Scale(This,Val)	\
    ( (This)->lpVtbl -> put_Scale(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_RecordLength(This,Val)	\
    ( (This)->lpVtbl -> get_RecordLength(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_RecordLength(This,Val)	\
    ( (This)->lpVtbl -> put_RecordLength(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_SampleRate(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> put_SampleRate(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_get_TriggerPosition(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerPosition(This,Val) ) 

#define ITkdpo2k3k4kHorizontal_put_TriggerPosition(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerPosition(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kHorizontal_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMark_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMark_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMark */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMark;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("835c994d-a182-426f-a6b3-db91e58ebe20")
    ITkdpo2k3k4kMark : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE MoveZoomToMark( 
            /* [in] */ enum Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateMark( 
            /* [in] */ enum Tkdpo2k3k4kMarkEnum Mark) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE DeleteMark( 
            /* [in] */ enum Tkdpo2k3k4kMarkEnum Mark) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FreeMarks( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TotalMarks( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedEnd( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedFocus( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedMarksInColumn( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedOwner( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedStart( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedPosition( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedLabel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMarkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMark * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMark * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMark * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *MoveZoomToMark )( 
            ITkdpo2k3k4kMark * This,
            /* [in] */ enum Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateMark )( 
            ITkdpo2k3k4kMark * This,
            /* [in] */ enum Tkdpo2k3k4kMarkEnum Mark);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DeleteMark )( 
            ITkdpo2k3k4kMark * This,
            /* [in] */ enum Tkdpo2k3k4kMarkEnum Mark);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FreeMarks )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalMarks )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedEnd )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedFocus )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedMarksInColumn )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedOwner )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedSource )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedStart )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedState )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedPosition )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedLabel )( 
            ITkdpo2k3k4kMark * This,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMarkVtbl;

    interface ITkdpo2k3k4kMark
    {
        CONST_VTBL struct ITkdpo2k3k4kMarkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMark_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMark_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMark_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMark_MoveZoomToMark(This,Mark)	\
    ( (This)->lpVtbl -> MoveZoomToMark(This,Mark) ) 

#define ITkdpo2k3k4kMark_CreateMark(This,Mark)	\
    ( (This)->lpVtbl -> CreateMark(This,Mark) ) 

#define ITkdpo2k3k4kMark_DeleteMark(This,Mark)	\
    ( (This)->lpVtbl -> DeleteMark(This,Mark) ) 

#define ITkdpo2k3k4kMark_get_FreeMarks(This,Val)	\
    ( (This)->lpVtbl -> get_FreeMarks(This,Val) ) 

#define ITkdpo2k3k4kMark_get_TotalMarks(This,Val)	\
    ( (This)->lpVtbl -> get_TotalMarks(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedEnd(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedEnd(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedFocus(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedFocus(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedMarksInColumn(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedMarksInColumn(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedOwner(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedOwner(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedSource(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedSource(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedStart(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedStart(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedState(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedState(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedPosition(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedPosition(This,Val) ) 

#define ITkdpo2k3k4kMark_get_SelectedLabel(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedLabel(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMark_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMaths_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMaths_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMaths */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMaths;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4fd71b76-25bb-46d5-b8e2-33b9e49a22fe")
    ITkdpo2k3k4kMaths : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kMath **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMathsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMaths * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMaths * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMaths * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kMaths * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kMaths * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kMaths * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kMath **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMathsVtbl;

    interface ITkdpo2k3k4kMaths
    {
        CONST_VTBL struct ITkdpo2k3k4kMathsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMaths_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMaths_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMaths_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMaths_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kMaths_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kMaths_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMaths_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMath_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMath_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMath */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("835aea41-73cb-48f9-91a9-67d10092e711")
    ITkdpo2k3k4kMath : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Expression,
            /* [in] */ double VerticalPosition,
            /* [in] */ double VerticalScale,
            /* [in] */ double HorizontalPosition,
            /* [in] */ double HorizontalScale,
            /* [in] */ VARIANT_BOOL DisplayState,
            /* [in] */ enum Tkdpo2k3k4kMathTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ BSTR *Expression,
            /* [out][in] */ double *VerticalPosition,
            /* [out][in] */ double *VerticalScale,
            /* [out][in] */ BSTR *VerticalUnits,
            /* [out][in] */ double *HorizontalPosition,
            /* [out][in] */ double *HorizontalScale,
            /* [out][in] */ BSTR *HorizontalUnits,
            /* [out][in] */ VARIANT_BOOL *DisplayState,
            /* [out][in] */ enum Tkdpo2k3k4kMathTypeEnum *Type) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Expression( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Expression( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MathVariable( 
            /* [in] */ long Variable,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MathVariable( 
            /* [in] */ long Variable,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalPosition( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HorizontalPosition( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HorizontalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalPosition( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalPosition( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalUnits( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kMathTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kMathTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Spectral( 
            /* [retval][out] */ ITkdpo2k3k4kMathSpectral **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMath * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMath * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ BSTR Expression,
            /* [in] */ double VerticalPosition,
            /* [in] */ double VerticalScale,
            /* [in] */ double HorizontalPosition,
            /* [in] */ double HorizontalScale,
            /* [in] */ VARIANT_BOOL DisplayState,
            /* [in] */ enum Tkdpo2k3k4kMathTypeEnum Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kMath * This,
            /* [out][in] */ BSTR *Expression,
            /* [out][in] */ double *VerticalPosition,
            /* [out][in] */ double *VerticalScale,
            /* [out][in] */ BSTR *VerticalUnits,
            /* [out][in] */ double *HorizontalPosition,
            /* [out][in] */ double *HorizontalScale,
            /* [out][in] */ BSTR *HorizontalUnits,
            /* [out][in] */ VARIANT_BOOL *DisplayState,
            /* [out][in] */ enum Tkdpo2k3k4kMathTypeEnum *Type);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayState )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayState )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expression )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expression )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MathVariable )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ long Variable,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MathVariable )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ long Variable,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalPosition )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HorizontalPosition )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScale )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HorizontalScale )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalUnits )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalPosition )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalPosition )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScale )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalScale )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalUnits )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMathTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kMath * This,
            /* [in] */ enum Tkdpo2k3k4kMathTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Spectral )( 
            ITkdpo2k3k4kMath * This,
            /* [retval][out] */ ITkdpo2k3k4kMathSpectral **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMathVtbl;

    interface ITkdpo2k3k4kMath
    {
        CONST_VTBL struct ITkdpo2k3k4kMathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMath_Configure(This,Expression,VerticalPosition,VerticalScale,HorizontalPosition,HorizontalScale,DisplayState,Type)	\
    ( (This)->lpVtbl -> Configure(This,Expression,VerticalPosition,VerticalScale,HorizontalPosition,HorizontalScale,DisplayState,Type) ) 

#define ITkdpo2k3k4kMath_Read(This,Expression,VerticalPosition,VerticalScale,VerticalUnits,HorizontalPosition,HorizontalScale,HorizontalUnits,DisplayState,Type)	\
    ( (This)->lpVtbl -> Read(This,Expression,VerticalPosition,VerticalScale,VerticalUnits,HorizontalPosition,HorizontalScale,HorizontalUnits,DisplayState,Type) ) 

#define ITkdpo2k3k4kMath_get_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kMath_put_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kMath_get_Expression(This,Val)	\
    ( (This)->lpVtbl -> get_Expression(This,Val) ) 

#define ITkdpo2k3k4kMath_put_Expression(This,Val)	\
    ( (This)->lpVtbl -> put_Expression(This,Val) ) 

#define ITkdpo2k3k4kMath_get_Label(This,Val)	\
    ( (This)->lpVtbl -> get_Label(This,Val) ) 

#define ITkdpo2k3k4kMath_put_Label(This,Val)	\
    ( (This)->lpVtbl -> put_Label(This,Val) ) 

#define ITkdpo2k3k4kMath_get_MathVariable(This,Variable,Val)	\
    ( (This)->lpVtbl -> get_MathVariable(This,Variable,Val) ) 

#define ITkdpo2k3k4kMath_put_MathVariable(This,Variable,Val)	\
    ( (This)->lpVtbl -> put_MathVariable(This,Variable,Val) ) 

#define ITkdpo2k3k4kMath_get_HorizontalPosition(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalPosition(This,Val) ) 

#define ITkdpo2k3k4kMath_put_HorizontalPosition(This,Val)	\
    ( (This)->lpVtbl -> put_HorizontalPosition(This,Val) ) 

#define ITkdpo2k3k4kMath_get_HorizontalScale(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalScale(This,Val) ) 

#define ITkdpo2k3k4kMath_put_HorizontalScale(This,Val)	\
    ( (This)->lpVtbl -> put_HorizontalScale(This,Val) ) 

#define ITkdpo2k3k4kMath_get_HorizontalUnits(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalUnits(This,Val) ) 

#define ITkdpo2k3k4kMath_get_VerticalPosition(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalPosition(This,Val) ) 

#define ITkdpo2k3k4kMath_put_VerticalPosition(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalPosition(This,Val) ) 

#define ITkdpo2k3k4kMath_get_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kMath_put_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kMath_get_VerticalUnits(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalUnits(This,Val) ) 

#define ITkdpo2k3k4kMath_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kMath_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kMath_get_Spectral(This,Val)	\
    ( (This)->lpVtbl -> get_Spectral(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMath_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMathSpectral_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMathSpectral_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMathSpectral */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMathSpectral;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d640b110-e00c-482d-b356-f9a6731198f0")
    ITkdpo2k3k4kMathSpectral : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetEndPointGatingIndicator( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetStartPointGatingIndicator( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetNyquistFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayGatingIndicators( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayGatingIndicators( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ enum Tkdpo2k3k4kSpectralWindowEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Window( 
            /* [in] */ enum Tkdpo2k3k4kSpectralWindowEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MagnitudeUnits( 
            /* [retval][out] */ enum Tkdpo2k3k4kSpectralMagUnitEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MagnitudeUnits( 
            /* [in] */ enum Tkdpo2k3k4kSpectralMagUnitEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMathSpectralVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMathSpectral * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMathSpectral * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetEndPointGatingIndicator )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetStartPointGatingIndicator )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetNyquistFrequency )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayGatingIndicators )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayGatingIndicators )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSpectralWindowEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Window )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [in] */ enum Tkdpo2k3k4kSpectralWindowEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MagnitudeUnits )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSpectralMagUnitEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MagnitudeUnits )( 
            ITkdpo2k3k4kMathSpectral * This,
            /* [in] */ enum Tkdpo2k3k4kSpectralMagUnitEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMathSpectralVtbl;

    interface ITkdpo2k3k4kMathSpectral
    {
        CONST_VTBL struct ITkdpo2k3k4kMathSpectralVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMathSpectral_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMathSpectral_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMathSpectral_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMathSpectral_GetEndPointGatingIndicator(This,Val)	\
    ( (This)->lpVtbl -> GetEndPointGatingIndicator(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_GetStartPointGatingIndicator(This,Val)	\
    ( (This)->lpVtbl -> GetStartPointGatingIndicator(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_GetNyquistFrequency(This,Val)	\
    ( (This)->lpVtbl -> GetNyquistFrequency(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_get_DisplayGatingIndicators(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayGatingIndicators(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_put_DisplayGatingIndicators(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayGatingIndicators(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_get_Window(This,Val)	\
    ( (This)->lpVtbl -> get_Window(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_put_Window(This,Val)	\
    ( (This)->lpVtbl -> put_Window(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_get_MagnitudeUnits(This,Val)	\
    ( (This)->lpVtbl -> get_MagnitudeUnits(This,Val) ) 

#define ITkdpo2k3k4kMathSpectral_put_MagnitudeUnits(This,Val)	\
    ( (This)->lpVtbl -> put_MagnitudeUnits(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMathSpectral_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementImmediate_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMeasurementImmediate_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMeasurementImmediate */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMeasurementImmediate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a51f0ab-5fc1-4d3e-89c6-d1769cd5ca2a")
    ITkdpo2k3k4kMeasurementImmediate : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDelay( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePhase( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureReferenceLevel( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementMethodEnum Method,
            /* [in] */ enum Tkdpo2k3k4kMeasurementUnitEnum Unit,
            /* [in] */ double High,
            /* [in] */ double Low,
            /* [in] */ double Mid,
            /* [in] */ double Mid2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadReferenceLevel( 
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementMethodEnum *Method,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementUnitEnum *Unit,
            /* [out][in] */ double *High,
            /* [out][in] */ double *Low,
            /* [out][in] */ double *Mid,
            /* [out][in] */ double *Mid2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadValue( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type,
            /* [out][in] */ double *Val,
            /* [out][in] */ BSTR *Unit) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayDirection( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayDirection( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayEdge1( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayEdge1( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayEdge2( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayEdge2( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelAbsoluteHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelAbsoluteHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelAbsoluteLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelAbsoluteLow( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelAbsoluteMid( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelAbsoluteMid( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelAbsoluteMid2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelAbsoluteMid2( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelMethod( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementMethodEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelMethod( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementMethodEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelPercentHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelPercentHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelPercentLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelPercentLow( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelPercentMid2( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelPercentMid2( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelUnit( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementUnitEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelUnit( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementUnitEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevelPercentMid( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevelPercentMid( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source1( 
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source1( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source2( 
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source2( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMeasurementImmediateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMeasurementImmediate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMeasurementImmediate * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDelay )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePhase )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureReferenceLevel )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementMethodEnum Method,
            /* [in] */ enum Tkdpo2k3k4kMeasurementUnitEnum Unit,
            /* [in] */ double High,
            /* [in] */ double Low,
            /* [in] */ double Mid,
            /* [in] */ double Mid2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadReferenceLevel )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementMethodEnum *Method,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementUnitEnum *Unit,
            /* [out][in] */ double *High,
            /* [out][in] */ double *Low,
            /* [out][in] */ double *Mid,
            /* [out][in] */ double *Mid2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadValue )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type,
            /* [out][in] */ double *Val,
            /* [out][in] */ BSTR *Unit);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayDirection )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayDirection )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayEdge1 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayEdge1 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayEdge2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayEdge2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelAbsoluteHigh )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelAbsoluteHigh )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelAbsoluteLow )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelAbsoluteLow )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelAbsoluteMid )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelAbsoluteMid )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelAbsoluteMid2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelAbsoluteMid2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelMethod )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementMethodEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelMethod )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementMethodEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelPercentHigh )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelPercentHigh )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelPercentLow )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelPercentLow )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelPercentMid2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelPercentMid2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelUnit )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementUnitEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelUnit )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementUnitEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevelPercentMid )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevelPercentMid )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source1 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source1 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source2 )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ITkdpo2k3k4kMeasurementImmediate * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMeasurementImmediateVtbl;

    interface ITkdpo2k3k4kMeasurementImmediate
    {
        CONST_VTBL struct ITkdpo2k3k4kMeasurementImmediateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMeasurementImmediate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMeasurementImmediate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMeasurementImmediate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMeasurementImmediate_Configure(This,Source,Type)	\
    ( (This)->lpVtbl -> Configure(This,Source,Type) ) 

#define ITkdpo2k3k4kMeasurementImmediate_ConfigureDelay(This,Source1,Source2,Direction,Edge1,Edge2)	\
    ( (This)->lpVtbl -> ConfigureDelay(This,Source1,Source2,Direction,Edge1,Edge2) ) 

#define ITkdpo2k3k4kMeasurementImmediate_ConfigurePhase(This,Source1,Source2)	\
    ( (This)->lpVtbl -> ConfigurePhase(This,Source1,Source2) ) 

#define ITkdpo2k3k4kMeasurementImmediate_ConfigureReferenceLevel(This,Method,Unit,High,Low,Mid,Mid2)	\
    ( (This)->lpVtbl -> ConfigureReferenceLevel(This,Method,Unit,High,Low,Mid,Mid2) ) 

#define ITkdpo2k3k4kMeasurementImmediate_Read(This,Source1,Source2,Direction,Edge1,Edge2,Type)	\
    ( (This)->lpVtbl -> Read(This,Source1,Source2,Direction,Edge1,Edge2,Type) ) 

#define ITkdpo2k3k4kMeasurementImmediate_ReadReferenceLevel(This,Method,Unit,High,Low,Mid,Mid2)	\
    ( (This)->lpVtbl -> ReadReferenceLevel(This,Method,Unit,High,Low,Mid,Mid2) ) 

#define ITkdpo2k3k4kMeasurementImmediate_ReadValue(This,Source1,Source2,Direction,Edge1,Edge2,Type,Val,Unit)	\
    ( (This)->lpVtbl -> ReadValue(This,Source1,Source2,Direction,Edge1,Edge2,Type,Val,Unit) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_DelayDirection(This,Val)	\
    ( (This)->lpVtbl -> get_DelayDirection(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_DelayDirection(This,Val)	\
    ( (This)->lpVtbl -> put_DelayDirection(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge1(This,Val)	\
    ( (This)->lpVtbl -> get_DelayEdge1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge1(This,Val)	\
    ( (This)->lpVtbl -> put_DelayEdge1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge2(This,Val)	\
    ( (This)->lpVtbl -> get_DelayEdge2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge2(This,Val)	\
    ( (This)->lpVtbl -> put_DelayEdge2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelAbsoluteHigh(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelAbsoluteHigh(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteLow(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelAbsoluteLow(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteLow(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelAbsoluteLow(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelAbsoluteMid(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelAbsoluteMid(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid2(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelAbsoluteMid2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid2(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelAbsoluteMid2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelMethod(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelMethod(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelMethod(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelMethod(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelPercentHigh(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelPercentHigh(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentLow(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelPercentLow(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentLow(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelPercentLow(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid2(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelPercentMid2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid2(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelPercentMid2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelUnit(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelUnit(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelUnit(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelUnit(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevelPercentMid(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevelPercentMid(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_Source1(This,Val)	\
    ( (This)->lpVtbl -> get_Source1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_Source1(This,Val)	\
    ( (This)->lpVtbl -> put_Source1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_Source2(This,Val)	\
    ( (This)->lpVtbl -> get_Source2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_Source2(This,Val)	\
    ( (This)->lpVtbl -> put_Source2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#define ITkdpo2k3k4kMeasurementImmediate_get_Value(This,Val)	\
    ( (This)->lpVtbl -> get_Value(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMeasurementImmediate_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurements_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMeasurements_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMeasurements */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMeasurements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae55f61e-67ae-45d2-aea6-42b1d546f52d")
    ITkdpo2k3k4kMeasurements : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearStatistics( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kMeasurementSlot **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Gating( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementGatingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Gating( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementGatingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StatisticsMode( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StatisticsMode( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StatisticsWeighting( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StatisticsWeighting( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Indicators( 
            /* [retval][out] */ ITkdpo2k3k4kMeasurementsIndicators **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ ITkdpo2k3k4kMeasurementsFrequency **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMeasurementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMeasurements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMeasurements * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearStatistics )( 
            ITkdpo2k3k4kMeasurements * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kMeasurementSlot **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gating )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementGatingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gating )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementGatingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatisticsMode )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatisticsMode )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatisticsWeighting )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatisticsWeighting )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Indicators )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ ITkdpo2k3k4kMeasurementsIndicators **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            ITkdpo2k3k4kMeasurements * This,
            /* [retval][out] */ ITkdpo2k3k4kMeasurementsFrequency **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMeasurementsVtbl;

    interface ITkdpo2k3k4kMeasurements
    {
        CONST_VTBL struct ITkdpo2k3k4kMeasurementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMeasurements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMeasurements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMeasurements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMeasurements_ClearStatistics(This)	\
    ( (This)->lpVtbl -> ClearStatistics(This) ) 

#define ITkdpo2k3k4kMeasurements_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_Gating(This,Val)	\
    ( (This)->lpVtbl -> get_Gating(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_put_Gating(This,Val)	\
    ( (This)->lpVtbl -> put_Gating(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_StatisticsMode(This,Val)	\
    ( (This)->lpVtbl -> get_StatisticsMode(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_put_StatisticsMode(This,Val)	\
    ( (This)->lpVtbl -> put_StatisticsMode(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_StatisticsWeighting(This,Val)	\
    ( (This)->lpVtbl -> get_StatisticsWeighting(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_put_StatisticsWeighting(This,Val)	\
    ( (This)->lpVtbl -> put_StatisticsWeighting(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_Indicators(This,Val)	\
    ( (This)->lpVtbl -> get_Indicators(This,Val) ) 

#define ITkdpo2k3k4kMeasurements_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMeasurements_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementSlot_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMeasurementSlot_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMeasurementSlot */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMeasurementSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("be12e5b1-c732-49e7-acdc-41e7bb80c0ae")
    ITkdpo2k3k4kMeasurementSlot : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDelay( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePhase( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadValue( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type,
            /* [out][in] */ double *Val,
            /* [out][in] */ BSTR *Unit) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadDelay( 
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayDirection( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayDirection( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayEdge1( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayEdge1( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayEdge2( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayEdge2( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Maximum( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mean( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Minimum( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source1( 
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source1( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source2( 
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source2( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StandardDeviation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMeasurementSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMeasurementSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMeasurementSlot * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDelay )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePhase )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadValue )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source1,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Source2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge1,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Edge2,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Type,
            /* [out][in] */ double *Val,
            /* [out][in] */ BSTR *Unit);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadDelay )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source1,
            /* [out][in] */ enum Tkdpo2k3k4kSourceEnum *Source2,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Direction,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge1,
            /* [out][in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Edge2);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayDirection )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayDirection )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementDelayDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayEdge1 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayEdge1 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayEdge2 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementEdgeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayEdge2 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementEdgeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Maximum )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mean )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Minimum )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source1 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source1 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source2 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source2 )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardDeviation )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ITkdpo2k3k4kMeasurementSlot * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMeasurementSlotVtbl;

    interface ITkdpo2k3k4kMeasurementSlot
    {
        CONST_VTBL struct ITkdpo2k3k4kMeasurementSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMeasurementSlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMeasurementSlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMeasurementSlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMeasurementSlot_Configure(This,Source,Type)	\
    ( (This)->lpVtbl -> Configure(This,Source,Type) ) 

#define ITkdpo2k3k4kMeasurementSlot_ConfigureDelay(This,Source1,Source2,Direction,Edge1,Edge2)	\
    ( (This)->lpVtbl -> ConfigureDelay(This,Source1,Source2,Direction,Edge1,Edge2) ) 

#define ITkdpo2k3k4kMeasurementSlot_ConfigurePhase(This,Source1,Source2)	\
    ( (This)->lpVtbl -> ConfigurePhase(This,Source1,Source2) ) 

#define ITkdpo2k3k4kMeasurementSlot_Read(This,Source1,Source2,Direction,Edge1,Edge2,Type)	\
    ( (This)->lpVtbl -> Read(This,Source1,Source2,Direction,Edge1,Edge2,Type) ) 

#define ITkdpo2k3k4kMeasurementSlot_ReadValue(This,Source1,Source2,Direction,Edge1,Edge2,Type,Val,Unit)	\
    ( (This)->lpVtbl -> ReadValue(This,Source1,Source2,Direction,Edge1,Edge2,Type,Val,Unit) ) 

#define ITkdpo2k3k4kMeasurementSlot_ReadDelay(This,Source1,Source2,Direction,Edge1,Edge2)	\
    ( (This)->lpVtbl -> ReadDelay(This,Source1,Source2,Direction,Edge1,Edge2) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_DelayDirection(This,Val)	\
    ( (This)->lpVtbl -> get_DelayDirection(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_DelayDirection(This,Val)	\
    ( (This)->lpVtbl -> put_DelayDirection(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_DelayEdge1(This,Val)	\
    ( (This)->lpVtbl -> get_DelayEdge1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_DelayEdge1(This,Val)	\
    ( (This)->lpVtbl -> put_DelayEdge1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_DelayEdge2(This,Val)	\
    ( (This)->lpVtbl -> get_DelayEdge2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_DelayEdge2(This,Val)	\
    ( (This)->lpVtbl -> put_DelayEdge2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Maximum(This,Val)	\
    ( (This)->lpVtbl -> get_Maximum(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Mean(This,Val)	\
    ( (This)->lpVtbl -> get_Mean(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Minimum(This,Val)	\
    ( (This)->lpVtbl -> get_Minimum(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Source1(This,Val)	\
    ( (This)->lpVtbl -> get_Source1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_Source1(This,Val)	\
    ( (This)->lpVtbl -> put_Source1(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Source2(This,Val)	\
    ( (This)->lpVtbl -> get_Source2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_Source2(This,Val)	\
    ( (This)->lpVtbl -> put_Source2(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_StandardDeviation(This,Val)	\
    ( (This)->lpVtbl -> get_StandardDeviation(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#define ITkdpo2k3k4kMeasurementSlot_get_Value(This,Val)	\
    ( (This)->lpVtbl -> get_Value(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMeasurementSlot_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementsIndicators_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMeasurementsIndicators_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMeasurementsIndicators */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMeasurementsIndicators;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c850b246-61a2-447a-925b-fb126abd9e5f")
    ITkdpo2k3k4kMeasurementsIndicators : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementIndicatorStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementIndicatorStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalIndicators( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalValue( 
            /* [in] */ long Indicator,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalIndicators( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalValue( 
            /* [in] */ long Indicator,
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMeasurementsIndicatorsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMeasurementsIndicators * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMeasurementsIndicators * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementIndicatorStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementIndicatorStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalIndicators )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalValue )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [in] */ long Indicator,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalIndicators )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalValue )( 
            ITkdpo2k3k4kMeasurementsIndicators * This,
            /* [in] */ long Indicator,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMeasurementsIndicatorsVtbl;

    interface ITkdpo2k3k4kMeasurementsIndicators
    {
        CONST_VTBL struct ITkdpo2k3k4kMeasurementsIndicatorsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMeasurementsIndicators_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMeasurementsIndicators_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalIndicators(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalIndicators(This,Val) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalValue(This,Indicator,Val)	\
    ( (This)->lpVtbl -> get_HorizontalValue(This,Indicator,Val) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_get_VerticalIndicators(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalIndicators(This,Val) ) 

#define ITkdpo2k3k4kMeasurementsIndicators_get_VerticalValue(This,Indicator,Val)	\
    ( (This)->lpVtbl -> get_VerticalValue(This,Indicator,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMeasurementsIndicators_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSaveRecall_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSaveRecall_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSaveRecall */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSaveRecall;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2a8d2251-e8bf-43e3-84b2-02073c354b61")
    ITkdpo2k3k4kSaveRecall : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE DefaultSetup( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RecallSetupFromFile( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RecallSetupFromMemory( 
            /* [in] */ enum Tkdpo2k3k4kMemoryLocationEnum Location) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RecallWaveformFromFile( 
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum RefMemory,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveAllDigitalChannels( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveSetupToFile( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveSetupToMemory( 
            /* [in] */ enum Tkdpo2k3k4kMemoryLocationEnum Location) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveWaveformToFile( 
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Source,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveWaveformToReference( 
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum RefMemory) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveEventTableBusData( 
            /* [in] */ long Bus,
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveImage( 
            /* [in] */ BSTR Filename,
            /* [in] */ enum Tkdpo2k3k4kImageFormatEnum ImageFormat,
            /* [in] */ enum Tkdpo2k3k4kImageLayoutEnum ImageLayout) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveAllWaveformsToFile( 
            /* [in] */ BSTR FileName,
            /* [in] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SaveWaveFormFileFormat( 
            /* [retval][out] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SaveWaveFormFileFormat( 
            /* [in] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SaveButtonType( 
            /* [retval][out] */ enum Tkdpo2k3k4kSaveButtonTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SaveButtonType( 
            /* [in] */ enum Tkdpo2k3k4kSaveButtonTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ImageFormat( 
            /* [retval][out] */ enum Tkdpo2k3k4kImageFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ImageFormat( 
            /* [in] */ enum Tkdpo2k3k4kImageFormatEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ImageLayout( 
            /* [retval][out] */ enum Tkdpo2k3k4kImageLayoutEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ImageLayout( 
            /* [in] */ enum Tkdpo2k3k4kImageLayoutEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InkSaverPalette( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InkSaverPalette( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformGating( 
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementGatingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_WaveformGating( 
            /* [in] */ enum Tkdpo2k3k4kMeasurementGatingEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSaveRecallVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSaveRecall * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSaveRecall * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DefaultSetup )( 
            ITkdpo2k3k4kSaveRecall * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RecallSetupFromFile )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RecallSetupFromMemory )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kMemoryLocationEnum Location);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RecallWaveformFromFile )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum RefMemory,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveAllDigitalChannels )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveSetupToFile )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveSetupToMemory )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kMemoryLocationEnum Location);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveWaveformToFile )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Source,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveWaveformToReference )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum RefMemory);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveEventTableBusData )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ long Bus,
            /* [in] */ BSTR Filename);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveImage )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ BSTR Filename,
            /* [in] */ enum Tkdpo2k3k4kImageFormatEnum ImageFormat,
            /* [in] */ enum Tkdpo2k3k4kImageLayoutEnum ImageLayout);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveAllWaveformsToFile )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ BSTR FileName,
            /* [in] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveWaveFormFileFormat )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SaveWaveFormFileFormat )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kSaveWaveformFileFormatEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveButtonType )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSaveButtonTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SaveButtonType )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kSaveButtonTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFormat )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ enum Tkdpo2k3k4kImageFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFormat )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kImageFormatEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageLayout )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ enum Tkdpo2k3k4kImageLayoutEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageLayout )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kImageLayoutEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkSaverPalette )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkSaverPalette )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformGating )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [retval][out] */ enum Tkdpo2k3k4kMeasurementGatingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WaveformGating )( 
            ITkdpo2k3k4kSaveRecall * This,
            /* [in] */ enum Tkdpo2k3k4kMeasurementGatingEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSaveRecallVtbl;

    interface ITkdpo2k3k4kSaveRecall
    {
        CONST_VTBL struct ITkdpo2k3k4kSaveRecallVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSaveRecall_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSaveRecall_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSaveRecall_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSaveRecall_DefaultSetup(This)	\
    ( (This)->lpVtbl -> DefaultSetup(This) ) 

#define ITkdpo2k3k4kSaveRecall_RecallSetupFromFile(This,FileName)	\
    ( (This)->lpVtbl -> RecallSetupFromFile(This,FileName) ) 

#define ITkdpo2k3k4kSaveRecall_RecallSetupFromMemory(This,Location)	\
    ( (This)->lpVtbl -> RecallSetupFromMemory(This,Location) ) 

#define ITkdpo2k3k4kSaveRecall_RecallWaveformFromFile(This,RefMemory,FileName)	\
    ( (This)->lpVtbl -> RecallWaveformFromFile(This,RefMemory,FileName) ) 

#define ITkdpo2k3k4kSaveRecall_SaveAllDigitalChannels(This,FileName)	\
    ( (This)->lpVtbl -> SaveAllDigitalChannels(This,FileName) ) 

#define ITkdpo2k3k4kSaveRecall_SaveSetupToFile(This,FileName)	\
    ( (This)->lpVtbl -> SaveSetupToFile(This,FileName) ) 

#define ITkdpo2k3k4kSaveRecall_SaveSetupToMemory(This,Location)	\
    ( (This)->lpVtbl -> SaveSetupToMemory(This,Location) ) 

#define ITkdpo2k3k4kSaveRecall_SaveWaveformToFile(This,Source,FileName)	\
    ( (This)->lpVtbl -> SaveWaveformToFile(This,Source,FileName) ) 

#define ITkdpo2k3k4kSaveRecall_SaveWaveformToReference(This,Source,RefMemory)	\
    ( (This)->lpVtbl -> SaveWaveformToReference(This,Source,RefMemory) ) 

#define ITkdpo2k3k4kSaveRecall_SaveEventTableBusData(This,Bus,Filename)	\
    ( (This)->lpVtbl -> SaveEventTableBusData(This,Bus,Filename) ) 

#define ITkdpo2k3k4kSaveRecall_SaveImage(This,Filename,ImageFormat,ImageLayout)	\
    ( (This)->lpVtbl -> SaveImage(This,Filename,ImageFormat,ImageLayout) ) 

#define ITkdpo2k3k4kSaveRecall_SaveAllWaveformsToFile(This,FileName,FileFormat)	\
    ( (This)->lpVtbl -> SaveAllWaveformsToFile(This,FileName,FileFormat) ) 

#define ITkdpo2k3k4kSaveRecall_get_SaveWaveFormFileFormat(This,Val)	\
    ( (This)->lpVtbl -> get_SaveWaveFormFileFormat(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_SaveWaveFormFileFormat(This,Val)	\
    ( (This)->lpVtbl -> put_SaveWaveFormFileFormat(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_get_SaveButtonType(This,Val)	\
    ( (This)->lpVtbl -> get_SaveButtonType(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_SaveButtonType(This,Val)	\
    ( (This)->lpVtbl -> put_SaveButtonType(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_get_ImageFormat(This,Val)	\
    ( (This)->lpVtbl -> get_ImageFormat(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_ImageFormat(This,Val)	\
    ( (This)->lpVtbl -> put_ImageFormat(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_get_ImageLayout(This,Val)	\
    ( (This)->lpVtbl -> get_ImageLayout(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_ImageLayout(This,Val)	\
    ( (This)->lpVtbl -> put_ImageLayout(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_get_InkSaverPalette(This,Val)	\
    ( (This)->lpVtbl -> get_InkSaverPalette(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_InkSaverPalette(This,Val)	\
    ( (This)->lpVtbl -> put_InkSaverPalette(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_get_WaveformGating(This,Val)	\
    ( (This)->lpVtbl -> get_WaveformGating(This,Val) ) 

#define ITkdpo2k3k4kSaveRecall_put_WaveformGating(This,Val)	\
    ( (This)->lpVtbl -> put_WaveformGating(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSaveRecall_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearches_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearches_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearches */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearches;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60fa0137-1ade-4702-a5e6-2864b84b2949")
    ITkdpo2k3k4kSearches : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kSearch **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearches * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearches * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearches * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kSearches * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kSearches * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kSearches * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kSearch **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchesVtbl;

    interface ITkdpo2k3k4kSearches
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearches_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearches_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearches_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearches_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kSearches_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kSearches_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearches_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearch_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearch_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearch */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d4ec9a93-a452-480e-935a-0695ee78ba57")
    ITkdpo2k3k4kSearch : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ enum Tkdpo2k3k4kSearchCopyEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureEdge( 
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRunt( 
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum When,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity,
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSetupHold( 
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum ClockEdge,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum ClockSource,
            /* [in] */ double HoldTime,
            /* [in] */ double SetTime,
            /* [in] */ double ClockLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTransition( 
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ double DeltaTime,
            /* [in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum When,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePulseWidth( 
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition,
            /* [in] */ enum Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity,
            /* [in] */ double HighLimit,
            /* [in] */ double LowLimit) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadEdge( 
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadRunt( 
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource2Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum *When,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Polarity,
            /* [out][in] */ double *Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadSetupHold( 
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *ClockEdge,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Clocksource,
            /* [out][in] */ double *HoldTime,
            /* [out][in] */ double *SetTime,
            /* [out][in] */ double *ClockLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadPulseWidth( 
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum *Condition,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerWidthPolarityEnum *Polarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadTransition( 
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource2Enum *Source,
            /* [out][in] */ double *DeltaTime,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum *When,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum *Polarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLogicSearchSource( 
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadLogicSearchSource( 
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *PatternInput) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLogicPattern( 
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Condition,
            /* [in] */ double LessLimit,
            /* [in] */ double MoreLimit,
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternTypeEnum PatternType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadLogicPattern( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Condition,
            /* [out][in] */ double *LessLimit,
            /* [out][in] */ double *MoreLimit,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternTypeEnum *PatternType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLogicClock( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadLogicClock( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum *EdgeType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadSetupHoldSearchSource( 
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Clocksource,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *DataSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadAIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureARFIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadARFIndependentParameters( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SearchType( 
            /* [retval][out] */ enum Tkdpo2k3k4kSearchTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SearchType( 
            /* [in] */ enum Tkdpo2k3k4kSearchTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ enum Tkdpo2k3k4kSearchStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ enum Tkdpo2k3k4kSearchStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Total( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bus( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBus **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearch * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchCopyEnum Type);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureEdge )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRunt )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum When,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity,
            /* [in] */ double Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSetupHold )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum ClockEdge,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum ClockSource,
            /* [in] */ double HoldTime,
            /* [in] */ double SetTime,
            /* [in] */ double ClockLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTransition )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ double DeltaTime,
            /* [in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum When,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePulseWidth )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kSearchSource3Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition,
            /* [in] */ enum Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity,
            /* [in] */ double HighLimit,
            /* [in] */ double LowLimit);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadEdge )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadRunt )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource2Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum *When,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Polarity,
            /* [out][in] */ double *Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadSetupHold )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *ClockEdge,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Clocksource,
            /* [out][in] */ double *HoldTime,
            /* [out][in] */ double *SetTime,
            /* [out][in] */ double *ClockLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadPulseWidth )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum *Condition,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerWidthPolarityEnum *Polarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadTransition )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource2Enum *Source,
            /* [out][in] */ double *DeltaTime,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum *When,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum *Polarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLogicSearchSource )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadLogicSearchSource )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchSource2Enum Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *PatternInput);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLogicPattern )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Condition,
            /* [in] */ double LessLimit,
            /* [in] */ double MoreLimit,
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternTypeEnum PatternType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadLogicPattern )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Condition,
            /* [out][in] */ double *LessLimit,
            /* [out][in] */ double *MoreLimit,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternTypeEnum *PatternType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLogicClock )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadLogicClock )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum *EdgeType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadSetupHoldSearchSource )( 
            ITkdpo2k3k4kSearch * This,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *Clocksource,
            /* [out][in] */ enum Tkdpo2k3k4kSearchSource3Enum *DataSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAIndependentParameters )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadAIndependentParameters )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureARFIndependentParameters )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source,
            /* [in] */ double Level,
            /* [in] */ double UpperThreshold,
            /* [in] */ double LowerThreshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadARFIndependentParameters )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ double *UpperThreshold,
            /* [out][in] */ double *LowerThreshold);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SearchType )( 
            ITkdpo2k3k4kSearch * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSearchTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SearchType )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kSearch * This,
            /* [retval][out] */ enum Tkdpo2k3k4kSearchStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kSearch * This,
            /* [in] */ enum Tkdpo2k3k4kSearchStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Total )( 
            ITkdpo2k3k4kSearch * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bus )( 
            ITkdpo2k3k4kSearch * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBus **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchVtbl;

    interface ITkdpo2k3k4kSearch
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearch_Copy(This,Type)	\
    ( (This)->lpVtbl -> Copy(This,Type) ) 

#define ITkdpo2k3k4kSearch_ConfigureEdge(This,Level,Source,Slope)	\
    ( (This)->lpVtbl -> ConfigureEdge(This,Level,Source,Slope) ) 

#define ITkdpo2k3k4kSearch_ConfigureRunt(This,Source,When,Polarity,Width)	\
    ( (This)->lpVtbl -> ConfigureRunt(This,Source,When,Polarity,Width) ) 

#define ITkdpo2k3k4kSearch_ConfigureSetupHold(This,Level,Source,ClockEdge,ClockSource,HoldTime,SetTime,ClockLevel)	\
    ( (This)->lpVtbl -> ConfigureSetupHold(This,Level,Source,ClockEdge,ClockSource,HoldTime,SetTime,ClockLevel) ) 

#define ITkdpo2k3k4kSearch_ConfigureTransition(This,Source,DeltaTime,When,Polarity)	\
    ( (This)->lpVtbl -> ConfigureTransition(This,Source,DeltaTime,When,Polarity) ) 

#define ITkdpo2k3k4kSearch_ConfigurePulseWidth(This,Level,Source,Condition,Polarity,HighLimit,LowLimit)	\
    ( (This)->lpVtbl -> ConfigurePulseWidth(This,Level,Source,Condition,Polarity,HighLimit,LowLimit) ) 

#define ITkdpo2k3k4kSearch_ReadEdge(This,Level,Source,Slope)	\
    ( (This)->lpVtbl -> ReadEdge(This,Level,Source,Slope) ) 

#define ITkdpo2k3k4kSearch_ReadRunt(This,Source,When,Polarity,Width)	\
    ( (This)->lpVtbl -> ReadRunt(This,Source,When,Polarity,Width) ) 

#define ITkdpo2k3k4kSearch_ReadSetupHold(This,Level,Source,ClockEdge,Clocksource,HoldTime,SetTime,ClockLevel)	\
    ( (This)->lpVtbl -> ReadSetupHold(This,Level,Source,ClockEdge,Clocksource,HoldTime,SetTime,ClockLevel) ) 

#define ITkdpo2k3k4kSearch_ReadPulseWidth(This,Level,Source,Condition,Polarity)	\
    ( (This)->lpVtbl -> ReadPulseWidth(This,Level,Source,Condition,Polarity) ) 

#define ITkdpo2k3k4kSearch_ReadTransition(This,Source,DeltaTime,When,Polarity)	\
    ( (This)->lpVtbl -> ReadTransition(This,Source,DeltaTime,When,Polarity) ) 

#define ITkdpo2k3k4kSearch_ConfigureLogicSearchSource(This,Source,Input,Threshold,PatternInput)	\
    ( (This)->lpVtbl -> ConfigureLogicSearchSource(This,Source,Input,Threshold,PatternInput) ) 

#define ITkdpo2k3k4kSearch_ReadLogicSearchSource(This,Source,Input,Threshold,PatternInput)	\
    ( (This)->lpVtbl -> ReadLogicSearchSource(This,Source,Input,Threshold,PatternInput) ) 

#define ITkdpo2k3k4kSearch_ConfigureLogicPattern(This,Condition,LessLimit,MoreLimit,PatternType)	\
    ( (This)->lpVtbl -> ConfigureLogicPattern(This,Condition,LessLimit,MoreLimit,PatternType) ) 

#define ITkdpo2k3k4kSearch_ReadLogicPattern(This,Condition,LessLimit,MoreLimit,PatternType)	\
    ( (This)->lpVtbl -> ReadLogicPattern(This,Condition,LessLimit,MoreLimit,PatternType) ) 

#define ITkdpo2k3k4kSearch_ConfigureLogicClock(This,Source,EdgeType)	\
    ( (This)->lpVtbl -> ConfigureLogicClock(This,Source,EdgeType) ) 

#define ITkdpo2k3k4kSearch_ReadLogicClock(This,Source,EdgeType)	\
    ( (This)->lpVtbl -> ReadLogicClock(This,Source,EdgeType) ) 

#define ITkdpo2k3k4kSearch_ReadSetupHoldSearchSource(This,Clocksource,DataSource)	\
    ( (This)->lpVtbl -> ReadSetupHoldSearchSource(This,Clocksource,DataSource) ) 

#define ITkdpo2k3k4kSearch_ConfigureAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ConfigureAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kSearch_ReadAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ReadAIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kSearch_ConfigureARFIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ConfigureARFIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kSearch_ReadARFIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold)	\
    ( (This)->lpVtbl -> ReadARFIndependentParameters(This,Source,Level,UpperThreshold,LowerThreshold) ) 

#define ITkdpo2k3k4kSearch_get_SearchType(This,Val)	\
    ( (This)->lpVtbl -> get_SearchType(This,Val) ) 

#define ITkdpo2k3k4kSearch_put_SearchType(This,Val)	\
    ( (This)->lpVtbl -> put_SearchType(This,Val) ) 

#define ITkdpo2k3k4kSearch_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kSearch_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kSearch_get_Total(This,Val)	\
    ( (This)->lpVtbl -> get_Total(This,Val) ) 

#define ITkdpo2k3k4kSearch_get_Bus(This,Val)	\
    ( (This)->lpVtbl -> get_Bus(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearch_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABus_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABus_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABus */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5648018-8232-46ea-87dc-68adda301b7a")
    ITkdpo2k3k4kTriggerABus : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTriggerBusTypeEnum BusType) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BusSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BusSource( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BusType( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerBusTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BusType( 
            /* [in] */ enum Tkdpo2k3k4kTriggerBusTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Audio( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusAudio **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CAN( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusCAN **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Flexray( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusFlexray **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_I2C( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusI2C **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LIN( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusLIN **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusRS232 **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SPI( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusSPI **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_USB( 
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusUSB **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABus * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTriggerBusTypeEnum BusType);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusSource )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusSource )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelData )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelData )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusType )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerBusTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusType )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerBusTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Audio )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusAudio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAN )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusCAN **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flexray )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusFlexray **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_I2C )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusI2C **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LIN )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusLIN **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232 )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusRS232 **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SPI )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusSPI **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_USB )( 
            ITkdpo2k3k4kTriggerABus * This,
            /* [retval][out] */ ITkdpo2k3k4kTriggerABusUSB **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusVtbl;

    interface ITkdpo2k3k4kTriggerABus
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABus_Configure(This,BusSource,BusType)	\
    ( (This)->lpVtbl -> Configure(This,BusSource,BusType) ) 

#define ITkdpo2k3k4kTriggerABus_get_BusSource(This,Val)	\
    ( (This)->lpVtbl -> get_BusSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_put_BusSource(This,Val)	\
    ( (This)->lpVtbl -> put_BusSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_ParallelData(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ParallelData(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABus_put_ParallelData(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ParallelData(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_BusType(This,Val)	\
    ( (This)->lpVtbl -> get_BusType(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_put_BusType(This,Val)	\
    ( (This)->lpVtbl -> put_BusType(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_Audio(This,Val)	\
    ( (This)->lpVtbl -> get_Audio(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_CAN(This,Val)	\
    ( (This)->lpVtbl -> get_CAN(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_Flexray(This,Val)	\
    ( (This)->lpVtbl -> get_Flexray(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_I2C(This,Val)	\
    ( (This)->lpVtbl -> get_I2C(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_LIN(This,Val)	\
    ( (This)->lpVtbl -> get_LIN(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_RS232(This,Val)	\
    ( (This)->lpVtbl -> get_RS232(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_SPI(This,Val)	\
    ( (This)->lpVtbl -> get_SPI(This,Val) ) 

#define ITkdpo2k3k4kTriggerABus_get_USB(This,Val)	\
    ( (This)->lpVtbl -> get_USB(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABus_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusAudio_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusAudio_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusAudio */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba87166c-5f25-493e-8bf5-a86127c8c697")
    ITkdpo2k3k4kTriggerABusAudio : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataWord( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataWord( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusAudioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusAudio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusAudio * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOffset )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOffset )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataWord )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataWord )( 
            ITkdpo2k3k4kTriggerABusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusAudioVtbl;

    interface ITkdpo2k3k4kTriggerABusAudio
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusAudio_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_get_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_get_DataWord(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataWord(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusAudio_put_DataWord(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataWord(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusAudio_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusCAN_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusCAN_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusCAN */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusCAN;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d88f014a-bfae-4e23-93d6-bbb31092c71b")
    ITkdpo2k3k4kTriggerABusCAN : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusCANVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusCAN * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusCAN * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataDirection )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataDirection )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameType )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameType )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressMode )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressMode )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kTriggerABusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusCANVtbl;

    interface ITkdpo2k3k4kTriggerABusCAN
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusCANVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusCAN_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusCAN_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusCAN_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusCAN_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusCAN_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusCAN_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusFlexray_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusFlexray_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusFlexray */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusFlexray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04a502cf-0f87-430f-9618-2f962e738c24")
    ITkdpo2k3k4kTriggerABusFlexray : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCycleCount( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadCycleCount( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ long Offset,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ long Size,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ long *Offset,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ long *Size,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFrameID( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadFrameID( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureHeader( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR CRC,
            /* [in] */ BSTR CycleCount,
            /* [in] */ BSTR FrameID,
            /* [in] */ BSTR IndicatorBits,
            /* [in] */ BSTR PayloadLength) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadHeader( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *CRC,
            /* [out][in] */ BSTR *CycleCount,
            /* [out][in] */ BSTR *FrameID,
            /* [out][in] */ BSTR *IndicatorBits,
            /* [out][in] */ BSTR *PayloadLength) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EOFType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EOFType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusFlexrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusFlexray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusFlexray * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCycleCount )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadCycleCount )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureData )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ long Offset,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ long Size,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ long *Offset,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ long *Size,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFrameID )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadFrameID )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureHeader )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR CRC,
            /* [in] */ BSTR CycleCount,
            /* [in] */ BSTR FrameID,
            /* [in] */ BSTR IndicatorBits,
            /* [in] */ BSTR PayloadLength);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadHeader )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *CRC,
            /* [out][in] */ BSTR *CycleCount,
            /* [out][in] */ BSTR *FrameID,
            /* [out][in] */ BSTR *IndicatorBits,
            /* [out][in] */ BSTR *PayloadLength);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EOFType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EOFType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameType )( 
            ITkdpo2k3k4kTriggerABusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusFlexrayVtbl;

    interface ITkdpo2k3k4kTriggerABusFlexray
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusFlexrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusFlexray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusFlexray_ConfigureCycleCount(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ConfigureCycleCount(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ReadCycleCount(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ReadCycleCount(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ConfigureData(This,BusSource,HighValue,Offset,Qualifier,Size,Value)	\
    ( (This)->lpVtbl -> ConfigureData(This,BusSource,HighValue,Offset,Qualifier,Size,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ReadData(This,BusSource,HighValue,Offset,Qualifier,Size,Value)	\
    ( (This)->lpVtbl -> ReadData(This,BusSource,HighValue,Offset,Qualifier,Size,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ConfigureFrameID(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ConfigureFrameID(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ReadFrameID(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ReadFrameID(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ConfigureHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength)	\
    ( (This)->lpVtbl -> ConfigureHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_ReadHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength)	\
    ( (This)->lpVtbl -> ReadHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_get_EOFType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_EOFType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_put_EOFType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_EOFType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_get_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusFlexray_put_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_FrameType(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusFlexray_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusI2C_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusI2C_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusI2C */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusI2C;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27714d28-3452-47a6-9d55-793307a8c17e")
    ITkdpo2k3k4kTriggerABusI2C : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusI2CVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusI2C * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusI2C * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataDirection )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataDirection )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressMode )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressMode )( 
            ITkdpo2k3k4kTriggerABusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusI2CVtbl;

    interface ITkdpo2k3k4kTriggerABusI2C
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusI2CVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusI2C_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusI2C_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusI2C_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusI2C_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_get_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_get_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusI2C_put_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressMode(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusI2C_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusLIN_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusLIN_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusLIN */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusLIN;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("598b0ff5-10c8-471d-9031-34ab1b7db740")
    ITkdpo2k3k4kTriggerABusLIN : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IdentifierValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IdentifierValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusLINVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusLIN * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusLIN * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentifierValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IdentifierValue )( 
            ITkdpo2k3k4kTriggerABusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusLINVtbl;

    interface ITkdpo2k3k4kTriggerABusLIN
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusLINVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusLIN_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusLIN_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusLIN_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusLIN_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_get_IdentifierValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_IdentifierValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusLIN_put_IdentifierValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_IdentifierValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusLIN_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusRS232_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusRS232_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusRS232 */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusRS232;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3edf045f-7d79-4aee-81ea-18a68d845b2c")
    ITkdpo2k3k4kTriggerABusRS232 : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusRS232Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusRS232 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusRS232 * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RXDataSize )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RXDataSize )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RXDataValue )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RXDataValue )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TXDataSize )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TXDataSize )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TXDataValue )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TXDataValue )( 
            ITkdpo2k3k4kTriggerABusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusRS232Vtbl;

    interface ITkdpo2k3k4kTriggerABusRS232
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusRS232Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusRS232_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusRS232_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusRS232_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusRS232_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_get_RXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_RXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_put_RXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_RXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_get_RXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_RXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_put_RXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_RXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_get_TXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_put_TXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_get_TXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusRS232_put_TXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TXDataValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusRS232_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusSPI_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusSPI_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusSPI */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusSPI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4c1b2e7f-70ea-43fe-a073-a080e595ba61")
    ITkdpo2k3k4kTriggerABusSPI : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataINValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataINValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOUTValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOUTValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusSPIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusSPI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusSPI * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataINValue )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataINValue )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOUTValue )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOUTValue )( 
            ITkdpo2k3k4kTriggerABusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusSPIVtbl;

    interface ITkdpo2k3k4kTriggerABusSPI
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusSPIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusSPI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusSPI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusSPI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusSPI_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_get_DataINValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataINValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_put_DataINValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataINValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_get_DataOUTValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOUTValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusSPI_put_DataOUTValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOUTValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusSPI_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerABusUSB_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerABusUSB_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerABusUSB */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerABusUSB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7b06469-8179-4d27-ba99-a232f02f3337")
    ITkdpo2k3k4kTriggerABusUSB : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Qualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Qualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EndPointValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EndPointValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HandshakeType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HandshakeType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SOFFrameNumber( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SOFFrameNumber( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpecialType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpecialType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TokenType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TokenType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerABusUSBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerABusUSB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerABusUSB * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOffset )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOffset )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Qualifier )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Qualifier )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressHighValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressHighValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPointValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPointValue )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HandshakeType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HandshakeType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOFFrameNumber )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOFFrameNumber )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecialType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecialType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TokenType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TokenType )( 
            ITkdpo2k3k4kTriggerABusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerABusUSBVtbl;

    interface ITkdpo2k3k4kTriggerABusUSB
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerABusUSBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerABusUSB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerABusUSB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerABusUSB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerABusUSB_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_Qualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Qualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_Qualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Qualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_DataType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_DataType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_AddressHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_AddressHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_EndPointValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_EndPointValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_EndPointValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_EndPointValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_HandshakeType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_HandshakeType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_HandshakeType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_HandshakeType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_SOFFrameNumber(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_SOFFrameNumber(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_SOFFrameNumber(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_SOFFrameNumber(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_SpecialType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_SpecialType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_SpecialType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_SpecialType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_get_TokenType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TokenType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kTriggerABusUSB_put_TokenType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TokenType(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerABusUSB_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerALogic_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerALogic_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerALogic */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerALogic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("347d5529-c31c-4347-9fe1-8af2fcb0271c")
    ITkdpo2k3k4kTriggerALogic : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSource( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadSource( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePattern( 
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Condition,
            /* [in] */ double LessLimit,
            /* [in] */ double MoreLimit,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadPattern( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Condition,
            /* [out][in] */ double *LessLimit,
            /* [out][in] */ double *MoreLimit,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum *LogicOperatorType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureClock( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadClock( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum *EdgeType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRF( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadRF( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LessLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LessLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MoreLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MoreLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerALogicVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerALogic * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerALogic * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerALogic * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSource )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadSource )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePattern )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Condition,
            /* [in] */ double LessLimit,
            /* [in] */ double MoreLimit,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadPattern )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Condition,
            /* [out][in] */ double *LessLimit,
            /* [out][in] */ double *MoreLimit,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum *LogicOperatorType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureClock )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum Source,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadClock )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockSourceEnum *Source,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum *EdgeType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRF )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum Input,
            /* [in] */ double Threshold);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadRF )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerLogicInputChannelEnum *Input,
            /* [out][in] */ double *Threshold);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerPatternConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LessLimit )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LessLimit )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MoreLimit )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MoreLimit )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            ITkdpo2k3k4kTriggerALogic * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLogicOperatorTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerALogicVtbl;

    interface ITkdpo2k3k4kTriggerALogic
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerALogicVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerALogic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerALogic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerALogic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerALogic_Configure(This)	\
    ( (This)->lpVtbl -> Configure(This) ) 

#define ITkdpo2k3k4kTriggerALogic_ConfigureSource(This,Source,Input,Threshold)	\
    ( (This)->lpVtbl -> ConfigureSource(This,Source,Input,Threshold) ) 

#define ITkdpo2k3k4kTriggerALogic_ReadSource(This,Source,Input,Threshold)	\
    ( (This)->lpVtbl -> ReadSource(This,Source,Input,Threshold) ) 

#define ITkdpo2k3k4kTriggerALogic_ConfigurePattern(This,Condition,LessLimit,MoreLimit,LogicOperatorType)	\
    ( (This)->lpVtbl -> ConfigurePattern(This,Condition,LessLimit,MoreLimit,LogicOperatorType) ) 

#define ITkdpo2k3k4kTriggerALogic_ReadPattern(This,Condition,LessLimit,MoreLimit,LogicOperatorType)	\
    ( (This)->lpVtbl -> ReadPattern(This,Condition,LessLimit,MoreLimit,LogicOperatorType) ) 

#define ITkdpo2k3k4kTriggerALogic_ConfigureClock(This,Source,EdgeType)	\
    ( (This)->lpVtbl -> ConfigureClock(This,Source,EdgeType) ) 

#define ITkdpo2k3k4kTriggerALogic_ReadClock(This,Source,EdgeType)	\
    ( (This)->lpVtbl -> ReadClock(This,Source,EdgeType) ) 

#define ITkdpo2k3k4kTriggerALogic_ConfigureRF(This,Input,Threshold)	\
    ( (This)->lpVtbl -> ConfigureRF(This,Input,Threshold) ) 

#define ITkdpo2k3k4kTriggerALogic_ReadRF(This,Input,Threshold)	\
    ( (This)->lpVtbl -> ReadRF(This,Input,Threshold) ) 

#define ITkdpo2k3k4kTriggerALogic_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_get_LessLimit(This,Val)	\
    ( (This)->lpVtbl -> get_LessLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_put_LessLimit(This,Val)	\
    ( (This)->lpVtbl -> put_LessLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_get_MoreLimit(This,Val)	\
    ( (This)->lpVtbl -> get_MoreLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_put_MoreLimit(This,Val)	\
    ( (This)->lpVtbl -> put_MoreLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_get_Function(This,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Val) ) 

#define ITkdpo2k3k4kTriggerALogic_put_Function(This,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerALogic_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAWidth_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerAWidth_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerAWidth */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerAWidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dc311ba1-8b76-4e44-a8ec-c0369fdc065c")
    ITkdpo2k3k4kTriggerAWidth : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kTiggerPulseSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kTiggerPulseSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowerLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowerLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UpperLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_UpperLimit( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerAWidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerAWidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerAWidth * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerAWidth * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTiggerPulseSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ enum Tkdpo2k3k4kTiggerPulseSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulseWidthConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerPulsePolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowerLimit )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowerLimit )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpperLimit )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UpperLimit )( 
            ITkdpo2k3k4kTriggerAWidth * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerAWidthVtbl;

    interface ITkdpo2k3k4kTriggerAWidth
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerAWidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerAWidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerAWidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerAWidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerAWidth_Configure(This)	\
    ( (This)->lpVtbl -> Configure(This) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_Width(This,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_LowerLimit(This,Val)	\
    ( (This)->lpVtbl -> get_LowerLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_LowerLimit(This,Val)	\
    ( (This)->lpVtbl -> put_LowerLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_get_UpperLimit(This,Val)	\
    ( (This)->lpVtbl -> get_UpperLimit(This,Val) ) 

#define ITkdpo2k3k4kTriggerAWidth_put_UpperLimit(This,Val)	\
    ( (This)->lpVtbl -> put_UpperLimit(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerAWidth_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerARunt_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerARunt_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerARunt */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerARunt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("065f9840-f1b8-41e1-b45c-1fb3393ff3f5")
    ITkdpo2k3k4kTriggerARunt : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kChannelChannelEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kChannelChannelEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowerLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowerLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UpperLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_UpperLevel( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerARuntVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerARunt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerARunt * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerARunt * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ enum Tkdpo2k3k4kChannelChannelEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ enum Tkdpo2k3k4kChannelChannelEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowerLevel )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowerLevel )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpperLevel )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UpperLevel )( 
            ITkdpo2k3k4kTriggerARunt * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerARuntVtbl;

    interface ITkdpo2k3k4kTriggerARunt
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerARuntVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerARunt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerARunt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerARunt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerARunt_Configure(This)	\
    ( (This)->lpVtbl -> Configure(This) ) 

#define ITkdpo2k3k4kTriggerARunt_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_Width(This,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_get_LowerLevel(This,Val)	\
    ( (This)->lpVtbl -> get_LowerLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_LowerLevel(This,Val)	\
    ( (This)->lpVtbl -> put_LowerLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_get_UpperLevel(This,Val)	\
    ( (This)->lpVtbl -> get_UpperLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerARunt_put_UpperLevel(This,Val)	\
    ( (This)->lpVtbl -> put_UpperLevel(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerARunt_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerASetupHold_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerASetupHold_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerASetupHold */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerASetupHold;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2000e962-53f1-4d7d-ba34-b0f710bc29c1")
    ITkdpo2k3k4kTriggerASetupHold : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSource( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ClockSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ClockSource( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ClockEdge( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ClockEdge( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ClockLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ClockLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HoldTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HoldTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SetTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SetTime( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerASetupHoldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerASetupHold * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerASetupHold * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerASetupHold * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataLevel )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataLevel )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockSource )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockSource )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockEdge )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockEdge )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockLevel )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockLevel )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HoldTime )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HoldTime )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SetTime )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SetTime )( 
            ITkdpo2k3k4kTriggerASetupHold * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerASetupHoldVtbl;

    interface ITkdpo2k3k4kTriggerASetupHold
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerASetupHoldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerASetupHold_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerASetupHold_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerASetupHold_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerASetupHold_Configure(This)	\
    ( (This)->lpVtbl -> Configure(This) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_DataSource(This,Val)	\
    ( (This)->lpVtbl -> get_DataSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_DataSource(This,Val)	\
    ( (This)->lpVtbl -> put_DataSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_DataLevel(This,Val)	\
    ( (This)->lpVtbl -> get_DataLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_DataLevel(This,Val)	\
    ( (This)->lpVtbl -> put_DataLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_ClockSource(This,Val)	\
    ( (This)->lpVtbl -> get_ClockSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_ClockSource(This,Val)	\
    ( (This)->lpVtbl -> put_ClockSource(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_ClockEdge(This,Val)	\
    ( (This)->lpVtbl -> get_ClockEdge(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_ClockEdge(This,Val)	\
    ( (This)->lpVtbl -> put_ClockEdge(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_ClockLevel(This,Val)	\
    ( (This)->lpVtbl -> get_ClockLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_ClockLevel(This,Val)	\
    ( (This)->lpVtbl -> put_ClockLevel(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_HoldTime(This,Val)	\
    ( (This)->lpVtbl -> get_HoldTime(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_HoldTime(This,Val)	\
    ( (This)->lpVtbl -> put_HoldTime(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_get_SetTime(This,Val)	\
    ( (This)->lpVtbl -> get_SetTime(This,Val) ) 

#define ITkdpo2k3k4kTriggerASetupHold_put_SetTime(This,Val)	\
    ( (This)->lpVtbl -> put_SetTime(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerASetupHold_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerATransition_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerATransition_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerATransition */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerATransition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90268e9e-dada-43eb-8829-1fbe6d2530f3")
    ITkdpo2k3k4kTriggerATransition : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kChannelEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DeltaTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DeltaTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerATransitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerATransition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerATransition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerATransition * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [retval][out] */ enum Tkdpo2k3k4kChannelEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeltaTime )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeltaTime )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerTransitionConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            ITkdpo2k3k4kTriggerATransition * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerRuntPolarityEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerATransitionVtbl;

    interface ITkdpo2k3k4kTriggerATransition
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerATransitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerATransition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerATransition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerATransition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerATransition_Configure(This)	\
    ( (This)->lpVtbl -> Configure(This) ) 

#define ITkdpo2k3k4kTriggerATransition_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_get_DeltaTime(This,Val)	\
    ( (This)->lpVtbl -> get_DeltaTime(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_put_DeltaTime(This,Val)	\
    ( (This)->lpVtbl -> put_DeltaTime(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerATransition_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerATransition_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerAVideo_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerAVideo_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerAVideo */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerAVideo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("761de8fb-06f1-4b52-94fd-e20cee4afe58")
    ITkdpo2k3k4kTriggerAVideo : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FieldHoldoff( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FieldHoldoff( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Standard( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoStandardEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Standard( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoStandardEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerOn( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoFieldsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerOn( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoFieldsEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CustomLinePeriod( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CustomLinePeriod( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CustomScan( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoCustomScanEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CustomScan( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoCustomScanEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CustomSyncInterval( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CustomSyncInterval( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CustomFormat( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoCustomFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CustomFormat( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoCustomFormatEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HDTvFormat( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoHDTvFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HDTvFormat( 
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoHDTvFormatEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerAVideoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerAVideo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerAVideo * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldHoldoff )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FieldHoldoff )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Standard )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoStandardEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Standard )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoStandardEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerOn )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoFieldsEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerOn )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoFieldsEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomLinePeriod )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomLinePeriod )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomScan )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoCustomScanEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomScan )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoCustomScanEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomSyncInterval )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomSyncInterval )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomFormat )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoCustomFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomFormat )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoCustomFormatEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HDTvFormat )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerVideoHDTvFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HDTvFormat )( 
            ITkdpo2k3k4kTriggerAVideo * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerVideoHDTvFormatEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerAVideoVtbl;

    interface ITkdpo2k3k4kTriggerAVideo
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerAVideoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerAVideo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerAVideo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerAVideo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerAVideo_get_FieldHoldoff(This,Val)	\
    ( (This)->lpVtbl -> get_FieldHoldoff(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_FieldHoldoff(This,Val)	\
    ( (This)->lpVtbl -> put_FieldHoldoff(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_Standard(This,Val)	\
    ( (This)->lpVtbl -> get_Standard(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_Standard(This,Val)	\
    ( (This)->lpVtbl -> put_Standard(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_TriggerOn(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerOn(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_TriggerOn(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerOn(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_CustomLinePeriod(This,Val)	\
    ( (This)->lpVtbl -> get_CustomLinePeriod(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_CustomLinePeriod(This,Val)	\
    ( (This)->lpVtbl -> put_CustomLinePeriod(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_CustomScan(This,Val)	\
    ( (This)->lpVtbl -> get_CustomScan(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_CustomScan(This,Val)	\
    ( (This)->lpVtbl -> put_CustomScan(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_CustomSyncInterval(This,Val)	\
    ( (This)->lpVtbl -> get_CustomSyncInterval(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_CustomSyncInterval(This,Val)	\
    ( (This)->lpVtbl -> put_CustomSyncInterval(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_CustomFormat(This,Val)	\
    ( (This)->lpVtbl -> get_CustomFormat(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_CustomFormat(This,Val)	\
    ( (This)->lpVtbl -> put_CustomFormat(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_get_HDTvFormat(This,Val)	\
    ( (This)->lpVtbl -> get_HDTvFormat(This,Val) ) 

#define ITkdpo2k3k4kTriggerAVideo_put_HDTvFormat(This,Val)	\
    ( (This)->lpVtbl -> put_HDTvFormat(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerAVideo_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kTriggerBEdge_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kTriggerBEdge_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kTriggerBEdge */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kTriggerBEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f9c9044a-60b6-450b-aae7-6c34c3864ec8")
    ITkdpo2k3k4kTriggerBEdge : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Source,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSource2Enum *Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Coupling) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LevelEnum( 
            /* [in] */ enum Tkdpo2k3k4kTriggerLevelEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kTriggerBEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kTriggerBEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kTriggerBEdge * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Source,
            /* [in] */ double Level,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Slope,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSource2Enum *Source,
            /* [out][in] */ double *Level,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Slope,
            /* [out][in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Coupling);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerEdgeCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LevelEnum )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerLevelEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTriggerSource2Enum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kTriggerBEdge * This,
            /* [in] */ enum Tkdpo2k3k4kTriggerSource2Enum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kTriggerBEdgeVtbl;

    interface ITkdpo2k3k4kTriggerBEdge
    {
        CONST_VTBL struct ITkdpo2k3k4kTriggerBEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kTriggerBEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kTriggerBEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kTriggerBEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kTriggerBEdge_Configure(This,Source,Level,Slope,Coupling)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Slope,Coupling) ) 

#define ITkdpo2k3k4kTriggerBEdge_Read(This,Source,Level,Slope,Coupling)	\
    ( (This)->lpVtbl -> Read(This,Source,Level,Slope,Coupling) ) 

#define ITkdpo2k3k4kTriggerBEdge_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_put_LevelEnum(This,Val)	\
    ( (This)->lpVtbl -> put_LevelEnum(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kTriggerBEdge_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kTriggerBEdge_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBus_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBus_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBus */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4c0c4ad9-aa91-4c41-a3e2-06ecb12bec6d")
    ITkdpo2k3k4kSearchBus : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kBusTypeEnum BusType) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BusSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BusSource( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ParallelData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ParallelData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Audio( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusAudio **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_USB( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusUSB **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SPI( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusSPI **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RS232( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusRS232 **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LIN( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusLIN **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_I2C( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusI2C **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Flexray( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusFlexray **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CAN( 
            /* [retval][out] */ ITkdpo2k3k4kSearchBusCAN **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBus * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kBusTypeEnum BusType);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusSource )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusSource )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParallelData )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParallelData )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Audio )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusAudio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_USB )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusUSB **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SPI )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusSPI **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RS232 )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusRS232 **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LIN )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusLIN **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_I2C )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusI2C **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flexray )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusFlexray **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAN )( 
            ITkdpo2k3k4kSearchBus * This,
            /* [retval][out] */ ITkdpo2k3k4kSearchBusCAN **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusVtbl;

    interface ITkdpo2k3k4kSearchBus
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBus_Configure(This,BusSource,BusType)	\
    ( (This)->lpVtbl -> Configure(This,BusSource,BusType) ) 

#define ITkdpo2k3k4kSearchBus_get_BusSource(This,Val)	\
    ( (This)->lpVtbl -> get_BusSource(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_put_BusSource(This,Val)	\
    ( (This)->lpVtbl -> put_BusSource(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_ParallelData(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ParallelData(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBus_put_ParallelData(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ParallelData(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_Audio(This,Val)	\
    ( (This)->lpVtbl -> get_Audio(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_USB(This,Val)	\
    ( (This)->lpVtbl -> get_USB(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_SPI(This,Val)	\
    ( (This)->lpVtbl -> get_SPI(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_RS232(This,Val)	\
    ( (This)->lpVtbl -> get_RS232(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_LIN(This,Val)	\
    ( (This)->lpVtbl -> get_LIN(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_I2C(This,Val)	\
    ( (This)->lpVtbl -> get_I2C(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_Flexray(This,Val)	\
    ( (This)->lpVtbl -> get_Flexray(This,Val) ) 

#define ITkdpo2k3k4kSearchBus_get_CAN(This,Val)	\
    ( (This)->lpVtbl -> get_CAN(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBus_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusAudio_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusAudio_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusAudio */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d7bd4154-f026-45e2-9d9c-34cb6a2452a2")
    ITkdpo2k3k4kSearchBusAudio : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataWord( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataWord( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusAudioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusAudio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusAudio * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOffset )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOffset )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataWord )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataWord )( 
            ITkdpo2k3k4kSearchBusAudio * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusAudioVtbl;

    interface ITkdpo2k3k4kSearchBusAudio
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusAudio_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_get_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_get_DataWord(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataWord(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusAudio_put_DataWord(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataWord(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusAudio_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusUSB_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusUSB_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusUSB */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusUSB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1d56f7d3-a348-4dc1-8864-370df3863567")
    ITkdpo2k3k4kSearchBusUSB : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOffset( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Qualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Qualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EndPointValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EndPointValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HandshakeType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HandshakeType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SOFFrameNumber( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SOFFrameNumber( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpecialType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpecialType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TokenType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TokenType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusUSBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusUSB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusUSB * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOffset )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOffset )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Qualifier )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Qualifier )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBDATATypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressHighValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressHighValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPointValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPointValue )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBERRTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HandshakeType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HandshakeType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOFFrameNumber )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOFFrameNumber )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecialType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecialType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TokenType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TokenType )( 
            ITkdpo2k3k4kSearchBusUSB * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusUSBTokenTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusUSBVtbl;

    interface ITkdpo2k3k4kSearchBusUSB
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusUSBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusUSB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusUSB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusUSB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusUSB_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_DataOffset(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOffset(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_Qualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Qualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_Qualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Qualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_DataType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_DataType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_AddressHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_AddressHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_EndPointValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_EndPointValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_EndPointValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_EndPointValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_HandshakeType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_HandshakeType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_HandshakeType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_HandshakeType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_SOFFrameNumber(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_SOFFrameNumber(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_SOFFrameNumber(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_SOFFrameNumber(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_SpecialType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_SpecialType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_SpecialType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_SpecialType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_get_TokenType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TokenType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusUSB_put_TokenType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TokenType(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusUSB_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusSPI_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusSPI_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusSPI */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusSPI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4bfd8fac-0adb-45fd-aee7-dd63c4e52c70")
    ITkdpo2k3k4kSearchBusSPI : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataINValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataINValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataOUTValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataOUTValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusSPIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusSPI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusSPI * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSPIConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataINValue )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataINValue )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataOUTValue )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataOUTValue )( 
            ITkdpo2k3k4kSearchBusSPI * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusSPIVtbl;

    interface ITkdpo2k3k4kSearchBusSPI
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusSPIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusSPI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusSPI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusSPI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusSPI_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_get_DataINValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataINValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_put_DataINValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataINValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_get_DataOUTValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataOUTValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusSPI_put_DataOUTValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataOUTValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusSPI_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusRS232_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusRS232_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusRS232 */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusRS232;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c531966a-b624-4012-8ca7-12203dc78ce7")
    ITkdpo2k3k4kSearchBusRS232 : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TXDataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TXDataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusRS232Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusRS232 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusRS232 * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusRS232ConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RXDataSize )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RXDataSize )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RXDataValue )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RXDataValue )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TXDataSize )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TXDataSize )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TXDataValue )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TXDataValue )( 
            ITkdpo2k3k4kSearchBusRS232 * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusRS232Vtbl;

    interface ITkdpo2k3k4kSearchBusRS232
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusRS232Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusRS232_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusRS232_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusRS232_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusRS232_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_get_RXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_RXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_put_RXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_RXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_get_RXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_RXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_put_RXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_RXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_get_TXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_put_TXDataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TXDataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_get_TXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_TXDataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusRS232_put_TXDataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_TXDataValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusRS232_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusLIN_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusLIN_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusLIN */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusLIN;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6751a7b3-7d6c-48c3-884d-1a9b8668b755")
    ITkdpo2k3k4kSearchBusLIN : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataHighValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IdentifierValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IdentifierValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusLINVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusLIN * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusLIN * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataHighValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataHighValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusLINErrorTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentifierValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IdentifierValue )( 
            ITkdpo2k3k4kSearchBusLIN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusLINVtbl;

    interface ITkdpo2k3k4kSearchBusLIN
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusLINVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusLIN_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusLIN_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusLIN_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusLIN_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_DataHighValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataHighValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_get_IdentifierValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_IdentifierValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusLIN_put_IdentifierValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_IdentifierValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusLIN_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusI2C_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusI2C_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusI2C */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusI2C;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bcbd96ea-82b1-44cf-9a3d-be7f0b4fd916")
    ITkdpo2k3k4kSearchBusI2C : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusI2CVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusI2C * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusI2C * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataDirection )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataDirection )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CDataDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CTrigConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressMode )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressMode )( 
            ITkdpo2k3k4kSearchBusI2C * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusI2CAddrModeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusI2CVtbl;

    interface ITkdpo2k3k4kSearchBusI2C
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusI2CVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusI2C_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusI2C_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusI2C_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusI2C_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_get_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_get_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusI2C_put_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressMode(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusI2C_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusFlexray_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusFlexray_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusFlexray */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusFlexray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e2ac1548-b806-4679-87bb-be27f96c349f")
    ITkdpo2k3k4kSearchBusFlexray : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCycleCount( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadCycleCount( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ long Offset,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ long Size,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ long *Offset,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ long *Size,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFrameID( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadFrameID( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureHeader( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR CRC,
            /* [in] */ BSTR CycleCount,
            /* [in] */ BSTR FrameID,
            /* [in] */ BSTR IndicatorBits,
            /* [in] */ BSTR PayloadLength) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadHeader( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *CRC,
            /* [out][in] */ BSTR *CycleCount,
            /* [out][in] */ BSTR *FrameID,
            /* [out][in] */ BSTR *IndicatorBits,
            /* [out][in] */ BSTR *PayloadLength) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EOFType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EOFType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusFlexrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusFlexray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusFlexray * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCycleCount )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadCycleCount )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureData )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ long Offset,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ long Size,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ long *Offset,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ long *Size,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFrameID )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR HighValue,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier,
            /* [in] */ BSTR Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadFrameID )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *HighValue,
            /* [out][in] */ enum Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum *Qualifier,
            /* [out][in] */ BSTR *Value);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureHeader )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR CRC,
            /* [in] */ BSTR CycleCount,
            /* [in] */ BSTR FrameID,
            /* [in] */ BSTR IndicatorBits,
            /* [in] */ BSTR PayloadLength);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadHeader )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [out][in] */ BSTR *CRC,
            /* [out][in] */ BSTR *CycleCount,
            /* [out][in] */ BSTR *FrameID,
            /* [out][in] */ BSTR *IndicatorBits,
            /* [out][in] */ BSTR *PayloadLength);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EOFType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EOFType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameType )( 
            ITkdpo2k3k4kSearchBusFlexray * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusFlexrayVtbl;

    interface ITkdpo2k3k4kSearchBusFlexray
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusFlexrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusFlexray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusFlexray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusFlexray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusFlexray_ConfigureCycleCount(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ConfigureCycleCount(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ReadCycleCount(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ReadCycleCount(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ConfigureData(This,BusSource,HighValue,Offset,Qualifier,Size,Value)	\
    ( (This)->lpVtbl -> ConfigureData(This,BusSource,HighValue,Offset,Qualifier,Size,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ReadData(This,BusSource,HighValue,Offset,Qualifier,Size,Value)	\
    ( (This)->lpVtbl -> ReadData(This,BusSource,HighValue,Offset,Qualifier,Size,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ConfigureFrameID(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ConfigureFrameID(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ReadFrameID(This,BusSource,HighValue,Qualifier,Value)	\
    ( (This)->lpVtbl -> ReadFrameID(This,BusSource,HighValue,Qualifier,Value) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ConfigureHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength)	\
    ( (This)->lpVtbl -> ConfigureHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength) ) 

#define ITkdpo2k3k4kSearchBusFlexray_ReadHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength)	\
    ( (This)->lpVtbl -> ReadHeader(This,BusSource,CRC,CycleCount,FrameID,IndicatorBits,PayloadLength) ) 

#define ITkdpo2k3k4kSearchBusFlexray_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_get_EOFType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_EOFType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_put_EOFType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_EOFType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_get_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_put_ErrorType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_ErrorType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_get_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusFlexray_put_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_FrameType(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusFlexray_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kSearchBusCAN_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kSearchBusCAN_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kSearchBusCAN */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kSearchBusCAN;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("478d965d-8ec8-4300-9242-26db0d2c192a")
    ITkdpo2k3k4kSearchBusCAN : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataQualifier( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataDirection( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSize( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressMode( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AddressValue( 
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kSearchBusCANVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kSearchBusCAN * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kSearchBusCAN * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataQualifier )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataQualifier )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANQualifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataValue )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataValue )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataDirection )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataDirection )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANDataDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSize )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSize )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameType )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameType )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANFrameTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressMode )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressMode )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ enum Tkdpo2k3k4kTrigABusCANAddressModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressValue )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressValue )( 
            ITkdpo2k3k4kSearchBusCAN * This,
            /* [in] */ enum Tkdpo2k3k4kTrigABusSourceEnum BusSource,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kSearchBusCANVtbl;

    interface ITkdpo2k3k4kSearchBusCAN
    {
        CONST_VTBL struct ITkdpo2k3k4kSearchBusCANVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kSearchBusCAN_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kSearchBusCAN_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kSearchBusCAN_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kSearchBusCAN_get_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_Condition(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_DataQualifier(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataQualifier(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_DataValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_DataDirection(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataDirection(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_DataSize(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_DataSize(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_FrameType(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_FrameType(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_AddressMode(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressMode(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_get_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> get_AddressValue(This,BusSource,Val) ) 

#define ITkdpo2k3k4kSearchBusCAN_put_AddressValue(This,BusSource,Val)	\
    ( (This)->lpVtbl -> put_AddressValue(This,BusSource,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kSearchBusCAN_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kReferences_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kReferences_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kReferences */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("292e6eb7-6230-49de-9993-9ca7310a0e3c")
    ITkdpo2k3k4kReferences : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kReference **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kReferences * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kReferences * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kReferences * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kReferences * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kReferences * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kReference **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kReferencesVtbl;

    interface ITkdpo2k3k4kReferences
    {
        CONST_VTBL struct ITkdpo2k3k4kReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kReferences_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kReferences_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kReferences_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kReferences_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kReference_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kReference_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kReference */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8ed16556-91d1-40c8-a200-9c2478f6d1f3")
    ITkdpo2k3k4kReference : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Position,
            /* [in] */ double VerticalScale,
            /* [in] */ double HorizontalScale,
            /* [in] */ VARIANT_BOOL DisplayState,
            /* [in] */ double HorizontalDelayTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [out][in] */ double *Position,
            /* [out][in] */ double *VerticalScale,
            /* [out][in] */ double *HorizontalScale,
            /* [out][in] */ VARIANT_BOOL *DisplayState,
            /* [out][in] */ double *HorizontalDelayTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetDateTime( 
            /* [out][in] */ BSTR *Date,
            /* [out][in] */ BSTR *Time) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HorizontalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalDelayTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HorizontalDelayTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kReference * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ double Position,
            /* [in] */ double VerticalScale,
            /* [in] */ double HorizontalScale,
            /* [in] */ VARIANT_BOOL DisplayState,
            /* [in] */ double HorizontalDelayTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ITkdpo2k3k4kReference * This,
            /* [out][in] */ double *Position,
            /* [out][in] */ double *VerticalScale,
            /* [out][in] */ double *HorizontalScale,
            /* [out][in] */ VARIANT_BOOL *DisplayState,
            /* [out][in] */ double *HorizontalDelayTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetDateTime )( 
            ITkdpo2k3k4kReference * This,
            /* [out][in] */ BSTR *Date,
            /* [out][in] */ BSTR *Time);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScale )( 
            ITkdpo2k3k4kReference * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HorizontalScale )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kReference * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScale )( 
            ITkdpo2k3k4kReference * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalScale )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalDelayTime )( 
            ITkdpo2k3k4kReference * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HorizontalDelayTime )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            ITkdpo2k3k4kReference * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            ITkdpo2k3k4kReference * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kReferenceVtbl;

    interface ITkdpo2k3k4kReference
    {
        CONST_VTBL struct ITkdpo2k3k4kReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kReference_Configure(This,Position,VerticalScale,HorizontalScale,DisplayState,HorizontalDelayTime)	\
    ( (This)->lpVtbl -> Configure(This,Position,VerticalScale,HorizontalScale,DisplayState,HorizontalDelayTime) ) 

#define ITkdpo2k3k4kReference_Read(This,Position,VerticalScale,HorizontalScale,DisplayState,HorizontalDelayTime)	\
    ( (This)->lpVtbl -> Read(This,Position,VerticalScale,HorizontalScale,DisplayState,HorizontalDelayTime) ) 

#define ITkdpo2k3k4kReference_GetDateTime(This,Date,Time)	\
    ( (This)->lpVtbl -> GetDateTime(This,Date,Time) ) 

#define ITkdpo2k3k4kReference_get_HorizontalScale(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalScale(This,Val) ) 

#define ITkdpo2k3k4kReference_put_HorizontalScale(This,Val)	\
    ( (This)->lpVtbl -> put_HorizontalScale(This,Val) ) 

#define ITkdpo2k3k4kReference_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kReference_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kReference_get_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kReference_put_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kReference_get_HorizontalDelayTime(This,Val)	\
    ( (This)->lpVtbl -> get_HorizontalDelayTime(This,Val) ) 

#define ITkdpo2k3k4kReference_put_HorizontalDelayTime(This,Val)	\
    ( (This)->lpVtbl -> put_HorizontalDelayTime(This,Val) ) 

#define ITkdpo2k3k4kReference_get_Label(This,Val)	\
    ( (This)->lpVtbl -> get_Label(This,Val) ) 

#define ITkdpo2k3k4kReference_put_Label(This,Val)	\
    ( (This)->lpVtbl -> put_Label(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kReference_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kDigitalChannels_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kDigitalChannels_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kDigitalChannels */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kDigitalChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93186cbf-930e-48ae-aade-df74785ecc9e")
    ITkdpo2k3k4kDigitalChannels : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kDigitalChannel **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kDigitalChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kDigitalChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kDigitalChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kDigitalChannels * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITkdpo2k3k4kDigitalChannels * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITkdpo2k3k4kDigitalChannels * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITkdpo2k3k4kDigitalChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ ITkdpo2k3k4kDigitalChannel **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kDigitalChannelsVtbl;

    interface ITkdpo2k3k4kDigitalChannels
    {
        CONST_VTBL struct ITkdpo2k3k4kDigitalChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kDigitalChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kDigitalChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kDigitalChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kDigitalChannels_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannels_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define ITkdpo2k3k4kDigitalChannels_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kDigitalChannels_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kDigitalChannel_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kDigitalChannel_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kDigitalChannel */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kDigitalChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f378c0da-52c0-4b66-9732-887406cd733a")
    ITkdpo2k3k4kDigitalChannel : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ enum Tkdpo2k3k4kDigitalChannelStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kDigitalChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kDigitalChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kDigitalChannel * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDigitalChannelStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [in] */ enum Tkdpo2k3k4kDigitalChannelStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            ITkdpo2k3k4kDigitalChannel * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kDigitalChannelVtbl;

    interface ITkdpo2k3k4kDigitalChannel
    {
        CONST_VTBL struct ITkdpo2k3k4kDigitalChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kDigitalChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kDigitalChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kDigitalChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kDigitalChannel_get_Label(This,Val)	\
    ( (This)->lpVtbl -> get_Label(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_put_Label(This,Val)	\
    ( (This)->lpVtbl -> put_Label(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_get_Threshold(This,Val)	\
    ( (This)->lpVtbl -> get_Threshold(This,Val) ) 

#define ITkdpo2k3k4kDigitalChannel_put_Threshold(This,Val)	\
    ( (This)->lpVtbl -> put_Threshold(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kDigitalChannel_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kZoom_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kZoom_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kZoom */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kZoom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a72be904-4b1b-4c5c-a39e-4488eb47ebfd")
    ITkdpo2k3k4kZoom : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Scale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Factor( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kZoomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kZoom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kZoom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kZoom * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ITkdpo2k3k4kZoom * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ITkdpo2k3k4kZoom * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITkdpo2k3k4kZoom * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ITkdpo2k3k4kZoom * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            ITkdpo2k3k4kZoom * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scale )( 
            ITkdpo2k3k4kZoom * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ITkdpo2k3k4kZoom * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            ITkdpo2k3k4kZoom * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Factor )( 
            ITkdpo2k3k4kZoom * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kZoomVtbl;

    interface ITkdpo2k3k4kZoom
    {
        CONST_VTBL struct ITkdpo2k3k4kZoomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kZoom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kZoom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kZoom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kZoom_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define ITkdpo2k3k4kZoom_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define ITkdpo2k3k4kZoom_get_Position(This,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Val) ) 

#define ITkdpo2k3k4kZoom_put_Position(This,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Val) ) 

#define ITkdpo2k3k4kZoom_get_Scale(This,Val)	\
    ( (This)->lpVtbl -> get_Scale(This,Val) ) 

#define ITkdpo2k3k4kZoom_put_Scale(This,Val)	\
    ( (This)->lpVtbl -> put_Scale(This,Val) ) 

#define ITkdpo2k3k4kZoom_get_State(This,Val)	\
    ( (This)->lpVtbl -> get_State(This,Val) ) 

#define ITkdpo2k3k4kZoom_put_State(This,Val)	\
    ( (This)->lpVtbl -> put_State(This,Val) ) 

#define ITkdpo2k3k4kZoom_get_Factor(This,Val)	\
    ( (This)->lpVtbl -> get_Factor(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kZoom_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kWaveformTransfer_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kWaveformTransfer_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kWaveformTransfer */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kWaveformTransfer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b50c12c2-8757-4e2f-8f9a-5f1b1109c0f1")
    ITkdpo2k3k4kWaveformTransfer : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WriteWaveformToReference( 
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum WaveformReference,
            /* [in] */ SAFEARRAY * *WaveformArray,
            /* [in] */ double InitialX,
            /* [in] */ double XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveWaveformToFile( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ BSTR FileName,
            /* [in] */ enum Tkdpo2k3k4kWaveformFileFormatEnum FileFormat) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveformMinMax( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long MaxTimeMiliseconds,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveform( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long MaxTimeMiliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsWaveformElementInvalid( 
            /* [in] */ double Element,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE InitiateAcquisition( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformWithinZoom( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformWithinCursor( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformStartStop( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long Start,
            /* [in] */ long Stop,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformMinMax( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformHighResolution( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformDigitizedLevel( 
            /* [in] */ enum Tkdpo2k3k4kChannelEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *YZero,
            /* [out][in] */ double *YMult,
            /* [out][in] */ double *YOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveform( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CopyWaveformToClipboard( 
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long Start,
            /* [in] */ long Stop,
            /* [out][in] */ long *PointsCopied) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetAvailableDataCompositions( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetAvailableFilterVuFrequencies( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataWidth( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataWidth( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataStop( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataStop( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataStart( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataStart( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kDataSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataSource( 
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformRecordLength( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataComposition( 
            /* [retval][out] */ enum Tkdpo2k3k4kDataCompositionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataComposition( 
            /* [in] */ enum Tkdpo2k3k4kDataCompositionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataResolution( 
            /* [retval][out] */ enum Tkdpo2k3k4kDataResolutionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataResolution( 
            /* [in] */ enum Tkdpo2k3k4kDataResolutionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FillterVuFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FillterVuFrequency( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kWaveformTransferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kWaveformTransfer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kWaveformTransfer * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WriteWaveformToReference )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kReferenceEnum WaveformReference,
            /* [in] */ SAFEARRAY * *WaveformArray,
            /* [in] */ double InitialX,
            /* [in] */ double XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveWaveformToFile )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ BSTR FileName,
            /* [in] */ enum Tkdpo2k3k4kWaveformFileFormatEnum FileFormat);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformMinMax )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long MaxTimeMiliseconds,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveform )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long MaxTimeMiliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsWaveformElementInvalid )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ double Element,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *InitiateAcquisition )( 
            ITkdpo2k3k4kWaveformTransfer * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformWithinZoom )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformWithinCursor )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformStartStop )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long Start,
            /* [in] */ long Stop,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformMinMax )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformHighResolution )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformDigitizedLevel )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kChannelEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *YZero,
            /* [out][in] */ double *YMult,
            /* [out][in] */ double *YOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveform )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CopyWaveformToClipboard )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kSourceEnum WaveformSource,
            /* [in] */ long Start,
            /* [in] */ long Stop,
            /* [out][in] */ long *PointsCopied);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableDataCompositions )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableFilterVuFrequencies )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataWidth )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataWidth )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataStop )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataStop )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataStart )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataStart )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDataSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kDataSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformRecordLength )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataComposition )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDataCompositionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataComposition )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kDataCompositionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataResolution )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ enum Tkdpo2k3k4kDataResolutionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataResolution )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ enum Tkdpo2k3k4kDataResolutionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillterVuFrequency )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillterVuFrequency )( 
            ITkdpo2k3k4kWaveformTransfer * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kWaveformTransferVtbl;

    interface ITkdpo2k3k4kWaveformTransfer
    {
        CONST_VTBL struct ITkdpo2k3k4kWaveformTransferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kWaveformTransfer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kWaveformTransfer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kWaveformTransfer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kWaveformTransfer_WriteWaveformToReference(This,WaveformReference,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> WriteWaveformToReference(This,WaveformReference,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_SaveWaveformToFile(This,WaveformSource,FileName,FileFormat)	\
    ( (This)->lpVtbl -> SaveWaveformToFile(This,WaveformSource,FileName,FileFormat) ) 

#define ITkdpo2k3k4kWaveformTransfer_ReadWaveformMinMax(This,WaveformSource,MaxTimeMiliseconds,MinWaveform,MaxWaveform,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> ReadWaveformMinMax(This,WaveformSource,MaxTimeMiliseconds,MinWaveform,MaxWaveform,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_ReadWaveform(This,WaveformSource,MaxTimeMiliseconds,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> ReadWaveform(This,WaveformSource,MaxTimeMiliseconds,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_IsWaveformElementInvalid(This,Element,Val)	\
    ( (This)->lpVtbl -> IsWaveformElementInvalid(This,Element,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_InitiateAcquisition(This)	\
    ( (This)->lpVtbl -> InitiateAcquisition(This) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinZoom(This,WaveformSource,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformWithinZoom(This,WaveformSource,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinCursor(This,WaveformSource,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformWithinCursor(This,WaveformSource,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformStartStop(This,WaveformSource,Start,Stop,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformStartStop(This,WaveformSource,Start,Stop,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformMinMax(This,WaveformSource,MinWaveform,MaxWaveform,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformMinMax(This,WaveformSource,MinWaveform,MaxWaveform,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformHighResolution(This,WaveformSource,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformHighResolution(This,WaveformSource,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveformDigitizedLevel(This,WaveformSource,WaveformArray,InitialX,XIncrement,YZero,YMult,YOffset)	\
    ( (This)->lpVtbl -> FetchWaveformDigitizedLevel(This,WaveformSource,WaveformArray,InitialX,XIncrement,YZero,YMult,YOffset) ) 

#define ITkdpo2k3k4kWaveformTransfer_FetchWaveform(This,WaveformSource,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveform(This,WaveformSource,WaveformArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kWaveformTransfer_CopyWaveformToClipboard(This,WaveformSource,Start,Stop,PointsCopied)	\
    ( (This)->lpVtbl -> CopyWaveformToClipboard(This,WaveformSource,Start,Stop,PointsCopied) ) 

#define ITkdpo2k3k4kWaveformTransfer_GetAvailableDataCompositions(This,Val)	\
    ( (This)->lpVtbl -> GetAvailableDataCompositions(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_GetAvailableFilterVuFrequencies(This,Val)	\
    ( (This)->lpVtbl -> GetAvailableFilterVuFrequencies(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataWidth(This,Val)	\
    ( (This)->lpVtbl -> get_DataWidth(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataWidth(This,Val)	\
    ( (This)->lpVtbl -> put_DataWidth(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataStop(This,Val)	\
    ( (This)->lpVtbl -> get_DataStop(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataStop(This,Val)	\
    ( (This)->lpVtbl -> put_DataStop(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataStart(This,Val)	\
    ( (This)->lpVtbl -> get_DataStart(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataStart(This,Val)	\
    ( (This)->lpVtbl -> put_DataStart(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataSource(This,Val)	\
    ( (This)->lpVtbl -> get_DataSource(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataSource(This,Val)	\
    ( (This)->lpVtbl -> put_DataSource(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_WaveformRecordLength(This,Val)	\
    ( (This)->lpVtbl -> get_WaveformRecordLength(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataComposition(This,Val)	\
    ( (This)->lpVtbl -> get_DataComposition(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataComposition(This,Val)	\
    ( (This)->lpVtbl -> put_DataComposition(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_DataResolution(This,Val)	\
    ( (This)->lpVtbl -> get_DataResolution(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_DataResolution(This,Val)	\
    ( (This)->lpVtbl -> put_DataResolution(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_get_FillterVuFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_FillterVuFrequency(This,Val) ) 

#define ITkdpo2k3k4kWaveformTransfer_put_FillterVuFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_FillterVuFrequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kWaveformTransfer_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kUtilityEx_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kUtilityEx_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kUtilityEx */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kUtilityEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1a30a17d-6304-4142-a632-334249ab6f7b")
    ITkdpo2k3k4kUtilityEx : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Calibrate( 
            /* [retval][out] */ enum Tkdpo2k3k4kUtilityExCalibrationStatusEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SelfTest( 
            /* [out][in] */ long *TestResult,
            /* [out][in] */ BSTR *TestMessage) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrontPanelLock( 
            /* [retval][out] */ enum Tkdpo2k3k4kUtilityExFrontPanelLockEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrontPanelLock( 
            /* [in] */ enum Tkdpo2k3k4kUtilityExFrontPanelLockEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kUtilityExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kUtilityEx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kUtilityEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kUtilityEx * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            ITkdpo2k3k4kUtilityEx * This,
            /* [retval][out] */ enum Tkdpo2k3k4kUtilityExCalibrationStatusEnum *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SelfTest )( 
            ITkdpo2k3k4kUtilityEx * This,
            /* [out][in] */ long *TestResult,
            /* [out][in] */ BSTR *TestMessage);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrontPanelLock )( 
            ITkdpo2k3k4kUtilityEx * This,
            /* [retval][out] */ enum Tkdpo2k3k4kUtilityExFrontPanelLockEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrontPanelLock )( 
            ITkdpo2k3k4kUtilityEx * This,
            /* [in] */ enum Tkdpo2k3k4kUtilityExFrontPanelLockEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kUtilityExVtbl;

    interface ITkdpo2k3k4kUtilityEx
    {
        CONST_VTBL struct ITkdpo2k3k4kUtilityExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kUtilityEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kUtilityEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kUtilityEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kUtilityEx_Calibrate(This,Val)	\
    ( (This)->lpVtbl -> Calibrate(This,Val) ) 

#define ITkdpo2k3k4kUtilityEx_SelfTest(This,TestResult,TestMessage)	\
    ( (This)->lpVtbl -> SelfTest(This,TestResult,TestMessage) ) 

#define ITkdpo2k3k4kUtilityEx_get_FrontPanelLock(This,Val)	\
    ( (This)->lpVtbl -> get_FrontPanelLock(This,Val) ) 

#define ITkdpo2k3k4kUtilityEx_put_FrontPanelLock(This,Val)	\
    ( (This)->lpVtbl -> put_FrontPanelLock(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kUtilityEx_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kInstrumentIO_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kInstrumentIO_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kInstrumentIO */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kInstrumentIO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22ac55e1-2747-4749-8320-792237287530")
    ITkdpo2k3k4kInstrumentIO : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetOPC( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Query( 
            /* [in] */ BSTR Command,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadPartialString( 
            /* [in] */ long Length,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WriteString( 
            /* [in] */ BSTR Command) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IOSession( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kInstrumentIOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kInstrumentIO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kInstrumentIO * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetOPC )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Query )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [in] */ BSTR Command,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadPartialString )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [in] */ long Length,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadString )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WriteString )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [in] */ BSTR Command);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOSession )( 
            ITkdpo2k3k4kInstrumentIO * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kInstrumentIOVtbl;

    interface ITkdpo2k3k4kInstrumentIO
    {
        CONST_VTBL struct ITkdpo2k3k4kInstrumentIOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kInstrumentIO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kInstrumentIO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kInstrumentIO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kInstrumentIO_GetOPC(This,Val)	\
    ( (This)->lpVtbl -> GetOPC(This,Val) ) 

#define ITkdpo2k3k4kInstrumentIO_Query(This,Command,Val)	\
    ( (This)->lpVtbl -> Query(This,Command,Val) ) 

#define ITkdpo2k3k4kInstrumentIO_ReadPartialString(This,Length,Val)	\
    ( (This)->lpVtbl -> ReadPartialString(This,Length,Val) ) 

#define ITkdpo2k3k4kInstrumentIO_ReadString(This,Val)	\
    ( (This)->lpVtbl -> ReadString(This,Val) ) 

#define ITkdpo2k3k4kInstrumentIO_WriteString(This,Command)	\
    ( (This)->lpVtbl -> WriteString(This,Command) ) 

#define ITkdpo2k3k4kInstrumentIO_get_IOSession(This,Val)	\
    ( (This)->lpVtbl -> get_IOSession(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kInstrumentIO_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysis_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysis_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysis */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysis;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f828467d-3a9b-410d-866d-92309077bc35")
    ITkdpo2k3k4kPowerAnalysis : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRefLevel( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double ReferenceLevelHysteresis,
            /* [in] */ double Mid) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadRefLevel( 
            /* [out][in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum *ReferenceLevelType,
            /* [out][in] */ double *ReferenceLevelHysteresis,
            /* [out][in] */ double *Mid) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetDefaultRefLevel( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ResetStatistics( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kPowerTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageSource( 
            /* [in] */ enum Tkdpo2k3k4kPowerSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentSource( 
            /* [in] */ enum Tkdpo2k3k4kPowerSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Indicator( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Indicator( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GateSource( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerGateSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GateSource( 
            /* [in] */ enum Tkdpo2k3k4kPowerGateSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Gating( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerGatingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Gating( 
            /* [in] */ enum Tkdpo2k3k4kPowerGatingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefLevelHigh( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefLevelHigh( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefLevelLow( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefLevelLow( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefLevelMid( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ long Number,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefLevelMid( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ long Number,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StatisticsMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerStatisticsModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StatisticsMode( 
            /* [in] */ enum Tkdpo2k3k4kPowerStatisticsModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StatisticsSamples( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StatisticsSamples( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Quality( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisQuality **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SwitchingLoss( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisSwitchingLoss **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Harmonics( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisHarmonics **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Ripple( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisRipple **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Modulation( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisModulation **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SafeOperatingArea( 
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisSafeOperatingArea **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysis * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysis * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRefLevel )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double ReferenceLevelHysteresis,
            /* [in] */ double Mid);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadRefLevel )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [out][in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum *ReferenceLevelType,
            /* [out][in] */ double *ReferenceLevelHysteresis,
            /* [out][in] */ double *Mid);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultRefLevel )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ResetStatistics )( 
            ITkdpo2k3k4kPowerAnalysis * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayState )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayState )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Indicator )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Indicator )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GateSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerGateSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GateSource )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerGateSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gating )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerGatingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gating )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerGatingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLevelHigh )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLevelHigh )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLevelLow )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLevelLow )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLevelMid )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ long Number,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLevelMid )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType,
            /* [in] */ long Number,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatisticsMode )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerStatisticsModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatisticsMode )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ enum Tkdpo2k3k4kPowerStatisticsModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatisticsSamples )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatisticsSamples )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quality )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisQuality **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SwitchingLoss )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisSwitchingLoss **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Harmonics )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisHarmonics **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ripple )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisRipple **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Modulation )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisModulation **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SafeOperatingArea )( 
            ITkdpo2k3k4kPowerAnalysis * This,
            /* [retval][out] */ ITkdpo2k3k4kPowerAnalysisSafeOperatingArea **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisVtbl;

    interface ITkdpo2k3k4kPowerAnalysis
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysis_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysis_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysis_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysis_ConfigureRefLevel(This,ReferenceLevelType,ReferenceLevelHysteresis,Mid)	\
    ( (This)->lpVtbl -> ConfigureRefLevel(This,ReferenceLevelType,ReferenceLevelHysteresis,Mid) ) 

#define ITkdpo2k3k4kPowerAnalysis_ReadRefLevel(This,ReferenceLevelType,ReferenceLevelHysteresis,Mid)	\
    ( (This)->lpVtbl -> ReadRefLevel(This,ReferenceLevelType,ReferenceLevelHysteresis,Mid) ) 

#define ITkdpo2k3k4kPowerAnalysis_SetDefaultRefLevel(This,ReferenceLevelType)	\
    ( (This)->lpVtbl -> SetDefaultRefLevel(This,ReferenceLevelType) ) 

#define ITkdpo2k3k4kPowerAnalysis_ResetStatistics(This)	\
    ( (This)->lpVtbl -> ResetStatistics(This) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_VoltageSource(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_VoltageSource(This,Val)	\
    ( (This)->lpVtbl -> put_VoltageSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_CurrentSource(This,Val)	\
    ( (This)->lpVtbl -> get_CurrentSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_CurrentSource(This,Val)	\
    ( (This)->lpVtbl -> put_CurrentSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_DisplayState(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayState(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Indicator(This,Val)	\
    ( (This)->lpVtbl -> get_Indicator(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_Indicator(This,Val)	\
    ( (This)->lpVtbl -> put_Indicator(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_GateSource(This,Val)	\
    ( (This)->lpVtbl -> get_GateSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_GateSource(This,Val)	\
    ( (This)->lpVtbl -> put_GateSource(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Gating(This,Val)	\
    ( (This)->lpVtbl -> get_Gating(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_Gating(This,Val)	\
    ( (This)->lpVtbl -> put_Gating(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_RefLevelHigh(This,ReferenceLevelType,Val)	\
    ( (This)->lpVtbl -> get_RefLevelHigh(This,ReferenceLevelType,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_RefLevelHigh(This,ReferenceLevelType,Val)	\
    ( (This)->lpVtbl -> put_RefLevelHigh(This,ReferenceLevelType,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_RefLevelLow(This,ReferenceLevelType,Val)	\
    ( (This)->lpVtbl -> get_RefLevelLow(This,ReferenceLevelType,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_RefLevelLow(This,ReferenceLevelType,Val)	\
    ( (This)->lpVtbl -> put_RefLevelLow(This,ReferenceLevelType,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_RefLevelMid(This,ReferenceLevelType,Number,Val)	\
    ( (This)->lpVtbl -> get_RefLevelMid(This,ReferenceLevelType,Number,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_RefLevelMid(This,ReferenceLevelType,Number,Val)	\
    ( (This)->lpVtbl -> put_RefLevelMid(This,ReferenceLevelType,Number,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_StatisticsMode(This,Val)	\
    ( (This)->lpVtbl -> get_StatisticsMode(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_StatisticsMode(This,Val)	\
    ( (This)->lpVtbl -> put_StatisticsMode(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_StatisticsSamples(This,Val)	\
    ( (This)->lpVtbl -> get_StatisticsSamples(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_put_StatisticsSamples(This,Val)	\
    ( (This)->lpVtbl -> put_StatisticsSamples(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Quality(This,Val)	\
    ( (This)->lpVtbl -> get_Quality(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_SwitchingLoss(This,Val)	\
    ( (This)->lpVtbl -> get_SwitchingLoss(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Harmonics(This,Val)	\
    ( (This)->lpVtbl -> get_Harmonics(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Ripple(This,Val)	\
    ( (This)->lpVtbl -> get_Ripple(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_Modulation(This,Val)	\
    ( (This)->lpVtbl -> get_Modulation(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysis_get_SafeOperatingArea(This,Val)	\
    ( (This)->lpVtbl -> get_SafeOperatingArea(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysis_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisQuality_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisQuality_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisQuality */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisQuality;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26091b24-bb78-435c-ab35-c5c62a528133")
    ITkdpo2k3k4kPowerAnalysisQuality : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyReference( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyReference( 
            /* [in] */ enum Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AllMeasDisplayState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MeasDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MeasDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ApparentPower( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ICrestFactor( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PhaseAngle( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PowerFactor( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReactivePower( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TruePower( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VRMS( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IRMS( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VCrestFactor( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisQualityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyReference )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyReference )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [in] */ enum Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllMeasDisplayState )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeasDisplayState )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [in] */ enum Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeasDisplayState )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [in] */ enum Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApparentPower )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ICrestFactor )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhaseAngle )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerFactor )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReactivePower )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TruePower )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VRMS )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IRMS )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VCrestFactor )( 
            ITkdpo2k3k4kPowerAnalysisQuality * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisQualityVtbl;

    interface ITkdpo2k3k4kPowerAnalysisQuality
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisQualityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisQuality_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisQuality_get_FrequencyReference(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyReference(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_put_FrequencyReference(This,Val)	\
    ( (This)->lpVtbl -> put_FrequencyReference(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_put_AllMeasDisplayState(This,Val)	\
    ( (This)->lpVtbl -> put_AllMeasDisplayState(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_MeasDisplayState(This,DisplayMeasurement,Val)	\
    ( (This)->lpVtbl -> get_MeasDisplayState(This,DisplayMeasurement,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_put_MeasDisplayState(This,DisplayMeasurement,Val)	\
    ( (This)->lpVtbl -> put_MeasDisplayState(This,DisplayMeasurement,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_ApparentPower(This,Val)	\
    ( (This)->lpVtbl -> get_ApparentPower(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_ICrestFactor(This,Val)	\
    ( (This)->lpVtbl -> get_ICrestFactor(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_PhaseAngle(This,Val)	\
    ( (This)->lpVtbl -> get_PhaseAngle(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_PowerFactor(This,Val)	\
    ( (This)->lpVtbl -> get_PowerFactor(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_ReactivePower(This,Val)	\
    ( (This)->lpVtbl -> get_ReactivePower(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_TruePower(This,Val)	\
    ( (This)->lpVtbl -> get_TruePower(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_VRMS(This,Val)	\
    ( (This)->lpVtbl -> get_VRMS(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_IRMS(This,Val)	\
    ( (This)->lpVtbl -> get_IRMS(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisQuality_get_VCrestFactor(This,Val)	\
    ( (This)->lpVtbl -> get_VCrestFactor(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisQuality_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisSwitchingLoss */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisSwitchingLoss;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38a539a1-7430-4d29-a89e-6b832b0b61ad")
    ITkdpo2k3k4kPowerAnalysisSwitchingLoss : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureGating( 
            /* [in] */ enum Tkdpo2k3k4kPowerGatingPolarityEnum Polarity,
            /* [in] */ double TurnOn) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadGating( 
            /* [out][in] */ enum Tkdpo2k3k4kPowerGatingPolarityEnum *Polarity,
            /* [out][in] */ double *TurnOn) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadTOffLosses( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadTOnLosses( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadTotalLosses( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadConductionLosses( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefLevelLowVoltage( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefLevelLowVoltage( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefLevelLowCurrent( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefLevelLowCurrent( 
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ConductionCalculation( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ConductionCalculation( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RDSOnValue( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RDSOnValue( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VCESatValue( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VCESatValue( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MeasDisplayType( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MeasDisplayType( 
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfCycles( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisSwitchingLossVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureGating )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerGatingPolarityEnum Polarity,
            /* [in] */ double TurnOn);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadGating )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [out][in] */ enum Tkdpo2k3k4kPowerGatingPolarityEnum *Polarity,
            /* [out][in] */ double *TurnOn);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadTOffLosses )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadTOnLosses )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadTotalLosses )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadConductionLosses )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type,
            /* [in] */ double Mean,
            /* [in] */ double Min,
            /* [in] */ double Max);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLevelLowVoltage )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLevelLowVoltage )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLevelLowCurrent )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLevelLowCurrent )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConductionCalculation )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConductionCalculation )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDSOnValue )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDSOnValue )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VCESatValue )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VCESatValue )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeasDisplayType )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeasDisplayType )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfCycles )( 
            ITkdpo2k3k4kPowerAnalysisSwitchingLoss * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisSwitchingLossVtbl;

    interface ITkdpo2k3k4kPowerAnalysisSwitchingLoss
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisSwitchingLossVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ConfigureGating(This,Polarity,TurnOn)	\
    ( (This)->lpVtbl -> ConfigureGating(This,Polarity,TurnOn) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadGating(This,Polarity,TurnOn)	\
    ( (This)->lpVtbl -> ReadGating(This,Polarity,TurnOn) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOffLosses(This,Type,Mean,Min,Max)	\
    ( (This)->lpVtbl -> ReadTOffLosses(This,Type,Mean,Min,Max) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOnLosses(This,Type,Mean,Min,Max)	\
    ( (This)->lpVtbl -> ReadTOnLosses(This,Type,Mean,Min,Max) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTotalLosses(This,Type,Mean,Min,Max)	\
    ( (This)->lpVtbl -> ReadTotalLosses(This,Type,Mean,Min,Max) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadConductionLosses(This,Type,Mean,Min,Max)	\
    ( (This)->lpVtbl -> ReadConductionLosses(This,Type,Mean,Min,Max) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowVoltage(This,Type,Val)	\
    ( (This)->lpVtbl -> get_RefLevelLowVoltage(This,Type,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowVoltage(This,Type,Val)	\
    ( (This)->lpVtbl -> put_RefLevelLowVoltage(This,Type,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowCurrent(This,Type,Val)	\
    ( (This)->lpVtbl -> get_RefLevelLowCurrent(This,Type,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowCurrent(This,Type,Val)	\
    ( (This)->lpVtbl -> put_RefLevelLowCurrent(This,Type,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_ConductionCalculation(This,Val)	\
    ( (This)->lpVtbl -> get_ConductionCalculation(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_ConductionCalculation(This,Val)	\
    ( (This)->lpVtbl -> put_ConductionCalculation(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RDSOnValue(This,Val)	\
    ( (This)->lpVtbl -> get_RDSOnValue(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RDSOnValue(This,Val)	\
    ( (This)->lpVtbl -> put_RDSOnValue(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_VCESatValue(This,Val)	\
    ( (This)->lpVtbl -> get_VCESatValue(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_VCESatValue(This,Val)	\
    ( (This)->lpVtbl -> put_VCESatValue(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_MeasDisplayType(This,Val)	\
    ( (This)->lpVtbl -> get_MeasDisplayType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_MeasDisplayType(This,Val)	\
    ( (This)->lpVtbl -> put_MeasDisplayType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_NumberOfCycles(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfCycles(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisSwitchingLoss_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisHarmonics_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisHarmonics_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisHarmonics */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisHarmonics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90a51184-1f52-4243-a310-ba4b7e88347c")
    ITkdpo2k3k4kPowerAnalysisHarmonics : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetParameters( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference,
            /* [in] */ double FixedReference,
            /* [in] */ long NumberOfHarmonics,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetParameters( 
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum *FrequencyReference,
            /* [out][in] */ double *FixedReference,
            /* [out][in] */ long *NumberOfHarmonics,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsSourceEnum *HarmonicsSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureIEC( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class,
            /* [in] */ VARIANT_BOOL Filter,
            /* [in] */ double FundamentalCurrent,
            /* [in] */ VARIANT_BOOL Grouping,
            /* [in] */ double InputPower,
            /* [in] */ double LineFrequency,
            /* [in] */ double ObservationPeriod,
            /* [in] */ double PowerFactor) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadIEC( 
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsIECClassEnum *Class,
            /* [out][in] */ VARIANT_BOOL *Filter,
            /* [out][in] */ double *FundamentalCurrent,
            /* [out][in] */ VARIANT_BOOL *Grouping,
            /* [out][in] */ double *InputPower,
            /* [out][in] */ double *LineFrequency,
            /* [out][in] */ double *ObservationPeriod,
            /* [out][in] */ double *PowerFactor) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMIL( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating,
            /* [in] */ double UserCurrent,
            /* [in] */ double LineFrequency,
            /* [in] */ enum Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadMIL( 
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum *FundamentalCurrentCalculating,
            /* [out][in] */ double *UserCurrent,
            /* [out][in] */ double *LineFrequency,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum *PowerLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SaveResultsToFile( 
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Standard( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsStandardEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Standard( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsStandardEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplaySet( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplaySet( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayType( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayType( 
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OverallResults( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RMSResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_THDFResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_THDRResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicFrequencyResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicPhaseResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicAbsoluteMagnitudeResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicPercentageMagnitudeResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HamronicIECMaxResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicLimitResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicIECClassALimitResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicIECNormalLimitResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicIECHigherLimitResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HarmonicMILNormalLimitResult( 
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECFundamentalCurrentResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECHarmonic3Result( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECHarmonic5Result( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECPOHCResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECPOHLResult( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECInputPower( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IECPowerFactor( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisHarmonicsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetParameters )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference,
            /* [in] */ double FixedReference,
            /* [in] */ long NumberOfHarmonics,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetParameters )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum *FrequencyReference,
            /* [out][in] */ double *FixedReference,
            /* [out][in] */ long *NumberOfHarmonics,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsSourceEnum *HarmonicsSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureIEC )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class,
            /* [in] */ VARIANT_BOOL Filter,
            /* [in] */ double FundamentalCurrent,
            /* [in] */ VARIANT_BOOL Grouping,
            /* [in] */ double InputPower,
            /* [in] */ double LineFrequency,
            /* [in] */ double ObservationPeriod,
            /* [in] */ double PowerFactor);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadIEC )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsIECClassEnum *Class,
            /* [out][in] */ VARIANT_BOOL *Filter,
            /* [out][in] */ double *FundamentalCurrent,
            /* [out][in] */ VARIANT_BOOL *Grouping,
            /* [out][in] */ double *InputPower,
            /* [out][in] */ double *LineFrequency,
            /* [out][in] */ double *ObservationPeriod,
            /* [out][in] */ double *PowerFactor);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMIL )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating,
            /* [in] */ double UserCurrent,
            /* [in] */ double LineFrequency,
            /* [in] */ enum Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadMIL )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum *FundamentalCurrentCalculating,
            /* [out][in] */ double *UserCurrent,
            /* [out][in] */ double *LineFrequency,
            /* [out][in] */ enum Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum *PowerLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SaveResultsToFile )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ BSTR Filename);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Standard )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsStandardEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Standard )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsStandardEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplaySet )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplaySet )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayType )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayType )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ enum Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverallResults )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RMSResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_THDFResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_THDRResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicFrequencyResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicPhaseResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicAbsoluteMagnitudeResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicPercentageMagnitudeResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HamronicIECMaxResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicLimitResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicIECClassALimitResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicIECNormalLimitResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicIECHigherLimitResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HarmonicMILNormalLimitResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [in] */ long Harmonic,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECFundamentalCurrentResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECHarmonic3Result )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECHarmonic5Result )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerHamronicsPassFailEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECPOHCResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECPOHLResult )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECInputPower )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IECPowerFactor )( 
            ITkdpo2k3k4kPowerAnalysisHarmonics * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisHarmonicsVtbl;

    interface ITkdpo2k3k4kPowerAnalysisHarmonics
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisHarmonicsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisHarmonics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisHarmonics_SetParameters(This,FrequencyReference,FixedReference,NumberOfHarmonics,HarmonicsSource)	\
    ( (This)->lpVtbl -> SetParameters(This,FrequencyReference,FixedReference,NumberOfHarmonics,HarmonicsSource) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_GetParameters(This,FrequencyReference,FixedReference,NumberOfHarmonics,HarmonicsSource)	\
    ( (This)->lpVtbl -> GetParameters(This,FrequencyReference,FixedReference,NumberOfHarmonics,HarmonicsSource) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureIEC(This,Class,Filter,FundamentalCurrent,Grouping,InputPower,LineFrequency,ObservationPeriod,PowerFactor)	\
    ( (This)->lpVtbl -> ConfigureIEC(This,Class,Filter,FundamentalCurrent,Grouping,InputPower,LineFrequency,ObservationPeriod,PowerFactor) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_ReadIEC(This,Class,Filter,FundamentalCurrent,Grouping,InputPower,LineFrequency,ObservationPeriod,PowerFactor)	\
    ( (This)->lpVtbl -> ReadIEC(This,Class,Filter,FundamentalCurrent,Grouping,InputPower,LineFrequency,ObservationPeriod,PowerFactor) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureMIL(This,FundamentalCurrentCalculating,UserCurrent,LineFrequency,PowerLevel)	\
    ( (This)->lpVtbl -> ConfigureMIL(This,FundamentalCurrentCalculating,UserCurrent,LineFrequency,PowerLevel) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_ReadMIL(This,FundamentalCurrentCalculating,UserCurrent,LineFrequency,PowerLevel)	\
    ( (This)->lpVtbl -> ReadMIL(This,FundamentalCurrentCalculating,UserCurrent,LineFrequency,PowerLevel) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_SaveResultsToFile(This,Filename)	\
    ( (This)->lpVtbl -> SaveResultsToFile(This,Filename) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_Standard(This,Val)	\
    ( (This)->lpVtbl -> get_Standard(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_put_Standard(This,Val)	\
    ( (This)->lpVtbl -> put_Standard(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplaySet(This,Val)	\
    ( (This)->lpVtbl -> get_DisplaySet(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplaySet(This,Val)	\
    ( (This)->lpVtbl -> put_DisplaySet(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplayType(This,Val)	\
    ( (This)->lpVtbl -> get_DisplayType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplayType(This,Val)	\
    ( (This)->lpVtbl -> put_DisplayType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_OverallResults(This,Val)	\
    ( (This)->lpVtbl -> get_OverallResults(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_RMSResult(This,Val)	\
    ( (This)->lpVtbl -> get_RMSResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDFResult(This,Val)	\
    ( (This)->lpVtbl -> get_THDFResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDRResult(This,Val)	\
    ( (This)->lpVtbl -> get_THDRResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicFrequencyResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicFrequencyResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPhaseResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicPhaseResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicAbsoluteMagnitudeResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicAbsoluteMagnitudeResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPercentageMagnitudeResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicPercentageMagnitudeResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HamronicIECMaxResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HamronicIECMaxResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicLimitResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicLimitResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECClassALimitResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicIECClassALimitResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECNormalLimitResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicIECNormalLimitResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECHigherLimitResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicIECHigherLimitResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicMILNormalLimitResult(This,Harmonic,Val)	\
    ( (This)->lpVtbl -> get_HarmonicMILNormalLimitResult(This,Harmonic,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECFundamentalCurrentResult(This,Val)	\
    ( (This)->lpVtbl -> get_IECFundamentalCurrentResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic3Result(This,Val)	\
    ( (This)->lpVtbl -> get_IECHarmonic3Result(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic5Result(This,Val)	\
    ( (This)->lpVtbl -> get_IECHarmonic5Result(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHCResult(This,Val)	\
    ( (This)->lpVtbl -> get_IECPOHCResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHLResult(This,Val)	\
    ( (This)->lpVtbl -> get_IECPOHLResult(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECInputPower(This,Val)	\
    ( (This)->lpVtbl -> get_IECInputPower(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPowerFactor(This,Val)	\
    ( (This)->lpVtbl -> get_IECPowerFactor(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisHarmonics_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisRipple_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisRipple_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisRipple */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisRipple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26585825-23d0-4b40-a18d-2aab921c271b")
    ITkdpo2k3k4kPowerAnalysisRipple : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE DoVerticalAutoSet( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetOffsetToZero( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerRippleSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kPowerRippleSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Max( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mean( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Min( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StandardDeviation( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisRippleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DoVerticalAutoSet )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetOffsetToZero )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerRippleSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [in] */ enum Tkdpo2k3k4kPowerRippleSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Max )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mean )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Min )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardDeviation )( 
            ITkdpo2k3k4kPowerAnalysisRipple * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisRippleVtbl;

    interface ITkdpo2k3k4kPowerAnalysisRipple
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisRippleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisRipple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisRipple_DoVerticalAutoSet(This)	\
    ( (This)->lpVtbl -> DoVerticalAutoSet(This) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_SetOffsetToZero(This)	\
    ( (This)->lpVtbl -> SetOffsetToZero(This) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_Value(This,Val)	\
    ( (This)->lpVtbl -> get_Value(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_Max(This,Val)	\
    ( (This)->lpVtbl -> get_Max(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_Mean(This,Val)	\
    ( (This)->lpVtbl -> get_Mean(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_Min(This,Val)	\
    ( (This)->lpVtbl -> get_Min(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisRipple_get_StandardDeviation(This,Val)	\
    ( (This)->lpVtbl -> get_StandardDeviation(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisRipple_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisModulation_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisModulation_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisModulation */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce815345-78b5-4aae-b9b5-b379017bfbb0")
    ITkdpo2k3k4kPowerAnalysisModulation : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerModulationSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum Tkdpo2k3k4kPowerModulationSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerModulationTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kPowerModulationTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerModulationSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This,
            /* [in] */ enum Tkdpo2k3k4kPowerModulationSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerModulationTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kPowerAnalysisModulation * This,
            /* [in] */ enum Tkdpo2k3k4kPowerModulationTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisModulationVtbl;

    interface ITkdpo2k3k4kPowerAnalysisModulation
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisModulation_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisModulation_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisModulation_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisModulation_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisModulation_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kPowerAnalysisSafeOperatingArea */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kPowerAnalysisSafeOperatingArea;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8e501756-6d98-4948-8f40-57579c2d2581")
    ITkdpo2k3k4kPowerAnalysisSafeOperatingArea : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAxes( 
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type,
            /* [in] */ double YaxesMax,
            /* [in] */ double YaxesMin,
            /* [in] */ double XaxesMax,
            /* [in] */ double XaxesMin) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadAxes( 
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type,
            /* [out][in] */ double *YaxesMax,
            /* [out][in] */ double *YaxesMin,
            /* [out][in] */ double *XaxesMax,
            /* [out][in] */ double *XaxesMin) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMaskLimits( 
            /* [in] */ double MaxVoltage,
            /* [in] */ double MaxCurrent,
            /* [in] */ double MaxPower) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadMaskLimits( 
            /* [out][in] */ double *MaxVoltage,
            /* [out][in] */ double *MaxCurrent,
            /* [out][in] */ double *MaxPower) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetMaskPoints( 
            /* [in] */ SAFEARRAY * *Volts,
            /* [in] */ SAFEARRAY * *Amps) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetMaskPoints( 
            /* [out][in] */ SAFEARRAY * *Volts,
            /* [out][in] */ SAFEARRAY * *Amps) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfPoints( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PlotType( 
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActionOnViolation( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActionOnViolation( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaskState( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MaskState( 
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResultFailureSamples( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResultWaveformsAcquired( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResultTestState( 
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kPowerAnalysisSafeOperatingAreaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAxes )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type,
            /* [in] */ double YaxesMax,
            /* [in] */ double YaxesMin,
            /* [in] */ double XaxesMax,
            /* [in] */ double XaxesMin);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadAxes )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type,
            /* [out][in] */ double *YaxesMax,
            /* [out][in] */ double *YaxesMin,
            /* [out][in] */ double *XaxesMax,
            /* [out][in] */ double *XaxesMin);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMaskLimits )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ double MaxVoltage,
            /* [in] */ double MaxCurrent,
            /* [in] */ double MaxPower);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadMaskLimits )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [out][in] */ double *MaxVoltage,
            /* [out][in] */ double *MaxCurrent,
            /* [out][in] */ double *MaxPower);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetMaskPoints )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ SAFEARRAY * *Volts,
            /* [in] */ SAFEARRAY * *Amps);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetMaskPoints )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [out][in] */ SAFEARRAY * *Volts,
            /* [out][in] */ SAFEARRAY * *Amps);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfPoints )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotType )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionOnViolation )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionOnViolation )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaskState )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaskState )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [in] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultFailureSamples )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultWaveformsAcquired )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultTestState )( 
            ITkdpo2k3k4kPowerAnalysisSafeOperatingArea * This,
            /* [retval][out] */ enum Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum *Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kPowerAnalysisSafeOperatingAreaVtbl;

    interface ITkdpo2k3k4kPowerAnalysisSafeOperatingArea
    {
        CONST_VTBL struct ITkdpo2k3k4kPowerAnalysisSafeOperatingAreaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureAxes(This,Type,YaxesMax,YaxesMin,XaxesMax,XaxesMin)	\
    ( (This)->lpVtbl -> ConfigureAxes(This,Type,YaxesMax,YaxesMin,XaxesMax,XaxesMin) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadAxes(This,Type,YaxesMax,YaxesMin,XaxesMax,XaxesMin)	\
    ( (This)->lpVtbl -> ReadAxes(This,Type,YaxesMax,YaxesMin,XaxesMax,XaxesMin) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureMaskLimits(This,MaxVoltage,MaxCurrent,MaxPower)	\
    ( (This)->lpVtbl -> ConfigureMaskLimits(This,MaxVoltage,MaxCurrent,MaxPower) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadMaskLimits(This,MaxVoltage,MaxCurrent,MaxPower)	\
    ( (This)->lpVtbl -> ReadMaskLimits(This,MaxVoltage,MaxCurrent,MaxPower) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_SetMaskPoints(This,Volts,Amps)	\
    ( (This)->lpVtbl -> SetMaskPoints(This,Volts,Amps) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_GetMaskPoints(This,Volts,Amps)	\
    ( (This)->lpVtbl -> GetMaskPoints(This,Volts,Amps) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_NumberOfPoints(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfPoints(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_PlotType(This,Val)	\
    ( (This)->lpVtbl -> get_PlotType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_PlotType(This,Val)	\
    ( (This)->lpVtbl -> put_PlotType(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ActionOnViolation(This,Val)	\
    ( (This)->lpVtbl -> get_ActionOnViolation(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_ActionOnViolation(This,Val)	\
    ( (This)->lpVtbl -> put_ActionOnViolation(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_MaskState(This,Val)	\
    ( (This)->lpVtbl -> get_MaskState(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_MaskState(This,Val)	\
    ( (This)->lpVtbl -> put_MaskState(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultFailureSamples(This,Val)	\
    ( (This)->lpVtbl -> get_ResultFailureSamples(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultWaveformsAcquired(This,Val)	\
    ( (This)->lpVtbl -> get_ResultWaveformsAcquired(This,Val) ) 

#define ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultTestState(This,Val)	\
    ( (This)->lpVtbl -> get_ResultTestState(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequency_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequency_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequency */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a0204e3c-7052-4141-b327-29313f91464e")
    ITkdpo2k3k4kFrequency : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpectrumTraceDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpectrumTraceDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RFVsTimeTraceDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RFVsTimeTraceDisplayState( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SquelchState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SquelchState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SquelchThreshold( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SquelchThreshold( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RF( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRF **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfAverages( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfAverages( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AverageCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyMarker **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyTrace **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequency * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpectrumTraceDisplayState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpectrumTraceDisplayState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RFVsTimeTraceDisplayState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RFVsTimeTraceDisplayState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SquelchState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SquelchState )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SquelchThreshold )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SquelchThreshold )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RF )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRF **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfAverages )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfAverages )( 
            ITkdpo2k3k4kFrequency * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AverageCount )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyMarker **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            ITkdpo2k3k4kFrequency * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyTrace **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyVtbl;

    interface ITkdpo2k3k4kFrequency
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequency_get_SpectrumTraceDisplayState(This,Type,Val)	\
    ( (This)->lpVtbl -> get_SpectrumTraceDisplayState(This,Type,Val) ) 

#define ITkdpo2k3k4kFrequency_put_SpectrumTraceDisplayState(This,Type,Val)	\
    ( (This)->lpVtbl -> put_SpectrumTraceDisplayState(This,Type,Val) ) 

#define ITkdpo2k3k4kFrequency_get_RFVsTimeTraceDisplayState(This,Type,Val)	\
    ( (This)->lpVtbl -> get_RFVsTimeTraceDisplayState(This,Type,Val) ) 

#define ITkdpo2k3k4kFrequency_put_RFVsTimeTraceDisplayState(This,Type,Val)	\
    ( (This)->lpVtbl -> put_RFVsTimeTraceDisplayState(This,Type,Val) ) 

#define ITkdpo2k3k4kFrequency_get_SquelchState(This,Val)	\
    ( (This)->lpVtbl -> get_SquelchState(This,Val) ) 

#define ITkdpo2k3k4kFrequency_put_SquelchState(This,Val)	\
    ( (This)->lpVtbl -> put_SquelchState(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_SquelchThreshold(This,Val)	\
    ( (This)->lpVtbl -> get_SquelchThreshold(This,Val) ) 

#define ITkdpo2k3k4kFrequency_put_SquelchThreshold(This,Val)	\
    ( (This)->lpVtbl -> put_SquelchThreshold(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_RF(This,Val)	\
    ( (This)->lpVtbl -> get_RF(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_NumberOfAverages(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfAverages(This,Val) ) 

#define ITkdpo2k3k4kFrequency_put_NumberOfAverages(This,Val)	\
    ( (This)->lpVtbl -> put_NumberOfAverages(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_AverageCount(This,Val)	\
    ( (This)->lpVtbl -> get_AverageCount(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_Marker(This,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Val) ) 

#define ITkdpo2k3k4kFrequency_get_Trace(This,Val)	\
    ( (This)->lpVtbl -> get_Trace(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequency_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRF_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyRF_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyRF */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyRF;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12a7e13f-fa8e-457e-8dbf-6ec8af8592f1")
    ITkdpo2k3k4kFrequencyRF : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureVerticalParameters( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType,
            /* [in] */ double Scale,
            /* [in] */ double Position) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadVerticalParameters( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType,
            /* [out][in] */ double *Scale,
            /* [out][in] */ double *Position) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureManualDetectionMethod( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadManualDetectionMethod( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [out][in] */ enum Tkdpo2k3k4kFrequencyRFDetectionMethodEnum *Method) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpectogramState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpectogramState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpectogramNumberOfSlices( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpectogramSelectSlice( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpectogramSelectSlice( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DetectionMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFDetectionModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DetectionMode( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFDetectionModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpectrumMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencySpectrumModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpectrumMode( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyAndSpan( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFFrequencyAndSpan **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFAmplitude **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFBandwidth **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyRFVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyRF * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyRF * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureVerticalParameters )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType,
            /* [in] */ double Scale,
            /* [in] */ double Position);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadVerticalParameters )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType,
            /* [out][in] */ double *Scale,
            /* [out][in] */ double *Position);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureManualDetectionMethod )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadManualDetectionMethod )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type,
            /* [out][in] */ enum Tkdpo2k3k4kFrequencyRFDetectionMethodEnum *Method);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpectogramState )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpectogramState )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpectogramNumberOfSlices )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpectogramSelectSlice )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpectogramSelectSlice )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetectionMode )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFDetectionModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DetectionMode )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFDetectionModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpectrumMode )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencySpectrumModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpectrumMode )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyAndSpan )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFFrequencyAndSpan **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFAmplitude **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            ITkdpo2k3k4kFrequencyRF * This,
            /* [retval][out] */ ITkdpo2k3k4kFrequencyRFBandwidth **Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyRFVtbl;

    interface ITkdpo2k3k4kFrequencyRF
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyRFVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyRF_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyRF_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyRF_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyRF_ConfigureVerticalParameters(This,RFTraceType,Scale,Position)	\
    ( (This)->lpVtbl -> ConfigureVerticalParameters(This,RFTraceType,Scale,Position) ) 

#define ITkdpo2k3k4kFrequencyRF_ReadVerticalParameters(This,RFTraceType,Scale,Position)	\
    ( (This)->lpVtbl -> ReadVerticalParameters(This,RFTraceType,Scale,Position) ) 

#define ITkdpo2k3k4kFrequencyRF_ConfigureManualDetectionMethod(This,Type,Method)	\
    ( (This)->lpVtbl -> ConfigureManualDetectionMethod(This,Type,Method) ) 

#define ITkdpo2k3k4kFrequencyRF_ReadManualDetectionMethod(This,Type,Method)	\
    ( (This)->lpVtbl -> ReadManualDetectionMethod(This,Type,Method) ) 

#define ITkdpo2k3k4kFrequencyRF_get_SpectogramState(This,Val)	\
    ( (This)->lpVtbl -> get_SpectogramState(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_put_SpectogramState(This,Val)	\
    ( (This)->lpVtbl -> put_SpectogramState(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_SpectogramNumberOfSlices(This,Val)	\
    ( (This)->lpVtbl -> get_SpectogramNumberOfSlices(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_SpectogramSelectSlice(This,Val)	\
    ( (This)->lpVtbl -> get_SpectogramSelectSlice(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_put_SpectogramSelectSlice(This,Val)	\
    ( (This)->lpVtbl -> put_SpectogramSelectSlice(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_DetectionMode(This,Val)	\
    ( (This)->lpVtbl -> get_DetectionMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_put_DetectionMode(This,Val)	\
    ( (This)->lpVtbl -> put_DetectionMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_SpectrumMode(This,Val)	\
    ( (This)->lpVtbl -> get_SpectrumMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_put_SpectrumMode(This,Val)	\
    ( (This)->lpVtbl -> put_SpectrumMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_FrequencyAndSpan(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyAndSpan(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_Amplitude(This,Val)	\
    ( (This)->lpVtbl -> get_Amplitude(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRF_get_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyRF_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyRFFrequencyAndSpan */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyRFFrequencyAndSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62b57428-bedd-4900-97d5-4459b6414912")
    ITkdpo2k3k4kFrequencyRFFrequencyAndSpan : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CenterFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CenterFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Span( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Span( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyRFFrequencyAndSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterFrequency )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CenterFrequency )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Span )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Span )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            ITkdpo2k3k4kFrequencyRFFrequencyAndSpan * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyRFFrequencyAndSpanVtbl;

    interface ITkdpo2k3k4kFrequencyRFFrequencyAndSpan
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyRFFrequencyAndSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_CenterFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_CenterFrequency(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_CenterFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_CenterFrequency(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Span(This,Val)	\
    ( (This)->lpVtbl -> get_Span(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Span(This,Val)	\
    ( (This)->lpVtbl -> put_Span(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFAmplitude_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFAmplitude_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyRFAmplitude */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyRFAmplitude;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73020f0c-433f-4999-a4f3-f34854f7b8b9")
    ITkdpo2k3k4kFrequencyRFAmplitude : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAutoRefLevel( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalPosition( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalPosition( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScale( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalScale( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalUnits( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalUnits( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyRFAmplitudeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAutoRefLevel )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevel )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceLevel )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalPosition )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalPosition )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScale )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalScale )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalUnits )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalUnits )( 
            ITkdpo2k3k4kFrequencyRFAmplitude * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyRFAmplitudeVtbl;

    interface ITkdpo2k3k4kFrequencyRFAmplitude
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyRFAmplitudeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyRFAmplitude_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyRFAmplitude_SetAutoRefLevel(This)	\
    ( (This)->lpVtbl -> SetAutoRefLevel(This) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_get_ReferenceLevel(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceLevel(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_put_ReferenceLevel(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceLevel(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalPosition(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalPosition(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalPosition(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalPosition(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalScale(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalScale(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalUnits(This,Val)	\
    ( (This)->lpVtbl -> get_VerticalUnits(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalUnits(This,Val)	\
    ( (This)->lpVtbl -> put_VerticalUnits(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyRFAmplitude_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyRFBandwidth_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyRFBandwidth_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyRFBandwidth */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyRFBandwidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c2fdf748-a96b-4048-8b72-00fb0e3ccc48")
    ITkdpo2k3k4kFrequencyRFBandwidth : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RBWMode( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRBWModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RBWMode( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRBWModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RBW( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RBW( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SpanRBWRatio( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SpanRBWRatio( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFWindowEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Window( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFWindowEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyRFBandwidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RBWMode )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRBWModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RBWMode )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRBWModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RBW )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RBW )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpanRBWRatio )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpanRBWRatio )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFWindowEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Window )( 
            ITkdpo2k3k4kFrequencyRFBandwidth * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFWindowEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyRFBandwidthVtbl;

    interface ITkdpo2k3k4kFrequencyRFBandwidth
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyRFBandwidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyRFBandwidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyRFBandwidth_get_RBWMode(This,Val)	\
    ( (This)->lpVtbl -> get_RBWMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_put_RBWMode(This,Val)	\
    ( (This)->lpVtbl -> put_RBWMode(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_get_RBW(This,Val)	\
    ( (This)->lpVtbl -> get_RBW(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_put_RBW(This,Val)	\
    ( (This)->lpVtbl -> put_RBW(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_get_SpanRBWRatio(This,Val)	\
    ( (This)->lpVtbl -> get_SpanRBWRatio(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_put_SpanRBWRatio(This,Val)	\
    ( (This)->lpVtbl -> put_SpanRBWRatio(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_get_Window(This,Val)	\
    ( (This)->lpVtbl -> get_Window(This,Val) ) 

#define ITkdpo2k3k4kFrequencyRFBandwidth_put_Window(This,Val)	\
    ( (This)->lpVtbl -> put_Window(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyRFBandwidth_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kMeasurementsFrequency_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kMeasurementsFrequency_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kMeasurementsFrequency */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kMeasurementsFrequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4be0cc8e-20d3-4bf9-879e-2fec910dd06f")
    ITkdpo2k3k4kMeasurementsFrequency : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChannelPower( 
            /* [in] */ double Bandwidth) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadChannelPower( 
            /* [out][in] */ double *Bandwidth,
            /* [out][in] */ double *Power) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureACPR( 
            /* [in] */ long AdjacentChannels,
            /* [in] */ double ChannelBandwidth,
            /* [in] */ double ChannelSpacing) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadACPR( 
            /* [out][in] */ long *AdjacentChannels,
            /* [out][in] */ double *ChannelBandwidth,
            /* [out][in] */ double *ChannelSpacing,
            /* [out][in] */ double *Power,
            /* [out][in] */ double *LowerArea1Ratio,
            /* [out][in] */ double *LowerArea2Ratio,
            /* [out][in] */ double *LowerArea3Ratio,
            /* [out][in] */ double *UpperArea1Ratio,
            /* [out][in] */ double *UpperArea2Ratio,
            /* [out][in] */ double *UpperArea3Ratio) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureOBW( 
            /* [in] */ double AnalysisBandwidth,
            /* [in] */ double PercentageDown) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadOBW( 
            /* [out][in] */ double *AnalysisBandwidth,
            /* [out][in] */ double *PercentageDown,
            /* [out][in] */ double *LowerFrequency,
            /* [out][in] */ double *UpperFrequency,
            /* [out][in] */ double *Power) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kMeasurementsFrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kMeasurementsFrequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kMeasurementsFrequency * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChannelPower )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [in] */ double Bandwidth);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadChannelPower )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [out][in] */ double *Bandwidth,
            /* [out][in] */ double *Power);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureACPR )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [in] */ long AdjacentChannels,
            /* [in] */ double ChannelBandwidth,
            /* [in] */ double ChannelSpacing);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadACPR )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [out][in] */ long *AdjacentChannels,
            /* [out][in] */ double *ChannelBandwidth,
            /* [out][in] */ double *ChannelSpacing,
            /* [out][in] */ double *Power,
            /* [out][in] */ double *LowerArea1Ratio,
            /* [out][in] */ double *LowerArea2Ratio,
            /* [out][in] */ double *LowerArea3Ratio,
            /* [out][in] */ double *UpperArea1Ratio,
            /* [out][in] */ double *UpperArea2Ratio,
            /* [out][in] */ double *UpperArea3Ratio);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOBW )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [in] */ double AnalysisBandwidth,
            /* [in] */ double PercentageDown);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadOBW )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [out][in] */ double *AnalysisBandwidth,
            /* [out][in] */ double *PercentageDown,
            /* [out][in] */ double *LowerFrequency,
            /* [out][in] */ double *UpperFrequency,
            /* [out][in] */ double *Power);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kMeasurementsFrequency * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kMeasurementsFrequencyVtbl;

    interface ITkdpo2k3k4kMeasurementsFrequency
    {
        CONST_VTBL struct ITkdpo2k3k4kMeasurementsFrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kMeasurementsFrequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kMeasurementsFrequency_ConfigureChannelPower(This,Bandwidth)	\
    ( (This)->lpVtbl -> ConfigureChannelPower(This,Bandwidth) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_ReadChannelPower(This,Bandwidth,Power)	\
    ( (This)->lpVtbl -> ReadChannelPower(This,Bandwidth,Power) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_ConfigureACPR(This,AdjacentChannels,ChannelBandwidth,ChannelSpacing)	\
    ( (This)->lpVtbl -> ConfigureACPR(This,AdjacentChannels,ChannelBandwidth,ChannelSpacing) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_ReadACPR(This,AdjacentChannels,ChannelBandwidth,ChannelSpacing,Power,LowerArea1Ratio,LowerArea2Ratio,LowerArea3Ratio,UpperArea1Ratio,UpperArea2Ratio,UpperArea3Ratio)	\
    ( (This)->lpVtbl -> ReadACPR(This,AdjacentChannels,ChannelBandwidth,ChannelSpacing,Power,LowerArea1Ratio,LowerArea2Ratio,LowerArea3Ratio,UpperArea1Ratio,UpperArea2Ratio,UpperArea3Ratio) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_ConfigureOBW(This,AnalysisBandwidth,PercentageDown)	\
    ( (This)->lpVtbl -> ConfigureOBW(This,AnalysisBandwidth,PercentageDown) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_ReadOBW(This,AnalysisBandwidth,PercentageDown,LowerFrequency,UpperFrequency,Power)	\
    ( (This)->lpVtbl -> ReadOBW(This,AnalysisBandwidth,PercentageDown,LowerFrequency,UpperFrequency,Power) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kMeasurementsFrequency_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kMeasurementsFrequency_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyMarker_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyMarker_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyMarker */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyMarker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b73a8f1c-7f80-47f2-af0a-411a3fd078be")
    ITkdpo2k3k4kFrequencyMarker : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE MoveRefToCentre( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadReference( 
            /* [out][in] */ double *Frequency,
            /* [out][in] */ double *Amplitude) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadManual( 
            /* [in] */ long Marker,
            /* [out][in] */ double *HorizontalValue,
            /* [out][in] */ double *HorizontalDelta,
            /* [out][in] */ double *VerticalValue,
            /* [out][in] */ double *VerticalDelta) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureManual( 
            /* [in] */ long Marker,
            /* [in] */ double HorizontalValue) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePeak( 
            /* [in] */ long MaximumMarkers,
            /* [in] */ double Threshold,
            /* [in] */ double Excursion) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadPeak( 
            /* [out][in] */ VARIANT_BOOL *State,
            /* [out][in] */ long *MaximumMarkers,
            /* [out][in] */ double *Threshold,
            /* [out][in] */ double *Excursion) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ManualState( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ManualState( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFMarkerTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFMarkerTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyMarkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyMarker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyMarker * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *MoveRefToCentre )( 
            ITkdpo2k3k4kFrequencyMarker * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadReference )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [out][in] */ double *Frequency,
            /* [out][in] */ double *Amplitude);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadManual )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ long Marker,
            /* [out][in] */ double *HorizontalValue,
            /* [out][in] */ double *HorizontalDelta,
            /* [out][in] */ double *VerticalValue,
            /* [out][in] */ double *VerticalDelta);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureManual )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ long Marker,
            /* [in] */ double HorizontalValue);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePeak )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ long MaximumMarkers,
            /* [in] */ double Threshold,
            /* [in] */ double Excursion);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadPeak )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [out][in] */ VARIANT_BOOL *State,
            /* [out][in] */ long *MaximumMarkers,
            /* [out][in] */ double *Threshold,
            /* [out][in] */ double *Excursion);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ManualState )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ManualState )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [retval][out] */ enum Tkdpo2k3k4kFrequencyRFMarkerTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITkdpo2k3k4kFrequencyMarker * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencyRFMarkerTypeEnum Val);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyMarkerVtbl;

    interface ITkdpo2k3k4kFrequencyMarker
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyMarkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyMarker_MoveRefToCentre(This)	\
    ( (This)->lpVtbl -> MoveRefToCentre(This) ) 

#define ITkdpo2k3k4kFrequencyMarker_ReadReference(This,Frequency,Amplitude)	\
    ( (This)->lpVtbl -> ReadReference(This,Frequency,Amplitude) ) 

#define ITkdpo2k3k4kFrequencyMarker_ReadManual(This,Marker,HorizontalValue,HorizontalDelta,VerticalValue,VerticalDelta)	\
    ( (This)->lpVtbl -> ReadManual(This,Marker,HorizontalValue,HorizontalDelta,VerticalValue,VerticalDelta) ) 

#define ITkdpo2k3k4kFrequencyMarker_ConfigureManual(This,Marker,HorizontalValue)	\
    ( (This)->lpVtbl -> ConfigureManual(This,Marker,HorizontalValue) ) 

#define ITkdpo2k3k4kFrequencyMarker_ConfigurePeak(This,MaximumMarkers,Threshold,Excursion)	\
    ( (This)->lpVtbl -> ConfigurePeak(This,MaximumMarkers,Threshold,Excursion) ) 

#define ITkdpo2k3k4kFrequencyMarker_ReadPeak(This,State,MaximumMarkers,Threshold,Excursion)	\
    ( (This)->lpVtbl -> ReadPeak(This,State,MaximumMarkers,Threshold,Excursion) ) 

#define ITkdpo2k3k4kFrequencyMarker_get_ManualState(This,Val)	\
    ( (This)->lpVtbl -> get_ManualState(This,Val) ) 

#define ITkdpo2k3k4kFrequencyMarker_put_ManualState(This,Val)	\
    ( (This)->lpVtbl -> put_ManualState(This,Val) ) 

#define ITkdpo2k3k4kFrequencyMarker_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define ITkdpo2k3k4kFrequencyMarker_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyMarker_INTERFACE_DEFINED__ */


#ifndef __ITkdpo2k3k4kFrequencyTrace_INTERFACE_DEFINED__
#define __ITkdpo2k3k4kFrequencyTrace_INTERFACE_DEFINED__

/* interface ITkdpo2k3k4kFrequencyTrace */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITkdpo2k3k4kFrequencyTrace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf3df10b-23dc-4de0-81a0-7d43469a502c")
    ITkdpo2k3k4kFrequencyTrace : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchY( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source,
            /* [out][in] */ SAFEARRAY * *TraceArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadY( 
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source,
            /* [out][in] */ SAFEARRAY * *TraceArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITkdpo2k3k4kFrequencyTraceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITkdpo2k3k4kFrequencyTrace * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITkdpo2k3k4kFrequencyTrace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITkdpo2k3k4kFrequencyTrace * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchY )( 
            ITkdpo2k3k4kFrequencyTrace * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source,
            /* [out][in] */ SAFEARRAY * *TraceArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadY )( 
            ITkdpo2k3k4kFrequencyTrace * This,
            /* [in] */ enum Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source,
            /* [out][in] */ SAFEARRAY * *TraceArray,
            /* [out][in] */ double *InitialX,
            /* [out][in] */ double *XIncrement);
        
        END_INTERFACE
    } ITkdpo2k3k4kFrequencyTraceVtbl;

    interface ITkdpo2k3k4kFrequencyTrace
    {
        CONST_VTBL struct ITkdpo2k3k4kFrequencyTraceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITkdpo2k3k4kFrequencyTrace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITkdpo2k3k4kFrequencyTrace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITkdpo2k3k4kFrequencyTrace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITkdpo2k3k4kFrequencyTrace_FetchY(This,Source,TraceArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchY(This,Source,TraceArray,InitialX,XIncrement) ) 

#define ITkdpo2k3k4kFrequencyTrace_ReadY(This,Source,TraceArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> ReadY(This,Source,TraceArray,InitialX,XIncrement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITkdpo2k3k4kFrequencyTrace_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Tkdpo2k3k4k;

#ifdef __cplusplus

class DECLSPEC_UUID("d8fb684c-85e3-4dc5-8cd8-811133e02cc6")
Tkdpo2k3k4k;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kChannel;

#ifdef __cplusplus

class DECLSPEC_UUID("d74a2f48-be2c-4176-b604-c221a8cadbea")
Tkdpo2k3k4kChannel;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kBus;

#ifdef __cplusplus

class DECLSPEC_UUID("dda182bf-3a73-4580-97f3-61a177c0e876")
Tkdpo2k3k4kBus;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kMath;

#ifdef __cplusplus

class DECLSPEC_UUID("fd30129f-1984-47f0-8a9b-aa580d73d9e7")
Tkdpo2k3k4kMath;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kMeasurementSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("9967dc38-f144-4780-8f79-5a0447bb9846")
Tkdpo2k3k4kMeasurementSlot;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kSearch;

#ifdef __cplusplus

class DECLSPEC_UUID("f6958577-3bde-47ed-8698-5952fd72c928")
Tkdpo2k3k4kSearch;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kReference;

#ifdef __cplusplus

class DECLSPEC_UUID("d036209f-01b0-4323-8dcf-dcc37c01def9")
Tkdpo2k3k4kReference;
#endif

EXTERN_C const CLSID CLSID_Tkdpo2k3k4kDigitalChannel;

#ifdef __cplusplus

class DECLSPEC_UUID("44cf593b-4046-46aa-9046-e42cdcb091bb")
Tkdpo2k3k4kDigitalChannel;
#endif
#endif /* __Tkdpo2k3k4kLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


