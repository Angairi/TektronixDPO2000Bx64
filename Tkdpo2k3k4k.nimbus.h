/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#include "_Tkdpo2k3k4k.h"

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INTERPOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INTERPOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUM_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUM_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUM_ENVELOPES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUM_ENVELOPES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_MIN_NUM_PTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORZ_MIN_NUM_PTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACQUISITION_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACQUISITION_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORZ_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACQUISITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACQUISITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INITIATE_CONTINUOUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INITIATE_CONTINUOUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CHANNEL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CHANNEL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX_INPUT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAX_INPUT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_ATTENUATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_ATTENUATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SENSE_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_HIGH_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_HIGH_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_LOW_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_LOW_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_MID_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_MID_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_MODIFIER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_MODIFIER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AC_LINE_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_AC_LINE_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_LINE_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_LINE_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_SIGNAL_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_SIGNAL_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_ACQUISITIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUN_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUN_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SINGLE_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SINGLE_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAGNI_VU_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAGNI_VU_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLING_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_RATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_POINTS_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_OF_POINTS_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CAN_BIT_RATE_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IS_CLOCKED_PARALLEL_BUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_IS_CLOCKED_PARALLEL_BUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232_DELIMITER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232_DELIMITER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232_DISPLAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232_DISPLAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232TX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232TX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232RX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232RX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPI_FRAMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPI_FRAMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPI_IDLE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPI_IDLE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DDT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRACK_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRACK_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE13 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE13 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_V_DELTA ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ALTERNATIVE_READOUT1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ALTERNATIVE_READOUT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_READOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_READOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION9 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION10 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION11 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION102 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION12 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION103 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION13 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION104 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BACK_LIGHT_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_BACK_LIGHT_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GRATICULE_STYLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GRATICULE_STYLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PERSISTENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PERSISTENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PERSISTENCE_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WAVEFORM_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WAVEFORM_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GRATICULE_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GRATICULE_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DOTS_ONLY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DOTS_ONLY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_MESSAGE_BOX ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_MESSAGE_BOX ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_CAPTURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_CAPTURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INK_SAVER ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INK_SAVER ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAIN_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAIN_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION14 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION14 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MATH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_EXPRESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_EXPRESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_GATING_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_GATING_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WINDOW ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WINDOW ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAGNITUDE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAGNITUDE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEASUREMENTSLOT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_DIRECTION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_DIRECTION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAXIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MINIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_WEIGHTING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_WEIGHTING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAVE_BUTTON_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAVE_BUTTON_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMAGE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMAGE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMAGE_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMAGE_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INK_SAVER_PALETTE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INK_SAVER_PALETTE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WAVEFORM_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WAVEFORM_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAVE_WAVE_FORM_FILE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAVE_WAVE_FORM_FILE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SEARCH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SEARCH_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SEARCH_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TOTAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_B_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_B_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_B_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_B_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CURRENT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_EVENT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_EVENT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGERB_BY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGERB_BY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_ATTENUATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_ATTENUATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNIT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_A_HOLDOFF_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_A_HOLDOFF_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LESS_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LESS_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MORE_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MORE_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UPPER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_UPPER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOWER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LOWER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOWER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LOWER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UPPER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_UPPER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HOLD_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HOLD_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SET_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SET_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELTA_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FIELD_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FIELD_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STANDARD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_ON ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_ON ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_LINE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_LINE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_SCAN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_SCAN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_SYNC_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_SYNC_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HD_TV_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HD_TV_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LEVEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL_ENUM2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SLOPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SLOPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_SERIAL_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_AUX_IN_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SENSITIVITY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SENSITIVITY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_YUNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_YUNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TEKVPI_PROBE_DEGAUSS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TERMINATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BANDWIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_BANDWIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BANDWIDTH_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DESKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DESKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION17 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION17 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SERIAL_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SIGNAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_SIGNAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TERMINATION_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INVERT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INVERT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION15 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION15 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL3 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITALCHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL4 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION18 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION18 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION16 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION16 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_COMPOSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_COMPOSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FILLTER_VU_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FILLTER_VU_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IO_SESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TOTAL_MARKS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREE_MARKS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_END ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_FOCUS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_MARKS_IN_COLUMN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_OWNER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_METHOD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_METHOD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_UNIT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_UNIT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FRONT_PANEL_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FRONT_PANEL_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VOLTAGE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VOLTAGE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CURRENT_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CURRENT_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INDICATOR ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_INDICATOR ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_FREQUENCY_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_set_ALL_MEAS_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_APPARENT_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_I_CREST_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PHASE_ANGLE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POWER_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REACTIVE_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRUE_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VRMS ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IRMS ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_V_CREST_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDUCTION_CALCULATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDUCTION_CALCULATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RDS_ON_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RDS_ON_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VCE_SAT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VCE_SAT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_CYCLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STANDARD2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_SET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_SET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_OVERALL_RESULTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RMS_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THDF_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THDR_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_FUNDAMENTAL_CURRENT_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_HARMONIC3_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_HARMONIC5_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IECPOHC_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IECPOHL_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_INPUT_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_POWER_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE11 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE11 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAN2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD_DEVIATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE12 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE12 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_POINTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PLOT_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_PLOT_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACTION_ON_VIOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACTION_ON_VIOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MASK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MASK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_FAILURE_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_WAVEFORMS_ACQUIRED ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_TEST_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SQUELCH_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SQUELCH_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SQUELCH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SQUELCH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_OF_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AVERAGE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTOGRAM_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_NUMBER_OF_SLICES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_SELECT_SLICE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTOGRAM_SELECT_SLICE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DETECTION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_DETECTION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTRUM_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTRUM_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CENTER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_CENTER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RBW_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RBW_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RBW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_RBW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPANRBW_RATIO ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPANRBW_RATIO ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WINDOW2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_WINDOW2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MANUAL_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_MANUAL_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );


template <typename InterfaceType>
ViStatus GetChannelInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannels> spChannels;
		status = GetDriverInterface(Vi, &spChannels);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kChannel> spChannel;
				hr = spChannels->get_Item(CComBSTR(strIdentifier), &spChannel);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spChannel);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kChannel interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetBusInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBuses> spBuses;
		status = GetDriverInterface(Vi, &spBuses);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kBus> spBus;
				hr = spBuses->get_Item(CComBSTR(strIdentifier), &spBus);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spBus);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kBus interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetMathInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMaths> spMaths;
		status = GetDriverInterface(Vi, &spMaths);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kMath> spMath;
				hr = spMaths->get_Item(CComBSTR(strIdentifier), &spMath);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spMath);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kMath interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetMeasurementSlotInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
		status = GetDriverInterface(Vi, &spMeasurements);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot;
				hr = spMeasurements->get_Item(CComBSTR(strIdentifier), &spMeasurementSlot);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spMeasurementSlot);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kMeasurementSlot interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetSearchInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearches> spSearches;
		status = GetDriverInterface(Vi, &spSearches);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kSearch> spSearch;
				hr = spSearches->get_Item(CComBSTR(strIdentifier), &spSearch);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spSearch);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kSearch interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetReferenceInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReferences> spReferences;
		status = GetDriverInterface(Vi, &spReferences);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kReference> spReference;
				hr = spReferences->get_Item(CComBSTR(strIdentifier), &spReference);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spReference);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kReference interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

template <typename InterfaceType>
ViStatus GetDigitalChannelInterfaces(ViSession Vi, ViConstString Name, bool bAcceptRange, CInterfaceArray<InterfaceType>& rgInterfaces)
{
	ViStatus status = VI_SUCCESS;
	HRESULT hr;

	CString strIdentifier;
	CRepCapSelector sel(Name);
	int nCount;
	status = sel.GetIdentifierCount(Vi, bAcceptRange, &nCount);
	for (int i = 0; i < nCount && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannels> spDigitalChannels;
		status = GetDriverInterface(Vi, &spDigitalChannels);
		if (status == VI_SUCCESS)
		{
			status = sel.GetIdentifierAtLevel(Vi, bAcceptRange, i, 0, strIdentifier);
			if (status == VI_SUCCESS)
			{
				CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel;
				hr = spDigitalChannels->get_Item(CComBSTR(strIdentifier), &spDigitalChannel);
				status = TranslateHRESULT(Vi, hr);
				if (status == VI_SUCCESS)
				{
					CComQIPtr<InterfaceType> spInterface(spDigitalChannel);
					if (spInterface != NULL)
					{
						rgInterfaces.Add(spInterface);
					}
					else
					{
						ATLASSERT(!_T("Couldn't retrieve ITkdpo2k3k4kDigitalChannel interface."));
						status = VI_ERROR;
					}
				}
			}
		}
	}

	return status;
}

