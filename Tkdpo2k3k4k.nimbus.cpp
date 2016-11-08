/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "StdAfx.h"

#include "Tkdpo2k3k4k.h"
#include "Tkdpo2k3k4k.nimbus.h"


///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated methods (called from NTL)
//

CString GetPrefix()
{
	return _T("Tkdpo2k3k4k");
}

void InitializeAttributeMap(CIviCAttributeMap* pMap)
{
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_DESCRIPTION,                Tkdpo2k3k4k_get_SPECIFIC_DRIVER_DESCRIPTION,                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_PREFIX,                     Tkdpo2k3k4k_get_SPECIFIC_DRIVER_PREFIX,                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_VENDOR,                     Tkdpo2k3k4k_get_SPECIFIC_DRIVER_VENDOR,                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_REVISION,                   Tkdpo2k3k4k_get_SPECIFIC_DRIVER_REVISION,                   NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_RANGE_CHECK,                                Tkdpo2k3k4k_get_RANGE_CHECK,                                Tkdpo2k3k4k_set_RANGE_CHECK                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_QUERY_INSTRUMENT_STATUS,                    Tkdpo2k3k4k_get_QUERY_INSTRUMENT_STATUS,                    Tkdpo2k3k4k_set_QUERY_INSTRUMENT_STATUS                     );
	pMap->Add(TKDPO2K3K4K_ATTR_CACHE,                                      Tkdpo2k3k4k_get_CACHE,                                      Tkdpo2k3k4k_set_CACHE                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_SIMULATE,                                   Tkdpo2k3k4k_get_SIMULATE,                                   Tkdpo2k3k4k_set_SIMULATE                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_RECORD_COERCIONS,                           Tkdpo2k3k4k_get_RECORD_COERCIONS,                           Tkdpo2k3k4k_set_RECORD_COERCIONS                            );
	pMap->Add(TKDPO2K3K4K_ATTR_INTERCHANGE_CHECK,                          Tkdpo2k3k4k_get_INTERCHANGE_CHECK,                          Tkdpo2k3k4k_set_INTERCHANGE_CHECK                           );
	pMap->Add(TKDPO2K3K4K_ATTR_LOGICAL_NAME,                               Tkdpo2k3k4k_get_LOGICAL_NAME,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IO_RESOURCE_DESCRIPTOR,                     Tkdpo2k3k4k_get_IO_RESOURCE_DESCRIPTOR,                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DRIVER_SETUP,                               Tkdpo2k3k4k_get_DRIVER_SETUP,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_GROUP_CAPABILITIES,                         Tkdpo2k3k4k_get_GROUP_CAPABILITIES,                         NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SUPPORTED_INSTRUMENT_MODELS,                Tkdpo2k3k4k_get_SUPPORTED_INSTRUMENT_MODELS,                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_INSTRUMENT_FIRMWARE_REVISION,               Tkdpo2k3k4k_get_INSTRUMENT_FIRMWARE_REVISION,               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_INSTRUMENT_MANUFACTURER,                    Tkdpo2k3k4k_get_INSTRUMENT_MANUFACTURER,                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_INSTRUMENT_MODEL,                           Tkdpo2k3k4k_get_INSTRUMENT_MODEL,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_INTERPOLATION,                              Tkdpo2k3k4k_get_INTERPOLATION,                              Tkdpo2k3k4k_set_INTERPOLATION                               );
	pMap->Add(TKDPO2K3K4K_ATTR_NUM_AVERAGES,                               Tkdpo2k3k4k_get_NUM_AVERAGES,                               Tkdpo2k3k4k_set_NUM_AVERAGES                                );
	pMap->Add(TKDPO2K3K4K_ATTR_NUM_ENVELOPES,                              Tkdpo2k3k4k_get_NUM_ENVELOPES,                              Tkdpo2k3k4k_set_NUM_ENVELOPES                               );
	pMap->Add(TKDPO2K3K4K_ATTR_HORZ_MIN_NUM_PTS,                           Tkdpo2k3k4k_get_HORZ_MIN_NUM_PTS,                           Tkdpo2k3k4k_set_HORZ_MIN_NUM_PTS                            );
	pMap->Add(TKDPO2K3K4K_ATTR_HORZ_RECORD_LENGTH,                         Tkdpo2k3k4k_get_HORZ_RECORD_LENGTH,                         NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SAMPLE_MODE,                                Tkdpo2k3k4k_get_SAMPLE_MODE,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_HORZ_SAMPLE_RATE,                           Tkdpo2k3k4k_get_HORZ_SAMPLE_RATE,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_ACQUISITION_START_TIME,                     Tkdpo2k3k4k_get_ACQUISITION_START_TIME,                     Tkdpo2k3k4k_set_ACQUISITION_START_TIME                      );
	pMap->Add(TKDPO2K3K4K_ATTR_HORZ_TIME_PER_RECORD,                       Tkdpo2k3k4k_get_HORZ_TIME_PER_RECORD,                       Tkdpo2k3k4k_set_HORZ_TIME_PER_RECORD                        );
	pMap->Add(TKDPO2K3K4K_ATTR_ACQUISITION_TYPE,                           Tkdpo2k3k4k_get_ACQUISITION_TYPE,                           Tkdpo2k3k4k_set_ACQUISITION_TYPE                            );
	pMap->Add(TKDPO2K3K4K_ATTR_INITIATE_CONTINUOUS,                        Tkdpo2k3k4k_get_INITIATE_CONTINUOUS,                        Tkdpo2k3k4k_set_INITIATE_CONTINUOUS                         );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_COUPLING,                          Tkdpo2k3k4k_get_VERTICAL_COUPLING,                          Tkdpo2k3k4k_set_VERTICAL_COUPLING                           );
	pMap->Add(TKDPO2K3K4K_ATTR_CHANNEL_ENABLED,                            Tkdpo2k3k4k_get_CHANNEL_ENABLED,                            Tkdpo2k3k4k_set_CHANNEL_ENABLED                             );
	pMap->Add(TKDPO2K3K4K_ATTR_MAX_INPUT_FREQUENCY,                        Tkdpo2k3k4k_get_MAX_INPUT_FREQUENCY,                        Tkdpo2k3k4k_set_MAX_INPUT_FREQUENCY                         );
	pMap->Add(TKDPO2K3K4K_ATTR_INPUT_IMPEDANCE,                            Tkdpo2k3k4k_get_INPUT_IMPEDANCE,                            Tkdpo2k3k4k_set_INPUT_IMPEDANCE                             );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_OFFSET,                            Tkdpo2k3k4k_get_VERTICAL_OFFSET,                            Tkdpo2k3k4k_set_VERTICAL_OFFSET                             );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_ATTENUATION,                          Tkdpo2k3k4k_get_PROBE_ATTENUATION,                          Tkdpo2k3k4k_set_PROBE_ATTENUATION                           );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_SENSE_VALUE,                          Tkdpo2k3k4k_get_PROBE_SENSE_VALUE,                          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_RANGE,                             Tkdpo2k3k4k_get_VERTICAL_RANGE,                             Tkdpo2k3k4k_set_VERTICAL_RANGE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_CHANNEL_COUNT,                              Tkdpo2k3k4k_get_CHANNEL_COUNT,                              NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAS_HIGH_REF,                              Tkdpo2k3k4k_get_MEAS_HIGH_REF,                              Tkdpo2k3k4k_set_MEAS_HIGH_REF                               );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAS_LOW_REF,                               Tkdpo2k3k4k_get_MEAS_LOW_REF,                               Tkdpo2k3k4k_set_MEAS_LOW_REF                                );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAS_MID_REF,                               Tkdpo2k3k4k_get_MEAS_MID_REF,                               Tkdpo2k3k4k_set_MEAS_MID_REF                                );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_COUPLING,                           Tkdpo2k3k4k_get_TRIGGER_COUPLING,                           Tkdpo2k3k4k_set_TRIGGER_COUPLING                            );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_HOLDOFF,                            Tkdpo2k3k4k_get_TRIGGER_HOLDOFF,                            Tkdpo2k3k4k_set_TRIGGER_HOLDOFF                             );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_LEVEL,                              Tkdpo2k3k4k_get_TRIGGER_LEVEL,                              Tkdpo2k3k4k_set_TRIGGER_LEVEL                               );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_MODIFIER,                           Tkdpo2k3k4k_get_TRIGGER_MODIFIER,                           Tkdpo2k3k4k_set_TRIGGER_MODIFIER                            );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_SOURCE,                             Tkdpo2k3k4k_get_TRIGGER_SOURCE,                             Tkdpo2k3k4k_set_TRIGGER_SOURCE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_TYPE,                               Tkdpo2k3k4k_get_TRIGGER_TYPE,                               Tkdpo2k3k4k_set_TRIGGER_TYPE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_AC_LINE_TRIGGER_SLOPE,                      Tkdpo2k3k4k_get_AC_LINE_TRIGGER_SLOPE,                      Tkdpo2k3k4k_set_AC_LINE_TRIGGER_SLOPE                       );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_SLOPE,                              Tkdpo2k3k4k_get_TRIGGER_SLOPE,                              Tkdpo2k3k4k_set_TRIGGER_SLOPE                               );
	pMap->Add(TKDPO2K3K4K_ATTR_GLITCH_CONDITION,                           Tkdpo2k3k4k_get_GLITCH_CONDITION,                           Tkdpo2k3k4k_set_GLITCH_CONDITION                            );
	pMap->Add(TKDPO2K3K4K_ATTR_GLITCH_POLARITY,                            Tkdpo2k3k4k_get_GLITCH_POLARITY,                            Tkdpo2k3k4k_set_GLITCH_POLARITY                             );
	pMap->Add(TKDPO2K3K4K_ATTR_GLITCH_WIDTH,                               Tkdpo2k3k4k_get_GLITCH_WIDTH,                               Tkdpo2k3k4k_set_GLITCH_WIDTH                                );
	pMap->Add(TKDPO2K3K4K_ATTR_RUNT_POLARITY,                              Tkdpo2k3k4k_get_RUNT_POLARITY,                              Tkdpo2k3k4k_set_RUNT_POLARITY                               );
	pMap->Add(TKDPO2K3K4K_ATTR_RUNT_HIGH_THRESHOLD,                        Tkdpo2k3k4k_get_RUNT_HIGH_THRESHOLD,                        Tkdpo2k3k4k_set_RUNT_HIGH_THRESHOLD                         );
	pMap->Add(TKDPO2K3K4K_ATTR_RUNT_LOW_THRESHOLD,                         Tkdpo2k3k4k_get_RUNT_LOW_THRESHOLD,                         Tkdpo2k3k4k_set_RUNT_LOW_THRESHOLD                          );
	pMap->Add(TKDPO2K3K4K_ATTR_TV_TRIGGER_EVENT,                           Tkdpo2k3k4k_get_TV_TRIGGER_EVENT,                           Tkdpo2k3k4k_set_TV_TRIGGER_EVENT                            );
	pMap->Add(TKDPO2K3K4K_ATTR_TV_TRIGGER_LINE_NUMBER,                     Tkdpo2k3k4k_get_TV_TRIGGER_LINE_NUMBER,                     Tkdpo2k3k4k_set_TV_TRIGGER_LINE_NUMBER                      );
	pMap->Add(TKDPO2K3K4K_ATTR_TV_TRIGGER_POLARITY,                        Tkdpo2k3k4k_get_TV_TRIGGER_POLARITY,                        Tkdpo2k3k4k_set_TV_TRIGGER_POLARITY                         );
	pMap->Add(TKDPO2K3K4K_ATTR_TV_TRIGGER_SIGNAL_FORMAT,                   Tkdpo2k3k4k_get_TV_TRIGGER_SIGNAL_FORMAT,                   Tkdpo2k3k4k_set_TV_TRIGGER_SIGNAL_FORMAT                    );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH_CONDITION,                            Tkdpo2k3k4k_get_WIDTH_CONDITION,                            Tkdpo2k3k4k_set_WIDTH_CONDITION                             );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH_POLARITY,                             Tkdpo2k3k4k_get_WIDTH_POLARITY,                             Tkdpo2k3k4k_set_WIDTH_POLARITY                              );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH_HIGH_THRESHOLD,                       Tkdpo2k3k4k_get_WIDTH_HIGH_THRESHOLD,                       Tkdpo2k3k4k_set_WIDTH_HIGH_THRESHOLD                        );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH_LOW_THRESHOLD,                        Tkdpo2k3k4k_get_WIDTH_LOW_THRESHOLD,                        Tkdpo2k3k4k_set_WIDTH_LOW_THRESHOLD                         );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE,                                      Tkdpo2k3k4k_get_STATE,                                      Tkdpo2k3k4k_set_STATE                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_MODE,                                       Tkdpo2k3k4k_get_MODE,                                       Tkdpo2k3k4k_set_MODE                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_ACQUISITIONS,                        Tkdpo2k3k4k_get_NUMBER_ACQUISITIONS,                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_RUN_STOP,                                   Tkdpo2k3k4k_get_RUN_STOP,                                   Tkdpo2k3k4k_set_RUN_STOP                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_SINGLE_SEQUENCE,                            Tkdpo2k3k4k_get_SINGLE_SEQUENCE,                            Tkdpo2k3k4k_set_SINGLE_SEQUENCE                             );
	pMap->Add(TKDPO2K3K4K_ATTR_MAGNI_VU_STATE,                             Tkdpo2k3k4k_get_MAGNI_VU_STATE,                             Tkdpo2k3k4k_set_MAGNI_VU_STATE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_MAX_SAMPLE_RATE,                            Tkdpo2k3k4k_get_MAX_SAMPLE_RATE,                            NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SAMPLING_MODE,                              Tkdpo2k3k4k_get_SAMPLING_MODE,                              NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TIME_PER_RECORD,                            Tkdpo2k3k4k_get_TIME_PER_RECORD,                            Tkdpo2k3k4k_set_TIME_PER_RECORD                             );
	pMap->Add(TKDPO2K3K4K_ATTR_RECORD_LENGTH2,                             Tkdpo2k3k4k_get_RECORD_LENGTH2,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SAMPLE_RATE2,                               Tkdpo2k3k4k_get_SAMPLE_RATE2,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_AVERAGES,                            Tkdpo2k3k4k_get_NUMBER_AVERAGES,                            Tkdpo2k3k4k_set_NUMBER_AVERAGES                             );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_OF_POINTS_MIN,                       Tkdpo2k3k4k_get_NUMBER_OF_POINTS_MIN,                       Tkdpo2k3k4k_set_NUMBER_OF_POINTS_MIN                        );
	pMap->Add(TKDPO2K3K4K_ATTR_START_TIME,                                 Tkdpo2k3k4k_get_START_TIME,                                 Tkdpo2k3k4k_set_START_TIME                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_BUS_COUNT,                                  Tkdpo2k3k4k_get_BUS_COUNT,                                  NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_CAN_BIT_RATE_ENUM,                          NULL,                                                        Tkdpo2k3k4k_set_CAN_BIT_RATE_ENUM                           );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION,                                   Tkdpo2k3k4k_get_POSITION,                                   Tkdpo2k3k4k_set_POSITION                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_LABEL,                                      Tkdpo2k3k4k_get_LABEL,                                      Tkdpo2k3k4k_set_LABEL                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE,                                       Tkdpo2k3k4k_get_TYPE,                                       Tkdpo2k3k4k_set_TYPE                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE2,                                     Tkdpo2k3k4k_get_STATE2,                                     Tkdpo2k3k4k_set_STATE2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_TYPE,                               Tkdpo2k3k4k_get_DISPLAY_TYPE,                               Tkdpo2k3k4k_set_DISPLAY_TYPE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_IS_CLOCKED_PARALLEL_BUS,                    Tkdpo2k3k4k_get_IS_CLOCKED_PARALLEL_BUS,                    Tkdpo2k3k4k_set_IS_CLOCKED_PARALLEL_BUS                     );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_FORMAT,                             Tkdpo2k3k4k_get_DISPLAY_FORMAT,                             Tkdpo2k3k4k_set_DISPLAY_FORMAT                              );
	pMap->Add(TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_SOURCE,                  Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_SOURCE,                  Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_SOURCE                   );
	pMap->Add(TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_EDGE,                    Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_EDGE,                    Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_EDGE                     );
	pMap->Add(TKDPO2K3K4K_ATTR_RS232_DELIMITER,                            Tkdpo2k3k4k_get_RS232_DELIMITER,                            Tkdpo2k3k4k_set_RS232_DELIMITER                             );
	pMap->Add(TKDPO2K3K4K_ATTR_RS232_DISPLAY_MODE,                         Tkdpo2k3k4k_get_RS232_DISPLAY_MODE,                         Tkdpo2k3k4k_set_RS232_DISPLAY_MODE                          );
	pMap->Add(TKDPO2K3K4K_ATTR_RS232TX_SOURCE,                             Tkdpo2k3k4k_get_RS232TX_SOURCE,                             Tkdpo2k3k4k_set_RS232TX_SOURCE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_RS232RX_SOURCE,                             Tkdpo2k3k4k_get_RS232RX_SOURCE,                             Tkdpo2k3k4k_set_RS232RX_SOURCE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_PARALLEL_WIDTH,                             Tkdpo2k3k4k_get_PARALLEL_WIDTH,                             Tkdpo2k3k4k_set_PARALLEL_WIDTH                              );
	pMap->Add(TKDPO2K3K4K_ATTR_SPI_FRAMING,                                Tkdpo2k3k4k_get_SPI_FRAMING,                                Tkdpo2k3k4k_set_SPI_FRAMING                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_SPI_IDLE_TIME,                              Tkdpo2k3k4k_get_SPI_IDLE_TIME,                              Tkdpo2k3k4k_set_SPI_IDLE_TIME                               );
	pMap->Add(TKDPO2K3K4K_ATTR_DDT,                                        Tkdpo2k3k4k_get_DDT,                                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TRACK_MODE,                                 Tkdpo2k3k4k_get_TRACK_MODE,                                 Tkdpo2k3k4k_set_TRACK_MODE                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE2,                                      Tkdpo2k3k4k_get_TYPE2,                                      Tkdpo2k3k4k_set_TYPE2                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE13,                                   Tkdpo2k3k4k_get_SOURCE13,                                   Tkdpo2k3k4k_set_SOURCE13                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS,                                      Tkdpo2k3k4k_get_UNITS,                                      Tkdpo2k3k4k_set_UNITS                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA,                                      Tkdpo2k3k4k_get_DELTA,                                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION1,                                  Tkdpo2k3k4k_get_POSITION1,                                  Tkdpo2k3k4k_set_POSITION1                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION2,                                  Tkdpo2k3k4k_get_POSITION2,                                  Tkdpo2k3k4k_set_POSITION2                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA2,                                     Tkdpo2k3k4k_get_DELTA2,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION3,                                  Tkdpo2k3k4k_get_POSITION3,                                  Tkdpo2k3k4k_set_POSITION3                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION4,                                  Tkdpo2k3k4k_get_POSITION4,                                  Tkdpo2k3k4k_set_POSITION4                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS2,                                     Tkdpo2k3k4k_get_UNITS2,                                     Tkdpo2k3k4k_set_UNITS2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION1,                       Tkdpo2k3k4k_get_HORIZONTAL_POSITION1,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION2,                       Tkdpo2k3k4k_get_HORIZONTAL_POSITION2,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_V_DELTA,                                    Tkdpo2k3k4k_get_V_DELTA,                                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_ALTERNATIVE_READOUT1,                       Tkdpo2k3k4k_get_ALTERNATIVE_READOUT1,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_ALTERNATIVE_READOUT2,                       Tkdpo2k3k4k_get_ALTERNATIVE_READOUT2,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_READOUT,                                    Tkdpo2k3k4k_get_READOUT,                                    Tkdpo2k3k4k_set_READOUT                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA3,                                     Tkdpo2k3k4k_get_DELTA3,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION5,                                  Tkdpo2k3k4k_get_POSITION5,                                  Tkdpo2k3k4k_set_POSITION5                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION6,                                  Tkdpo2k3k4k_get_POSITION6,                                  Tkdpo2k3k4k_set_POSITION6                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS3,                                     Tkdpo2k3k4k_get_UNITS3,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA4,                                     Tkdpo2k3k4k_get_DELTA4,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION7,                                  Tkdpo2k3k4k_get_POSITION7,                                  Tkdpo2k3k4k_set_POSITION7                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION8,                                  Tkdpo2k3k4k_get_POSITION8,                                  Tkdpo2k3k4k_set_POSITION8                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS4,                                     Tkdpo2k3k4k_get_UNITS4,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA5,                                     Tkdpo2k3k4k_get_DELTA5,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION9,                                  Tkdpo2k3k4k_get_POSITION9,                                  NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION10,                                 Tkdpo2k3k4k_get_POSITION10,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS5,                                     Tkdpo2k3k4k_get_UNITS5,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA6,                                     Tkdpo2k3k4k_get_DELTA6,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION11,                                 Tkdpo2k3k4k_get_POSITION11,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION102,                                Tkdpo2k3k4k_get_POSITION102,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS6,                                     Tkdpo2k3k4k_get_UNITS6,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA7,                                     Tkdpo2k3k4k_get_DELTA7,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION12,                                 Tkdpo2k3k4k_get_POSITION12,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION103,                                Tkdpo2k3k4k_get_POSITION103,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS7,                                     Tkdpo2k3k4k_get_UNITS7,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA8,                                     Tkdpo2k3k4k_get_DELTA8,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION13,                                 Tkdpo2k3k4k_get_POSITION13,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION104,                                Tkdpo2k3k4k_get_POSITION104,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS8,                                     Tkdpo2k3k4k_get_UNITS8,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_CLOCK_STATE,                                Tkdpo2k3k4k_get_CLOCK_STATE,                                Tkdpo2k3k4k_set_CLOCK_STATE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_BACK_LIGHT_INTENSITY,                       Tkdpo2k3k4k_get_BACK_LIGHT_INTENSITY,                       Tkdpo2k3k4k_set_BACK_LIGHT_INTENSITY                        );
	pMap->Add(TKDPO2K3K4K_ATTR_FORMAT,                                     Tkdpo2k3k4k_get_FORMAT,                                     Tkdpo2k3k4k_set_FORMAT                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_GRATICULE_STYLE,                            Tkdpo2k3k4k_get_GRATICULE_STYLE,                            Tkdpo2k3k4k_set_GRATICULE_STYLE                             );
	pMap->Add(TKDPO2K3K4K_ATTR_PERSISTENCE,                                Tkdpo2k3k4k_get_PERSISTENCE,                                Tkdpo2k3k4k_set_PERSISTENCE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_PERSISTENCE_ENUM,                           NULL,                                                        Tkdpo2k3k4k_set_PERSISTENCE_ENUM                            );
	pMap->Add(TKDPO2K3K4K_ATTR_WAVEFORM_INTENSITY,                         Tkdpo2k3k4k_get_WAVEFORM_INTENSITY,                         Tkdpo2k3k4k_set_WAVEFORM_INTENSITY                          );
	pMap->Add(TKDPO2K3K4K_ATTR_GRATICULE_INTENSITY,                        Tkdpo2k3k4k_get_GRATICULE_INTENSITY,                        Tkdpo2k3k4k_set_GRATICULE_INTENSITY                         );
	pMap->Add(TKDPO2K3K4K_ATTR_DOTS_ONLY,                                  Tkdpo2k3k4k_get_DOTS_ONLY,                                  Tkdpo2k3k4k_set_DOTS_ONLY                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_MESSAGE_BOX,                        Tkdpo2k3k4k_get_DISPLAY_MESSAGE_BOX,                        Tkdpo2k3k4k_set_DISPLAY_MESSAGE_BOX                         );
	pMap->Add(TKDPO2K3K4K_ATTR_GLITCH_CAPTURE_STATE,                       Tkdpo2k3k4k_get_GLITCH_CAPTURE_STATE,                       Tkdpo2k3k4k_set_GLITCH_CAPTURE_STATE                        );
	pMap->Add(TKDPO2K3K4K_ATTR_GLITCH_INTENSITY,                           Tkdpo2k3k4k_get_GLITCH_INTENSITY,                           Tkdpo2k3k4k_set_GLITCH_INTENSITY                            );
	pMap->Add(TKDPO2K3K4K_ATTR_LAYOUT,                                     Tkdpo2k3k4k_get_LAYOUT,                                     Tkdpo2k3k4k_set_LAYOUT                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_INK_SAVER,                                  Tkdpo2k3k4k_get_INK_SAVER,                                  Tkdpo2k3k4k_set_INK_SAVER                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA,                                       Tkdpo2k3k4k_get_DATA,                                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY,                                    Tkdpo2k3k4k_get_DISPLAY,                                    Tkdpo2k3k4k_set_DISPLAY                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_MODE2,                                      Tkdpo2k3k4k_get_MODE2,                                      Tkdpo2k3k4k_set_MODE2                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE,                                     Tkdpo2k3k4k_get_SOURCE,                                     Tkdpo2k3k4k_set_SOURCE                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_MODE,                                 Tkdpo2k3k4k_get_DELAY_MODE,                                 Tkdpo2k3k4k_set_DELAY_MODE                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_TIME,                                 Tkdpo2k3k4k_get_DELAY_TIME,                                 Tkdpo2k3k4k_set_DELAY_TIME                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_DIGITAL_MAIN_RECORD_LENGTH,                 Tkdpo2k3k4k_get_DIGITAL_MAIN_RECORD_LENGTH,                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DIGITAL_MAGNI_VU_RECORD_LENGTH,             Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_RECORD_LENGTH,             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DIGITAL_MAIN_SAMPLE_RATE,                   Tkdpo2k3k4k_get_DIGITAL_MAIN_SAMPLE_RATE,                   NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DIGITAL_MAGNI_VU_SAMPLE_RATE,               Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_SAMPLE_RATE,               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SCALE,                                      Tkdpo2k3k4k_get_SCALE,                                      Tkdpo2k3k4k_set_SCALE                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION14,                                 Tkdpo2k3k4k_get_POSITION14,                                 Tkdpo2k3k4k_set_POSITION14                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_RESOLUTION,                                 Tkdpo2k3k4k_get_RESOLUTION,                                 Tkdpo2k3k4k_set_RESOLUTION                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_RECORD_LENGTH,                              Tkdpo2k3k4k_get_RECORD_LENGTH,                              Tkdpo2k3k4k_set_RECORD_LENGTH                               );
	pMap->Add(TKDPO2K3K4K_ATTR_SAMPLE_RATE,                                Tkdpo2k3k4k_get_SAMPLE_RATE,                                Tkdpo2k3k4k_set_SAMPLE_RATE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_POSITION,                           Tkdpo2k3k4k_get_TRIGGER_POSITION,                           Tkdpo2k3k4k_set_TRIGGER_POSITION                            );
	pMap->Add(TKDPO2K3K4K_ATTR_MATH_COUNT,                                 Tkdpo2k3k4k_get_MATH_COUNT,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_STATE,                              Tkdpo2k3k4k_get_DISPLAY_STATE,                              Tkdpo2k3k4k_set_DISPLAY_STATE                               );
	pMap->Add(TKDPO2K3K4K_ATTR_EXPRESSION,                                 Tkdpo2k3k4k_get_EXPRESSION,                                 Tkdpo2k3k4k_set_EXPRESSION                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_LABEL2,                                     Tkdpo2k3k4k_get_LABEL2,                                     Tkdpo2k3k4k_set_LABEL2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION,                        Tkdpo2k3k4k_get_HORIZONTAL_POSITION,                        Tkdpo2k3k4k_set_HORIZONTAL_POSITION                         );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_SCALE,                           Tkdpo2k3k4k_get_HORIZONTAL_SCALE,                           Tkdpo2k3k4k_set_HORIZONTAL_SCALE                            );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_UNITS,                           Tkdpo2k3k4k_get_HORIZONTAL_UNITS,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_POSITION,                          Tkdpo2k3k4k_get_VERTICAL_POSITION,                          Tkdpo2k3k4k_set_VERTICAL_POSITION                           );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_SCALE,                             Tkdpo2k3k4k_get_VERTICAL_SCALE,                             Tkdpo2k3k4k_set_VERTICAL_SCALE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_UNITS,                             Tkdpo2k3k4k_get_VERTICAL_UNITS,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE3,                                      Tkdpo2k3k4k_get_TYPE3,                                      Tkdpo2k3k4k_set_TYPE3                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_GATING_INDICATORS,                  Tkdpo2k3k4k_get_DISPLAY_GATING_INDICATORS,                  Tkdpo2k3k4k_set_DISPLAY_GATING_INDICATORS                   );
	pMap->Add(TKDPO2K3K4K_ATTR_WINDOW,                                     Tkdpo2k3k4k_get_WINDOW,                                     Tkdpo2k3k4k_set_WINDOW                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_MAGNITUDE_UNITS,                            Tkdpo2k3k4k_get_MAGNITUDE_UNITS,                            Tkdpo2k3k4k_set_MAGNITUDE_UNITS                             );
	pMap->Add(TKDPO2K3K4K_ATTR_MEASUREMENTSLOT_COUNT,                      Tkdpo2k3k4k_get_MEASUREMENTSLOT_COUNT,                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_COUNT,                                      Tkdpo2k3k4k_get_COUNT,                                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_DIRECTION2,                           Tkdpo2k3k4k_get_DELAY_DIRECTION2,                           Tkdpo2k3k4k_set_DELAY_DIRECTION2                            );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_EDGE3,                                Tkdpo2k3k4k_get_DELAY_EDGE3,                                Tkdpo2k3k4k_set_DELAY_EDGE3                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_EDGE4,                                Tkdpo2k3k4k_get_DELAY_EDGE4,                                Tkdpo2k3k4k_set_DELAY_EDGE4                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_MAXIMUM,                                    Tkdpo2k3k4k_get_MAXIMUM,                                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAN,                                       Tkdpo2k3k4k_get_MEAN,                                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MINIMUM,                                    Tkdpo2k3k4k_get_MINIMUM,                                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE9,                                    Tkdpo2k3k4k_get_SOURCE9,                                    Tkdpo2k3k4k_set_SOURCE9                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE10,                                   Tkdpo2k3k4k_get_SOURCE10,                                   Tkdpo2k3k4k_set_SOURCE10                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_STANDARD_DEVIATION,                         Tkdpo2k3k4k_get_STANDARD_DEVIATION,                         NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE6,                                     Tkdpo2k3k4k_get_STATE6,                                     Tkdpo2k3k4k_set_STATE6                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE5,                                      Tkdpo2k3k4k_get_TYPE5,                                      Tkdpo2k3k4k_set_TYPE5                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS10,                                    Tkdpo2k3k4k_get_UNITS10,                                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VALUE2,                                     Tkdpo2k3k4k_get_VALUE2,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_STATISTICS_MODE,                            Tkdpo2k3k4k_get_STATISTICS_MODE,                            Tkdpo2k3k4k_set_STATISTICS_MODE                             );
	pMap->Add(TKDPO2K3K4K_ATTR_STATISTICS_WEIGHTING,                       Tkdpo2k3k4k_get_STATISTICS_WEIGHTING,                       Tkdpo2k3k4k_set_STATISTICS_WEIGHTING                        );
	pMap->Add(TKDPO2K3K4K_ATTR_GATING,                                     Tkdpo2k3k4k_get_GATING,                                     Tkdpo2k3k4k_set_GATING                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE3,                                     Tkdpo2k3k4k_get_STATE3,                                     Tkdpo2k3k4k_set_STATE3                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_INDICATORS,                      Tkdpo2k3k4k_get_HORIZONTAL_INDICATORS,                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_INDICATORS,                        Tkdpo2k3k4k_get_VERTICAL_INDICATORS,                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE9,                                      Tkdpo2k3k4k_get_TYPE9,                                      Tkdpo2k3k4k_set_TYPE9                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_SAVE_BUTTON_TYPE,                           Tkdpo2k3k4k_get_SAVE_BUTTON_TYPE,                           Tkdpo2k3k4k_set_SAVE_BUTTON_TYPE                            );
	pMap->Add(TKDPO2K3K4K_ATTR_IMAGE_FORMAT,                               Tkdpo2k3k4k_get_IMAGE_FORMAT,                               Tkdpo2k3k4k_set_IMAGE_FORMAT                                );
	pMap->Add(TKDPO2K3K4K_ATTR_IMAGE_LAYOUT,                               Tkdpo2k3k4k_get_IMAGE_LAYOUT,                               Tkdpo2k3k4k_set_IMAGE_LAYOUT                                );
	pMap->Add(TKDPO2K3K4K_ATTR_INK_SAVER_PALETTE,                          Tkdpo2k3k4k_get_INK_SAVER_PALETTE,                          Tkdpo2k3k4k_set_INK_SAVER_PALETTE                           );
	pMap->Add(TKDPO2K3K4K_ATTR_WAVEFORM_GATING,                            Tkdpo2k3k4k_get_WAVEFORM_GATING,                            Tkdpo2k3k4k_set_WAVEFORM_GATING                             );
	pMap->Add(TKDPO2K3K4K_ATTR_SAVE_WAVE_FORM_FILE_FORMAT,                 Tkdpo2k3k4k_get_SAVE_WAVE_FORM_FILE_FORMAT,                 Tkdpo2k3k4k_set_SAVE_WAVE_FORM_FILE_FORMAT                  );
	pMap->Add(TKDPO2K3K4K_ATTR_SEARCH_COUNT,                               Tkdpo2k3k4k_get_SEARCH_COUNT,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SEARCH_TYPE,                                Tkdpo2k3k4k_get_SEARCH_TYPE,                                Tkdpo2k3k4k_set_SEARCH_TYPE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE7,                                     Tkdpo2k3k4k_get_STATE7,                                     Tkdpo2k3k4k_set_STATE7                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_TOTAL,                                      Tkdpo2k3k4k_get_TOTAL,                                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_BUS_SOURCE2,                                Tkdpo2k3k4k_get_BUS_SOURCE2,                                Tkdpo2k3k4k_set_BUS_SOURCE2                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_B_STATE,                                    Tkdpo2k3k4k_get_B_STATE,                                    Tkdpo2k3k4k_set_B_STATE                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_B_DELAY_TIME,                               Tkdpo2k3k4k_get_B_DELAY_TIME,                               Tkdpo2k3k4k_set_B_DELAY_TIME                                );
	pMap->Add(TKDPO2K3K4K_ATTR_CURRENT_STATE,                              Tkdpo2k3k4k_get_CURRENT_STATE,                              NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_EVENT_COUNT,                                Tkdpo2k3k4k_get_EVENT_COUNT,                                Tkdpo2k3k4k_set_EVENT_COUNT                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGERB_BY,                                Tkdpo2k3k4k_get_TRIGGERB_BY,                                Tkdpo2k3k4k_set_TRIGGERB_BY                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_FREQUENCY,                                  Tkdpo2k3k4k_get_FREQUENCY,                                  NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_ATTENUATION2,                         Tkdpo2k3k4k_get_PROBE_ATTENUATION2,                         Tkdpo2k3k4k_set_PROBE_ATTENUATION2                          );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_UNIT_VALUE,                        Tkdpo2k3k4k_get_VERTICAL_UNIT_VALUE,                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_A_HOLDOFF_TIME,                             Tkdpo2k3k4k_get_A_HOLDOFF_TIME,                             Tkdpo2k3k4k_set_A_HOLDOFF_TIME                              );
	pMap->Add(TKDPO2K3K4K_ATTR_MODE4,                                      Tkdpo2k3k4k_get_MODE4,                                      Tkdpo2k3k4k_set_MODE4                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE6,                                      Tkdpo2k3k4k_get_TYPE6,                                      Tkdpo2k3k4k_set_TYPE6                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_BUS_SOURCE,                                 Tkdpo2k3k4k_get_BUS_SOURCE,                                 Tkdpo2k3k4k_set_BUS_SOURCE                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_BUS_TYPE,                                   Tkdpo2k3k4k_get_BUS_TYPE,                                   Tkdpo2k3k4k_set_BUS_TYPE                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE2,                                    Tkdpo2k3k4k_get_SOURCE2,                                    Tkdpo2k3k4k_set_SOURCE2                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_COUPLING,                                   Tkdpo2k3k4k_get_COUPLING,                                   Tkdpo2k3k4k_set_COUPLING                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_LEVEL,                                      Tkdpo2k3k4k_get_LEVEL,                                      Tkdpo2k3k4k_set_LEVEL                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_LEVEL_ENUM,                                 NULL,                                                        Tkdpo2k3k4k_set_LEVEL_ENUM                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_SLOPE,                                      Tkdpo2k3k4k_get_SLOPE,                                      Tkdpo2k3k4k_set_SLOPE                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_CONDITION,                                  Tkdpo2k3k4k_get_CONDITION,                                  Tkdpo2k3k4k_set_CONDITION                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_LESS_LIMIT,                                 Tkdpo2k3k4k_get_LESS_LIMIT,                                 Tkdpo2k3k4k_set_LESS_LIMIT                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_MORE_LIMIT,                                 Tkdpo2k3k4k_get_MORE_LIMIT,                                 Tkdpo2k3k4k_set_MORE_LIMIT                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_FUNCTION,                                   Tkdpo2k3k4k_get_FUNCTION,                                   Tkdpo2k3k4k_set_FUNCTION                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE3,                                    Tkdpo2k3k4k_get_SOURCE3,                                    Tkdpo2k3k4k_set_SOURCE3                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_CONDITION2,                                 Tkdpo2k3k4k_get_CONDITION2,                                 Tkdpo2k3k4k_set_CONDITION2                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_POLARITY,                                   Tkdpo2k3k4k_get_POLARITY,                                   Tkdpo2k3k4k_set_POLARITY                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH,                                      Tkdpo2k3k4k_get_WIDTH,                                      Tkdpo2k3k4k_set_WIDTH                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_UPPER_LIMIT,                                Tkdpo2k3k4k_get_UPPER_LIMIT,                                Tkdpo2k3k4k_set_UPPER_LIMIT                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_LOWER_LIMIT,                                Tkdpo2k3k4k_get_LOWER_LIMIT,                                Tkdpo2k3k4k_set_LOWER_LIMIT                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_POLARITY2,                                  Tkdpo2k3k4k_get_POLARITY2,                                  Tkdpo2k3k4k_set_POLARITY2                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE4,                                    Tkdpo2k3k4k_get_SOURCE4,                                    Tkdpo2k3k4k_set_SOURCE4                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_CONDITION3,                                 Tkdpo2k3k4k_get_CONDITION3,                                 Tkdpo2k3k4k_set_CONDITION3                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_WIDTH2,                                     Tkdpo2k3k4k_get_WIDTH2,                                     Tkdpo2k3k4k_set_WIDTH2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_LOWER_LEVEL,                                Tkdpo2k3k4k_get_LOWER_LEVEL,                                Tkdpo2k3k4k_set_LOWER_LEVEL                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_UPPER_LEVEL,                                Tkdpo2k3k4k_get_UPPER_LEVEL,                                Tkdpo2k3k4k_set_UPPER_LEVEL                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_SOURCE,                                Tkdpo2k3k4k_get_DATA_SOURCE,                                Tkdpo2k3k4k_set_DATA_SOURCE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_LEVEL,                                 Tkdpo2k3k4k_get_DATA_LEVEL,                                 Tkdpo2k3k4k_set_DATA_LEVEL                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_CLOCK_SOURCE,                               Tkdpo2k3k4k_get_CLOCK_SOURCE,                               Tkdpo2k3k4k_set_CLOCK_SOURCE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_CLOCK_EDGE,                                 Tkdpo2k3k4k_get_CLOCK_EDGE,                                 Tkdpo2k3k4k_set_CLOCK_EDGE                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_CLOCK_LEVEL,                                Tkdpo2k3k4k_get_CLOCK_LEVEL,                                Tkdpo2k3k4k_set_CLOCK_LEVEL                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_HOLD_TIME,                                  Tkdpo2k3k4k_get_HOLD_TIME,                                  Tkdpo2k3k4k_set_HOLD_TIME                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_SET_TIME,                                   Tkdpo2k3k4k_get_SET_TIME,                                   Tkdpo2k3k4k_set_SET_TIME                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE5,                                    Tkdpo2k3k4k_get_SOURCE5,                                    Tkdpo2k3k4k_set_SOURCE5                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_DELTA_TIME,                                 Tkdpo2k3k4k_get_DELTA_TIME,                                 Tkdpo2k3k4k_set_DELTA_TIME                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_CONDITION4,                                 Tkdpo2k3k4k_get_CONDITION4,                                 Tkdpo2k3k4k_set_CONDITION4                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_POLARITY3,                                  Tkdpo2k3k4k_get_POLARITY3,                                  Tkdpo2k3k4k_set_POLARITY3                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_FIELD_HOLDOFF,                              Tkdpo2k3k4k_get_FIELD_HOLDOFF,                              Tkdpo2k3k4k_set_FIELD_HOLDOFF                               );
	pMap->Add(TKDPO2K3K4K_ATTR_POLARITY4,                                  Tkdpo2k3k4k_get_POLARITY4,                                  Tkdpo2k3k4k_set_POLARITY4                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE6,                                    Tkdpo2k3k4k_get_SOURCE6,                                    Tkdpo2k3k4k_set_SOURCE6                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_STANDARD,                                   Tkdpo2k3k4k_get_STANDARD,                                   Tkdpo2k3k4k_set_STANDARD                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_TRIGGER_ON,                                 Tkdpo2k3k4k_get_TRIGGER_ON,                                 Tkdpo2k3k4k_set_TRIGGER_ON                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_CUSTOM_LINE_PERIOD,                         Tkdpo2k3k4k_get_CUSTOM_LINE_PERIOD,                         Tkdpo2k3k4k_set_CUSTOM_LINE_PERIOD                          );
	pMap->Add(TKDPO2K3K4K_ATTR_CUSTOM_SCAN,                                Tkdpo2k3k4k_get_CUSTOM_SCAN,                                Tkdpo2k3k4k_set_CUSTOM_SCAN                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_CUSTOM_SYNC_INTERVAL,                       Tkdpo2k3k4k_get_CUSTOM_SYNC_INTERVAL,                       Tkdpo2k3k4k_set_CUSTOM_SYNC_INTERVAL                        );
	pMap->Add(TKDPO2K3K4K_ATTR_CUSTOM_FORMAT,                              Tkdpo2k3k4k_get_CUSTOM_FORMAT,                              Tkdpo2k3k4k_set_CUSTOM_FORMAT                               );
	pMap->Add(TKDPO2K3K4K_ATTR_HD_TV_FORMAT,                               Tkdpo2k3k4k_get_HD_TV_FORMAT,                               Tkdpo2k3k4k_set_HD_TV_FORMAT                                );
	pMap->Add(TKDPO2K3K4K_ATTR_COUPLING2,                                  Tkdpo2k3k4k_get_COUPLING2,                                  Tkdpo2k3k4k_set_COUPLING2                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_LEVEL2,                                     Tkdpo2k3k4k_get_LEVEL2,                                     Tkdpo2k3k4k_set_LEVEL2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_LEVEL_ENUM2,                                NULL,                                                        Tkdpo2k3k4k_set_LEVEL_ENUM2                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE7,                                    Tkdpo2k3k4k_get_SOURCE7,                                    Tkdpo2k3k4k_set_SOURCE7                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_SLOPE2,                                     Tkdpo2k3k4k_get_SLOPE2,                                     Tkdpo2k3k4k_set_SLOPE2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_PROBE_GAIN,                          Tkdpo2k3k4k_get_AUX_IN_PROBE_GAIN,                          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_PROBE_RESISTANCE,                    Tkdpo2k3k4k_get_AUX_IN_PROBE_RESISTANCE,                    NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_PROBE_SERIAL_NUMBER,                 Tkdpo2k3k4k_get_AUX_IN_PROBE_SERIAL_NUMBER,                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_PROBE_TYPE,                          Tkdpo2k3k4k_get_AUX_IN_PROBE_TYPE,                          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_PROBE_UNITS,                         Tkdpo2k3k4k_get_AUX_IN_PROBE_UNITS,                         NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE,          Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE,          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AUX_IN_TEKVPI_PROBE_RANGE,                  Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_RANGE,                  Tkdpo2k3k4k_set_AUX_IN_TEKVPI_PROBE_RANGE                   );
	pMap->Add(TKDPO2K3K4K_ATTR_AMPS_VIA_VOLTS_STATE,                       Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_STATE,                       Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_STATE                        );
	pMap->Add(TKDPO2K3K4K_ATTR_AMPS_VIA_VOLTS_FACTOR,                      Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_FACTOR,                      Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_FACTOR                       );
	pMap->Add(TKDPO2K3K4K_ATTR_IMPEDANCE,                                  Tkdpo2k3k4k_get_IMPEDANCE,                                  Tkdpo2k3k4k_set_IMPEDANCE                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_SENSITIVITY,                       Tkdpo2k3k4k_get_VERTICAL_SENSITIVITY,                       Tkdpo2k3k4k_set_VERTICAL_SENSITIVITY                        );
	pMap->Add(TKDPO2K3K4K_ATTR_YUNITS,                                     Tkdpo2k3k4k_get_YUNITS,                                     Tkdpo2k3k4k_set_YUNITS                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_TEKVPI_PROBE_DEGAUSS_STATE,                 Tkdpo2k3k4k_get_TEKVPI_PROBE_DEGAUSS_STATE,                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TEKVPI_PROBE_RANGE,                         Tkdpo2k3k4k_get_TEKVPI_PROBE_RANGE,                         Tkdpo2k3k4k_set_TEKVPI_PROBE_RANGE                          );
	pMap->Add(TKDPO2K3K4K_ATTR_TERMINATION,                                Tkdpo2k3k4k_get_TERMINATION,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_BANDWIDTH,                                  Tkdpo2k3k4k_get_BANDWIDTH,                                  Tkdpo2k3k4k_set_BANDWIDTH                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_BANDWIDTH_ENUM,                             NULL,                                                        Tkdpo2k3k4k_set_BANDWIDTH_ENUM                              );
	pMap->Add(TKDPO2K3K4K_ATTR_COUPLING3,                                  Tkdpo2k3k4k_get_COUPLING3,                                  Tkdpo2k3k4k_set_COUPLING3                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DESKEW,                                     Tkdpo2k3k4k_get_DESKEW,                                     Tkdpo2k3k4k_set_DESKEW                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_STATE2,                             Tkdpo2k3k4k_get_DISPLAY_STATE2,                             Tkdpo2k3k4k_set_DISPLAY_STATE2                              );
	pMap->Add(TKDPO2K3K4K_ATTR_LABEL_NAME,                                 Tkdpo2k3k4k_get_LABEL_NAME,                                 Tkdpo2k3k4k_set_LABEL_NAME                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_OFFSET,                                     Tkdpo2k3k4k_get_OFFSET,                                     Tkdpo2k3k4k_set_OFFSET                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION17,                                 Tkdpo2k3k4k_get_POSITION17,                                 Tkdpo2k3k4k_set_POSITION17                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_GAIN,                                 Tkdpo2k3k4k_get_PROBE_GAIN,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_RESISTANCE,                           Tkdpo2k3k4k_get_PROBE_RESISTANCE,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_SERIAL_NUMBER,                        Tkdpo2k3k4k_get_PROBE_SERIAL_NUMBER,                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_SIGNAL,                               Tkdpo2k3k4k_get_PROBE_SIGNAL,                               Tkdpo2k3k4k_set_PROBE_SIGNAL                                );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_TYPE,                                 Tkdpo2k3k4k_get_PROBE_TYPE,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PROBE_UNITS,                                Tkdpo2k3k4k_get_PROBE_UNITS,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TERMINATION_ENUM,                           NULL,                                                        Tkdpo2k3k4k_set_TERMINATION_ENUM                            );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_SCALE3,                            Tkdpo2k3k4k_get_VERTICAL_SCALE3,                            Tkdpo2k3k4k_set_VERTICAL_SCALE3                             );
	pMap->Add(TKDPO2K3K4K_ATTR_INVERT_STATE,                               Tkdpo2k3k4k_get_INVERT_STATE,                               Tkdpo2k3k4k_set_INVERT_STATE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_COUNT,                            Tkdpo2k3k4k_get_REFERENCE_COUNT,                            NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_SCALE2,                          Tkdpo2k3k4k_get_HORIZONTAL_SCALE2,                          Tkdpo2k3k4k_set_HORIZONTAL_SCALE2                           );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION15,                                 Tkdpo2k3k4k_get_POSITION15,                                 Tkdpo2k3k4k_set_POSITION15                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_SCALE2,                            Tkdpo2k3k4k_get_VERTICAL_SCALE2,                            Tkdpo2k3k4k_set_VERTICAL_SCALE2                             );
	pMap->Add(TKDPO2K3K4K_ATTR_HORIZONTAL_DELAY_TIME,                      Tkdpo2k3k4k_get_HORIZONTAL_DELAY_TIME,                      Tkdpo2k3k4k_set_HORIZONTAL_DELAY_TIME                       );
	pMap->Add(TKDPO2K3K4K_ATTR_LABEL3,                                     Tkdpo2k3k4k_get_LABEL3,                                     Tkdpo2k3k4k_set_LABEL3                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_DIGITALCHANNEL_COUNT,                       Tkdpo2k3k4k_get_DIGITALCHANNEL_COUNT,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_LABEL4,                                     Tkdpo2k3k4k_get_LABEL4,                                     Tkdpo2k3k4k_set_LABEL4                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION18,                                 Tkdpo2k3k4k_get_POSITION18,                                 Tkdpo2k3k4k_set_POSITION18                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE5,                                     Tkdpo2k3k4k_get_STATE5,                                     Tkdpo2k3k4k_set_STATE5                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_THRESHOLD,                                  Tkdpo2k3k4k_get_THRESHOLD,                                  Tkdpo2k3k4k_set_THRESHOLD                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_MODE3,                                      Tkdpo2k3k4k_get_MODE3,                                      Tkdpo2k3k4k_set_MODE3                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_POSITION16,                                 Tkdpo2k3k4k_get_POSITION16,                                 Tkdpo2k3k4k_set_POSITION16                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_SCALE2,                                     Tkdpo2k3k4k_get_SCALE2,                                     Tkdpo2k3k4k_set_SCALE2                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_STATE4,                                     Tkdpo2k3k4k_get_STATE4,                                     Tkdpo2k3k4k_set_STATE4                                      );
	pMap->Add(TKDPO2K3K4K_ATTR_FACTOR,                                     Tkdpo2k3k4k_get_FACTOR,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_SOURCE2,                               Tkdpo2k3k4k_get_DATA_SOURCE2,                               Tkdpo2k3k4k_set_DATA_SOURCE2                                );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_START,                                 Tkdpo2k3k4k_get_DATA_START,                                 Tkdpo2k3k4k_set_DATA_START                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_STOP,                                  Tkdpo2k3k4k_get_DATA_STOP,                                  Tkdpo2k3k4k_set_DATA_STOP                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_WIDTH,                                 Tkdpo2k3k4k_get_DATA_WIDTH,                                 Tkdpo2k3k4k_set_DATA_WIDTH                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_RECORD_LENGTH3,                             Tkdpo2k3k4k_get_RECORD_LENGTH3,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_COMPOSITION,                           Tkdpo2k3k4k_get_DATA_COMPOSITION,                           Tkdpo2k3k4k_set_DATA_COMPOSITION                            );
	pMap->Add(TKDPO2K3K4K_ATTR_DATA_RESOLUTION,                            Tkdpo2k3k4k_get_DATA_RESOLUTION,                            Tkdpo2k3k4k_set_DATA_RESOLUTION                             );
	pMap->Add(TKDPO2K3K4K_ATTR_FILLTER_VU_FREQUENCY,                       Tkdpo2k3k4k_get_FILLTER_VU_FREQUENCY,                       Tkdpo2k3k4k_set_FILLTER_VU_FREQUENCY                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IO_SESSION,                                 Tkdpo2k3k4k_get_IO_SESSION,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TOTAL_MARKS,                                Tkdpo2k3k4k_get_TOTAL_MARKS,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_FREE_MARKS,                                 Tkdpo2k3k4k_get_FREE_MARKS,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_END,                               Tkdpo2k3k4k_get_SELECTED_END,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_FOCUS,                             Tkdpo2k3k4k_get_SELECTED_FOCUS,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_LABEL,                             Tkdpo2k3k4k_get_SELECTED_LABEL,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_MARKS_IN_COLUMN,                   Tkdpo2k3k4k_get_SELECTED_MARKS_IN_COLUMN,                   NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_OWNER,                             Tkdpo2k3k4k_get_SELECTED_OWNER,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_POSITION,                          Tkdpo2k3k4k_get_SELECTED_POSITION,                          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_SOURCE,                            Tkdpo2k3k4k_get_SELECTED_SOURCE,                            NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_START,                             Tkdpo2k3k4k_get_SELECTED_START,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SELECTED_STATE,                             Tkdpo2k3k4k_get_SELECTED_STATE,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_DIRECTION,                            Tkdpo2k3k4k_get_DELAY_DIRECTION,                            Tkdpo2k3k4k_set_DELAY_DIRECTION                             );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_EDGE1,                                Tkdpo2k3k4k_get_DELAY_EDGE1,                                Tkdpo2k3k4k_set_DELAY_EDGE1                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_DELAY_EDGE2,                                Tkdpo2k3k4k_get_DELAY_EDGE2,                                Tkdpo2k3k4k_set_DELAY_EDGE2                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_HIGH,              Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_HIGH,              Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_HIGH               );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_LOW,               Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_LOW,               Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_LOW                );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_MID,               Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID,               Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID                );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_MID2,              Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID2,              Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID2               );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_METHOD,                     Tkdpo2k3k4k_get_REFERENCE_LEVEL_METHOD,                     Tkdpo2k3k4k_set_REFERENCE_LEVEL_METHOD                      );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_HIGH,               Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_HIGH,               Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_HIGH                );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_LOW,                Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_LOW,                Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_LOW                 );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_MID,                Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID,                Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID                 );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_MID2,               Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID2,               Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID2                );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_UNIT,                       Tkdpo2k3k4k_get_REFERENCE_LEVEL_UNIT,                       Tkdpo2k3k4k_set_REFERENCE_LEVEL_UNIT                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE1,                                    Tkdpo2k3k4k_get_SOURCE1,                                    Tkdpo2k3k4k_set_SOURCE1                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE8,                                    Tkdpo2k3k4k_get_SOURCE8,                                    Tkdpo2k3k4k_set_SOURCE8                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE4,                                      Tkdpo2k3k4k_get_TYPE4,                                      Tkdpo2k3k4k_set_TYPE4                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_UNITS9,                                     Tkdpo2k3k4k_get_UNITS9,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VALUE,                                      Tkdpo2k3k4k_get_VALUE,                                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_FRONT_PANEL_LOCK,                           Tkdpo2k3k4k_get_FRONT_PANEL_LOCK,                           Tkdpo2k3k4k_set_FRONT_PANEL_LOCK                            );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE7,                                      Tkdpo2k3k4k_get_TYPE7,                                      Tkdpo2k3k4k_set_TYPE7                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_VOLTAGE_SOURCE,                             Tkdpo2k3k4k_get_VOLTAGE_SOURCE,                             Tkdpo2k3k4k_set_VOLTAGE_SOURCE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_CURRENT_SOURCE,                             Tkdpo2k3k4k_get_CURRENT_SOURCE,                             Tkdpo2k3k4k_set_CURRENT_SOURCE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_STATE3,                             Tkdpo2k3k4k_get_DISPLAY_STATE3,                             Tkdpo2k3k4k_set_DISPLAY_STATE3                              );
	pMap->Add(TKDPO2K3K4K_ATTR_INDICATOR,                                  Tkdpo2k3k4k_get_INDICATOR,                                  Tkdpo2k3k4k_set_INDICATOR                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_GATE_SOURCE,                                Tkdpo2k3k4k_get_GATE_SOURCE,                                Tkdpo2k3k4k_set_GATE_SOURCE                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_GATING2,                                    Tkdpo2k3k4k_get_GATING2,                                    Tkdpo2k3k4k_set_GATING2                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_STATISTICS_MODE2,                           Tkdpo2k3k4k_get_STATISTICS_MODE2,                           Tkdpo2k3k4k_set_STATISTICS_MODE2                            );
	pMap->Add(TKDPO2K3K4K_ATTR_STATISTICS_SAMPLES,                         Tkdpo2k3k4k_get_STATISTICS_SAMPLES,                         Tkdpo2k3k4k_set_STATISTICS_SAMPLES                          );
	pMap->Add(TKDPO2K3K4K_ATTR_FREQUENCY_REFERENCE,                        Tkdpo2k3k4k_get_FREQUENCY_REFERENCE,                        Tkdpo2k3k4k_set_FREQUENCY_REFERENCE                         );
	pMap->Add(TKDPO2K3K4K_ATTR_ALL_MEAS_DISPLAY_STATE,                     NULL,                                                        Tkdpo2k3k4k_set_ALL_MEAS_DISPLAY_STATE                      );
	pMap->Add(TKDPO2K3K4K_ATTR_APPARENT_POWER,                             Tkdpo2k3k4k_get_APPARENT_POWER,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_FREQUENCY2,                                 Tkdpo2k3k4k_get_FREQUENCY2,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_I_CREST_FACTOR,                             Tkdpo2k3k4k_get_I_CREST_FACTOR,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PHASE_ANGLE,                                Tkdpo2k3k4k_get_PHASE_ANGLE,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_POWER_FACTOR,                               Tkdpo2k3k4k_get_POWER_FACTOR,                               NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_REACTIVE_POWER,                             Tkdpo2k3k4k_get_REACTIVE_POWER,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_TRUE_POWER,                                 Tkdpo2k3k4k_get_TRUE_POWER,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_VRMS,                                       Tkdpo2k3k4k_get_VRMS,                                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IRMS,                                       Tkdpo2k3k4k_get_IRMS,                                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_V_CREST_FACTOR,                             Tkdpo2k3k4k_get_V_CREST_FACTOR,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_CONDUCTION_CALCULATION,                     Tkdpo2k3k4k_get_CONDUCTION_CALCULATION,                     Tkdpo2k3k4k_set_CONDUCTION_CALCULATION                      );
	pMap->Add(TKDPO2K3K4K_ATTR_RDS_ON_VALUE,                               Tkdpo2k3k4k_get_RDS_ON_VALUE,                               Tkdpo2k3k4k_set_RDS_ON_VALUE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_VCE_SAT_VALUE,                              Tkdpo2k3k4k_get_VCE_SAT_VALUE,                              Tkdpo2k3k4k_set_VCE_SAT_VALUE                               );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAS_DISPLAY_TYPE,                          Tkdpo2k3k4k_get_MEAS_DISPLAY_TYPE,                          Tkdpo2k3k4k_set_MEAS_DISPLAY_TYPE                           );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_OF_CYCLES,                           Tkdpo2k3k4k_get_NUMBER_OF_CYCLES,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_STANDARD2,                                  Tkdpo2k3k4k_get_STANDARD2,                                  Tkdpo2k3k4k_set_STANDARD2                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_SET,                                Tkdpo2k3k4k_get_DISPLAY_SET,                                Tkdpo2k3k4k_set_DISPLAY_SET                                 );
	pMap->Add(TKDPO2K3K4K_ATTR_DISPLAY_TYPE2,                              Tkdpo2k3k4k_get_DISPLAY_TYPE2,                              Tkdpo2k3k4k_set_DISPLAY_TYPE2                               );
	pMap->Add(TKDPO2K3K4K_ATTR_OVERALL_RESULTS,                            Tkdpo2k3k4k_get_OVERALL_RESULTS,                            NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_RMS_RESULT,                                 Tkdpo2k3k4k_get_RMS_RESULT,                                 NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_THDF_RESULT,                                Tkdpo2k3k4k_get_THDF_RESULT,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_THDR_RESULT,                                Tkdpo2k3k4k_get_THDR_RESULT,                                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IEC_FUNDAMENTAL_CURRENT_RESULT,             Tkdpo2k3k4k_get_IEC_FUNDAMENTAL_CURRENT_RESULT,             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IEC_HARMONIC3_RESULT,                       Tkdpo2k3k4k_get_IEC_HARMONIC3_RESULT,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IEC_HARMONIC5_RESULT,                       Tkdpo2k3k4k_get_IEC_HARMONIC5_RESULT,                       NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IECPOHC_RESULT,                             Tkdpo2k3k4k_get_IECPOHC_RESULT,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IECPOHL_RESULT,                             Tkdpo2k3k4k_get_IECPOHL_RESULT,                             NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IEC_INPUT_POWER,                            Tkdpo2k3k4k_get_IEC_INPUT_POWER,                            NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_IEC_POWER_FACTOR,                           Tkdpo2k3k4k_get_IEC_POWER_FACTOR,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE11,                                   Tkdpo2k3k4k_get_SOURCE11,                                   Tkdpo2k3k4k_set_SOURCE11                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_VALUE3,                                     Tkdpo2k3k4k_get_VALUE3,                                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MAX,                                        Tkdpo2k3k4k_get_MAX,                                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MEAN2,                                      Tkdpo2k3k4k_get_MEAN2,                                      NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_MIN,                                        Tkdpo2k3k4k_get_MIN,                                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_STANDARD_DEVIATION2,                        Tkdpo2k3k4k_get_STANDARD_DEVIATION2,                        NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SOURCE12,                                   Tkdpo2k3k4k_get_SOURCE12,                                   Tkdpo2k3k4k_set_SOURCE12                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE8,                                      Tkdpo2k3k4k_get_TYPE8,                                      Tkdpo2k3k4k_set_TYPE8                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_OF_POINTS,                           Tkdpo2k3k4k_get_NUMBER_OF_POINTS,                           NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_PLOT_TYPE,                                  Tkdpo2k3k4k_get_PLOT_TYPE,                                  Tkdpo2k3k4k_set_PLOT_TYPE                                   );
	pMap->Add(TKDPO2K3K4K_ATTR_ACTION_ON_VIOLATION,                        Tkdpo2k3k4k_get_ACTION_ON_VIOLATION,                        Tkdpo2k3k4k_set_ACTION_ON_VIOLATION                         );
	pMap->Add(TKDPO2K3K4K_ATTR_MASK_STATE,                                 Tkdpo2k3k4k_get_MASK_STATE,                                 Tkdpo2k3k4k_set_MASK_STATE                                  );
	pMap->Add(TKDPO2K3K4K_ATTR_RESULT_FAILURE_SAMPLES,                     Tkdpo2k3k4k_get_RESULT_FAILURE_SAMPLES,                     NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_RESULT_WAVEFORMS_ACQUIRED,                  Tkdpo2k3k4k_get_RESULT_WAVEFORMS_ACQUIRED,                  NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_RESULT_TEST_STATE,                          Tkdpo2k3k4k_get_RESULT_TEST_STATE,                          NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SQUELCH_STATE,                              Tkdpo2k3k4k_get_SQUELCH_STATE,                              Tkdpo2k3k4k_set_SQUELCH_STATE                               );
	pMap->Add(TKDPO2K3K4K_ATTR_SQUELCH_THRESHOLD,                          Tkdpo2k3k4k_get_SQUELCH_THRESHOLD,                          Tkdpo2k3k4k_set_SQUELCH_THRESHOLD                           );
	pMap->Add(TKDPO2K3K4K_ATTR_NUMBER_OF_AVERAGES,                         Tkdpo2k3k4k_get_NUMBER_OF_AVERAGES,                         Tkdpo2k3k4k_set_NUMBER_OF_AVERAGES                          );
	pMap->Add(TKDPO2K3K4K_ATTR_AVERAGE_COUNT,                              Tkdpo2k3k4k_get_AVERAGE_COUNT,                              NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECTOGRAM_STATE,                           Tkdpo2k3k4k_get_SPECTOGRAM_STATE,                           Tkdpo2k3k4k_set_SPECTOGRAM_STATE                            );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECTOGRAM_NUMBER_OF_SLICES,                Tkdpo2k3k4k_get_SPECTOGRAM_NUMBER_OF_SLICES,                NULL                                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECTOGRAM_SELECT_SLICE,                    Tkdpo2k3k4k_get_SPECTOGRAM_SELECT_SLICE,                    Tkdpo2k3k4k_set_SPECTOGRAM_SELECT_SLICE                     );
	pMap->Add(TKDPO2K3K4K_ATTR_DETECTION_MODE,                             Tkdpo2k3k4k_get_DETECTION_MODE,                             Tkdpo2k3k4k_set_DETECTION_MODE                              );
	pMap->Add(TKDPO2K3K4K_ATTR_SPECTRUM_MODE,                              Tkdpo2k3k4k_get_SPECTRUM_MODE,                              Tkdpo2k3k4k_set_SPECTRUM_MODE                               );
	pMap->Add(TKDPO2K3K4K_ATTR_CENTER_FREQUENCY,                           Tkdpo2k3k4k_get_CENTER_FREQUENCY,                           Tkdpo2k3k4k_set_CENTER_FREQUENCY                            );
	pMap->Add(TKDPO2K3K4K_ATTR_SPAN,                                       Tkdpo2k3k4k_get_SPAN,                                       Tkdpo2k3k4k_set_SPAN                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_START,                                      Tkdpo2k3k4k_get_START,                                      Tkdpo2k3k4k_set_START                                       );
	pMap->Add(TKDPO2K3K4K_ATTR_STOP,                                       Tkdpo2k3k4k_get_STOP,                                       Tkdpo2k3k4k_set_STOP                                        );
	pMap->Add(TKDPO2K3K4K_ATTR_REFERENCE_LEVEL,                            Tkdpo2k3k4k_get_REFERENCE_LEVEL,                            Tkdpo2k3k4k_set_REFERENCE_LEVEL                             );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_POSITION2,                         Tkdpo2k3k4k_get_VERTICAL_POSITION2,                         Tkdpo2k3k4k_set_VERTICAL_POSITION2                          );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_SCALE4,                            Tkdpo2k3k4k_get_VERTICAL_SCALE4,                            Tkdpo2k3k4k_set_VERTICAL_SCALE4                             );
	pMap->Add(TKDPO2K3K4K_ATTR_VERTICAL_UNITS2,                            Tkdpo2k3k4k_get_VERTICAL_UNITS2,                            Tkdpo2k3k4k_set_VERTICAL_UNITS2                             );
	pMap->Add(TKDPO2K3K4K_ATTR_RBW_MODE,                                   Tkdpo2k3k4k_get_RBW_MODE,                                   Tkdpo2k3k4k_set_RBW_MODE                                    );
	pMap->Add(TKDPO2K3K4K_ATTR_RBW,                                        Tkdpo2k3k4k_get_RBW,                                        Tkdpo2k3k4k_set_RBW                                         );
	pMap->Add(TKDPO2K3K4K_ATTR_SPANRBW_RATIO,                              Tkdpo2k3k4k_get_SPANRBW_RATIO,                              Tkdpo2k3k4k_set_SPANRBW_RATIO                               );
	pMap->Add(TKDPO2K3K4K_ATTR_WINDOW2,                                    Tkdpo2k3k4k_get_WINDOW2,                                    Tkdpo2k3k4k_set_WINDOW2                                     );
	pMap->Add(TKDPO2K3K4K_ATTR_MANUAL_STATE,                               Tkdpo2k3k4k_get_MANUAL_STATE,                               Tkdpo2k3k4k_set_MANUAL_STATE                                );
	pMap->Add(TKDPO2K3K4K_ATTR_TYPE10,                                     Tkdpo2k3k4k_get_TYPE10,                                     Tkdpo2k3k4k_set_TYPE10                                      );
}

void InitializeErrorMap(CIviCErrorMap* pMap)
{
	pMap->Add(E_TKDPO2K3K4K_IO_GENERAL,	TKDPO2K3K4K_ERROR_IO_GENERAL);
	pMap->Add(E_TKDPO2K3K4K_IO_TIMEOUT,	TKDPO2K3K4K_ERROR_IO_TIMEOUT);
	pMap->Add(E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_MODEL_NOT_SUPPORTED);
	pMap->Add(E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE,	TKDPO2K3K4K_ERROR_PERSONALITY_NOT_ACTIVE);
	pMap->Add(E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED,	TKDPO2K3K4K_ERROR_PERSONALITY_NOT_LICENSED);
	pMap->Add(E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED,	TKDPO2K3K4K_ERROR_PERSONALITY_NOT_INSTALLED);
	pMap->Add(E_IVI_CANNOT_RECOVER,	TKDPO2K3K4K_ERROR_CANNOT_RECOVER);
	pMap->Add(E_IVI_INSTRUMENT_STATUS,	TKDPO2K3K4K_ERROR_INSTRUMENT_STATUS);
	pMap->Add(E_IVI_CANNOT_OPEN_FILE,	TKDPO2K3K4K_ERROR_CANNOT_OPEN_FILE);
	pMap->Add(E_IVI_READING_FILE,	TKDPO2K3K4K_ERROR_READING_FILE);
	pMap->Add(E_IVI_WRITING_FILE,	TKDPO2K3K4K_ERROR_WRITING_FILE);
	pMap->Add(E_IVI_INVALID_PATHNAME,	TKDPO2K3K4K_ERROR_INVALID_PATHNAME);
	pMap->Add(E_IVI_INVALID_VALUE,	TKDPO2K3K4K_ERROR_INVALID_VALUE);
	pMap->Add(E_IVI_METHOD_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_FUNCTION_NOT_SUPPORTED);
	pMap->Add(E_IVI_PROPERTY_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_ATTRIBUTE_NOT_SUPPORTED);
	pMap->Add(E_IVI_VALUE_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_VALUE_NOT_SUPPORTED);
	pMap->Add(E_IVI_NOT_INITIALIZED,	TKDPO2K3K4K_ERROR_NOT_INITIALIZED);
	pMap->Add(E_IVI_UNKNOWN_CHANNEL_NAME,	TKDPO2K3K4K_ERROR_UNKNOWN_CHANNEL_NAME);
	pMap->Add(E_IVI_TOO_MANY_OPEN_FILES,	TKDPO2K3K4K_ERROR_TOO_MANY_OPEN_FILES);
	pMap->Add(E_IVI_CHANNEL_NAME_REQUIRED,	TKDPO2K3K4K_ERROR_CHANNEL_NAME_REQUIRED);
	pMap->Add(E_IVI_MISSING_OPTION_NAME,	TKDPO2K3K4K_ERROR_MISSING_OPTION_NAME);
	pMap->Add(E_IVI_MISSING_OPTION_VALUE,	TKDPO2K3K4K_ERROR_MISSING_OPTION_VALUE);
	pMap->Add(E_IVI_BAD_OPTION_NAME,	TKDPO2K3K4K_ERROR_BAD_OPTION_NAME);
	pMap->Add(E_IVI_BAD_OPTION_VALUE,	TKDPO2K3K4K_ERROR_BAD_OPTION_VALUE);
	pMap->Add(E_IVI_OUT_OF_MEMORY,	TKDPO2K3K4K_ERROR_OUT_OF_MEMORY);
	pMap->Add(E_IVI_OPERATION_PENDING,	TKDPO2K3K4K_ERROR_OPERATION_PENDING);
	pMap->Add(E_IVI_NULL_POINTER,	TKDPO2K3K4K_ERROR_NULL_POINTER);
	pMap->Add(E_IVI_UNEXPECTED_RESPONSE,	TKDPO2K3K4K_ERROR_UNEXPECTED_RESPONSE);
	pMap->Add(E_IVI_FILE_NOT_FOUND,	TKDPO2K3K4K_ERROR_FILE_NOT_FOUND);
	pMap->Add(E_IVI_INVALID_FILE_FORMAT,	TKDPO2K3K4K_ERROR_INVALID_FILE_FORMAT);
	pMap->Add(E_IVI_STATUS_NOT_AVAILABLE,	TKDPO2K3K4K_ERROR_STATUS_NOT_AVAILABLE);
	pMap->Add(E_IVI_ID_QUERY_FAILED,	TKDPO2K3K4K_ERROR_ID_QUERY_FAILED);
	pMap->Add(E_IVI_RESET_FAILED,	TKDPO2K3K4K_ERROR_RESET_FAILED);
	pMap->Add(E_IVI_RESOURCE_UNKNOWN,	TKDPO2K3K4K_ERROR_RESOURCE_UNKNOWN);
	pMap->Add(E_IVI_ALREADY_INITIALIZED,	TKDPO2K3K4K_ERROR_ALREADY_INITIALIZED);
	pMap->Add(E_IVI_CANNOT_CHANGE_SIMULATION_STATE,	TKDPO2K3K4K_ERROR_CANNOT_CHANGE_SIMULATION_STATE);
	pMap->Add(E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR,	TKDPO2K3K4K_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR);
	pMap->Add(E_IVI_INVALID_RANGE_IN_SELECTOR,	TKDPO2K3K4K_ERROR_INVALID_RANGE_IN_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_NAME_IN_SELECTOR,	TKDPO2K3K4K_ERROR_UNKOWN_NAME_IN_SELECTOR);
	pMap->Add(E_IVI_BADLY_FORMED_SELECTOR,	TKDPO2K3K4K_ERROR_BADLY_FORMED_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER,	TKDPO2K3K4K_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER);
	pMap->Add(E_IVISCOPE_CHANNEL_NOT_ENABLED,	TKDPO2K3K4K_ERROR_CHANNEL_NOT_ENABLED);
	pMap->Add(E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT,	TKDPO2K3K4K_ERROR_UNABLE_TO_PERFORM_MEASUREMENT);
	pMap->Add(E_IVISCOPE_MAX_TIME_EXCEEDED,	TKDPO2K3K4K_ERROR_MAX_TIME_EXCEEDED);
	pMap->Add(E_IVISCOPE_INVALID_ACQ_TYPE,	TKDPO2K3K4K_ERROR_INVALID_ACQ_TYPE);
	pMap->Add(E_TKDPO2K3K4K_NO_ACQUISITION_MADE,	TKDPO2K3K4K_ERROR_NO_ACQUISITION_MADE);
	pMap->Add(E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_CHANNEL_NOT_SUPPORTED);
	pMap->Add(E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED,	TKDPO2K3K4K_ERROR_REFERENCE_NOT_SUPPORTED);
	pMap->Add(S_IVI_SUCCESS,	TKDPO2K3K4K_SUCCESS);
	pMap->Add(S_IVI_NSUP_ID_QUERY,	TKDPO2K3K4K_WARN_NSUP_ID_QUERY);
	pMap->Add(S_IVI_NSUP_RESET,	TKDPO2K3K4K_WARN_NSUP_RESET);
	pMap->Add(S_IVI_NSUP_SELF_TEST,	TKDPO2K3K4K_WARN_NSUP_SELF_TEST);
	pMap->Add(S_IVI_NSUP_ERROR_QUERY,	TKDPO2K3K4K_WARN_NSUP_ERROR_QUERY);
	pMap->Add(S_IVI_NSUP_REV_QUERY,	TKDPO2K3K4K_WARN_NSUP_REV_QUERY);
	pMap->Add(S_IVISCOPE_INVALID_WFM_ELEMENT,	TKDPO2K3K4K_WARN_INVALID_WFM_ELEMENT);
}

void InitializeErrorMessageMap(CIviCErrorMessageMap* pMap)
{
	pMap->Add(TKDPO2K3K4K_ERROR_IO_GENERAL, _T("I/O error."));
	pMap->Add(TKDPO2K3K4K_ERROR_IO_TIMEOUT, _T("I/O timeout error."));
	pMap->Add(TKDPO2K3K4K_ERROR_MODEL_NOT_SUPPORTED, _T("Instrument model does not support this feature."));
	pMap->Add(TKDPO2K3K4K_ERROR_PERSONALITY_NOT_ACTIVE, _T("Personality is not active."));
	pMap->Add(TKDPO2K3K4K_ERROR_PERSONALITY_NOT_LICENSED, _T("Personality is not licensed."));
	pMap->Add(TKDPO2K3K4K_ERROR_PERSONALITY_NOT_INSTALLED, _T("Personality is not installed."));
	pMap->Add(TKDPO2K3K4K_ERROR_CANNOT_RECOVER, _T("Failure cannot recover."));
	pMap->Add(TKDPO2K3K4K_ERROR_INSTRUMENT_STATUS, _T("Instrument error detected.  Use ErrorQuery() to determine the error(s)."));
	pMap->Add(TKDPO2K3K4K_ERROR_CANNOT_OPEN_FILE, _T("Cannot open file."));
	pMap->Add(TKDPO2K3K4K_ERROR_READING_FILE, _T("Error reading file."));
	pMap->Add(TKDPO2K3K4K_ERROR_WRITING_FILE, _T("Error writing file."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_PATHNAME, _T("The pathname is invalid."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_VALUE, _T("Invalid value (%1) for method %2, parameter %3."));
	pMap->Add(TKDPO2K3K4K_ERROR_FUNCTION_NOT_SUPPORTED, _T("Does not support this class-compliant feature: method %1"));
	pMap->Add(TKDPO2K3K4K_ERROR_ATTRIBUTE_NOT_SUPPORTED, _T("Does not support this class-compliant feature: property %1."));
	pMap->Add(TKDPO2K3K4K_ERROR_VALUE_NOT_SUPPORTED, _T("Does not support this class-compliant feature:  (enumeration) value %1 passed as the value for parameter %2 in method %3."));
	pMap->Add(TKDPO2K3K4K_ERROR_NOT_INITIALIZED, _T("A connection to the instrument has not been established."));
	pMap->Add(TKDPO2K3K4K_ERROR_UNKNOWN_CHANNEL_NAME, _T("Unknown channel name."));
	pMap->Add(TKDPO2K3K4K_ERROR_TOO_MANY_OPEN_FILES, _T("Too many files are open."));
	pMap->Add(TKDPO2K3K4K_ERROR_CHANNEL_NAME_REQUIRED, _T("A channel name is required."));
	pMap->Add(TKDPO2K3K4K_ERROR_MISSING_OPTION_NAME, _T("The option string is missing an option name."));
	pMap->Add(TKDPO2K3K4K_ERROR_MISSING_OPTION_VALUE, _T("The option string is missing an option value."));
	pMap->Add(TKDPO2K3K4K_ERROR_BAD_OPTION_NAME, _T("The %1 name in the option string is unknown."));
	pMap->Add(TKDPO2K3K4K_ERROR_BAD_OPTION_VALUE, _T("The %1 value in the option string is unknown."));
	pMap->Add(TKDPO2K3K4K_ERROR_OUT_OF_MEMORY, _T("Could not allocate necessary memory."));
	pMap->Add(TKDPO2K3K4K_ERROR_OPERATION_PENDING, _T("Operation in progress."));
	pMap->Add(TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Null pointer passed for method %1, parameter %2."));
	pMap->Add(TKDPO2K3K4K_ERROR_UNEXPECTED_RESPONSE, _T("Unexpected response from instrument."));
	pMap->Add(TKDPO2K3K4K_ERROR_FILE_NOT_FOUND, _T("File not found."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_FILE_FORMAT, _T("Invalid file format."));
	pMap->Add(TKDPO2K3K4K_ERROR_STATUS_NOT_AVAILABLE, _T("The instrument status is not available."));
	pMap->Add(TKDPO2K3K4K_ERROR_ID_QUERY_FAILED, _T("Instrument ID query failed."));
	pMap->Add(TKDPO2K3K4K_ERROR_RESET_FAILED, _T("Instrument reset failed."));
	pMap->Add(TKDPO2K3K4K_ERROR_RESOURCE_UNKNOWN, _T("Unknown resource."));
	pMap->Add(TKDPO2K3K4K_ERROR_ALREADY_INITIALIZED, _T("The driver is already initialized."));
	pMap->Add(TKDPO2K3K4K_ERROR_CANNOT_CHANGE_SIMULATION_STATE, _T("The simulation state cannot be changed."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR, _T("The number of levels in the selector is not valid for the %1 repeated capability."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_RANGE_IN_SELECTOR, _T("The range %1 is not valid for the repeated capability %2."));
	pMap->Add(TKDPO2K3K4K_ERROR_UNKOWN_NAME_IN_SELECTOR, _T("Unknown name in selector."));
	pMap->Add(TKDPO2K3K4K_ERROR_BADLY_FORMED_SELECTOR, _T("The repeated capability selector is badly-formed."));
	pMap->Add(TKDPO2K3K4K_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER, _T("Unknown physical repeated capability selector."));
	pMap->Add(TKDPO2K3K4K_ERROR_CHANNEL_NOT_ENABLED, _T("Specified channel is not enabled."));
	pMap->Add(TKDPO2K3K4K_ERROR_UNABLE_TO_PERFORM_MEASUREMENT, _T("Unable to perform desired measurement operation."));
	pMap->Add(TKDPO2K3K4K_ERROR_MAX_TIME_EXCEEDED, _T("Maximum time exceeded before the operation completed."));
	pMap->Add(TKDPO2K3K4K_ERROR_INVALID_ACQ_TYPE, _T("Invalid acquisition type."));
	pMap->Add(TKDPO2K3K4K_ERROR_NO_ACQUISITION_MADE, _T("No acquisitions made, start acquisition."));
	pMap->Add(TKDPO2K3K4K_ERROR_CHANNEL_NOT_SUPPORTED, _T("Channel not supported."));
	pMap->Add(TKDPO2K3K4K_ERROR_REFERENCE_NOT_SUPPORTED, _T("Reference channel not supported."));
	pMap->Add(TKDPO2K3K4K_SUCCESS, _T("Success."));
	pMap->Add(TKDPO2K3K4K_WARN_NSUP_ID_QUERY, _T("ID Query is not supported by this instrument."));
	pMap->Add(TKDPO2K3K4K_WARN_NSUP_RESET, _T("Reset is not supported by this instrument."));
	pMap->Add(TKDPO2K3K4K_WARN_NSUP_SELF_TEST, _T("Self test is not supported by this instrument."));
	pMap->Add(TKDPO2K3K4K_WARN_NSUP_ERROR_QUERY, _T("Error query is not supported by this instrument."));
	pMap->Add(TKDPO2K3K4K_WARN_NSUP_REV_QUERY, _T("Firmware revision query is not supported by this instrument."));
	pMap->Add(TKDPO2K3K4K_WARN_INVALID_WFM_ELEMENT, _T("One of the elements in the waveform array is invalid."));
}

///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated implementation of functions and attributes
//

ViStatus _VI_FUNC Tkdpo2k3k4k_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_init(ResourceName, IdQuery, Reset, Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_close ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_close(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InitWithOptions(ResourceName, IdQuery, Reset, OptionsString, Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_revision_query(Vi, DriverRev, InstrRev);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_message(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetError(Vi, ErrorCode, ErrorDescriptionBufferSize, ErrorDescription);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ClearError ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearError(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ClearInterchangeWarnings ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearInterchangeWarnings(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextCoercionRecord(Vi, CoercionRecordBufferSize, CoercionRecord);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextInterchangeWarning(Vi, InterchangeWarningBufferSize, InterchangeWarning);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_InvalidateAllAttributes ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InvalidateAllAttributes(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ResetInterchangeCheck ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetInterchangeCheck(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Disable ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_Disable(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_query(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_LockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_LockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_reset ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_reset(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ResetWithDefaults ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetWithDefaults(Vi);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_self_test(Vi, TestResult, TestMessage);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_UnlockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_IsInvalidWfmElement ( ViSession Vi, ViReal64 ElementValue, ViBoolean* IsInvalid )
{
	if (IsInvalid == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter IsInvalid is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Element(ElementValue);
		CParam<ViBoolean> _val;
		HRESULT hr = spMeasurements->IsWaveformElementInvalid(_Element, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*IsInvalid = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ActualRecordLength ( ViSession Vi, ViInt32* ActualRecordLength )
{
	if (ActualRecordLength == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ActualRecordLength is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_RecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ActualRecordLength = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SampleRate ( ViSession Vi, ViReal64* SampleRate )
{
	if (SampleRate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SampleRate is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SampleRate = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_AutoProbeSenseValue ( ViSession Vi, ViConstString ChannelName, ViReal64* AutoProbeSenseValue )
{
	if (AutoProbeSenseValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AutoProbeSenseValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, ChannelName, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_ProbeSense(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AutoProbeSenseValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SampleMode ( ViSession Vi, ViInt32* SampleMode )
{
	if (SampleMode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SampleMode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_SampleMode((IviScopeSampleModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SampleMode = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_AutoSetup ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurements->AutoSetup();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcquisitionType ( ViSession Vi, ViInt32 AcquisitionType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AcquisitionType);
		HRESULT hr = spAcquisition->put_Type((IviScopeAcquisitionTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureInterpolation ( ViSession Vi, ViInt32 Interpolation )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(Interpolation);
		HRESULT hr = spAcquisition->put_Interpolation((IviScopeInterpolationEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureInitiateContinuous ( ViSession Vi, ViBoolean ContinuousAcquisition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(ContinuousAcquisition);
		HRESULT hr = spTrigger->put_Continuous(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureNumAverages ( ViSession Vi, ViInt32 NumberOfAverages )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(NumberOfAverages);
		HRESULT hr = spAcquisition->put_NumberOfAverages(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureNumEnvelopes ( ViSession Vi, ViInt32 NumEnvelopes )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(NumEnvelopes);
		HRESULT hr = spAcquisition->put_NumberOfEnvelopes(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcquisitionRecord ( ViSession Vi, ViReal64 TimePerRecord, ViInt32 MinNumPts, ViReal64 AcquisitionStartTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _TimePerRecord(TimePerRecord);
		CParam<ViInt32> _MinNumPts(MinNumPts);
		CParam<ViReal64> _AcquisitionStartTime(AcquisitionStartTime);
		HRESULT hr = spAcquisition->ConfigureRecord(_TimePerRecord, _MinNumPts, _AcquisitionStartTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTriggerCoupling ( ViSession Vi, ViInt32 Coupling )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(Coupling);
		HRESULT hr = spTrigger->put_Coupling((IviScopeTriggerCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTVTriggerLineNumber ( ViSession Vi, ViInt32 TVLineNumber )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(TVLineNumber);
		HRESULT hr = spTriggerTv->put_LineNumber(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcLineTriggerSlope ( ViSession Vi, ViInt32 ACLineSlope )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerAcLine> spTriggerAcLine;
	status = GetDriverInterface(Vi, &spTriggerAcLine);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(ACLineSlope);
		HRESULT hr = spTriggerAcLine->put_Slope((IviScopeACLineSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTriggerModifier ( ViSession Vi, ViInt32 TriggerModifier )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(TriggerModifier);
		HRESULT hr = spTrigger->put_Modifier((IviScopeTriggerModifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTrigger ( ViSession Vi, ViInt32 TriggerType, ViReal64 Holdoff )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(TriggerType);
		CParam<ViReal64> _Holdoff(Holdoff);
		HRESULT hr = spTrigger->Configure((IviScopeTriggerTypeEnum)(long)_Type, _Holdoff);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureEdgeTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViInt32 Slope )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerEdge> spTriggerEdge;
	status = GetDriverInterface(Vi, &spTriggerEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Slope(Slope);
		HRESULT hr = spTriggerEdge->Configure(_Source, _Level, (IviScopeTriggerSlopeEnum)(long)_Slope);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureGlitchTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViReal64 GlitchWidth, ViInt32 GlitchPolarity, ViInt32 GlitchCondition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _Width(GlitchWidth);
		CParam<ViInt32> _polarity(GlitchPolarity);
		CParam<ViInt32> _condition(GlitchCondition);
		HRESULT hr = spTriggerGlitch->Configure(_Source, _Level, _Width, (IviScopeGlitchPolarityEnum)(long)_polarity, (IviScopeGlitchConditionEnum)(long)_condition);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRuntTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 RuntThresholdLow, ViReal64 RuntThresholdHigh, ViInt32 RuntPolarity )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Source(Source);
		CParam<ViReal64> _ThresholdLow(RuntThresholdLow);
		CParam<ViReal64> _ThresholdHigh(RuntThresholdHigh);
		CParam<ViInt32> _polarity(RuntPolarity);
		HRESULT hr = spTriggerRunt->Configure(_Source, _ThresholdLow, _ThresholdHigh, (IviScopeRuntPolarityEnum)(long)_polarity);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTVTriggerSource ( ViSession Vi, ViConstString Source, ViInt32 TVSignalFormat, ViInt32 TVEvent, ViInt32 TVPolarity )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Source(Source);
		CParam<ViInt32> _SignalFormat(TVSignalFormat);
		CParam<ViInt32> _Event(TVEvent);
		CParam<ViInt32> _polarity(TVPolarity);
		HRESULT hr = spTriggerTv->Configure(_Source, (IviScopeTVSignalFormatEnum)(long)_SignalFormat, (IviScopeTVTriggerEventEnum)(long)_Event, (IviScopeTVTriggerPolarityEnum)(long)_polarity);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureWidthTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViReal64 WidthLowThreshold, ViReal64 WidthHighThreshold, ViInt32 WidthPolarity, ViInt32 WidthCondition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _ThresholdLow(WidthLowThreshold);
		CParam<ViReal64> _ThresholdHigh(WidthHighThreshold);
		CParam<ViInt32> _polarity(WidthPolarity);
		CParam<ViInt32> _condition(WidthCondition);
		HRESULT hr = spTriggerWidth->Configure(_Source, _Level, _ThresholdLow, _ThresholdHigh, (IviScopeWidthPolarityEnum)(long)_polarity, (IviScopeWidthConditionEnum)(long)_condition);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannels->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChannel ( ViSession Vi, ViConstString Channel, ViReal64 Range, ViReal64 Offset, ViInt32 Coupling, ViReal64 ProbeAttenuation, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _Range(Range);
		CParam<ViReal64> _Offset(Offset);
		CParam<ViInt32> _Coupling(Coupling);
		CParam<ViReal64> _ProbeAttenuation(ProbeAttenuation);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spChannel->Configure(_Range, _Offset, (IviScopeVerticalCouplingEnum)(long)_Coupling, _ProbeAttenuation, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChanCharacteristics ( ViSession Vi, ViConstString Channel, ViReal64 InputImpedance, ViReal64 MaxInputFrequency )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _InputImpedance(InputImpedance);
		CParam<ViReal64> _InputFrequencyMax(MaxInputFrequency);
		HRESULT hr = spChannel->ConfigureCharacteristics(_InputImpedance, _InputFrequencyMax);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRefLevels ( ViSession Vi, ViReal64 Low, ViReal64 Mid, ViReal64 High )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Low(Low);
		CParam<ViReal64> _Mid(Mid);
		CParam<ViReal64> _High(High);
		HRESULT hr = spReferenceLevel->Configure(_Low, _Mid, _High);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViInt32 MaxTimeMilliseconds, ViReal64 WaveformArray[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (ActualPoints == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ActualPoints is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spMeasurement->ReadWaveform(_MaxTimeMilliseconds, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformSize, WaveformArray, ActualPoints);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveformMeasurement ( ViSession Vi, ViConstString Channel, ViInt32 MeasFunction, ViInt32 MaxTimeMilliseconds, ViReal64* Measurement )
{
	if (Measurement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Measurement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViInt32> _MeasFunction(MeasFunction);
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64> _Measurement;
		HRESULT hr = spMeasurement->ReadWaveformMeasurement((IviScopeMeasurementEnum)(long)_MeasFunction, _MaxTimeMilliseconds, &_Measurement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Measurement = _Measurement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMinMaxWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViInt32 MaxTimeMilliseconds, ViReal64 MinWaveform[], ViReal64 MaxWaveform[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (ActualPoints == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ActualPoints is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViInt32> _MaxTimeMilliseconds(MaxTimeMilliseconds);
		CParam<ViReal64[]> _MinWaveform;
		CParam<ViReal64[]> _MaxWaveform;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spMeasurement->ReadWaveformMinMax(_MaxTimeMilliseconds, _MinWaveform, _MaxWaveform, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusMinWaveform = _MinWaveform.GetVal(WaveformSize, MinWaveform, ActualPoints);
			status = status == VI_SUCCESS ? statusMinWaveform : status;
			ViStatus statusMaxWaveform = _MaxWaveform.GetVal(WaveformSize, MaxWaveform, ActualPoints);
			status = status == VI_SUCCESS ? statusMaxWaveform : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViReal64 WaveformArray[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (ActualPoints == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ActualPoints is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spMeasurement->FetchWaveform(_WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformSize, WaveformArray, ActualPoints);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformMeasurement ( ViSession Vi, ViConstString Channel, ViInt32 MeasFunction, ViReal64* Measurement )
{
	if (Measurement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Measurement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViInt32> _MeasFunction(MeasFunction);
		CParam<ViReal64> _Measurement;
		HRESULT hr = spMeasurement->FetchWaveformMeasurement((IviScopeMeasurementEnum)(long)_MeasFunction, &_Measurement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Measurement = _Measurement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchMinMaxWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViReal64 MinWaveform[], ViReal64 MaxWaveform[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (ActualPoints == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ActualPoints is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeMeasurement> rgMeasurement;
	status = GetChannelInterfaces(Vi, Channel, false, rgMeasurement);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeMeasurement> spMeasurement(rgMeasurement[0]);
		CParam<ViReal64[]> _MinWaveform;
		CParam<ViReal64[]> _MaxWaveform;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spMeasurement->FetchWaveformMinMax(_MinWaveform, _MaxWaveform, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusMinWaveform = _MinWaveform.GetVal(WaveformSize, MinWaveform, ActualPoints);
			status = status == VI_SUCCESS ? statusMinWaveform : status;
			ViStatus statusMaxWaveform = _MaxWaveform.GetVal(WaveformSize, MaxWaveform, ActualPoints);
			status = status == VI_SUCCESS ? statusMaxWaveform : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Abort ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurements->Abort();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_InitiateAcquisition ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurements->Initiate();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_AcquisitionStatus ( ViSession Vi, ViInt32* Status )
{
	if (Status == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Status is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurements->Status((IviScopeAcquisitionStatusEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Status = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_AutoSet2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spAcquisition->AutoSet();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAverageMode ( ViSession Vi, ViInt32 NumberAverages )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _NumberAverages(NumberAverages);
		HRESULT hr = spAcquisition->SetAverageMode(_NumberAverages);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Start ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spAcquisition->Start();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Stop ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spAcquisition->Stop();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRecord ( ViSession Vi, ViReal64 TimePerRecord, ViInt32 MinNumPts, ViReal64 AcquisitionStartTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _TimePerRecord(TimePerRecord);
		CParam<ViInt32> _MinNumPts(MinNumPts);
		CParam<ViReal64> _AcquisitionStartTime(AcquisitionStartTime);
		HRESULT hr = spAcquisition->ConfigureRecord(_TimePerRecord, _MinNumPts, _AcquisitionStartTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSingleSequence ( ViSession Vi, ViBoolean* SingleSequence )
{
	if (SingleSequence == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SingleSequence is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAcquisition->get_SingleSequence(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SingleSequence = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSingleSequence ( ViSession Vi, ViBoolean SingleSequence )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(SingleSequence);
		HRESULT hr = spAcquisition->put_SingleSequence(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetBusName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kBuses> spBuses;
	status = GetDriverInterface(Vi, &spBuses);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spBuses->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureI2C ( ViSession Vi, ViConstString Bus, ViInt32 ClockSource, ViInt32 DataSource, ViInt32 RWInAddress )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _ClockSource(ClockSource);
		CParam<ViInt32> _DataSource(DataSource);
		CParam<ViInt32> _RWInAddress(RWInAddress);
		HRESULT hr = spBus->ConfigureI2C((Tkdpo2k3k4kBusSourceEnum)(long)_ClockSource, (Tkdpo2k3k4kBusSourceEnum)(long)_DataSource, (Tkdpo2k3k4kBusI2CRWInAddressEnum)(long)_RWInAddress);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadI2C ( ViSession Vi, ViConstString Bus, ViInt32* ClockSource, ViInt32* DataSource, ViInt32* RWInAddress )
{
	if (ClockSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockSource is VI_NULL."));
	if (DataSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSource is VI_NULL."));
	if (RWInAddress == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RWInAddress is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _ClockSource;
		CParam<ViInt32> _DataSource;
		CParam<ViInt32> _RWInAddress;
		HRESULT hr = spBus->ReadI2C((Tkdpo2k3k4kBusSourceEnum*)&_ClockSource, (Tkdpo2k3k4kBusSourceEnum*)&_DataSource, (Tkdpo2k3k4kBusI2CRWInAddressEnum*)&_RWInAddress);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ClockSource = _ClockSource.GetVal();
			*DataSource = _DataSource.GetVal();
			*RWInAddress = _RWInAddress.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAudioInputs ( ViSession Vi, ViConstString Bus, ViInt32 Type, ViInt32 ClockSource, ViInt32 DataSource, ViInt32 WordSelectSource, ViInt32 FrameSyncSource )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Type(Type);
		CParam<ViInt32> _ClockSource(ClockSource);
		CParam<ViInt32> _DataSource(DataSource);
		CParam<ViInt32> _WordSelectSource(WordSelectSource);
		CParam<ViInt32> _FrameSyncSource(FrameSyncSource);
		HRESULT hr = spBus->ConfigureAudioInputs((Tkdpo2k3k4kAudioBusTypeEnum)(long)_Type, (Tkdpo2k3k4kBusSourceEnum)(long)_ClockSource, (Tkdpo2k3k4kBusSourceEnum)(long)_DataSource, (Tkdpo2k3k4kBusSourceEnum)(long)_WordSelectSource, (Tkdpo2k3k4kBusSourceEnum)(long)_FrameSyncSource);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAudioInputs ( ViSession Vi, ViConstString Bus, ViInt32* Type, ViInt32* ClockSource, ViInt32* DataSource, ViInt32* WordSelectSource, ViInt32* FrameSyncSource )
{
	if (Type == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Type is VI_NULL."));
	if (ClockSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockSource is VI_NULL."));
	if (DataSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSource is VI_NULL."));
	if (WordSelectSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WordSelectSource is VI_NULL."));
	if (FrameSyncSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameSyncSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Type;
		CParam<ViInt32> _ClockSource;
		CParam<ViInt32> _DataSource;
		CParam<ViInt32> _WordSelectSource;
		CParam<ViInt32> _FrameSyncSource;
		HRESULT hr = spBus->ReadAudioInputs((Tkdpo2k3k4kAudioBusTypeEnum*)&_Type, (Tkdpo2k3k4kBusSourceEnum*)&_ClockSource, (Tkdpo2k3k4kBusSourceEnum*)&_DataSource, (Tkdpo2k3k4kBusSourceEnum*)&_WordSelectSource, (Tkdpo2k3k4kBusSourceEnum*)&_FrameSyncSource);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Type = _Type.GetVal();
			*ClockSource = _ClockSource.GetVal();
			*DataSource = _DataSource.GetVal();
			*WordSelectSource = _WordSelectSource.GetVal();
			*FrameSyncSource = _FrameSyncSource.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAudio ( ViSession Vi, ViConstString Bus, ViInt32 BitDelay, ViInt32 BitOrder, ViInt32 BitsPerChannel, ViInt32 ClockPolarity, ViInt32 DataPolarity, ViInt32 BitsPerWord, ViInt32 DisplayFormat, ViInt32 FrameSyncPolarity, ViInt32 WordSelectPolarity, ViInt32 ChannelsPerFrame )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _BitDelay(BitDelay);
		CParam<ViInt32> _BitOrder(BitOrder);
		CParam<ViInt32> _BitsPerChannel(BitsPerChannel);
		CParam<ViInt32> _ClockPolarity(ClockPolarity);
		CParam<ViInt32> _DataPolarity(DataPolarity);
		CParam<ViInt32> _BitsPerWord(BitsPerWord);
		CParam<ViInt32> _DisplayFormat(DisplayFormat);
		CParam<ViInt32> _FrameSyncPolarity(FrameSyncPolarity);
		CParam<ViInt32> _WordSelectPolarity(WordSelectPolarity);
		CParam<ViInt32> _ChannelsPerFrame(ChannelsPerFrame);
		HRESULT hr = spBus->ConfigureAudio(_BitDelay, (Tkdpo2k3k4kBusBitOrderEnum)(long)_BitOrder, _BitsPerChannel, (Tkdpo2k3k4kAudioPolarityEnum)(long)_ClockPolarity, (Tkdpo2k3k4kAudioDataPolarityEnum)(long)_DataPolarity, _BitsPerWord, (Tkdpo2k3k4kDisplayFormatEnum)(long)_DisplayFormat, (Tkdpo2k3k4kAudioPolarityEnum)(long)_FrameSyncPolarity, (Tkdpo2k3k4kAudioDataPolarityEnum)(long)_WordSelectPolarity, _ChannelsPerFrame);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAudio ( ViSession Vi, ViConstString Bus, ViInt32* BitDelay, ViInt32* BitOrder, ViInt32* BitsPerChannel, ViInt32* ClockPolarity, ViInt32* DataPolarity, ViInt32* BitsPerWord, ViInt32* DisplayFormat, ViInt32* FrameSyncPolarity, ViInt32* WordSelectPolarity, ViInt32* ChannelsPerFrame )
{
	if (BitDelay == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitDelay is VI_NULL."));
	if (BitOrder == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitOrder is VI_NULL."));
	if (BitsPerChannel == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitsPerChannel is VI_NULL."));
	if (ClockPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockPolarity is VI_NULL."));
	if (DataPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataPolarity is VI_NULL."));
	if (BitsPerWord == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitsPerWord is VI_NULL."));
	if (DisplayFormat == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DisplayFormat is VI_NULL."));
	if (FrameSyncPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameSyncPolarity is VI_NULL."));
	if (WordSelectPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WordSelectPolarity is VI_NULL."));
	if (ChannelsPerFrame == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ChannelsPerFrame is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _BitDelay;
		CParam<ViInt32> _BitOrder;
		CParam<ViInt32> _BitsPerChannel;
		CParam<ViInt32> _ClockPolarity;
		CParam<ViInt32> _DataPolarity;
		CParam<ViInt32> _BitsPerWord;
		CParam<ViInt32> _DisplayFormat;
		CParam<ViInt32> _FrameSyncPolarity;
		CParam<ViInt32> _WordSelectPolarity;
		CParam<ViInt32> _ChannelsPerFrame;
		HRESULT hr = spBus->ReadAudio(&_BitDelay, (Tkdpo2k3k4kBusBitOrderEnum*)&_BitOrder, &_BitsPerChannel, (Tkdpo2k3k4kAudioPolarityEnum*)&_ClockPolarity, (Tkdpo2k3k4kAudioDataPolarityEnum*)&_DataPolarity, &_BitsPerWord, (Tkdpo2k3k4kDisplayFormatEnum*)&_DisplayFormat, (Tkdpo2k3k4kAudioPolarityEnum*)&_FrameSyncPolarity, (Tkdpo2k3k4kAudioDataPolarityEnum*)&_WordSelectPolarity, &_ChannelsPerFrame);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*BitDelay = _BitDelay.GetVal();
			*BitOrder = _BitOrder.GetVal();
			*BitsPerChannel = _BitsPerChannel.GetVal();
			*ClockPolarity = _ClockPolarity.GetVal();
			*DataPolarity = _DataPolarity.GetVal();
			*BitsPerWord = _BitsPerWord.GetVal();
			*DisplayFormat = _DisplayFormat.GetVal();
			*FrameSyncPolarity = _FrameSyncPolarity.GetVal();
			*WordSelectPolarity = _WordSelectPolarity.GetVal();
			*ChannelsPerFrame = _ChannelsPerFrame.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCAN ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 SamplePoint, ViInt32 SignalType, ViInt32 BitRate )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _SamplePoint(SamplePoint);
		CParam<ViInt32> _SignalType(SignalType);
		CParam<ViInt32> _BitRate(BitRate);
		HRESULT hr = spBus->ConfigureCAN((Tkdpo2k3k4kBusSourceEnum)(long)_Source, _SamplePoint, (Tkdpo2k3k4kCANProbeTypeEnum)(long)_SignalType, _BitRate);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCAN ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* SamplePoint, ViInt32* SignalType, ViInt32* BitRate )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (SamplePoint == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SamplePoint is VI_NULL."));
	if (SignalType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SignalType is VI_NULL."));
	if (BitRate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitRate is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Source;
		CParam<ViInt32> _SamplePoint;
		CParam<ViInt32> _SignalType;
		CParam<ViInt32> _BitRate;
		HRESULT hr = spBus->ReadCAN((Tkdpo2k3k4kBusSourceEnum*)&_Source, &_SamplePoint, (Tkdpo2k3k4kCANProbeTypeEnum*)&_SignalType, &_BitRate);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*SamplePoint = _SamplePoint.GetVal();
			*SignalType = _SignalType.GetVal();
			*BitRate = _BitRate.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFlexray ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 IDFormat, ViInt32 Standard, ViInt32 BitRate )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _IDFormat(IDFormat);
		CParam<ViInt32> _Standard(Standard);
		CParam<ViInt32> _BitRate(BitRate);
		HRESULT hr = spBus->ConfigureFlexray((Tkdpo2k3k4kBusSourceEnum)(long)_Source, (Tkdpo2k3k4kFlexrayChannelEnum)(long)_IDFormat, (Tkdpo2k3k4kFlexraySignalEnum)(long)_Standard, _BitRate);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFlexray ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* IDFormat, ViInt32* Standard, ViInt32* BitRate )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (IDFormat == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter IDFormat is VI_NULL."));
	if (Standard == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Standard is VI_NULL."));
	if (BitRate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitRate is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Source;
		CParam<ViInt32> _IDFormat;
		CParam<ViInt32> _Standard;
		CParam<ViInt32> _BitRate;
		HRESULT hr = spBus->ReadFlexray((Tkdpo2k3k4kBusSourceEnum*)&_Source, (Tkdpo2k3k4kFlexrayChannelEnum*)&_IDFormat, (Tkdpo2k3k4kFlexraySignalEnum*)&_Standard, &_BitRate);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*IDFormat = _IDFormat.GetVal();
			*Standard = _Standard.GetVal();
			*BitRate = _BitRate.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLIN ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 IDFormat, ViInt32 BitRate, ViInt32 Polarity, ViInt32 SamplePoint, ViInt32 Standard )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _IDFormat(IDFormat);
		CParam<ViInt32> _BitRate(BitRate);
		CParam<ViInt32> _Polarity(Polarity);
		CParam<ViInt32> _SamplePoint(SamplePoint);
		CParam<ViInt32> _Standard(Standard);
		HRESULT hr = spBus->ConfigureLIN((Tkdpo2k3k4kBusSourceEnum)(long)_Source, (Tkdpo2k3k4kLINIDFormatEnum)(long)_IDFormat, _BitRate, (Tkdpo2k3k4kLINPolarityEnum)(long)_Polarity, _SamplePoint, (Tkdpo2k3k4kLINStandardEnum)(long)_Standard);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLIN ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* IDFormat, ViInt32* BitRate, ViInt32* Polarity, ViInt32* SamplePoint, ViInt32* Standard )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (IDFormat == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter IDFormat is VI_NULL."));
	if (BitRate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitRate is VI_NULL."));
	if (Polarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Polarity is VI_NULL."));
	if (SamplePoint == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SamplePoint is VI_NULL."));
	if (Standard == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Standard is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Source;
		CParam<ViInt32> _IDFormat;
		CParam<ViInt32> _BitRate;
		CParam<ViInt32> _Polarity;
		CParam<ViInt32> _SamplePoint;
		CParam<ViInt32> _Standard;
		HRESULT hr = spBus->ReadLIN((Tkdpo2k3k4kBusSourceEnum*)&_Source, (Tkdpo2k3k4kLINIDFormatEnum*)&_IDFormat, &_BitRate, (Tkdpo2k3k4kLINPolarityEnum*)&_Polarity, &_SamplePoint, (Tkdpo2k3k4kLINStandardEnum*)&_Standard);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*IDFormat = _IDFormat.GetVal();
			*BitRate = _BitRate.GetVal();
			*Polarity = _Polarity.GetVal();
			*SamplePoint = _SamplePoint.GetVal();
			*Standard = _Standard.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRS232 ( ViSession Vi, ViConstString Bus2, ViInt32 RXSource, ViInt32 InputPolarity, ViReal64 Bitrate, ViInt32 DataBits, ViInt32 InputParity, ViInt32 TXSource )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _RXSource(RXSource);
		CParam<ViInt32> _InputPolarity(InputPolarity);
		CParam<ViReal64> _Bitrate(Bitrate);
		CParam<ViInt32> _DataBits(DataBits);
		CParam<ViInt32> _InputParity(InputParity);
		CParam<ViInt32> _TXSource(TXSource);
		HRESULT hr = spBus->ConfigureRS232((Tkdpo2k3k4kBusSourceEnum)(long)_RXSource, (Tkdpo2k3k4kBusRS232PolarityEnum)(long)_InputPolarity, _Bitrate, _DataBits, (Tkdpo2k3k4kBusRS232ParityEnum)(long)_InputParity, (Tkdpo2k3k4kBusSourceEnum)(long)_TXSource);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRS232 ( ViSession Vi, ViConstString Bus2, ViInt32* RXSource, ViInt32* InputPolarity, ViReal64* Bitrate, ViInt32* DataBits, ViInt32* InputParity, ViInt32* TXSource )
{
	if (RXSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RXSource is VI_NULL."));
	if (InputPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InputPolarity is VI_NULL."));
	if (Bitrate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bitrate is VI_NULL."));
	if (DataBits == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataBits is VI_NULL."));
	if (InputParity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InputParity is VI_NULL."));
	if (TXSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TXSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _RXSource;
		CParam<ViInt32> _InputPolarity;
		CParam<ViReal64> _Bitrate;
		CParam<ViInt32> _DataBits;
		CParam<ViInt32> _InputParity;
		CParam<ViInt32> _TXSource;
		HRESULT hr = spBus->ReadRS232((Tkdpo2k3k4kBusSourceEnum*)&_RXSource, (Tkdpo2k3k4kBusRS232PolarityEnum*)&_InputPolarity, &_Bitrate, &_DataBits, (Tkdpo2k3k4kBusRS232ParityEnum*)&_InputParity, (Tkdpo2k3k4kBusSourceEnum*)&_TXSource);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RXSource = _RXSource.GetVal();
			*InputPolarity = _InputPolarity.GetVal();
			*Bitrate = _Bitrate.GetVal();
			*DataBits = _DataBits.GetVal();
			*InputParity = _InputParity.GetVal();
			*TXSource = _TXSource.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadUSB ( ViSession Vi, ViConstString Bus2, ViInt32* DifferentialSource, ViInt32* Probe, ViInt32* Bitrate, ViInt32* DPLUSSource, ViInt32* DMINUSSource )
{
	if (DifferentialSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DifferentialSource is VI_NULL."));
	if (Probe == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Probe is VI_NULL."));
	if (Bitrate == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bitrate is VI_NULL."));
	if (DPLUSSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DPLUSSource is VI_NULL."));
	if (DMINUSSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DMINUSSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _DifferentialSource;
		CParam<ViInt32> _Probe;
		CParam<ViInt32> _Bitrate;
		CParam<ViInt32> _DPLUSSource;
		CParam<ViInt32> _DMINUSSource;
		HRESULT hr = spBus->ReadUSB((Tkdpo2k3k4kBusSourceEnum*)&_DifferentialSource, (Tkdpo2k3k4kBusUSBProbeEnum*)&_Probe, (Tkdpo2k3k4kBusUSBBitrateEnum*)&_Bitrate, (Tkdpo2k3k4kBusSourceEnum*)&_DPLUSSource, (Tkdpo2k3k4kBusSourceEnum*)&_DMINUSSource);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DifferentialSource = _DifferentialSource.GetVal();
			*Probe = _Probe.GetVal();
			*Bitrate = _Bitrate.GetVal();
			*DPLUSSource = _DPLUSSource.GetVal();
			*DMINUSSource = _DMINUSSource.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureUSB ( ViSession Vi, ViConstString Bus2, ViInt32 DifferentialSource, ViInt32 Probe, ViInt32 Bitrate, ViInt32 DPLUSSource, ViInt32 DMINUSSource )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _DifferentialSource(DifferentialSource);
		CParam<ViInt32> _Probe(Probe);
		CParam<ViInt32> _Bitrate(Bitrate);
		CParam<ViInt32> _DPLUSSource(DPLUSSource);
		CParam<ViInt32> _DMINUSSource(DMINUSSource);
		HRESULT hr = spBus->ConfigureUSB((Tkdpo2k3k4kBusSourceEnum)(long)_DifferentialSource, (Tkdpo2k3k4kBusUSBProbeEnum)(long)_Probe, (Tkdpo2k3k4kBusUSBBitrateEnum)(long)_Bitrate, (Tkdpo2k3k4kBusSourceEnum)(long)_DPLUSSource, (Tkdpo2k3k4kBusSourceEnum)(long)_DMINUSSource);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetLowThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64* Threshold )
{
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold;
		HRESULT hr = spBus->GetLowThresholdChannel((Tkdpo2k3k4kChannelEnum)(long)_InputSource, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64* Threshold )
{
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold;
		HRESULT hr = spBus->GetThresholdChannel((Tkdpo2k3k4kChannelEnum)(long)_InputSource, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetLowThreshholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spBus->SetLowThreshholdChannel((Tkdpo2k3k4kChannelEnum)(long)_InputSource, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus2, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spBus->SetThresholdChannel((Tkdpo2k3k4kChannelEnum)(long)_InputSource, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetThresholdDigitalChannel ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spBus->SetThresholdDigitalChannel((Tkdpo2k3k4kDigitalChannelEnum)(long)_InputSource, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetThresholdDigitalChannel ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64* Threshold )
{
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold;
		HRESULT hr = spBus->GetThresholdDigitalChannel((Tkdpo2k3k4kDigitalChannelEnum)(long)_InputSource, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetUpperThreshhold ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spBus->SetUpperThreshhold((Tkdpo2k3k4kChannelEnum)(long)_InputSource, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetUpperThreshhold ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64* Threshold )
{
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _InputSource(InputSource);
		CParam<ViReal64> _Threshold;
		HRESULT hr = spBus->GetUpperThreshhold((Tkdpo2k3k4kChannelEnum)(long)_InputSource, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveEventTable ( ViSession Vi, ViConstString Bus, ViConstString Filename )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViConstString> _Filename(Filename);
		HRESULT hr = spBus->SaveEventTable(_Filename);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSPI ( ViSession Vi, ViConstString Bus, ViInt32 Clocksource, ViInt32 ClockPolarity, ViInt32 DataSize, ViInt32 DataMISOSource, ViInt32 DataMISOPolarity, ViInt32 BitOrder, ViInt32 SlaveSelectSource, ViInt32 SlaveSelectPolarity, ViInt32 DataMOSISource, ViInt32 DataMOSIPolarity )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Clocksource(Clocksource);
		CParam<ViInt32> _ClockPolarity(ClockPolarity);
		CParam<ViInt32> _DataSize(DataSize);
		CParam<ViInt32> _DataMISOSource(DataMISOSource);
		CParam<ViInt32> _DataMISOPolarity(DataMISOPolarity);
		CParam<ViInt32> _BitOrder(BitOrder);
		CParam<ViInt32> _SlaveSelectSource(SlaveSelectSource);
		CParam<ViInt32> _SlaveSelectPolarity(SlaveSelectPolarity);
		CParam<ViInt32> _DataMOSISource(DataMOSISource);
		CParam<ViInt32> _DataMOSIPolarity(DataMOSIPolarity);
		HRESULT hr = spBus->ConfigureSPI((Tkdpo2k3k4kBusSourceEnum)(long)_Clocksource, (Tkdpo2k3k4kBusSPIClockPolarityEnum)(long)_ClockPolarity, _DataSize, (Tkdpo2k3k4kBusSourceEnum)(long)_DataMISOSource, (Tkdpo2k3k4kBusSPIDataPolarityEnum)(long)_DataMISOPolarity, (Tkdpo2k3k4kBusSPIBitOrderEnum)(long)_BitOrder, (Tkdpo2k3k4kBusSourceEnum)(long)_SlaveSelectSource, (Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum)(long)_SlaveSelectPolarity, (Tkdpo2k3k4kBusSourceEnum)(long)_DataMOSISource, (Tkdpo2k3k4kBusSPIDataPolarityEnum)(long)_DataMOSIPolarity);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSPI ( ViSession Vi, ViConstString Bus, ViInt32* Clocksource, ViInt32* ClockPolarity, ViInt32* DataSize, ViInt32* DataMISOSource, ViInt32* DataMISOPolarity, ViInt32* BitOrder, ViInt32* SlaveSelectSource, ViInt32* SlaveSelectPolarity, ViInt32* DataMOSISource, ViInt32* DataMOSIPolarity )
{
	if (Clocksource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Clocksource is VI_NULL."));
	if (ClockPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockPolarity is VI_NULL."));
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));
	if (DataMISOSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataMISOSource is VI_NULL."));
	if (DataMISOPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataMISOPolarity is VI_NULL."));
	if (BitOrder == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BitOrder is VI_NULL."));
	if (SlaveSelectSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SlaveSelectSource is VI_NULL."));
	if (SlaveSelectPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SlaveSelectPolarity is VI_NULL."));
	if (DataMOSISource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataMOSISource is VI_NULL."));
	if (DataMOSIPolarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataMOSIPolarity is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Clocksource;
		CParam<ViInt32> _ClockPolarity;
		CParam<ViInt32> _DataSize;
		CParam<ViInt32> _DataMISOSource;
		CParam<ViInt32> _DataMISOPolarity;
		CParam<ViInt32> _BitOrder;
		CParam<ViInt32> _SlaveSelectSource;
		CParam<ViInt32> _SlaveSelectPolarity;
		CParam<ViInt32> _DataMOSISource;
		CParam<ViInt32> _DataMOSIPolarity;
		HRESULT hr = spBus->ReadSPI((Tkdpo2k3k4kBusSourceEnum*)&_Clocksource, (Tkdpo2k3k4kBusSPIClockPolarityEnum*)&_ClockPolarity, &_DataSize, (Tkdpo2k3k4kBusSourceEnum*)&_DataMISOSource, (Tkdpo2k3k4kBusSPIDataPolarityEnum*)&_DataMISOPolarity, (Tkdpo2k3k4kBusSPIBitOrderEnum*)&_BitOrder, (Tkdpo2k3k4kBusSourceEnum*)&_SlaveSelectSource, (Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum*)&_SlaveSelectPolarity, (Tkdpo2k3k4kBusSourceEnum*)&_DataMOSISource, (Tkdpo2k3k4kBusSPIDataPolarityEnum*)&_DataMOSIPolarity);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Clocksource = _Clocksource.GetVal();
			*ClockPolarity = _ClockPolarity.GetVal();
			*DataSize = _DataSize.GetVal();
			*DataMISOSource = _DataMISOSource.GetVal();
			*DataMISOPolarity = _DataMISOPolarity.GetVal();
			*BitOrder = _BitOrder.GetVal();
			*SlaveSelectSource = _SlaveSelectSource.GetVal();
			*SlaveSelectPolarity = _SlaveSelectPolarity.GetVal();
			*DataMOSISource = _DataMOSISource.GetVal();
			*DataMOSIPolarity = _DataMOSIPolarity.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelBitSource ( ViSession Vi, ViConstString Bus, ViInt32 Bit, ViInt32* ParallelSource )
{
	if (ParallelSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ParallelSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _Bit(Bit);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_ParallelBitSource(_Bit, (Tkdpo2k3k4kBusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ParallelSource = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelBitSource ( ViSession Vi, ViConstString Bus, ViInt32 Bit, ViInt32 ParallelSource )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, Bus, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _Bit(Bit);
		CParam<ViInt32> _val(ParallelSource);
		HRESULT hr = spBus->put_ParallelBitSource(_Bit, (Tkdpo2k3k4kBusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasurementScale ( ViSession Vi, ViInt32 MeasurementScale )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MeasurementScale(MeasurementScale);
		HRESULT hr = spCursorHBars->SetMeasurementScale((Tkdpo2k3k4kCursorMeasurementScaleEnum)(long)_MeasurementScale);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasurementScale2 ( ViSession Vi, ViInt32 MeasurementScale )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MeasurementScale(MeasurementScale);
		HRESULT hr = spCursorVBars->SetMeasurementScale((Tkdpo2k3k4kCursorMeasurementScaleEnum)(long)_MeasurementScale);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMessageBoxCoordinates ( ViSession Vi, ViInt32 X1, ViInt32 Y1, ViInt32 X2, ViInt32 Y2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _X1(X1);
		CParam<ViInt32> _Y1(Y1);
		CParam<ViInt32> _X2(X2);
		CParam<ViInt32> _Y2(Y2);
		HRESULT hr = spDisplay->SetMessageBoxCoordinates(_X1, _Y1, _X2, _Y2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMessageBoxCoordinates ( ViSession Vi, ViInt32* X1, ViInt32* Y1, ViInt32* X2, ViInt32* Y2 )
{
	if (X1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter X1 is VI_NULL."));
	if (Y1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Y1 is VI_NULL."));
	if (X2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter X2 is VI_NULL."));
	if (Y2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Y2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _X1;
		CParam<ViInt32> _Y1;
		CParam<ViInt32> _X2;
		CParam<ViInt32> _Y2;
		HRESULT hr = spDisplay->GetMessageBoxCoordinates(&_X1, &_Y1, &_X2, &_Y2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*X1 = _X1.GetVal();
			*Y1 = _Y1.GetVal();
			*X2 = _X2.GetVal();
			*Y2 = _Y2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ShowMessage ( ViSession Vi, ViConstString Message )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Message(Message);
		HRESULT hr = spDisplay->ShowMessage(_Message);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ClearMessage ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spDisplay->ClearMessage();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDisplayMessage ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spDisplay->GetDisplayMessage(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Print ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHardCopy> spHardCopy;
	status = GetDriverInterface(Vi, &spHardCopy);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spHardCopy->Print();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure ( ViSession Vi, ViInt32 Source, ViInt32 Mode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Mode(Mode);
		HRESULT hr = spHistogram->Configure((Tkdpo2k3k4kSource1Enum)(long)_Source, (Tkdpo2k3k4kHistogramModeEnum)(long)_Mode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read ( ViSession Vi, ViInt32* Source, ViInt32* Mode )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (Mode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Mode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source;
		CParam<ViInt32> _Mode;
		HRESULT hr = spHistogram->Read((Tkdpo2k3k4kSource1Enum*)&_Source, (Tkdpo2k3k4kHistogramModeEnum*)&_Mode);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*Mode = _Mode.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBoxCoordinates ( ViSession Vi, ViReal64 Top, ViReal64 Left, ViReal64 Right, ViReal64 Bottom )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Top(Top);
		CParam<ViReal64> _Left(Left);
		CParam<ViReal64> _Right(Right);
		CParam<ViReal64> _Bottom(Bottom);
		HRESULT hr = spHistogram->ConfigureBoxCoordinates(_Top, _Left, _Right, _Bottom);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBoxCoordinates ( ViSession Vi, ViReal64* Top, ViReal64* Left, ViReal64* Right, ViReal64* Bottom )
{
	if (Top == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Top is VI_NULL."));
	if (Left == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Left is VI_NULL."));
	if (Right == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Right is VI_NULL."));
	if (Bottom == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bottom is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Top;
		CParam<ViReal64> _Left;
		CParam<ViReal64> _Right;
		CParam<ViReal64> _Bottom;
		HRESULT hr = spHistogram->ReadBoxCoordinates(&_Top, &_Left, &_Right, &_Bottom);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Top = _Top.GetVal();
			*Left = _Left.GetVal();
			*Right = _Right.GetVal();
			*Bottom = _Bottom.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBoxCoordinatesPercent ( ViSession Vi, ViReal64 Top, ViReal64 Left, ViReal64 Right, ViReal64 Bottom )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Top(Top);
		CParam<ViReal64> _Left(Left);
		CParam<ViReal64> _Right(Right);
		CParam<ViReal64> _Bottom(Bottom);
		HRESULT hr = spHistogram->ConfigureBoxCoordinatesPercent(_Top, _Left, _Right, _Bottom);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBoxCoordinatesPercent ( ViSession Vi, ViReal64* Top, ViReal64* Left, ViReal64* Right, ViReal64* Bottom )
{
	if (Top == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Top is VI_NULL."));
	if (Left == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Left is VI_NULL."));
	if (Right == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Right is VI_NULL."));
	if (Bottom == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bottom is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Top;
		CParam<ViReal64> _Left;
		CParam<ViReal64> _Right;
		CParam<ViReal64> _Bottom;
		HRESULT hr = spHistogram->ReadBoxCoordinatesPercent(&_Top, &_Left, &_Right, &_Bottom);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Top = _Top.GetVal();
			*Left = _Left.GetVal();
			*Right = _Right.GetVal();
			*Bottom = _Bottom.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Reset2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spHistogram->Reset();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure2 ( ViSession Vi, ViReal64 Position, ViReal64 Scale, ViInt32 RecordLength )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Position(Position);
		CParam<ViReal64> _Scale(Scale);
		CParam<ViInt32> _RecordLength(RecordLength);
		HRESULT hr = spHorizontal->Configure(_Position, _Scale, _RecordLength);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay ( ViSession Vi, ViBoolean Mode, ViReal64 Time )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _Mode(Mode);
		CParam<ViReal64> _Time(Time);
		HRESULT hr = spHorizontal->ConfigureDelay(_Mode, _Time);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read2 ( ViSession Vi, ViReal64* Position, ViReal64* Scale, ViInt32* RecordLength )
{
	if (Position == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Position is VI_NULL."));
	if (Scale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Scale is VI_NULL."));
	if (RecordLength == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RecordLength is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Position;
		CParam<ViReal64> _Scale;
		CParam<ViInt32> _RecordLength;
		HRESULT hr = spHorizontal->Read(&_Position, &_Scale, &_RecordLength);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Position = _Position.GetVal();
			*Scale = _Scale.GetVal();
			*RecordLength = _RecordLength.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadDelay ( ViSession Vi, ViBoolean* Mode, ViReal64* Time )
{
	if (Mode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Mode is VI_NULL."));
	if (Time == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Time is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _Mode;
		CParam<ViReal64> _Time;
		HRESULT hr = spHorizontal->ReadDelay(&_Mode, &_Time);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Mode = _Mode.GetVal();
			*Time = _Time.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMathName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMaths> spMaths;
	status = GetDriverInterface(Vi, &spMaths);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spMaths->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure3 ( ViSession Vi, ViConstString Math, ViConstString Expression, ViReal64 VerticalPosition, ViReal64 VerticalScale, ViReal64 HorizontalPosition, ViReal64 HorizontalScale, ViBoolean DisplayState, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, Math, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViConstString> _Expression(Expression);
		CParam<ViReal64> _VerticalPosition(VerticalPosition);
		CParam<ViReal64> _VerticalScale(VerticalScale);
		CParam<ViReal64> _HorizontalPosition(HorizontalPosition);
		CParam<ViReal64> _HorizontalScale(HorizontalScale);
		CParam<ViBoolean> _DisplayState(DisplayState);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spMath->Configure(_Expression, _VerticalPosition, _VerticalScale, _HorizontalPosition, _HorizontalScale, _DisplayState, (Tkdpo2k3k4kMathTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read3 ( ViSession Vi, ViConstString Math, ViInt32 ExpressionBufferSize, ViChar Expression[], ViReal64* VerticalPosition, ViReal64* VerticalScale, ViInt32 VerticalUnitsBufferSize, ViChar VerticalUnits[], ViReal64* HorizontalPosition, ViReal64* HorizontalScale, ViInt32 HorizontalUnitsBufferSize, ViChar HorizontalUnits[], ViBoolean* DisplayState, ViInt32* Type )
{
	if (VerticalPosition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalPosition is VI_NULL."));
	if (VerticalScale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalScale is VI_NULL."));
	if (HorizontalPosition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalPosition is VI_NULL."));
	if (HorizontalScale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalScale is VI_NULL."));
	if (DisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DisplayState is VI_NULL."));
	if (Type == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Type is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, Math, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViChar[]> _Expression;
		CParam<ViReal64> _VerticalPosition;
		CParam<ViReal64> _VerticalScale;
		CParam<ViChar[]> _VerticalUnits;
		CParam<ViReal64> _HorizontalPosition;
		CParam<ViReal64> _HorizontalScale;
		CParam<ViChar[]> _HorizontalUnits;
		CParam<ViBoolean> _DisplayState;
		CParam<ViInt32> _Type;
		HRESULT hr = spMath->Read(&_Expression, &_VerticalPosition, &_VerticalScale, &_VerticalUnits, &_HorizontalPosition, &_HorizontalScale, &_HorizontalUnits, &_DisplayState, (Tkdpo2k3k4kMathTypeEnum*)&_Type);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusExpression = _Expression.GetVal(Expression, ExpressionBufferSize);
			status = status == VI_SUCCESS ? statusExpression : status;
			*VerticalPosition = _VerticalPosition.GetVal();
			*VerticalScale = _VerticalScale.GetVal();
			ViStatus statusVerticalUnits = _VerticalUnits.GetVal(VerticalUnits, VerticalUnitsBufferSize);
			status = status == VI_SUCCESS ? statusVerticalUnits : status;
			*HorizontalPosition = _HorizontalPosition.GetVal();
			*HorizontalScale = _HorizontalScale.GetVal();
			ViStatus statusHorizontalUnits = _HorizontalUnits.GetVal(HorizontalUnits, HorizontalUnitsBufferSize);
			status = status == VI_SUCCESS ? statusHorizontalUnits : status;
			*DisplayState = _DisplayState.GetVal();
			*Type = _Type.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMathVariable ( ViSession Vi, ViConstString Math, ViInt32 Variable, ViReal64* MathVariable )
{
	if (MathVariable == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MathVariable is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, Math, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViInt32> _Variable(Variable);
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_MathVariable(_Variable, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*MathVariable = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMathVariable ( ViSession Vi, ViConstString Math, ViInt32 Variable, ViReal64 MathVariable )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, Math, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViInt32> _Variable(Variable);
		CParam<ViReal64> _val(MathVariable);
		HRESULT hr = spMath->put_MathVariable(_Variable, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointGatingIndicator ( ViSession Vi, ViConstString Math, ViReal64* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, Math, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMathSpectral->GetEndPointGatingIndicator(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetStartPointGatingIndicator ( ViSession Vi, ViConstString Math, ViReal64* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, Math, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMathSpectral->GetStartPointGatingIndicator(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetNyquistFrequency ( ViSession Vi, ViConstString Math, ViReal64* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, Math, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMathSpectral->GetNyquistFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMeasurementSlotName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spMeasurements->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadDelay2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2 )
{
	if (Source1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source1 is VI_NULL."));
	if (Source2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source2 is VI_NULL."));
	if (Direction == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Direction is VI_NULL."));
	if (Edge1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge1 is VI_NULL."));
	if (Edge2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _Source1;
		CParam<ViInt32> _Source2;
		CParam<ViInt32> _Direction;
		CParam<ViInt32> _Edge1;
		CParam<ViInt32> _Edge2;
		HRESULT hr = spMeasurementSlot->ReadDelay((Tkdpo2k3k4kSourceEnum*)&_Source1, (Tkdpo2k3k4kSourceEnum*)&_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum*)&_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source1 = _Source1.GetVal();
			*Source2 = _Source2.GetVal();
			*Direction = _Direction.GetVal();
			*Edge1 = _Edge1.GetVal();
			*Edge2 = _Edge2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ClearStatistics ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spMeasurements->ClearStatistics();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure15 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spMeasurementSlot->Configure((Tkdpo2k3k4kSourceEnum)(long)_Source, (Tkdpo2k3k4kMeasurementTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay3 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2 )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		CParam<ViInt32> _Direction(Direction);
		CParam<ViInt32> _Edge1(Edge1);
		CParam<ViInt32> _Edge2(Edge2);
		HRESULT hr = spMeasurementSlot->ConfigureDelay((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePhase2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2 )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		HRESULT hr = spMeasurementSlot->ConfigurePhase((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read9 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2, ViInt32* Type )
{
	if (Source1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source1 is VI_NULL."));
	if (Source2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source2 is VI_NULL."));
	if (Direction == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Direction is VI_NULL."));
	if (Edge1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge1 is VI_NULL."));
	if (Edge2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge2 is VI_NULL."));
	if (Type == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Type is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _Source1;
		CParam<ViInt32> _Source2;
		CParam<ViInt32> _Direction;
		CParam<ViInt32> _Edge1;
		CParam<ViInt32> _Edge2;
		CParam<ViInt32> _Type;
		HRESULT hr = spMeasurementSlot->Read((Tkdpo2k3k4kSourceEnum*)&_Source1, (Tkdpo2k3k4kSourceEnum*)&_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum*)&_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge2, (Tkdpo2k3k4kMeasurementTypeEnum*)&_Type);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source1 = _Source1.GetVal();
			*Source2 = _Source2.GetVal();
			*Direction = _Direction.GetVal();
			*Edge1 = _Edge1.GetVal();
			*Edge2 = _Edge2.GetVal();
			*Type = _Type.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadValue2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2, ViInt32 Type, ViReal64* Val, ViInt32 UnitBufferSize, ViChar Unit[] )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, MeasurementSlot, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		CParam<ViInt32> _Direction(Direction);
		CParam<ViInt32> _Edge1(Edge1);
		CParam<ViInt32> _Edge2(Edge2);
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Val;
		CParam<ViChar[]> _Unit;
		HRESULT hr = spMeasurementSlot->ReadValue((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge2, (Tkdpo2k3k4kMeasurementTypeEnum)(long)_Type, &_Val, &_Unit);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _Val.GetVal();
			ViStatus statusUnit = _Unit.GetVal(Unit, UnitBufferSize);
			status = status == VI_SUCCESS ? statusUnit : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHorizontalValue ( ViSession Vi, ViInt32 Indicator, ViReal64* HorizontalValue )
{
	if (HorizontalValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Indicator(Indicator);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementsIndicators->get_HorizontalValue(_Indicator, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HorizontalValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetVerticalValue ( ViSession Vi, ViInt32 Indicator, ViReal64* VerticalValue )
{
	if (VerticalValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Indicator(Indicator);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementsIndicators->get_VerticalValue(_Indicator, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*VerticalValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChannelPower ( ViSession Vi, ViReal64 Bandwidth )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Bandwidth(Bandwidth);
		HRESULT hr = spMeasurementsFrequency->ConfigureChannelPower(_Bandwidth);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadChannelPower ( ViSession Vi, ViReal64* Bandwidth, ViReal64* Power )
{
	if (Bandwidth == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bandwidth is VI_NULL."));
	if (Power == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Power is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Bandwidth;
		CParam<ViReal64> _Power;
		HRESULT hr = spMeasurementsFrequency->ReadChannelPower(&_Bandwidth, &_Power);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Bandwidth = _Bandwidth.GetVal();
			*Power = _Power.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureACPR ( ViSession Vi, ViInt32 AdjacentChannels, ViReal64 ChannelBandwidth, ViReal64 ChannelSpacing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _AdjacentChannels(AdjacentChannels);
		CParam<ViReal64> _ChannelBandwidth(ChannelBandwidth);
		CParam<ViReal64> _ChannelSpacing(ChannelSpacing);
		HRESULT hr = spMeasurementsFrequency->ConfigureACPR(_AdjacentChannels, _ChannelBandwidth, _ChannelSpacing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadACPR ( ViSession Vi, ViInt32* AdjacentChannels, ViReal64* ChannelBandwidth, ViReal64* ChannelSpacing, ViReal64* Power, ViReal64* LowerArea1Ratio, ViReal64* LowerArea2Ratio, ViReal64* LowerArea3Ratio, ViReal64* UpperArea1Ratio, ViReal64* UpperArea2Ratio, ViReal64* UpperArea3Ratio )
{
	if (AdjacentChannels == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AdjacentChannels is VI_NULL."));
	if (ChannelBandwidth == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ChannelBandwidth is VI_NULL."));
	if (ChannelSpacing == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ChannelSpacing is VI_NULL."));
	if (Power == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Power is VI_NULL."));
	if (LowerArea1Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerArea1Ratio is VI_NULL."));
	if (LowerArea2Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerArea2Ratio is VI_NULL."));
	if (LowerArea3Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerArea3Ratio is VI_NULL."));
	if (UpperArea1Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperArea1Ratio is VI_NULL."));
	if (UpperArea2Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperArea2Ratio is VI_NULL."));
	if (UpperArea3Ratio == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperArea3Ratio is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _AdjacentChannels;
		CParam<ViReal64> _ChannelBandwidth;
		CParam<ViReal64> _ChannelSpacing;
		CParam<ViReal64> _Power;
		CParam<ViReal64> _LowerArea1Ratio;
		CParam<ViReal64> _LowerArea2Ratio;
		CParam<ViReal64> _LowerArea3Ratio;
		CParam<ViReal64> _UpperArea1Ratio;
		CParam<ViReal64> _UpperArea2Ratio;
		CParam<ViReal64> _UpperArea3Ratio;
		HRESULT hr = spMeasurementsFrequency->ReadACPR(&_AdjacentChannels, &_ChannelBandwidth, &_ChannelSpacing, &_Power, &_LowerArea1Ratio, &_LowerArea2Ratio, &_LowerArea3Ratio, &_UpperArea1Ratio, &_UpperArea2Ratio, &_UpperArea3Ratio);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AdjacentChannels = _AdjacentChannels.GetVal();
			*ChannelBandwidth = _ChannelBandwidth.GetVal();
			*ChannelSpacing = _ChannelSpacing.GetVal();
			*Power = _Power.GetVal();
			*LowerArea1Ratio = _LowerArea1Ratio.GetVal();
			*LowerArea2Ratio = _LowerArea2Ratio.GetVal();
			*LowerArea3Ratio = _LowerArea3Ratio.GetVal();
			*UpperArea1Ratio = _UpperArea1Ratio.GetVal();
			*UpperArea2Ratio = _UpperArea2Ratio.GetVal();
			*UpperArea3Ratio = _UpperArea3Ratio.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureOBW ( ViSession Vi, ViReal64 AnalysisBandwidth, ViReal64 PercentageDown )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _AnalysisBandwidth(AnalysisBandwidth);
		CParam<ViReal64> _PercentageDown(PercentageDown);
		HRESULT hr = spMeasurementsFrequency->ConfigureOBW(_AnalysisBandwidth, _PercentageDown);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadOBW ( ViSession Vi, ViReal64* AnalysisBandwidth, ViReal64* PercentageDown, ViReal64* LowerFrequency, ViReal64* UpperFrequency, ViReal64* Power )
{
	if (AnalysisBandwidth == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AnalysisBandwidth is VI_NULL."));
	if (PercentageDown == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PercentageDown is VI_NULL."));
	if (LowerFrequency == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerFrequency is VI_NULL."));
	if (UpperFrequency == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperFrequency is VI_NULL."));
	if (Power == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Power is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _AnalysisBandwidth;
		CParam<ViReal64> _PercentageDown;
		CParam<ViReal64> _LowerFrequency;
		CParam<ViReal64> _UpperFrequency;
		CParam<ViReal64> _Power;
		HRESULT hr = spMeasurementsFrequency->ReadOBW(&_AnalysisBandwidth, &_PercentageDown, &_LowerFrequency, &_UpperFrequency, &_Power);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AnalysisBandwidth = _AnalysisBandwidth.GetVal();
			*PercentageDown = _PercentageDown.GetVal();
			*LowerFrequency = _LowerFrequency.GetVal();
			*UpperFrequency = _UpperFrequency.GetVal();
			*Power = _Power.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveEventTableBusData ( ViSession Vi, ViInt32 Bus, ViConstString Filename )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Bus(Bus);
		CParam<ViConstString> _Filename(Filename);
		HRESULT hr = spSaveRecall->SaveEventTableBusData(_Bus, _Filename);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveImage ( ViSession Vi, ViConstString Filename, ViInt32 ImageFormat, ViInt32 ImageLayout )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Filename(Filename);
		CParam<ViInt32> _ImageFormat(ImageFormat);
		CParam<ViInt32> _ImageLayout(ImageLayout);
		HRESULT hr = spSaveRecall->SaveImage(_Filename, (Tkdpo2k3k4kImageFormatEnum)(long)_ImageFormat, (Tkdpo2k3k4kImageLayoutEnum)(long)_ImageLayout);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_DefaultSetup ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spSaveRecall->DefaultSetup();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_RecallSetupFromFile ( ViSession Vi, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spSaveRecall->RecallSetupFromFile(_FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_RecallSetupFromMemory ( ViSession Vi, ViInt32 Location )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Location(Location);
		HRESULT hr = spSaveRecall->RecallSetupFromMemory((Tkdpo2k3k4kMemoryLocationEnum)(long)_Location);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_RecallWaveformFromFile ( ViSession Vi, ViInt32 RefMemory, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _RefMemory(RefMemory);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spSaveRecall->RecallWaveformFromFile((Tkdpo2k3k4kReferenceEnum)(long)_RefMemory, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveAllDigitalChannels ( ViSession Vi, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spSaveRecall->SaveAllDigitalChannels(_FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveSetupToFile ( ViSession Vi, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spSaveRecall->SaveSetupToFile(_FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveSetupToMemory ( ViSession Vi, ViInt32 Location )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Location(Location);
		HRESULT hr = spSaveRecall->SaveSetupToMemory((Tkdpo2k3k4kMemoryLocationEnum)(long)_Location);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToFile ( ViSession Vi, ViInt32 Source, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spSaveRecall->SaveWaveformToFile((Tkdpo2k3k4kDataSourceEnum)(long)_Source, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToReference ( ViSession Vi, ViInt32 Source, ViInt32 RefMemory )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _RefMemory(RefMemory);
		HRESULT hr = spSaveRecall->SaveWaveformToReference((Tkdpo2k3k4kDataSourceEnum)(long)_Source, (Tkdpo2k3k4kReferenceEnum)(long)_RefMemory);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveAllWaveformsToFile ( ViSession Vi, ViConstString FileName, ViInt32 FileFormat )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _FileFormat(FileFormat);
		HRESULT hr = spSaveRecall->SaveAllWaveformsToFile(_FileName, (Tkdpo2k3k4kSaveWaveformFileFormatEnum)(long)_FileFormat);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSearchName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSearches> spSearches;
	status = GetDriverInterface(Vi, &spSearches);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearches->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicSearchSource ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 Input, ViReal64 Threshold, ViInt32 PatternInput )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Input(Input);
		CParam<ViReal64> _Threshold(Threshold);
		CParam<ViInt32> _PatternInput(PatternInput);
		HRESULT hr = spSearch->ConfigureLogicSearchSource((Tkdpo2k3k4kSearchSource2Enum)(long)_Source, (Tkdpo2k3k4kTriggerLogicInputChannelEnum)(long)_Input, _Threshold, (Tkdpo2k3k4kTriggerLogicInputChannelEnum)(long)_PatternInput);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicSearchSource ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32* Input, ViReal64* Threshold, ViInt32* PatternInput )
{
	if (Input == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Input is VI_NULL."));
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));
	if (PatternInput == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PatternInput is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Input;
		CParam<ViReal64> _Threshold;
		CParam<ViInt32> _PatternInput;
		HRESULT hr = spSearch->ReadLogicSearchSource((Tkdpo2k3k4kSearchSource2Enum)(long)_Source, (Tkdpo2k3k4kTriggerLogicInputChannelEnum*)&_Input, &_Threshold, (Tkdpo2k3k4kTriggerLogicInputChannelEnum*)&_PatternInput);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Input = _Input.GetVal();
			*Threshold = _Threshold.GetVal();
			*PatternInput = _PatternInput.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicClock ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 EdgeType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _EdgeType(EdgeType);
		HRESULT hr = spSearch->ConfigureLogicClock((Tkdpo2k3k4kTriggerLogicClockSourceEnum)(long)_Source, (Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum)(long)_EdgeType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicClock ( ViSession Vi, ViConstString Search, ViInt32* Source, ViInt32* EdgeType )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (EdgeType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter EdgeType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source;
		CParam<ViInt32> _EdgeType;
		HRESULT hr = spSearch->ReadLogicClock((Tkdpo2k3k4kTriggerLogicClockSourceEnum*)&_Source, (Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum*)&_EdgeType);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*EdgeType = _EdgeType.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSetupHoldSearchSource ( ViSession Vi, ViConstString Search, ViInt32* Clocksource, ViInt32* DataSource )
{
	if (Clocksource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Clocksource is VI_NULL."));
	if (DataSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Clocksource;
		CParam<ViInt32> _DataSource;
		HRESULT hr = spSearch->ReadSetupHoldSearchSource((Tkdpo2k3k4kSearchSource3Enum*)&_Clocksource, (Tkdpo2k3k4kSearchSource3Enum*)&_DataSource);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Clocksource = _Clocksource.GetVal();
			*DataSource = _DataSource.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _UpperThreshold(UpperThreshold);
		CParam<ViReal64> _LowerThreshold(LowerThreshold);
		HRESULT hr = spSearch->ConfigureAIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, _Level, _UpperThreshold, _LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (UpperThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperThreshold is VI_NULL."));
	if (LowerThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerThreshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level;
		CParam<ViReal64> _UpperThreshold;
		CParam<ViReal64> _LowerThreshold;
		HRESULT hr = spSearch->ReadAIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, &_Level, &_UpperThreshold, &_LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*UpperThreshold = _UpperThreshold.GetVal();
			*LowerThreshold = _LowerThreshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureEdge ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 Slope )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Slope(Slope);
		HRESULT hr = spSearch->ConfigureEdge(_Level, (Tkdpo2k3k4kSearchSource3Enum)(long)_Source, (Tkdpo2k3k4kTriggerSlopeEnum)(long)_Slope);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicPattern ( ViSession Vi, ViConstString Search, ViInt32 Condition, ViReal64 LessLimit, ViReal64 MoreLimit, ViInt32 PatternType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Condition(Condition);
		CParam<ViReal64> _LessLimit(LessLimit);
		CParam<ViReal64> _MoreLimit(MoreLimit);
		CParam<ViInt32> _PatternType(PatternType);
		HRESULT hr = spSearch->ConfigureLogicPattern((Tkdpo2k3k4kTriggerPatternConditionEnum)(long)_Condition, _LessLimit, _MoreLimit, (Tkdpo2k3k4kTriggerPatternTypeEnum)(long)_PatternType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePulseWidth ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 Condition, ViInt32 Polarity, ViReal64 HighLimit, ViReal64 LowLimit )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Condition(Condition);
		CParam<ViInt32> _Polarity(Polarity);
		CParam<ViReal64> _HighLimit(HighLimit);
		CParam<ViReal64> _LowLimit(LowLimit);
		HRESULT hr = spSearch->ConfigurePulseWidth(_Level, (Tkdpo2k3k4kSearchSource3Enum)(long)_Source, (Tkdpo2k3k4kTriggerPulseWidthConditionEnum)(long)_Condition, (Tkdpo2k3k4kTriggerWidthPolarityEnum)(long)_Polarity, _HighLimit, _LowLimit);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRunt ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 When, ViInt32 Polarity, ViReal64 Width )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _When(When);
		CParam<ViInt32> _Polarity(Polarity);
		CParam<ViReal64> _Width(Width);
		HRESULT hr = spSearch->ConfigureRunt((Tkdpo2k3k4kSearchSource2Enum)(long)_Source, (Tkdpo2k3k4kTriggerRuntConditionEnum)(long)_When, (Tkdpo2k3k4kTriggerRuntPolarityEnum)(long)_Polarity, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSetupHold ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 ClockEdge, ViInt32 ClockSource, ViReal64 HoldTime, ViReal64 SetTime, ViReal64 ClockLevel )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _ClockEdge(ClockEdge);
		CParam<ViInt32> _ClockSource(ClockSource);
		CParam<ViReal64> _HoldTime(HoldTime);
		CParam<ViReal64> _SetTime(SetTime);
		CParam<ViReal64> _ClockLevel(ClockLevel);
		HRESULT hr = spSearch->ConfigureSetupHold(_Level, (Tkdpo2k3k4kSearchSource3Enum)(long)_Source, (Tkdpo2k3k4kTriggerSlopeEnum)(long)_ClockEdge, (Tkdpo2k3k4kSearchSource3Enum)(long)_ClockSource, _HoldTime, _SetTime, _ClockLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTransition ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 DeltaTime, ViInt32 When, ViInt32 Polarity )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _DeltaTime(DeltaTime);
		CParam<ViInt32> _When(When);
		CParam<ViInt32> _Polarity(Polarity);
		HRESULT hr = spSearch->ConfigureTransition((Tkdpo2k3k4kSearchSource2Enum)(long)_Source, _DeltaTime, (Tkdpo2k3k4kTriggerTransitionConditionEnum)(long)_When, (Tkdpo2k3k4kTriggerPulsePolarityEnum)(long)_Polarity);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadEdge ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* Slope )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (Slope == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Slope is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViReal64> _Level;
		CParam<ViInt32> _Source;
		CParam<ViInt32> _Slope;
		HRESULT hr = spSearch->ReadEdge(&_Level, (Tkdpo2k3k4kSearchSource3Enum*)&_Source, (Tkdpo2k3k4kTriggerSlopeEnum*)&_Slope);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*Source = _Source.GetVal();
			*Slope = _Slope.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicPattern ( ViSession Vi, ViConstString Search, ViInt32* Condition, ViReal64* LessLimit, ViReal64* MoreLimit, ViInt32* PatternType )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));
	if (LessLimit == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LessLimit is VI_NULL."));
	if (MoreLimit == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MoreLimit is VI_NULL."));
	if (PatternType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PatternType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Condition;
		CParam<ViReal64> _LessLimit;
		CParam<ViReal64> _MoreLimit;
		CParam<ViInt32> _PatternType;
		HRESULT hr = spSearch->ReadLogicPattern((Tkdpo2k3k4kTriggerPatternConditionEnum*)&_Condition, &_LessLimit, &_MoreLimit, (Tkdpo2k3k4kTriggerPatternTypeEnum*)&_PatternType);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _Condition.GetVal();
			*LessLimit = _LessLimit.GetVal();
			*MoreLimit = _MoreLimit.GetVal();
			*PatternType = _PatternType.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPulseWidth ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* Condition, ViInt32* Polarity )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));
	if (Polarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Polarity is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViReal64> _Level;
		CParam<ViInt32> _Source;
		CParam<ViInt32> _Condition;
		CParam<ViInt32> _Polarity;
		HRESULT hr = spSearch->ReadPulseWidth(&_Level, (Tkdpo2k3k4kSearchSource3Enum*)&_Source, (Tkdpo2k3k4kTriggerPulseWidthConditionEnum*)&_Condition, (Tkdpo2k3k4kTriggerWidthPolarityEnum*)&_Polarity);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*Source = _Source.GetVal();
			*Condition = _Condition.GetVal();
			*Polarity = _Polarity.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRunt ( ViSession Vi, ViConstString Search, ViInt32* Source, ViInt32* When, ViInt32* Polarity, ViReal64* Width )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (When == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter When is VI_NULL."));
	if (Polarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Polarity is VI_NULL."));
	if (Width == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Width is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source;
		CParam<ViInt32> _When;
		CParam<ViInt32> _Polarity;
		CParam<ViReal64> _Width;
		HRESULT hr = spSearch->ReadRunt((Tkdpo2k3k4kSearchSource2Enum*)&_Source, (Tkdpo2k3k4kTriggerRuntConditionEnum*)&_When, (Tkdpo2k3k4kTriggerRuntPolarityEnum*)&_Polarity, &_Width);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*When = _When.GetVal();
			*Polarity = _Polarity.GetVal();
			*Width = _Width.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSetupHold ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* ClockEdge, ViInt32* Clocksource, ViReal64* HoldTime, ViReal64* SetTime, ViReal64* ClockLevel )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (ClockEdge == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockEdge is VI_NULL."));
	if (Clocksource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Clocksource is VI_NULL."));
	if (HoldTime == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HoldTime is VI_NULL."));
	if (SetTime == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SetTime is VI_NULL."));
	if (ClockLevel == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ClockLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViReal64> _Level;
		CParam<ViInt32> _Source;
		CParam<ViInt32> _ClockEdge;
		CParam<ViInt32> _Clocksource;
		CParam<ViReal64> _HoldTime;
		CParam<ViReal64> _SetTime;
		CParam<ViReal64> _ClockLevel;
		HRESULT hr = spSearch->ReadSetupHold(&_Level, (Tkdpo2k3k4kSearchSource3Enum*)&_Source, (Tkdpo2k3k4kTriggerSlopeEnum*)&_ClockEdge, (Tkdpo2k3k4kSearchSource3Enum*)&_Clocksource, &_HoldTime, &_SetTime, &_ClockLevel);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*Source = _Source.GetVal();
			*ClockEdge = _ClockEdge.GetVal();
			*Clocksource = _Clocksource.GetVal();
			*HoldTime = _HoldTime.GetVal();
			*SetTime = _SetTime.GetVal();
			*ClockLevel = _ClockLevel.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTransition ( ViSession Vi, ViConstString Search, ViInt32* Source, ViReal64* DeltaTime, ViInt32* When, ViInt32* Polarity )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (DeltaTime == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DeltaTime is VI_NULL."));
	if (When == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter When is VI_NULL."));
	if (Polarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Polarity is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source;
		CParam<ViReal64> _DeltaTime;
		CParam<ViInt32> _When;
		CParam<ViInt32> _Polarity;
		HRESULT hr = spSearch->ReadTransition((Tkdpo2k3k4kSearchSource2Enum*)&_Source, &_DeltaTime, (Tkdpo2k3k4kTriggerTransitionConditionEnum*)&_When, (Tkdpo2k3k4kTriggerPulsePolarityEnum*)&_Polarity);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*DeltaTime = _DeltaTime.GetVal();
			*When = _When.GetVal();
			*Polarity = _Polarity.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Copy ( ViSession Vi, ViConstString Search, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spSearch->Copy((Tkdpo2k3k4kSearchCopyEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureARFIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _UpperThreshold(UpperThreshold);
		CParam<ViReal64> _LowerThreshold(LowerThreshold);
		HRESULT hr = spSearch->ConfigureARFIndependentParameters((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_Source, _Level, _UpperThreshold, _LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadARFIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (UpperThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperThreshold is VI_NULL."));
	if (LowerThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerThreshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, Search, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level;
		CParam<ViReal64> _UpperThreshold;
		CParam<ViReal64> _LowerThreshold;
		HRESULT hr = spSearch->ReadARFIndependentParameters((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_Source, &_Level, &_UpperThreshold, &_LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*UpperThreshold = _UpperThreshold.GetVal();
			*LowerThreshold = _LowerThreshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 BusType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBus> rgSearchBus;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBus);
	for (size_t i = 0; i < rgSearchBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBus> spSearchBus(rgSearchBus[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _BusType(BusType);
		HRESULT hr = spSearchBus->Configure((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kBusTypeEnum)(long)_BusType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ParallelDataBufferSize, ViChar ParallelData[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBus> rgSearchBus;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBus> spSearchBus(rgSearchBus[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBus->get_ParallelData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(ParallelData, ParallelDataBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString ParallelData )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBus> rgSearchBus;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBus);
	for (size_t i = 0; i < rgSearchBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBus> spSearchBus(rgSearchBus[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(ParallelData);
		HRESULT hr = spSearchBus->put_ParallelData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusAudio->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusAudio->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusAudio->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spSearchBusAudio->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataOffset )
{
	if (DataOffset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataOffset is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusAudio->get_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataOffset = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataOffset )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataOffset);
		HRESULT hr = spSearchBusAudio->put_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusAudio->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spSearchBusAudio->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusAudio->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spSearchBusAudio->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataWord2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataWord )
{
	if (DataWord == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataWord is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusAudio);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusAudio->get_DataWord((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataWord = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataWord2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataWord )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusAudio> rgSearchBusAudio;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusAudio);
	for (size_t i = 0; i < rgSearchBusAudio.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusAudio> spSearchBusAudio(rgSearchBusAudio[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataWord);
		HRESULT hr = spSearchBusAudio->put_DataWord((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusUSB->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spSearchBusUSB->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataOffset )
{
	if (DataOffset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataOffset is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataOffset = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataOffset )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataOffset);
		HRESULT hr = spSearchBusUSB->put_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_Qualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spSearchBusUSB->put_Qualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spSearchBusUSB->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spSearchBusUSB->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spSearchBusUSB->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressType )
{
	if (AddressType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_DataType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBDATATypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressType);
		HRESULT hr = spSearchBusUSB->put_DataType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBDATATypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressModeBufferSize, ViChar AddressMode[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_AddressHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressMode, AddressModeBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressMode);
		HRESULT hr = spSearchBusUSB->put_AddressHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 EndPointValueBufferSize, ViChar EndPointValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_EndPointValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(EndPointValue, EndPointValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetEndPointValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString EndPointValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(EndPointValue);
		HRESULT hr = spSearchBusUSB->put_EndPointValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBERRTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spSearchBusUSB->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBERRTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHandshakeType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* HandshakeType )
{
	if (HandshakeType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HandshakeType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_HandshakeType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HandshakeType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetHandshakeType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HandshakeType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(HandshakeType);
		HRESULT hr = spSearchBusUSB->put_HandshakeType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSofFrameNumber2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 SOFFrameNumberBufferSize, ViChar SOFFrameNumber[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusUSB->get_SOFFrameNumber((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(SOFFrameNumber, SOFFrameNumberBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSofFrameNumber2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString SOFFrameNumber )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(SOFFrameNumber);
		HRESULT hr = spSearchBusUSB->put_SOFFrameNumber((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpecialType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* SpecialType )
{
	if (SpecialType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SpecialType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_SpecialType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SpecialType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpecialType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 SpecialType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(SpecialType);
		HRESULT hr = spSearchBusUSB->put_SpecialType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTokenType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TokenType )
{
	if (TokenType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TokenType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusUSB);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusUSB->get_TokenType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBTokenTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TokenType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTokenType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TokenType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusUSB> rgSearchBusUSB;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusUSB);
	for (size_t i = 0; i < rgSearchBusUSB.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusUSB> spSearchBusUSB(rgSearchBusUSB[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TokenType);
		HRESULT hr = spSearchBusUSB->put_TokenType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBTokenTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusSPI);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusSPI->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusSPIConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusSPI);
	for (size_t i = 0; i < rgSearchBusSPI.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusSPI->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusSPIConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusSPI);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusSPI->get_DataINValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(RXDataValue, RXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString RXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusSPI);
	for (size_t i = 0; i < rgSearchBusSPI.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(RXDataValue);
		HRESULT hr = spSearchBusSPI->put_DataINValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TXDataSize )
{
	if (TXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusSPI);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusSPI->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusSPI);
	for (size_t i = 0; i < rgSearchBusSPI.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TXDataSize);
		HRESULT hr = spSearchBusSPI->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusSPI);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusSPI->get_DataOUTValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(TXDataValue, TXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString TXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusSPI> rgSearchBusSPI;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusSPI);
	for (size_t i = 0; i < rgSearchBusSPI.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusSPI> spSearchBusSPI(rgSearchBusSPI[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(TXDataValue);
		HRESULT hr = spSearchBusSPI->put_DataOUTValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition12 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusRS232);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusRS232->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusRS232ConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition12 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusRS232);
	for (size_t i = 0; i < rgSearchBusRS232.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusRS232->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusRS232ConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataSize2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* RXDataSize )
{
	if (RXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusRS232);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusRS232->get_RXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataSize2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusRS232);
	for (size_t i = 0; i < rgSearchBusRS232.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(RXDataSize);
		HRESULT hr = spSearchBusRS232->put_RXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusRS232);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusRS232->get_RXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(RXDataValue, RXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString RXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusRS232);
	for (size_t i = 0; i < rgSearchBusRS232.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(RXDataValue);
		HRESULT hr = spSearchBusRS232->put_RXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TXDataSize )
{
	if (TXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusRS232);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusRS232->get_TXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusRS232);
	for (size_t i = 0; i < rgSearchBusRS232.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TXDataSize);
		HRESULT hr = spSearchBusRS232->put_TXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusRS232);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusRS232->get_TXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(TXDataValue, TXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString TXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusRS232> rgSearchBusRS232;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusRS232);
	for (size_t i = 0; i < rgSearchBusRS232.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusRS232> spSearchBusRS232(rgSearchBusRS232[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(TXDataValue);
		HRESULT hr = spSearchBusRS232->put_TXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusLIN->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spSearchBusLIN->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusLIN->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spSearchBusLIN->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusLIN->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spSearchBusLIN->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition13 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusLIN->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition13 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusLIN->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusLIN->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spSearchBusLIN->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusLIN->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINErrorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spSearchBusLIN->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINErrorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetIdentifierValue2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 IdentifierValueBufferSize, ViChar IdentifierValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusLIN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusLIN->get_IdentifierValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(IdentifierValue, IdentifierValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetIdentifierValue2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString IdentifierValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusLIN> rgSearchBusLIN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusLIN);
	for (size_t i = 0; i < rgSearchBusLIN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusLIN> spSearchBusLIN(rgSearchBusLIN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(IdentifierValue);
		HRESULT hr = spSearchBusLIN->put_IdentifierValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusI2C->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spSearchBusI2C->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusI2C->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spSearchBusI2C->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusI2C->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spSearchBusI2C->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataDirection )
{
	if (DataDirection == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataDirection is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusI2C->get_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CDataDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataDirection = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataDirection )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataDirection);
		HRESULT hr = spSearchBusI2C->put_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CDataDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition14 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusI2C->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CTrigConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition14 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusI2C->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CTrigConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressMode )
{
	if (AddressMode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressMode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusI2C);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusI2C->get_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CAddrModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressMode = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusI2C> rgSearchBusI2C;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusI2C);
	for (size_t i = 0; i < rgSearchBusI2C.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusI2C> spSearchBusI2C(rgSearchBusI2C[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressMode);
		HRESULT hr = spSearchBusI2C->put_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CAddrModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition15 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusFlexray->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition15 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusFlexray->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEofType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* EOFType )
{
	if (EOFType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter EOFType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusFlexray->get_EOFType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*EOFType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetEofType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 EOFType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(EOFType);
		HRESULT hr = spSearchBusFlexray->put_EOFType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusFlexray->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spSearchBusFlexray->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* FrameType )
{
	if (FrameType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusFlexray->get_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FrameType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 FrameType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(FrameType);
		HRESULT hr = spSearchBusFlexray->put_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCycleCount2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spSearchBusFlexray->ConfigureCycleCount((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCycleCount2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Qualifier;
		CParam<ViChar[]> _Value;
		HRESULT hr = spSearchBusFlexray->ReadCycleCount((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Qualifier = _Qualifier.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Offset, ViInt32 Qualifier, ViInt32 Size, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Offset(Offset);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViInt32> _Size(Size);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spSearchBusFlexray->ConfigureData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, _Offset, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Size, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Offset, ViInt32* Qualifier, ViInt32* Size, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Offset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Offset is VI_NULL."));
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));
	if (Size == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Size is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Offset;
		CParam<ViInt32> _Qualifier;
		CParam<ViInt32> _Size;
		CParam<ViChar[]> _Value;
		HRESULT hr = spSearchBusFlexray->ReadData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, &_Offset, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Size, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Offset = _Offset.GetVal();
			*Qualifier = _Qualifier.GetVal();
			*Size = _Size.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFrameID2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spSearchBusFlexray->ConfigureFrameID((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFrameID2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Qualifier;
		CParam<ViChar[]> _Value;
		HRESULT hr = spSearchBusFlexray->ReadFrameID((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Qualifier = _Qualifier.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureHeader2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString CRC, ViConstString CycleCount, ViConstString FrameID, ViConstString IndicatorBits, ViConstString PayloadLength )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusFlexray);
	for (size_t i = 0; i < rgSearchBusFlexray.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _CRC(CRC);
		CParam<ViConstString> _CycleCount(CycleCount);
		CParam<ViConstString> _FrameID(FrameID);
		CParam<ViConstString> _IndicatorBits(IndicatorBits);
		CParam<ViConstString> _PayloadLength(PayloadLength);
		HRESULT hr = spSearchBusFlexray->ConfigureHeader((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _CRC, _CycleCount, _FrameID, _IndicatorBits, _PayloadLength);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadHeader2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 CRCBufferSize, ViChar CRC[], ViInt32 CycleCountBufferSize, ViChar CycleCount[], ViInt32 FrameIDBufferSize, ViChar FrameID[], ViInt32 IndicatorBitsBufferSize, ViChar IndicatorBits[], ViInt32 PayloadLengthBufferSize, ViChar PayloadLength[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusFlexray> rgSearchBusFlexray;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusFlexray);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusFlexray> spSearchBusFlexray(rgSearchBusFlexray[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _CRC;
		CParam<ViChar[]> _CycleCount;
		CParam<ViChar[]> _FrameID;
		CParam<ViChar[]> _IndicatorBits;
		CParam<ViChar[]> _PayloadLength;
		HRESULT hr = spSearchBusFlexray->ReadHeader((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_CRC, &_CycleCount, &_FrameID, &_IndicatorBits, &_PayloadLength);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusCRC = _CRC.GetVal(CRC, CRCBufferSize);
			status = status == VI_SUCCESS ? statusCRC : status;
			ViStatus statusCycleCount = _CycleCount.GetVal(CycleCount, CycleCountBufferSize);
			status = status == VI_SUCCESS ? statusCycleCount : status;
			ViStatus statusFrameID = _FrameID.GetVal(FrameID, FrameIDBufferSize);
			status = status == VI_SUCCESS ? statusFrameID : status;
			ViStatus statusIndicatorBits = _IndicatorBits.GetVal(IndicatorBits, IndicatorBitsBufferSize);
			status = status == VI_SUCCESS ? statusIndicatorBits : status;
			ViStatus statusPayloadLength = _PayloadLength.GetVal(PayloadLength, PayloadLengthBufferSize);
			status = status == VI_SUCCESS ? statusPayloadLength : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition16 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition16 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spSearchBusCAN->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spSearchBusCAN->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusCAN->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spSearchBusCAN->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataDirection )
{
	if (DataDirection == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataDirection is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANDataDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataDirection = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataDirection )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataDirection);
		HRESULT hr = spSearchBusCAN->put_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANDataDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spSearchBusCAN->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* FrameType )
{
	if (FrameType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANFrameTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FrameType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 FrameType )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(FrameType);
		HRESULT hr = spSearchBusCAN->put_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANFrameTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressMode )
{
	if (AddressMode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressMode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBusCAN->get_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANAddressModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressMode = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressMode);
		HRESULT hr = spSearchBusCAN->put_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANAddressModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, false, rgSearchBusCAN);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[0]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spSearchBusCAN->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBusCAN> rgSearchBusCAN;
	status = GetSearchInterfaces(Vi, Search, true, rgSearchBusCAN);
	for (size_t i = 0; i < rgSearchBusCAN.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBusCAN> spSearchBusCAN(rgSearchBusCAN[i]);
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spSearchBusCAN->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetBLevel ( ViSession Vi, ViInt32 Source, ViReal64* BLevel )
{
	if (BLevel == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter BLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_BLevel((Tkdpo2k3k4kChannelEnum)(long)_Source, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*BLevel = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetBLevel ( ViSession Vi, ViInt32 Source, ViReal64 BLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _val(BLevel);
		HRESULT hr = spTrigger->put_BLevel((Tkdpo2k3k4kChannelEnum)(long)_Source, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBIndependentParameters ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _UpperThreshold(UpperThreshold);
		CParam<ViReal64> _LowerThreshold(LowerThreshold);
		HRESULT hr = spTrigger->ConfigureBIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, _Level, _UpperThreshold, _LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBIndependentParameters ( ViSession Vi, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (UpperThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperThreshold is VI_NULL."));
	if (LowerThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerThreshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level;
		CParam<ViReal64> _UpperThreshold;
		CParam<ViReal64> _LowerThreshold;
		HRESULT hr = spTrigger->ReadBIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, &_Level, &_UpperThreshold, &_LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*UpperThreshold = _UpperThreshold.GetVal();
			*LowerThreshold = _LowerThreshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAIndependentParameters2 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViReal64> _UpperThreshold(UpperThreshold);
		CParam<ViReal64> _LowerThreshold(LowerThreshold);
		HRESULT hr = spTrigger->ConfigureAIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, _Level, _UpperThreshold, _LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAIndependentParameters2 ( ViSession Vi, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold )
{
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (UpperThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperThreshold is VI_NULL."));
	if (LowerThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerThreshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level;
		CParam<ViReal64> _UpperThreshold;
		CParam<ViReal64> _LowerThreshold;
		HRESULT hr = spTrigger->ReadAIndependentParameters((Tkdpo2k3k4kChannelEnum)(long)_Source, &_Level, &_UpperThreshold, &_LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Level = _Level.GetVal();
			*UpperThreshold = _UpperThreshold.GetVal();
			*LowerThreshold = _LowerThreshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAOnlyTrigger ( ViSession Vi, ViReal64 HoldoffTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _HoldoffTime(HoldoffTime);
		HRESULT hr = spTrigger->ConfigureAOnlyTrigger(_HoldoffTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAThenBAfterEventsTrigger ( ViSession Vi, ViReal64 HoldoffTime, ViInt32 Events )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _HoldoffTime(HoldoffTime);
		CParam<ViInt32> _Events(Events);
		HRESULT hr = spTrigger->ConfigureAThenBAfterEventsTrigger(_HoldoffTime, _Events);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAThenBAfterTimeTrigger ( ViSession Vi, ViReal64 HoldoffTime, ViReal64 DelayTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _HoldoffTime(HoldoffTime);
		CParam<ViReal64> _DelayTime(DelayTime);
		HRESULT hr = spTrigger->ConfigureAThenBAfterTimeTrigger(_HoldoffTime, _DelayTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadARFIndependentParameters2 ( ViSession Vi, ViReal64* UpperThreshold, ViReal64* LowerThreshold )
{
	if (UpperThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UpperThreshold is VI_NULL."));
	if (LowerThreshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LowerThreshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _UpperThreshold;
		CParam<ViReal64> _LowerThreshold;
		HRESULT hr = spTrigger->ReadARFIndependentParameters(&_UpperThreshold, &_LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*UpperThreshold = _UpperThreshold.GetVal();
			*LowerThreshold = _LowerThreshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureARFIndependentParameters2 ( ViSession Vi, ViReal64 UpperThreshold, ViReal64 LowerThreshold )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _UpperThreshold(UpperThreshold);
		CParam<ViReal64> _LowerThreshold(LowerThreshold);
		HRESULT hr = spTrigger->ConfigureARFIndependentParameters(_UpperThreshold, _LowerThreshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure4 ( ViSession Vi, ViInt32 BusSource, ViInt32 BusType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _BusType(BusType);
		HRESULT hr = spTriggerABus->Configure((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTriggerBusTypeEnum)(long)_BusType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelData ( ViSession Vi, ViInt32 BusSource, ViInt32 ParallelDataBufferSize, ViChar ParallelData[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABus->get_ParallelData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(ParallelData, ParallelDataBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelData ( ViSession Vi, ViInt32 BusSource, ViConstString ParallelData )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(ParallelData);
		HRESULT hr = spTriggerABus->put_ParallelData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusAudio->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusAudio->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusAudio->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spTriggerABusAudio->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset ( ViSession Vi, ViInt32 BusSource, ViInt32* DataOffset )
{
	if (DataOffset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataOffset is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusAudio->get_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataOffset = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset ( ViSession Vi, ViInt32 BusSource, ViInt32 DataOffset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataOffset);
		HRESULT hr = spTriggerABusAudio->put_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusAudio->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spTriggerABusAudio->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusAudio->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spTriggerABusAudio->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataWord ( ViSession Vi, ViInt32 BusSource, ViInt32* DataWord )
{
	if (DataWord == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataWord is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusAudio->get_DataWord((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataWord = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataWord ( ViSession Vi, ViInt32 BusSource, ViInt32 DataWord )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusAudio> spTriggerABusAudio;
	status = GetDriverInterface(Vi, &spTriggerABusAudio);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataWord);
		HRESULT hr = spTriggerABusAudio->put_DataWord((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spTriggerABusCAN->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition2 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition2 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusCAN->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spTriggerABusCAN->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusCAN->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spTriggerABusCAN->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection ( ViSession Vi, ViInt32 BusSource, ViInt32* DataDirection )
{
	if (DataDirection == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataDirection is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANDataDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataDirection = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection ( ViSession Vi, ViInt32 BusSource, ViInt32 DataDirection )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataDirection);
		HRESULT hr = spTriggerABusCAN->put_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANDataDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType ( ViSession Vi, ViInt32 BusSource, ViInt32* FrameType )
{
	if (FrameType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANFrameTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FrameType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType ( ViSession Vi, ViInt32 BusSource, ViInt32 FrameType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(FrameType);
		HRESULT hr = spTriggerABusCAN->put_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANFrameTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressMode )
{
	if (AddressMode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressMode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusCAN->get_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANAddressModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressMode = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressMode);
		HRESULT hr = spTriggerABusCAN->put_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusCANAddressModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusCAN->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusCAN> spTriggerABusCAN;
	status = GetDriverInterface(Vi, &spTriggerABusCAN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spTriggerABusCAN->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition3 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusFlexray->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition3 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusFlexray->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCycleCount ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spTriggerABusFlexray->ConfigureCycleCount((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCycleCount ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Qualifier;
		CParam<ViChar[]> _Value;
		HRESULT hr = spTriggerABusFlexray->ReadCycleCount((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Qualifier = _Qualifier.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureData ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Offset, ViInt32 Qualifier, ViInt32 Size, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Offset(Offset);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViInt32> _Size(Size);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spTriggerABusFlexray->ConfigureData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, _Offset, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Size, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadData ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Offset, ViInt32* Qualifier, ViInt32* Size, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Offset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Offset is VI_NULL."));
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));
	if (Size == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Size is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Offset;
		CParam<ViInt32> _Qualifier;
		CParam<ViInt32> _Size;
		CParam<ViChar[]> _Value;
		HRESULT hr = spTriggerABusFlexray->ReadData((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, &_Offset, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Size, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Offset = _Offset.GetVal();
			*Qualifier = _Qualifier.GetVal();
			*Size = _Size.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFrameID ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _HighValue(HighValue);
		CParam<ViInt32> _Qualifier(Qualifier);
		CParam<ViConstString> _Value(Value);
		HRESULT hr = spTriggerABusFlexray->ConfigureFrameID((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum)(long)_Qualifier, _Value);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFrameID ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] )
{
	if (Qualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Qualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _HighValue;
		CParam<ViInt32> _Qualifier;
		CParam<ViChar[]> _Value;
		HRESULT hr = spTriggerABusFlexray->ReadFrameID((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_HighValue, (Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum*)&_Qualifier, &_Value);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusHighValue = _HighValue.GetVal(HighValue, HighValueBufferSize);
			status = status == VI_SUCCESS ? statusHighValue : status;
			*Qualifier = _Qualifier.GetVal();
			ViStatus statusValue = _Value.GetVal(Value, ValueBufferSize);
			status = status == VI_SUCCESS ? statusValue : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureHeader ( ViSession Vi, ViInt32 BusSource, ViConstString CRC, ViConstString CycleCount, ViConstString FrameID, ViConstString IndicatorBits, ViConstString PayloadLength )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _CRC(CRC);
		CParam<ViConstString> _CycleCount(CycleCount);
		CParam<ViConstString> _FrameID(FrameID);
		CParam<ViConstString> _IndicatorBits(IndicatorBits);
		CParam<ViConstString> _PayloadLength(PayloadLength);
		HRESULT hr = spTriggerABusFlexray->ConfigureHeader((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _CRC, _CycleCount, _FrameID, _IndicatorBits, _PayloadLength);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadHeader ( ViSession Vi, ViInt32 BusSource, ViInt32 CRCBufferSize, ViChar CRC[], ViInt32 CycleCountBufferSize, ViChar CycleCount[], ViInt32 FrameIDBufferSize, ViChar FrameID[], ViInt32 IndicatorBitsBufferSize, ViChar IndicatorBits[], ViInt32 PayloadLengthBufferSize, ViChar PayloadLength[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _CRC;
		CParam<ViChar[]> _CycleCount;
		CParam<ViChar[]> _FrameID;
		CParam<ViChar[]> _IndicatorBits;
		CParam<ViChar[]> _PayloadLength;
		HRESULT hr = spTriggerABusFlexray->ReadHeader((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_CRC, &_CycleCount, &_FrameID, &_IndicatorBits, &_PayloadLength);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusCRC = _CRC.GetVal(CRC, CRCBufferSize);
			status = status == VI_SUCCESS ? statusCRC : status;
			ViStatus statusCycleCount = _CycleCount.GetVal(CycleCount, CycleCountBufferSize);
			status = status == VI_SUCCESS ? statusCycleCount : status;
			ViStatus statusFrameID = _FrameID.GetVal(FrameID, FrameIDBufferSize);
			status = status == VI_SUCCESS ? statusFrameID : status;
			ViStatus statusIndicatorBits = _IndicatorBits.GetVal(IndicatorBits, IndicatorBitsBufferSize);
			status = status == VI_SUCCESS ? statusIndicatorBits : status;
			ViStatus statusPayloadLength = _PayloadLength.GetVal(PayloadLength, PayloadLengthBufferSize);
			status = status == VI_SUCCESS ? statusPayloadLength : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEofType ( ViSession Vi, ViInt32 BusSource, ViInt32* EOFType )
{
	if (EOFType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter EOFType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusFlexray->get_EOFType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*EOFType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetEofType ( ViSession Vi, ViInt32 BusSource, ViInt32 EOFType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(EOFType);
		HRESULT hr = spTriggerABusFlexray->put_EOFType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusFlexray->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spTriggerABusFlexray->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* FrameType )
{
	if (FrameType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrameType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusFlexray->get_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FrameType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 FrameType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusFlexray> spTriggerABusFlexray;
	status = GetDriverInterface(Vi, &spTriggerABusFlexray);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(FrameType);
		HRESULT hr = spTriggerABusFlexray->put_FrameType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusI2C->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spTriggerABusI2C->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusI2C->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spTriggerABusI2C->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusI2C->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spTriggerABusI2C->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataDirection )
{
	if (DataDirection == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataDirection is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusI2C->get_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CDataDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataDirection = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataDirection )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataDirection);
		HRESULT hr = spTriggerABusI2C->put_DataDirection((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CDataDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition4 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusI2C->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CTrigConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition4 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusI2C->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CTrigConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode2 ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressMode )
{
	if (AddressMode == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressMode is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusI2C->get_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CAddrModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressMode = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusI2C> spTriggerABusI2C;
	status = GetDriverInterface(Vi, &spTriggerABusI2C);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressMode);
		HRESULT hr = spTriggerABusI2C->put_AddressMode((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusI2CAddrModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusLIN->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue4 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spTriggerABusLIN->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier3 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusLIN->get_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spTriggerABusLIN->put_DataQualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusLIN->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spTriggerABusLIN->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition5 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusLIN->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition5 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusLIN->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize3 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusLIN->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spTriggerABusLIN->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusLIN->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINErrorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spTriggerABusLIN->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusLINErrorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetIdentifierValue ( ViSession Vi, ViInt32 BusSource, ViInt32 IdentifierValueBufferSize, ViChar IdentifierValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusLIN->get_IdentifierValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(IdentifierValue, IdentifierValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetIdentifierValue ( ViSession Vi, ViInt32 BusSource, ViConstString IdentifierValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusLIN> spTriggerABusLIN;
	status = GetDriverInterface(Vi, &spTriggerABusLIN);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(IdentifierValue);
		HRESULT hr = spTriggerABusLIN->put_IdentifierValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition6 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusRS232->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusRS232ConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition6 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusRS232->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusRS232ConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* RXDataSize )
{
	if (RXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusRS232->get_RXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(RXDataSize);
		HRESULT hr = spTriggerABusRS232->put_RXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusRS232->get_RXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(RXDataValue, RXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString RXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(RXDataValue);
		HRESULT hr = spTriggerABusRS232->put_RXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* TXDataSize )
{
	if (TXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusRS232->get_TXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TXDataSize);
		HRESULT hr = spTriggerABusRS232->put_TXDataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusRS232->get_TXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(TXDataValue, TXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString TXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusRS232> spTriggerABusRS232;
	status = GetDriverInterface(Vi, &spTriggerABusRS232);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(TXDataValue);
		HRESULT hr = spTriggerABusRS232->put_TXDataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition7 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusSPI->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusSPIConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition7 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusSPI->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusSPIConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusSPI->get_DataINValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(RXDataValue, RXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString RXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(RXDataValue);
		HRESULT hr = spTriggerABusSPI->put_DataINValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32* TXDataSize )
{
	if (TXDataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TXDataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusSPI->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TXDataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TXDataSize);
		HRESULT hr = spTriggerABusSPI->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusSPI->get_DataOUTValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(TXDataValue, TXDataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString TXDataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusSPI> spTriggerABusSPI;
	status = GetDriverInterface(Vi, &spTriggerABusSPI);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(TXDataValue);
		HRESULT hr = spTriggerABusSPI->put_DataOUTValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition8 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition8 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(Condition);
		HRESULT hr = spTriggerABusUSB->put_Condition((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataHighValue, DataHighValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataHighValue);
		HRESULT hr = spTriggerABusUSB->put_DataHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataOffset )
{
	if (DataOffset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataOffset is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataOffset = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataOffset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataOffset);
		HRESULT hr = spTriggerABusUSB->put_DataOffset((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier4 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier )
{
	if (DataQualifier == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataQualifier is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_Qualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBQualifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataQualifier = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataQualifier);
		HRESULT hr = spTriggerABusUSB->put_Qualifier((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBQualifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue5 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(DataValue, DataValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue5 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(DataValue);
		HRESULT hr = spTriggerABusUSB->put_DataValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize4 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize )
{
	if (DataSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DataSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*DataSize = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(DataSize);
		HRESULT hr = spTriggerABusUSB->put_DataSize((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressValue, AddressValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressValue);
		HRESULT hr = spTriggerABusUSB->put_AddressValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressType )
{
	if (AddressType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AddressType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_DataType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBDATATypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AddressType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(AddressType);
		HRESULT hr = spTriggerABusUSB->put_DataType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBDATATypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode3 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressModeBufferSize, ViChar AddressMode[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_AddressHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(AddressMode, AddressModeBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode3 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(AddressMode);
		HRESULT hr = spTriggerABusUSB->put_AddressHighValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 EndPointValueBufferSize, ViChar EndPointValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_EndPointValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(EndPointValue, EndPointValueBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetEndPointValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString EndPointValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(EndPointValue);
		HRESULT hr = spTriggerABusUSB->put_EndPointValue((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType3 ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType )
{
	if (ErrorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ErrorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBERRTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ErrorType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType3 ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(ErrorType);
		HRESULT hr = spTriggerABusUSB->put_ErrorType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBERRTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHandshakeType ( ViSession Vi, ViInt32 BusSource, ViInt32* HandshakeType )
{
	if (HandshakeType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HandshakeType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_HandshakeType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HandshakeType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetHandshakeType ( ViSession Vi, ViInt32 BusSource, ViInt32 HandshakeType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(HandshakeType);
		HRESULT hr = spTriggerABusUSB->put_HandshakeType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSofFrameNumber ( ViSession Vi, ViInt32 BusSource, ViInt32 SOFFrameNumberBufferSize, ViChar SOFFrameNumber[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViChar[]> _val;
		HRESULT hr = spTriggerABusUSB->get_SOFFrameNumber((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(SOFFrameNumber, SOFFrameNumberBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSofFrameNumber ( ViSession Vi, ViInt32 BusSource, ViConstString SOFFrameNumber )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViConstString> _val(SOFFrameNumber);
		HRESULT hr = spTriggerABusUSB->put_SOFFrameNumber((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpecialType ( ViSession Vi, ViInt32 BusSource, ViInt32* SpecialType )
{
	if (SpecialType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SpecialType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_SpecialType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SpecialType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpecialType ( ViSession Vi, ViInt32 BusSource, ViInt32 SpecialType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(SpecialType);
		HRESULT hr = spTriggerABusUSB->put_SpecialType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetTokenType ( ViSession Vi, ViInt32 BusSource, ViInt32* TokenType )
{
	if (TokenType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TokenType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABusUSB->get_TokenType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBTokenTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TokenType = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTokenType ( ViSession Vi, ViInt32 BusSource, ViInt32 TokenType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABusUSB> spTriggerABusUSB;
	status = GetDriverInterface(Vi, &spTriggerABusUSB);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _BusSource(BusSource);
		CParam<ViInt32> _val(TokenType);
		HRESULT hr = spTriggerABusUSB->put_TokenType((Tkdpo2k3k4kTrigABusSourceEnum)(long)_BusSource, (Tkdpo2k3k4kTrigABusUSBTokenTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read4 ( ViSession Vi, ViInt32* Source, ViReal64* Level, ViInt32* Slope, ViInt32* Coupling )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (Slope == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Slope is VI_NULL."));
	if (Coupling == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Coupling is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source;
		CParam<ViReal64> _Level;
		CParam<ViInt32> _Slope;
		CParam<ViInt32> _Coupling;
		HRESULT hr = spTriggerAEdge->Read((Tkdpo2k3k4kTriggerSource2Enum*)&_Source, &_Level, (Tkdpo2k3k4kTriggerSlopeEnum*)&_Slope, (Tkdpo2k3k4kTriggerEdgeCouplingEnum*)&_Coupling);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*Level = _Level.GetVal();
			*Slope = _Slope.GetVal();
			*Coupling = _Coupling.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure16 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViInt32 Slope, ViInt32 Coupling )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Slope(Slope);
		CParam<ViInt32> _Coupling(Coupling);
		HRESULT hr = spTriggerAEdge->Configure((Tkdpo2k3k4kTriggerSource2Enum)(long)_Source, _Level, (Tkdpo2k3k4kTriggerSlopeEnum)(long)_Slope, (Tkdpo2k3k4kTriggerEdgeCouplingEnum)(long)_Coupling);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLevelTo50Percent ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerAEdge->ConfigureLevelTo50Percent();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure5 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerALogic->Configure();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSource ( ViSession Vi, ViInt32 Source, ViInt32 Input, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Input(Input);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spTriggerALogic->ConfigureSource((Tkdpo2k3k4kTriggerSourceEnum)(long)_Source, (Tkdpo2k3k4kTriggerLogicInputChannelEnum)(long)_Input, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSource ( ViSession Vi, ViInt32 Source, ViInt32* Input, ViReal64* Threshold )
{
	if (Input == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Input is VI_NULL."));
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Input;
		CParam<ViReal64> _Threshold;
		HRESULT hr = spTriggerALogic->ReadSource((Tkdpo2k3k4kTriggerSourceEnum)(long)_Source, (Tkdpo2k3k4kTriggerLogicInputChannelEnum*)&_Input, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Input = _Input.GetVal();
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePattern ( ViSession Vi, ViInt32 Condition, ViReal64 LessLimit, ViReal64 MoreLimit, ViInt32 LogicOperatorType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Condition(Condition);
		CParam<ViReal64> _LessLimit(LessLimit);
		CParam<ViReal64> _MoreLimit(MoreLimit);
		CParam<ViInt32> _LogicOperatorType(LogicOperatorType);
		HRESULT hr = spTriggerALogic->ConfigurePattern((Tkdpo2k3k4kTriggerPatternConditionEnum)(long)_Condition, _LessLimit, _MoreLimit, (Tkdpo2k3k4kTriggerLogicOperatorTypeEnum)(long)_LogicOperatorType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPattern ( ViSession Vi, ViInt32* Condition, ViReal64* LessLimit, ViReal64* MoreLimit, ViInt32* LogicOperatorType )
{
	if (Condition == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Condition is VI_NULL."));
	if (LessLimit == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LessLimit is VI_NULL."));
	if (MoreLimit == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MoreLimit is VI_NULL."));
	if (LogicOperatorType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LogicOperatorType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Condition;
		CParam<ViReal64> _LessLimit;
		CParam<ViReal64> _MoreLimit;
		CParam<ViInt32> _LogicOperatorType;
		HRESULT hr = spTriggerALogic->ReadPattern((Tkdpo2k3k4kTriggerPatternConditionEnum*)&_Condition, &_LessLimit, &_MoreLimit, (Tkdpo2k3k4kTriggerLogicOperatorTypeEnum*)&_LogicOperatorType);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Condition = _Condition.GetVal();
			*LessLimit = _LessLimit.GetVal();
			*MoreLimit = _MoreLimit.GetVal();
			*LogicOperatorType = _LogicOperatorType.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureClock ( ViSession Vi, ViInt32 Source, ViInt32 EdgeType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _EdgeType(EdgeType);
		HRESULT hr = spTriggerALogic->ConfigureClock((Tkdpo2k3k4kTriggerLogicClockSourceEnum)(long)_Source, (Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum)(long)_EdgeType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadClock ( ViSession Vi, ViInt32* Source, ViInt32* EdgeType )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (EdgeType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter EdgeType is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source;
		CParam<ViInt32> _EdgeType;
		HRESULT hr = spTriggerALogic->ReadClock((Tkdpo2k3k4kTriggerLogicClockSourceEnum*)&_Source, (Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum*)&_EdgeType);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*EdgeType = _EdgeType.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRF ( ViSession Vi, ViInt32 Input, ViReal64 Threshold )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Input(Input);
		CParam<ViReal64> _Threshold(Threshold);
		HRESULT hr = spTriggerALogic->ConfigureRF((Tkdpo2k3k4kTriggerLogicInputChannelEnum)(long)_Input, _Threshold);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRF ( ViSession Vi, ViInt32* Input, ViReal64* Threshold )
{
	if (Input == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Input is VI_NULL."));
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Input;
		CParam<ViReal64> _Threshold;
		HRESULT hr = spTriggerALogic->ReadRF((Tkdpo2k3k4kTriggerLogicInputChannelEnum*)&_Input, &_Threshold);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Input = _Input.GetVal();
			*Threshold = _Threshold.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure6 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerAWidth->Configure();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure7 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerARunt->Configure();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure8 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerASetupHold->Configure();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure9 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTriggerATransition->Configure();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure10 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViInt32 Slope, ViInt32 Coupling )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64> _Level(Level);
		CParam<ViInt32> _Slope(Slope);
		CParam<ViInt32> _Coupling(Coupling);
		HRESULT hr = spTriggerBEdge->Configure((Tkdpo2k3k4kTriggerSource2Enum)(long)_Source, _Level, (Tkdpo2k3k4kTriggerSlopeEnum)(long)_Slope, (Tkdpo2k3k4kTriggerEdgeCouplingEnum)(long)_Coupling);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read5 ( ViSession Vi, ViInt32* Source, ViReal64* Level, ViInt32* Slope, ViInt32* Coupling )
{
	if (Source == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source is VI_NULL."));
	if (Level == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Level is VI_NULL."));
	if (Slope == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Slope is VI_NULL."));
	if (Coupling == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Coupling is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source;
		CParam<ViReal64> _Level;
		CParam<ViInt32> _Slope;
		CParam<ViInt32> _Coupling;
		HRESULT hr = spTriggerBEdge->Read((Tkdpo2k3k4kTriggerSource2Enum*)&_Source, &_Level, (Tkdpo2k3k4kTriggerSlopeEnum*)&_Slope, (Tkdpo2k3k4kTriggerEdgeCouplingEnum*)&_Coupling);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source = _Source.GetVal();
			*Level = _Level.GetVal();
			*Slope = _Slope.GetVal();
			*Coupling = _Coupling.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeAutoZero ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spChannels->SetAUXInTekVPIProbeAutoZero();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeCommand ( ViSession Vi, ViConstString Command, ViConstString State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Command(Command);
		CParam<ViConstString> _State(State);
		HRESULT hr = spChannels->SetAUXInTekVPIProbeCommand(_Command, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeDegauss ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spChannels->SetAUXInTekVPIProbeDegauss();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAllDeskewsToRecommendedValues ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		HRESULT hr = spChannel->SetAllDeskewsToRecommendedValues();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_InvertWaveform ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		HRESULT hr = spChannel->InvertWaveform();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeAutoZero ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		HRESULT hr = spChannel->SetTekVPIProbeAutoZero();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeCommand ( ViSession Vi, ViConstString Channel, ViConstString Command, ViConstString State )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViConstString> _Command(Command);
		CParam<ViConstString> _State(State);
		HRESULT hr = spChannel->SetTekVPIProbeCommand(_Command, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeDegauss ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		HRESULT hr = spChannel->SetTekVPIProbeDegauss();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure13 ( ViSession Vi, ViConstString Channel, ViReal64 Position, ViReal64 Scale, ViReal64 Offset, ViReal64 Deskew, ViInt32 Coupling, ViInt32 Termination, ViInt32 Bandwidth, ViBoolean DisplayState )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _Position(Position);
		CParam<ViReal64> _Scale(Scale);
		CParam<ViReal64> _Offset(Offset);
		CParam<ViReal64> _Deskew(Deskew);
		CParam<ViInt32> _Coupling(Coupling);
		CParam<ViInt32> _Termination(Termination);
		CParam<ViInt32> _Bandwidth(Bandwidth);
		CParam<ViBoolean> _DisplayState(DisplayState);
		HRESULT hr = spChannel->Configure(_Position, _Scale, _Offset, _Deskew, (Tkdpo2k3k4kChannelCouplingEnum)(long)_Coupling, (Tkdpo2k3k4kChannelTerminationEnum)(long)_Termination, (Tkdpo2k3k4kChannelBandwidthEnum)(long)_Bandwidth, _DisplayState);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read7 ( ViSession Vi, ViConstString Channel, ViReal64* Position, ViReal64* Scale, ViReal64* Offset, ViReal64* Deskew, ViInt32* Coupling, ViInt32* Termination, ViReal64* Bandwidth, ViBoolean* DisplayState )
{
	if (Position == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Position is VI_NULL."));
	if (Scale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Scale is VI_NULL."));
	if (Offset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Offset is VI_NULL."));
	if (Deskew == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Deskew is VI_NULL."));
	if (Coupling == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Coupling is VI_NULL."));
	if (Termination == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Termination is VI_NULL."));
	if (Bandwidth == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Bandwidth is VI_NULL."));
	if (DisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DisplayState is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _Position;
		CParam<ViReal64> _Scale;
		CParam<ViReal64> _Offset;
		CParam<ViReal64> _Deskew;
		CParam<ViInt32> _Coupling;
		CParam<ViInt32> _Termination;
		CParam<ViReal64> _Bandwidth;
		CParam<ViBoolean> _DisplayState;
		HRESULT hr = spChannel->Read(&_Position, &_Scale, &_Offset, &_Deskew, (Tkdpo2k3k4kChannelCouplingEnum*)&_Coupling, (Tkdpo2k3k4kChannelTerminationEnum*)&_Termination, &_Bandwidth, &_DisplayState);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Position = _Position.GetVal();
			*Scale = _Scale.GetVal();
			*Offset = _Offset.GetVal();
			*Deskew = _Deskew.GetVal();
			*Coupling = _Coupling.GetVal();
			*Termination = _Termination.GetVal();
			*Bandwidth = _Bandwidth.GetVal();
			*DisplayState = _DisplayState.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadProbeDetails ( ViSession Vi, ViConstString Channel, ViInt32 TypeBufferSize, ViChar Type[], ViReal64* Resistance, ViReal64* Gain, ViInt32 SerialNumberBufferSize, ViChar SerialNumber[], ViInt32 UnitBufferSize, ViChar Unit[], ViReal64* ExternalAttenuation, ViReal64* ExternalAttenuationDB, ViInt32* Calibration )
{
	if (Resistance == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Resistance is VI_NULL."));
	if (Gain == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Gain is VI_NULL."));
	if (ExternalAttenuation == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ExternalAttenuation is VI_NULL."));
	if (ExternalAttenuationDB == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ExternalAttenuationDB is VI_NULL."));
	if (Calibration == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Calibration is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, Channel, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _Type;
		CParam<ViReal64> _Resistance;
		CParam<ViReal64> _Gain;
		CParam<ViChar[]> _SerialNumber;
		CParam<ViChar[]> _Unit;
		CParam<ViReal64> _ExternalAttenuation;
		CParam<ViReal64> _ExternalAttenuationDB;
		CParam<ViInt32> _Calibration;
		HRESULT hr = spChannel->ReadProbeDetails(&_Type, &_Resistance, &_Gain, &_SerialNumber, &_Unit, &_ExternalAttenuation, &_ExternalAttenuationDB, (Tkdpo2k3k4kChannelCalibrationEnum*)&_Calibration);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusType = _Type.GetVal(Type, TypeBufferSize);
			status = status == VI_SUCCESS ? statusType : status;
			*Resistance = _Resistance.GetVal();
			*Gain = _Gain.GetVal();
			ViStatus statusSerialNumber = _SerialNumber.GetVal(SerialNumber, SerialNumberBufferSize);
			status = status == VI_SUCCESS ? statusSerialNumber : status;
			ViStatus statusUnit = _Unit.GetVal(Unit, UnitBufferSize);
			status = status == VI_SUCCESS ? statusUnit : status;
			*ExternalAttenuation = _ExternalAttenuation.GetVal();
			*ExternalAttenuationDB = _ExternalAttenuationDB.GetVal();
			*Calibration = _Calibration.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetReferenceName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kReferences> spReferences;
	status = GetDriverInterface(Vi, &spReferences);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spReferences->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure12 ( ViSession Vi, ViConstString Reference, ViReal64 Position, ViReal64 VerticalScale, ViReal64 HorizontalScale, ViBoolean DisplayState, ViReal64 HorizontalDelayTime )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, Reference, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViReal64> _Position(Position);
		CParam<ViReal64> _VerticalScale(VerticalScale);
		CParam<ViReal64> _HorizontalScale(HorizontalScale);
		CParam<ViBoolean> _DisplayState(DisplayState);
		CParam<ViReal64> _HorizontalDelayTime(HorizontalDelayTime);
		HRESULT hr = spReference->Configure(_Position, _VerticalScale, _HorizontalScale, _DisplayState, _HorizontalDelayTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read6 ( ViSession Vi, ViConstString Reference, ViReal64* Position, ViReal64* VerticalScale, ViReal64* HorizontalScale, ViBoolean* DisplayState, ViReal64* HorizontalDelayTime )
{
	if (Position == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Position is VI_NULL."));
	if (VerticalScale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalScale is VI_NULL."));
	if (HorizontalScale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalScale is VI_NULL."));
	if (DisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter DisplayState is VI_NULL."));
	if (HorizontalDelayTime == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalDelayTime is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, Reference, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViReal64> _Position;
		CParam<ViReal64> _VerticalScale;
		CParam<ViReal64> _HorizontalScale;
		CParam<ViBoolean> _DisplayState;
		CParam<ViReal64> _HorizontalDelayTime;
		HRESULT hr = spReference->Read(&_Position, &_VerticalScale, &_HorizontalScale, &_DisplayState, &_HorizontalDelayTime);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Position = _Position.GetVal();
			*VerticalScale = _VerticalScale.GetVal();
			*HorizontalScale = _HorizontalScale.GetVal();
			*DisplayState = _DisplayState.GetVal();
			*HorizontalDelayTime = _HorizontalDelayTime.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDateTime ( ViSession Vi, ViConstString Reference, ViInt32 DateBufferSize, ViChar Date[], ViInt32 TimeBufferSize, ViChar Time[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, Reference, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViChar[]> _Date;
		CParam<ViChar[]> _Time;
		HRESULT hr = spReference->GetDateTime(&_Date, &_Time);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusDate = _Date.GetVal(Date, DateBufferSize);
			status = status == VI_SUCCESS ? statusDate : status;
			ViStatus statusTime = _Time.GetVal(Time, TimeBufferSize);
			status = status == VI_SUCCESS ? statusTime : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDigitalChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDigitalChannels> spDigitalChannels;
	status = GetDriverInterface(Vi, &spDigitalChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spDigitalChannels->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_CopyWaveformToClipboard ( ViSession Vi, ViInt32 WaveformSource, ViInt32 Start, ViInt32 Stop, ViInt32* PointsCopied )
{
	if (PointsCopied == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PointsCopied is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViInt32> _Start(Start);
		CParam<ViInt32> _Stop(Stop);
		CParam<ViInt32> _PointsCopied;
		HRESULT hr = spWaveformTransfer->CopyWaveformToClipboard((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _Start, _Stop, &_PointsCopied);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*PointsCopied = _PointsCopied.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveform2 ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveform((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformDigitizedLevel ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViInt32 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement, ViReal64* YZero, ViReal64* YMult, ViReal64* YOffset )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));
	if (YZero == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter YZero is VI_NULL."));
	if (YMult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter YMult is VI_NULL."));
	if (YOffset == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter YOffset is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViInt32[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		CParam<ViReal64> _YZero;
		CParam<ViReal64> _YMult;
		CParam<ViReal64> _YOffset;
		HRESULT hr = spWaveformTransfer->FetchWaveformDigitizedLevel((Tkdpo2k3k4kChannelEnum)(long)_WaveformSource, _WaveformArray, &_InitialX, &_XIncrement, &_YZero, &_YMult, &_YOffset);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
			*YZero = _YZero.GetVal();
			*YMult = _YMult.GetVal();
			*YOffset = _YOffset.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformHighResolution ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveformHighResolution((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformMinMax ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MinWaveformBufferSize, ViReal64 MinWaveform[], ViInt32* MinWaveformActualSize, ViInt32 MaxWaveformBufferSize, ViReal64 MaxWaveform[], ViInt32* MaxWaveformActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (MinWaveformActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MinWaveformActualSize is VI_NULL."));
	if (MaxWaveformActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaxWaveformActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViReal64[]> _MinWaveform;
		CParam<ViReal64[]> _MaxWaveform;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveformMinMax((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _MinWaveform, _MaxWaveform, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusMinWaveform = _MinWaveform.GetVal(MinWaveformBufferSize, MinWaveform, MinWaveformActualSize);
			status = status == VI_SUCCESS ? statusMinWaveform : status;
			ViStatus statusMaxWaveform = _MaxWaveform.GetVal(MaxWaveformBufferSize, MaxWaveform, MaxWaveformActualSize);
			status = status == VI_SUCCESS ? statusMaxWaveform : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformStartStop ( ViSession Vi, ViInt32 WaveformSource, ViInt32 Start, ViInt32 Stop, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViInt32> _Start(Start);
		CParam<ViInt32> _Stop(Stop);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveformStartStop((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _Start, _Stop, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformWithinCursor ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveformWithinCursor((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformWithinZoom ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->FetchWaveformWithinZoom((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_InitiateAcquisition2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spWaveformTransfer->InitiateAcquisition();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_IsWaveformElementInvalid ( ViSession Vi, ViReal64 Element, ViBoolean* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Element(Element);
		CParam<ViBoolean> _val;
		HRESULT hr = spWaveformTransfer->IsWaveformElementInvalid(_Element, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveform2 ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MaxTimeMiliseconds, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (WaveformArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter WaveformArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViInt32> _MaxTimeMiliseconds(MaxTimeMiliseconds);
		CParam<ViReal64[]> _WaveformArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->ReadWaveform((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _MaxTimeMiliseconds, _WaveformArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusWaveformArray = _WaveformArray.GetVal(WaveformArrayBufferSize, WaveformArray, WaveformArrayActualSize);
			status = status == VI_SUCCESS ? statusWaveformArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveformMinMax ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MaxTimeMiliseconds, ViInt32 MinWaveformBufferSize, ViReal64 MinWaveform[], ViInt32* MinWaveformActualSize, ViInt32 MaxWaveformBufferSize, ViReal64 MaxWaveform[], ViInt32* MaxWaveformActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (MinWaveformActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MinWaveformActualSize is VI_NULL."));
	if (MaxWaveformActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaxWaveformActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViInt32> _MaxTimeMiliseconds(MaxTimeMiliseconds);
		CParam<ViReal64[]> _MinWaveform;
		CParam<ViReal64[]> _MaxWaveform;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spWaveformTransfer->ReadWaveformMinMax((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _MaxTimeMiliseconds, _MinWaveform, _MaxWaveform, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusMinWaveform = _MinWaveform.GetVal(MinWaveformBufferSize, MinWaveform, MinWaveformActualSize);
			status = status == VI_SUCCESS ? statusMinWaveform : status;
			ViStatus statusMaxWaveform = _MaxWaveform.GetVal(MaxWaveformBufferSize, MaxWaveform, MaxWaveformActualSize);
			status = status == VI_SUCCESS ? statusMaxWaveform : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToFile2 ( ViSession Vi, ViInt32 WaveformSource, ViConstString FileName, ViInt32 FileFormat )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformSource(WaveformSource);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _FileFormat(FileFormat);
		HRESULT hr = spWaveformTransfer->SaveWaveformToFile((Tkdpo2k3k4kSourceEnum)(long)_WaveformSource, _FileName, (Tkdpo2k3k4kWaveformFileFormatEnum)(long)_FileFormat);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_WriteWaveformToReference ( ViSession Vi, ViInt32 WaveformReference, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViReal64 InitialX, ViReal64 XIncrement )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _WaveformReference(WaveformReference);
		CParam<ViReal64[]> _WaveformArray(WaveformArray, WaveformArrayBufferSize);
		CParam<ViReal64> _InitialX(InitialX);
		CParam<ViReal64> _XIncrement(XIncrement);
		HRESULT hr = spWaveformTransfer->WriteWaveformToReference((Tkdpo2k3k4kReferenceEnum)(long)_WaveformReference, _WaveformArray, _InitialX, _XIncrement);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAvailableDataCompositions ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spWaveformTransfer->GetAvailableDataCompositions(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAvailableFilterVuFrequencies ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spWaveformTransfer->GetAvailableFilterVuFrequencies(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetOPC ( ViSession Vi, ViBoolean* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spInstrumentIO->GetOPC(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Query ( ViSession Vi, ViConstString Command, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Command(Command);
		CParam<ViChar[]> _val;
		HRESULT hr = spInstrumentIO->Query(_Command, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPartialString ( ViSession Vi, ViInt32 Length, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Length(Length);
		CParam<ViChar[]> _val;
		HRESULT hr = spInstrumentIO->ReadPartialString(_Length, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadString ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spInstrumentIO->ReadString(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Val, ValBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_WriteString ( ViSession Vi, ViConstString Command )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Command(Command);
		HRESULT hr = spInstrumentIO->WriteString(_Command);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_CreateMark ( ViSession Vi, ViInt32 Mark )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Mark(Mark);
		HRESULT hr = spMark->CreateMark((Tkdpo2k3k4kMarkEnum)(long)_Mark);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_DeleteMark ( ViSession Vi, ViInt32 Mark )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Mark(Mark);
		HRESULT hr = spMark->DeleteMark((Tkdpo2k3k4kMarkEnum)(long)_Mark);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_MoveZoomToMark ( ViSession Vi, ViInt32 Mark )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Mark(Mark);
		HRESULT hr = spMark->MoveZoomToMark((Tkdpo2k3k4kMarkMoveZoomToMarkEnum)(long)_Mark);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure14 ( ViSession Vi, ViInt32 Source, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spMeasurementImmediate->Configure((Tkdpo2k3k4kSourceEnum)(long)_Source, (Tkdpo2k3k4kMeasurementTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay2 ( ViSession Vi, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		CParam<ViInt32> _Direction(Direction);
		CParam<ViInt32> _Edge1(Edge1);
		CParam<ViInt32> _Edge2(Edge2);
		HRESULT hr = spMeasurementImmediate->ConfigureDelay((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePhase ( ViSession Vi, ViInt32 Source1, ViInt32 Source2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		HRESULT hr = spMeasurementImmediate->ConfigurePhase((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureReferenceLevel ( ViSession Vi, ViInt32 Method, ViInt32 Unit, ViReal64 High, ViReal64 Low, ViReal64 Mid, ViReal64 Mid2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Method(Method);
		CParam<ViInt32> _Unit(Unit);
		CParam<ViReal64> _High(High);
		CParam<ViReal64> _Low(Low);
		CParam<ViReal64> _Mid(Mid);
		CParam<ViReal64> _Mid2(Mid2);
		HRESULT hr = spMeasurementImmediate->ConfigureReferenceLevel((Tkdpo2k3k4kMeasurementMethodEnum)(long)_Method, (Tkdpo2k3k4kMeasurementUnitEnum)(long)_Unit, _High, _Low, _Mid, _Mid2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Read8 ( ViSession Vi, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2, ViInt32* Type )
{
	if (Source1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source1 is VI_NULL."));
	if (Source2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Source2 is VI_NULL."));
	if (Direction == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Direction is VI_NULL."));
	if (Edge1 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge1 is VI_NULL."));
	if (Edge2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Edge2 is VI_NULL."));
	if (Type == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Type is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source1;
		CParam<ViInt32> _Source2;
		CParam<ViInt32> _Direction;
		CParam<ViInt32> _Edge1;
		CParam<ViInt32> _Edge2;
		CParam<ViInt32> _Type;
		HRESULT hr = spMeasurementImmediate->Read((Tkdpo2k3k4kSourceEnum*)&_Source1, (Tkdpo2k3k4kSourceEnum*)&_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum*)&_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum*)&_Edge2, (Tkdpo2k3k4kMeasurementTypeEnum*)&_Type);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Source1 = _Source1.GetVal();
			*Source2 = _Source2.GetVal();
			*Direction = _Direction.GetVal();
			*Edge1 = _Edge1.GetVal();
			*Edge2 = _Edge2.GetVal();
			*Type = _Type.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadReferenceLevel ( ViSession Vi, ViInt32* Method, ViInt32* Unit, ViReal64* High, ViReal64* Low, ViReal64* Mid, ViReal64* Mid2 )
{
	if (Method == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Method is VI_NULL."));
	if (Unit == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Unit is VI_NULL."));
	if (High == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter High is VI_NULL."));
	if (Low == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Low is VI_NULL."));
	if (Mid == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Mid is VI_NULL."));
	if (Mid2 == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Mid2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Method;
		CParam<ViInt32> _Unit;
		CParam<ViReal64> _High;
		CParam<ViReal64> _Low;
		CParam<ViReal64> _Mid;
		CParam<ViReal64> _Mid2;
		HRESULT hr = spMeasurementImmediate->ReadReferenceLevel((Tkdpo2k3k4kMeasurementMethodEnum*)&_Method, (Tkdpo2k3k4kMeasurementUnitEnum*)&_Unit, &_High, &_Low, &_Mid, &_Mid2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Method = _Method.GetVal();
			*Unit = _Unit.GetVal();
			*High = _High.GetVal();
			*Low = _Low.GetVal();
			*Mid = _Mid.GetVal();
			*Mid2 = _Mid2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadValue ( ViSession Vi, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2, ViInt32 Type, ViReal64* Val, ViInt32 UnitBufferSize, ViChar Unit[] )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source1(Source1);
		CParam<ViInt32> _Source2(Source2);
		CParam<ViInt32> _Direction(Direction);
		CParam<ViInt32> _Edge1(Edge1);
		CParam<ViInt32> _Edge2(Edge2);
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Val;
		CParam<ViChar[]> _Unit;
		HRESULT hr = spMeasurementImmediate->ReadValue((Tkdpo2k3k4kSourceEnum)(long)_Source1, (Tkdpo2k3k4kSourceEnum)(long)_Source2, (Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_Direction, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge1, (Tkdpo2k3k4kMeasurementEdgeEnum)(long)_Edge2, (Tkdpo2k3k4kMeasurementTypeEnum)(long)_Type, &_Val, &_Unit);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _Val.GetVal();
			ViStatus statusUnit = _Unit.GetVal(Unit, UnitBufferSize);
			status = status == VI_SUCCESS ? statusUnit : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_Calibrate ( ViSession Vi, ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kUtilityEx> spUtilityEx;
	status = GetDriverInterface(Vi, &spUtilityEx);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spUtilityEx->Calibrate((Tkdpo2k3k4kUtilityExCalibrationStatusEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SelfTest ( ViSession Vi, ViInt32* TestResult, ViInt32 TestMessageBufferSize, ViChar TestMessage[] )
{
	if (TestResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TestResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kUtilityEx> spUtilityEx;
	status = GetDriverInterface(Vi, &spUtilityEx);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _TestResult;
		CParam<ViChar[]> _TestMessage;
		HRESULT hr = spUtilityEx->SelfTest(&_TestResult, &_TestMessage);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*TestResult = _TestResult.GetVal();
			ViStatus statusTestMessage = _TestMessage.GetVal(TestMessage, TestMessageBufferSize);
			status = status == VI_SUCCESS ? statusTestMessage : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRefLevel ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 ReferenceLevelHysteresis, ViReal64 Mid )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViReal64> _ReferenceLevelHysteresis(ReferenceLevelHysteresis);
		CParam<ViReal64> _Mid(Mid);
		HRESULT hr = spPowerAnalysis->ConfigureRefLevel((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, _ReferenceLevelHysteresis, _Mid);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRefLevel ( ViSession Vi, ViInt32* ReferenceLevelType, ViReal64* ReferenceLevelHysteresis, ViReal64* Mid )
{
	if (ReferenceLevelType == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ReferenceLevelType is VI_NULL."));
	if (ReferenceLevelHysteresis == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ReferenceLevelHysteresis is VI_NULL."));
	if (Mid == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Mid is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType;
		CParam<ViReal64> _ReferenceLevelHysteresis;
		CParam<ViReal64> _Mid;
		HRESULT hr = spPowerAnalysis->ReadRefLevel((Tkdpo2k3k4kPowerReferenceLevelTypeEnum*)&_ReferenceLevelType, &_ReferenceLevelHysteresis, &_Mid);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ReferenceLevelType = _ReferenceLevelType.GetVal();
			*ReferenceLevelHysteresis = _ReferenceLevelHysteresis.GetVal();
			*Mid = _Mid.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetDefaultRefLevel ( ViSession Vi, ViInt32 ReferenceLevelType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		HRESULT hr = spPowerAnalysis->SetDefaultRefLevel((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelHigh ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64* ReferenceLevelHigh )
{
	if (ReferenceLevelHigh == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ReferenceLevelHigh is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysis->get_RefLevelHigh((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*ReferenceLevelHigh = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelHigh ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 ReferenceLevelHigh )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViReal64> _val(ReferenceLevelHigh);
		HRESULT hr = spPowerAnalysis->put_RefLevelHigh((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLow ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64* RefLevelLow )
{
	if (RefLevelLow == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RefLevelLow is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysis->get_RefLevelLow((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RefLevelLow = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLow ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 RefLevelLow )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViReal64> _val(RefLevelLow);
		HRESULT hr = spPowerAnalysis->put_RefLevelLow((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelMid ( ViSession Vi, ViInt32 ReferenceLevelType, ViInt32 Number, ViReal64* RefLevelMid )
{
	if (RefLevelMid == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RefLevelMid is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViInt32> _Number(Number);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysis->get_RefLevelMid((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, _Number, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RefLevelMid = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelMid ( ViSession Vi, ViInt32 ReferenceLevelType, ViInt32 Number, ViReal64 RefLevelMid )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ReferenceLevelType(ReferenceLevelType);
		CParam<ViInt32> _Number(Number);
		CParam<ViReal64> _val(RefLevelMid);
		HRESULT hr = spPowerAnalysis->put_RefLevelMid((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_ReferenceLevelType, _Number, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ResetStatistics ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spPowerAnalysis->ResetStatistics();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMeasDisplayState ( ViSession Vi, ViInt32 DisplayMeasurement, ViBoolean* MeasDisplayState )
{
	if (MeasDisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MeasDisplayState is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _DisplayMeasurement(DisplayMeasurement);
		CParam<ViBoolean> _val;
		HRESULT hr = spPowerAnalysisQuality->get_MeasDisplayState((Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum)(long)_DisplayMeasurement, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*MeasDisplayState = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasDisplayState ( ViSession Vi, ViInt32 DisplayMeasurement, ViBoolean MeasDisplayState )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _DisplayMeasurement(DisplayMeasurement);
		CParam<ViBoolean> _val(MeasDisplayState);
		HRESULT hr = spPowerAnalysisQuality->put_MeasDisplayState((Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum)(long)_DisplayMeasurement, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLowVoltage ( ViSession Vi, ViInt32 Type, ViReal64* RefLevelLowVoltage )
{
	if (RefLevelLowVoltage == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RefLevelLowVoltage is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_RefLevelLowVoltage((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_Type, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RefLevelLowVoltage = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLowVoltage ( ViSession Vi, ViInt32 Type, ViReal64 RefLevelLowVoltage )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _val(RefLevelLowVoltage);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_RefLevelLowVoltage((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_Type, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLowCurrent ( ViSession Vi, ViInt32 Type, ViReal64* RefLevelLowCurrent )
{
	if (RefLevelLowCurrent == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RefLevelLowCurrent is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_RefLevelLowCurrent((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_Type, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RefLevelLowCurrent = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLowCurrent ( ViSession Vi, ViInt32 Type, ViReal64 RefLevelLowCurrent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _val(RefLevelLowCurrent);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_RefLevelLowCurrent((Tkdpo2k3k4kPowerReferenceLevelTypeEnum)(long)_Type, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureGating ( ViSession Vi, ViInt32 Polarity, ViReal64 TurnOn )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Polarity(Polarity);
		CParam<ViReal64> _TurnOn(TurnOn);
		HRESULT hr = spPowerAnalysisSwitchingLoss->ConfigureGating((Tkdpo2k3k4kPowerGatingPolarityEnum)(long)_Polarity, _TurnOn);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadGating ( ViSession Vi, ViInt32* Polarity, ViReal64* TurnOn )
{
	if (Polarity == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Polarity is VI_NULL."));
	if (TurnOn == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TurnOn is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Polarity;
		CParam<ViReal64> _TurnOn;
		HRESULT hr = spPowerAnalysisSwitchingLoss->ReadGating((Tkdpo2k3k4kPowerGatingPolarityEnum*)&_Polarity, &_TurnOn);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Polarity = _Polarity.GetVal();
			*TurnOn = _TurnOn.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTOffLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Mean(Mean);
		CParam<ViReal64> _Min(Min);
		CParam<ViReal64> _Max(Max);
		HRESULT hr = spPowerAnalysisSwitchingLoss->ReadTOffLosses((Tkdpo2k3k4kPowerSwitchingLossTypeEnum)(long)_Type, _Mean, _Min, _Max);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTOnLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Mean(Mean);
		CParam<ViReal64> _Min(Min);
		CParam<ViReal64> _Max(Max);
		HRESULT hr = spPowerAnalysisSwitchingLoss->ReadTOnLosses((Tkdpo2k3k4kPowerSwitchingLossTypeEnum)(long)_Type, _Mean, _Min, _Max);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTotalLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Mean(Mean);
		CParam<ViReal64> _Min(Min);
		CParam<ViReal64> _Max(Max);
		HRESULT hr = spPowerAnalysisSwitchingLoss->ReadTotalLosses((Tkdpo2k3k4kPowerSwitchingLossTypeEnum)(long)_Type, _Mean, _Min, _Max);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadConductionLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _Mean(Mean);
		CParam<ViReal64> _Min(Min);
		CParam<ViReal64> _Max(Max);
		HRESULT hr = spPowerAnalysisSwitchingLoss->ReadConductionLosses((Tkdpo2k3k4kPowerSwitchingLossTypeEnum)(long)_Type, _Mean, _Min, _Max);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetParameters ( ViSession Vi, ViInt32 FrequencyReference, ViReal64 FixedReference, ViInt32 NumberOfHarmonics, ViInt32 HarmonicsSource )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _FrequencyReference(FrequencyReference);
		CParam<ViReal64> _FixedReference(FixedReference);
		CParam<ViInt32> _NumberOfHarmonics(NumberOfHarmonics);
		CParam<ViInt32> _HarmonicsSource(HarmonicsSource);
		HRESULT hr = spPowerAnalysisHarmonics->SetParameters((Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum)(long)_FrequencyReference, _FixedReference, _NumberOfHarmonics, (Tkdpo2k3k4kPowerHarmonicsSourceEnum)(long)_HarmonicsSource);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetParameters ( ViSession Vi, ViInt32* FrequencyReference, ViReal64* FixedReference, ViInt32* NumberOfHarmonics, ViInt32* HarmonicsSource )
{
	if (FrequencyReference == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FrequencyReference is VI_NULL."));
	if (FixedReference == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FixedReference is VI_NULL."));
	if (NumberOfHarmonics == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter NumberOfHarmonics is VI_NULL."));
	if (HarmonicsSource == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicsSource is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _FrequencyReference;
		CParam<ViReal64> _FixedReference;
		CParam<ViInt32> _NumberOfHarmonics;
		CParam<ViInt32> _HarmonicsSource;
		HRESULT hr = spPowerAnalysisHarmonics->GetParameters((Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum*)&_FrequencyReference, &_FixedReference, &_NumberOfHarmonics, (Tkdpo2k3k4kPowerHarmonicsSourceEnum*)&_HarmonicsSource);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FrequencyReference = _FrequencyReference.GetVal();
			*FixedReference = _FixedReference.GetVal();
			*NumberOfHarmonics = _NumberOfHarmonics.GetVal();
			*HarmonicsSource = _HarmonicsSource.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureIEC ( ViSession Vi, ViInt32 Class, ViBoolean Filter, ViReal64 FundamentalCurrent, ViBoolean Grouping, ViReal64 InputPower, ViReal64 LineFrequency, ViReal64 ObservationPeriod, ViReal64 PowerFactor )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Class(Class);
		CParam<ViBoolean> _Filter(Filter);
		CParam<ViReal64> _FundamentalCurrent(FundamentalCurrent);
		CParam<ViBoolean> _Grouping(Grouping);
		CParam<ViReal64> _InputPower(InputPower);
		CParam<ViReal64> _LineFrequency(LineFrequency);
		CParam<ViReal64> _ObservationPeriod(ObservationPeriod);
		CParam<ViReal64> _PowerFactor(PowerFactor);
		HRESULT hr = spPowerAnalysisHarmonics->ConfigureIEC((Tkdpo2k3k4kPowerHarmonicsIECClassEnum)(long)_Class, _Filter, _FundamentalCurrent, _Grouping, _InputPower, _LineFrequency, _ObservationPeriod, _PowerFactor);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadIEC ( ViSession Vi, ViInt32* Class, ViBoolean* Filter, ViReal64* FundamentalCurrent, ViBoolean* Grouping, ViReal64* InputPower, ViReal64* LineFrequency, ViReal64* ObservationPeriod, ViReal64* PowerFactor )
{
	if (Class == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Class is VI_NULL."));
	if (Filter == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Filter is VI_NULL."));
	if (FundamentalCurrent == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FundamentalCurrent is VI_NULL."));
	if (Grouping == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Grouping is VI_NULL."));
	if (InputPower == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InputPower is VI_NULL."));
	if (LineFrequency == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LineFrequency is VI_NULL."));
	if (ObservationPeriod == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter ObservationPeriod is VI_NULL."));
	if (PowerFactor == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PowerFactor is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Class;
		CParam<ViBoolean> _Filter;
		CParam<ViReal64> _FundamentalCurrent;
		CParam<ViBoolean> _Grouping;
		CParam<ViReal64> _InputPower;
		CParam<ViReal64> _LineFrequency;
		CParam<ViReal64> _ObservationPeriod;
		CParam<ViReal64> _PowerFactor;
		HRESULT hr = spPowerAnalysisHarmonics->ReadIEC((Tkdpo2k3k4kPowerHarmonicsIECClassEnum*)&_Class, &_Filter, &_FundamentalCurrent, &_Grouping, &_InputPower, &_LineFrequency, &_ObservationPeriod, &_PowerFactor);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Class = _Class.GetVal();
			*Filter = _Filter.GetVal();
			*FundamentalCurrent = _FundamentalCurrent.GetVal();
			*Grouping = _Grouping.GetVal();
			*InputPower = _InputPower.GetVal();
			*LineFrequency = _LineFrequency.GetVal();
			*ObservationPeriod = _ObservationPeriod.GetVal();
			*PowerFactor = _PowerFactor.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureMIL ( ViSession Vi, ViInt32 FundamentalCurrentCalculating, ViReal64 UserCurrent, ViReal64 LineFrequency, ViInt32 PowerLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _FundamentalCurrentCalculating(FundamentalCurrentCalculating);
		CParam<ViReal64> _UserCurrent(UserCurrent);
		CParam<ViReal64> _LineFrequency(LineFrequency);
		CParam<ViInt32> _PowerLevel(PowerLevel);
		HRESULT hr = spPowerAnalysisHarmonics->ConfigureMIL((Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum)(long)_FundamentalCurrentCalculating, _UserCurrent, _LineFrequency, (Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum)(long)_PowerLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMIL ( ViSession Vi, ViInt32* FundamentalCurrentCalculating, ViReal64* UserCurrent, ViReal64* LineFrequency, ViInt32* PowerLevel )
{
	if (FundamentalCurrentCalculating == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter FundamentalCurrentCalculating is VI_NULL."));
	if (UserCurrent == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter UserCurrent is VI_NULL."));
	if (LineFrequency == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter LineFrequency is VI_NULL."));
	if (PowerLevel == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter PowerLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _FundamentalCurrentCalculating;
		CParam<ViReal64> _UserCurrent;
		CParam<ViReal64> _LineFrequency;
		CParam<ViInt32> _PowerLevel;
		HRESULT hr = spPowerAnalysisHarmonics->ReadMIL((Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum*)&_FundamentalCurrentCalculating, &_UserCurrent, &_LineFrequency, (Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum*)&_PowerLevel);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*FundamentalCurrentCalculating = _FundamentalCurrentCalculating.GetVal();
			*UserCurrent = _UserCurrent.GetVal();
			*LineFrequency = _LineFrequency.GetVal();
			*PowerLevel = _PowerLevel.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveResultsToFile ( ViSession Vi, ViConstString Filename )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Filename(Filename);
		HRESULT hr = spPowerAnalysisHarmonics->SaveResultsToFile(_Filename);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHamroniciecMaxResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HamronicIECMaxResult )
{
	if (HamronicIECMaxResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HamronicIECMaxResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HamronicIECMaxResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HamronicIECMaxResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicPercentageMagnitudeResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicPercentageMagnitudeResult )
{
	if (HarmonicPercentageMagnitudeResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicPercentageMagnitudeResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicPercentageMagnitudeResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicPercentageMagnitudeResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicAbsoluteMagnitudeResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicAbsoluteMagnitudeResult )
{
	if (HarmonicAbsoluteMagnitudeResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicAbsoluteMagnitudeResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicAbsoluteMagnitudeResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicAbsoluteMagnitudeResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicPhaseResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicPhaseResult )
{
	if (HarmonicPhaseResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicPhaseResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicPhaseResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicPhaseResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicFrequencyResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicFrequencyResult )
{
	if (HarmonicFrequencyResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicFrequencyResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicFrequencyResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicFrequencyResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicLimitResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicLimitResult )
{
	if (HarmonicLimitResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicLimitResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicLimitResult(_Harmonic, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicLimitResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecClassaLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECClassALimitResult )
{
	if (HarmonicIECClassALimitResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicIECClassALimitResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicIECClassALimitResult(_Harmonic, (Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicIECClassALimitResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecHigherLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECHigherLimitResult )
{
	if (HarmonicIECHigherLimitResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicIECHigherLimitResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicIECHigherLimitResult(_Harmonic, (Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicIECHigherLimitResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecNormalLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECNormalLimitResult )
{
	if (HarmonicIECNormalLimitResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicIECNormalLimitResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicIECNormalLimitResult(_Harmonic, (Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicIECNormalLimitResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicmilNormalLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicMILNormalLimitResult )
{
	if (HarmonicMILNormalLimitResult == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HarmonicMILNormalLimitResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Harmonic(Harmonic);
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_HarmonicMILNormalLimitResult(_Harmonic, (Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HarmonicMILNormalLimitResult = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_DoVerticalAutoSet ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spPowerAnalysisRipple->DoVerticalAutoSet();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetOffsetToZero ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spPowerAnalysisRipple->SetOffsetToZero();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAxes ( ViSession Vi, ViInt32 Type, ViReal64 YaxesMax, ViReal64 YaxesMin, ViReal64 XaxesMax, ViReal64 XaxesMin )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _YaxesMax(YaxesMax);
		CParam<ViReal64> _YaxesMin(YaxesMin);
		CParam<ViReal64> _XaxesMax(XaxesMax);
		CParam<ViReal64> _XaxesMin(XaxesMin);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->ConfigureAxes((Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum)(long)_Type, _YaxesMax, _YaxesMin, _XaxesMax, _XaxesMin);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAxes ( ViSession Vi, ViInt32 Type, ViReal64* YaxesMax, ViReal64* YaxesMin, ViReal64* XaxesMax, ViReal64* XaxesMin )
{
	if (YaxesMax == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter YaxesMax is VI_NULL."));
	if (YaxesMin == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter YaxesMin is VI_NULL."));
	if (XaxesMax == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XaxesMax is VI_NULL."));
	if (XaxesMin == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XaxesMin is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViReal64> _YaxesMax;
		CParam<ViReal64> _YaxesMin;
		CParam<ViReal64> _XaxesMax;
		CParam<ViReal64> _XaxesMin;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->ReadAxes((Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum)(long)_Type, &_YaxesMax, &_YaxesMin, &_XaxesMax, &_XaxesMin);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*YaxesMax = _YaxesMax.GetVal();
			*YaxesMin = _YaxesMin.GetVal();
			*XaxesMax = _XaxesMax.GetVal();
			*XaxesMin = _XaxesMin.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureMaskLimits ( ViSession Vi, ViReal64 MaxVoltage, ViReal64 MaxCurrent, ViReal64 MaxPower )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _MaxVoltage(MaxVoltage);
		CParam<ViReal64> _MaxCurrent(MaxCurrent);
		CParam<ViReal64> _MaxPower(MaxPower);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->ConfigureMaskLimits(_MaxVoltage, _MaxCurrent, _MaxPower);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMaskLimits ( ViSession Vi, ViReal64* MaxVoltage, ViReal64* MaxCurrent, ViReal64* MaxPower )
{
	if (MaxVoltage == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaxVoltage is VI_NULL."));
	if (MaxCurrent == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaxCurrent is VI_NULL."));
	if (MaxPower == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaxPower is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _MaxVoltage;
		CParam<ViReal64> _MaxCurrent;
		CParam<ViReal64> _MaxPower;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->ReadMaskLimits(&_MaxVoltage, &_MaxCurrent, &_MaxPower);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*MaxVoltage = _MaxVoltage.GetVal();
			*MaxCurrent = _MaxCurrent.GetVal();
			*MaxPower = _MaxPower.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMaskPoints ( ViSession Vi, ViInt32 VoltsBufferSize, ViReal64 Volts[], ViInt32 AmpsBufferSize, ViReal64 Amps[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64[]> _Volts(Volts, VoltsBufferSize);
		CParam<ViReal64[]> _Amps(Amps, AmpsBufferSize);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->SetMaskPoints(_Volts, _Amps);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMaskPoints ( ViSession Vi, ViInt32 VoltsBufferSize, ViReal64 Volts[], ViInt32* VoltsActualSize, ViInt32 AmpsBufferSize, ViReal64 Amps[], ViInt32* AmpsActualSize )
{
	if (VoltsActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VoltsActualSize is VI_NULL."));
	if (AmpsActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AmpsActualSize is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64[]> _Volts;
		CParam<ViReal64[]> _Amps;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->GetMaskPoints(_Volts, _Amps);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusVolts = _Volts.GetVal(VoltsBufferSize, Volts, VoltsActualSize);
			status = status == VI_SUCCESS ? statusVolts : status;
			ViStatus statusAmps = _Amps.GetVal(AmpsBufferSize, Amps, AmpsActualSize);
			status = status == VI_SUCCESS ? statusAmps : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpectrumTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean* SpectrumTraceDisplayState )
{
	if (SpectrumTraceDisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter SpectrumTraceDisplayState is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequency->get_SpectrumTraceDisplayState((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Type, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*SpectrumTraceDisplayState = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpectrumTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean SpectrumTraceDisplayState )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViBoolean> _val(SpectrumTraceDisplayState);
		HRESULT hr = spFrequency->put_SpectrumTraceDisplayState((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Type, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRfVsTimeTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean* RFVsTimeTraceDisplayState )
{
	if (RFVsTimeTraceDisplayState == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter RFVsTimeTraceDisplayState is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequency->get_RFVsTimeTraceDisplayState((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_Type, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*RFVsTimeTraceDisplayState = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetRfVsTimeTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean RFVsTimeTraceDisplayState )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViBoolean> _val(RFVsTimeTraceDisplayState);
		HRESULT hr = spFrequency->put_RFVsTimeTraceDisplayState((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_Type, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureVerticalParameters ( ViSession Vi, ViInt32 RFTraceType, ViReal64 Scale, ViReal64 Position )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _RFTraceType(RFTraceType);
		CParam<ViReal64> _Scale(Scale);
		CParam<ViReal64> _Position(Position);
		HRESULT hr = spFrequencyRF->ConfigureVerticalParameters((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_RFTraceType, _Scale, _Position);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadVerticalParameters ( ViSession Vi, ViInt32 RFTraceType, ViReal64* Scale, ViReal64* Position )
{
	if (Scale == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Scale is VI_NULL."));
	if (Position == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Position is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _RFTraceType(RFTraceType);
		CParam<ViReal64> _Scale;
		CParam<ViReal64> _Position;
		HRESULT hr = spFrequencyRF->ReadVerticalParameters((Tkdpo2k3k4kFrequencyRFTraceTypeEnum)(long)_RFTraceType, &_Scale, &_Position);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Scale = _Scale.GetVal();
			*Position = _Position.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureManualDetectionMethod ( ViSession Vi, ViInt32 Type, ViInt32 Method )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViInt32> _Method(Method);
		HRESULT hr = spFrequencyRF->ConfigureManualDetectionMethod((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Type, (Tkdpo2k3k4kFrequencyRFDetectionMethodEnum)(long)_Method);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadManualDetectionMethod ( ViSession Vi, ViInt32 Type, ViInt32* Method )
{
	if (Method == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Method is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Type(Type);
		CParam<ViInt32> _Method;
		HRESULT hr = spFrequencyRF->ReadManualDetectionMethod((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Type, (Tkdpo2k3k4kFrequencyRFDetectionMethodEnum*)&_Method);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Method = _Method.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAutoRefLevel ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spFrequencyRFAmplitude->SetAutoRefLevel();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_MoveRefToCentre ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spFrequencyMarker->MoveRefToCentre();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadReference ( ViSession Vi, ViReal64* Frequency, ViReal64* Amplitude )
{
	if (Frequency == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Frequency is VI_NULL."));
	if (Amplitude == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Amplitude is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Frequency;
		CParam<ViReal64> _Amplitude;
		HRESULT hr = spFrequencyMarker->ReadReference(&_Frequency, &_Amplitude);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Frequency = _Frequency.GetVal();
			*Amplitude = _Amplitude.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadManual ( ViSession Vi, ViInt32 Marker, ViReal64* HorizontalValue, ViReal64* HorizontalDelta, ViReal64* VerticalValue, ViReal64* VerticalDelta )
{
	if (HorizontalValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalValue is VI_NULL."));
	if (HorizontalDelta == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter HorizontalDelta is VI_NULL."));
	if (VerticalValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalValue is VI_NULL."));
	if (VerticalDelta == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter VerticalDelta is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Marker(Marker);
		CParam<ViReal64> _HorizontalValue;
		CParam<ViReal64> _HorizontalDelta;
		CParam<ViReal64> _VerticalValue;
		CParam<ViReal64> _VerticalDelta;
		HRESULT hr = spFrequencyMarker->ReadManual(_Marker, &_HorizontalValue, &_HorizontalDelta, &_VerticalValue, &_VerticalDelta);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HorizontalValue = _HorizontalValue.GetVal();
			*HorizontalDelta = _HorizontalDelta.GetVal();
			*VerticalValue = _VerticalValue.GetVal();
			*VerticalDelta = _VerticalDelta.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureManual ( ViSession Vi, ViInt32 Marker, ViReal64 HorizontalValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Marker(Marker);
		CParam<ViReal64> _HorizontalValue(HorizontalValue);
		HRESULT hr = spFrequencyMarker->ConfigureManual(_Marker, _HorizontalValue);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePeak ( ViSession Vi, ViInt32 MaximumMarkers, ViReal64 Threshold, ViReal64 Excursion )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _MaximumMarkers(MaximumMarkers);
		CParam<ViReal64> _Threshold(Threshold);
		CParam<ViReal64> _Excursion(Excursion);
		HRESULT hr = spFrequencyMarker->ConfigurePeak(_MaximumMarkers, _Threshold, _Excursion);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPeak ( ViSession Vi, ViBoolean* State, ViInt32* MaximumMarkers, ViReal64* Threshold, ViReal64* Excursion )
{
	if (State == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter State is VI_NULL."));
	if (MaximumMarkers == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter MaximumMarkers is VI_NULL."));
	if (Threshold == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Threshold is VI_NULL."));
	if (Excursion == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter Excursion is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _State;
		CParam<ViInt32> _MaximumMarkers;
		CParam<ViReal64> _Threshold;
		CParam<ViReal64> _Excursion;
		HRESULT hr = spFrequencyMarker->ReadPeak(&_State, &_MaximumMarkers, &_Threshold, &_Excursion);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*State = _State.GetVal();
			*MaximumMarkers = _MaximumMarkers.GetVal();
			*Threshold = _Threshold.GetVal();
			*Excursion = _Excursion.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchY ( ViSession Vi, ViInt32 Source, ViInt32 TraceArrayBufferSize, ViReal64 TraceArray[], ViInt32* TraceArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (TraceArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TraceArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyTrace> spFrequencyTrace;
	status = GetDriverInterface(Vi, &spFrequencyTrace);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64[]> _TraceArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spFrequencyTrace->FetchY((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Source, _TraceArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusTraceArray = _TraceArray.GetVal(TraceArrayBufferSize, TraceArray, TraceArrayActualSize);
			status = status == VI_SUCCESS ? statusTraceArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadY ( ViSession Vi, ViInt32 Source, ViInt32 TraceArrayBufferSize, ViReal64 TraceArray[], ViInt32* TraceArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement )
{
	if (TraceArrayActualSize == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter TraceArrayActualSize is VI_NULL."));
	if (InitialX == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter InitialX is VI_NULL."));
	if (XIncrement == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter XIncrement is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyTrace> spFrequencyTrace;
	status = GetDriverInterface(Vi, &spFrequencyTrace);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		CParam<ViReal64[]> _TraceArray;
		CParam<ViReal64> _InitialX;
		CParam<ViReal64> _XIncrement;
		HRESULT hr = spFrequencyTrace->ReadY((Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum)(long)_Source, _TraceArray, &_InitialX, &_XIncrement);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusTraceArray = _TraceArray.GetVal(TraceArrayBufferSize, TraceArray, TraceArrayActualSize);
			status = status == VI_SUCCESS ? statusTraceArray : status;
			*InitialX = _InitialX.GetVal();
			*XIncrement = _XIncrement.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_DESCRIPTION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_PREFIX(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_VENDOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_LOGICAL_NAME(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_IO_RESOURCE_DESCRIPTOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_DRIVER_SETUP(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_GROUP_CAPABILITIES(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SUPPORTED_INSTRUMENT_MODELS(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_FIRMWARE_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MANUFACTURER(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MODEL(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INTERPOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_Interpolation((IviScopeInterpolationEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INTERPOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_Interpolation((IviScopeInterpolationEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUM_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberOfAverages(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUM_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_NumberOfAverages(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUM_ENVELOPES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberOfEnvelopes(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUM_ENVELOPES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_NumberOfEnvelopes(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_MIN_NUM_PTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberOfPointsMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORZ_MIN_NUM_PTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_NumberOfPointsMin(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_RecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_SampleMode((IviScopeSampleModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACQUISITION_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_StartTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACQUISITION_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_StartTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORZ_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_TimePerRecord(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORZ_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_TimePerRecord(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACQUISITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_Type((IviScopeAcquisitionTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACQUISITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_Type((IviScopeAcquisitionTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INITIATE_CONTINUOUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spTrigger->get_Continuous(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INITIATE_CONTINUOUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Continuous(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_Coupling((IviScopeVerticalCouplingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_Coupling((IviScopeVerticalCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CHANNEL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spChannel->get_Enabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CHANNEL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spChannel->put_Enabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX_INPUT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_InputFrequencyMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAX_INPUT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_InputFrequencyMax(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_InputImpedance(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_InputImpedance(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Offset(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Offset(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_ATTENUATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_ProbeAttenuation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_ATTENUATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_ProbeAttenuation(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SENSE_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_ProbeSense(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Range(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<IIviScopeChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<IIviScopeChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Range(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spChannels->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_HIGH_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spReferenceLevel->get_High(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_HIGH_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReferenceLevel->put_High(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_LOW_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spReferenceLevel->get_Low(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_LOW_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReferenceLevel->put_Low(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_MID_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spReferenceLevel->get_Mid(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_MID_REF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeReferenceLevel> spReferenceLevel;
	status = GetDriverInterface(Vi, &spReferenceLevel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReferenceLevel->put_Mid(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Coupling((IviScopeTriggerCouplingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Coupling((IviScopeTriggerCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_Holdoff(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Holdoff(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_Level(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Level(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_MODIFIER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Modifier((IviScopeTriggerModifierEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_MODIFIER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Modifier((IviScopeTriggerModifierEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spTrigger->get_Source(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Source(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Type((IviScopeTriggerTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Type((IviScopeTriggerTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AC_LINE_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerAcLine> spTriggerAcLine;
	status = GetDriverInterface(Vi, &spTriggerAcLine);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAcLine->get_Slope((IviScopeACLineSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_AC_LINE_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerAcLine> spTriggerAcLine;
	status = GetDriverInterface(Vi, &spTriggerAcLine);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAcLine->put_Slope((IviScopeACLineSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerEdge> spTriggerEdge;
	status = GetDriverInterface(Vi, &spTriggerEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerEdge->get_Slope((IviScopeTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerEdge> spTriggerEdge;
	status = GetDriverInterface(Vi, &spTriggerEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerEdge->put_Slope((IviScopeTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerGlitch->get_condition((IviScopeGlitchConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerGlitch->put_condition((IviScopeGlitchConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerGlitch->get_polarity((IviScopeGlitchPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerGlitch->put_polarity((IviScopeGlitchPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerGlitch->get_Width(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerGlitch> spTriggerGlitch;
	status = GetDriverInterface(Vi, &spTriggerGlitch);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerGlitch->put_Width(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerRunt->get_polarity((IviScopeRuntPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerRunt->put_polarity((IviScopeRuntPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerRunt->get_ThresholdHigh(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerRunt->put_ThresholdHigh(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUNT_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerRunt->get_ThresholdLow(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUNT_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerRunt> spTriggerRunt;
	status = GetDriverInterface(Vi, &spTriggerRunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerRunt->put_ThresholdLow(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerTv->get_Event((IviScopeTVTriggerEventEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerTv->put_Event((IviScopeTVTriggerEventEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_LINE_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerTv->get_LineNumber(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_LINE_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerTv->put_LineNumber(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerTv->get_polarity((IviScopeTVTriggerPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerTv->put_polarity((IviScopeTVTriggerPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TV_TRIGGER_SIGNAL_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerTv->get_SignalFormat((IviScopeTVSignalFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TV_TRIGGER_SIGNAL_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerTv> spTriggerTv;
	status = GetDriverInterface(Vi, &spTriggerTv);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerTv->put_SignalFormat((IviScopeTVSignalFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerWidth->get_condition((IviScopeWidthConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerWidth->put_condition((IviScopeWidthConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerWidth->get_polarity((IviScopeWidthPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerWidth->put_polarity((IviScopeWidthPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerWidth->get_ThresholdHigh(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_HIGH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerWidth->put_ThresholdHigh(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerWidth->get_ThresholdLow(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH_LOW_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviScopeTriggerWidth> spTriggerWidth;
	status = GetDriverInterface(Vi, &spTriggerWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerWidth->put_ThresholdLow(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAcquisition->get_State(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_State(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_Mode((Tkdpo2k3k4kAcquisitionModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_Mode((Tkdpo2k3k4kAcquisitionModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_ACQUISITIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberAcquisitions(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RUN_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAcquisition->get_RunStop(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RUN_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_RunStop(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SINGLE_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAcquisition->get_SingleSequence(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SINGLE_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_SingleSequence(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAGNI_VU_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spAcquisition->get_MagniVuState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAGNI_VU_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_MagniVuState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_MaxSampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLING_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_SamplingMode((Tkdpo2k3k4kAcquisitionSamplingModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_TimePerRecord(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TIME_PER_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_TimePerRecord(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_RecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_RATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberAverages(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_NumberAverages(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_POINTS_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAcquisition->get_NumberOfPointsMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_OF_POINTS_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_NumberOfPointsMin(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAcquisition->get_StartTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_START_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kAcquisition> spAcquisition;
	status = GetDriverInterface(Vi, &spAcquisition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAcquisition->put_StartTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kBuses> spBuses;
	status = GetDriverInterface(Vi, &spBuses);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spBuses->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CAN_BIT_RATE_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_CANBitRateEnum((Tkdpo2k3k4kCANBitRateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spBus->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spBus->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spBus->get_Label(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spBus->put_Label(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_Type((Tkdpo2k3k4kBusTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_Type((Tkdpo2k3k4kBusTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_State((Tkdpo2k3k4kBusStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_State((Tkdpo2k3k4kBusStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_DisplayType((Tkdpo2k3k4kBusDisplayTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_DisplayType((Tkdpo2k3k4kBusDisplayTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IS_CLOCKED_PARALLEL_BUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spBus->get_IsClockedParallelBus(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_IS_CLOCKED_PARALLEL_BUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spBus->put_IsClockedParallelBus(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_DisplayFormat((Tkdpo2k3k4kBusDisplayFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_DisplayFormat((Tkdpo2k3k4kBusDisplayFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_ParallelBusClockSource((Tkdpo2k3k4kBusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_ParallelBusClockSource((Tkdpo2k3k4kBusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_BUS_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_ParallelBusClockEdge((Tkdpo2k3k4kBusParallelBusClockEdgeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_BUS_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_ParallelBusClockEdge((Tkdpo2k3k4kBusParallelBusClockEdgeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232_DELIMITER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_RS232Delimiter((Tkdpo2k3k4kBusRS232DelimiterEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232_DELIMITER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_RS232Delimiter((Tkdpo2k3k4kBusRS232DelimiterEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232_DISPLAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_RS232DisplayMode((Tkdpo2k3k4kBusRS232DisplayModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232_DISPLAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_RS232DisplayMode((Tkdpo2k3k4kBusRS232DisplayModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232TX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_RS232TXSource((Tkdpo2k3k4kBusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232TX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_RS232TXSource((Tkdpo2k3k4kBusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RS232RX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_RS232RXSource((Tkdpo2k3k4kBusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RS232RX_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_RS232RXSource((Tkdpo2k3k4kBusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PARALLEL_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_ParallelWidth(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PARALLEL_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_ParallelWidth(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPI_FRAMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spBus->get_SPIFraming((Tkdpo2k3k4kBusSPIFramingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPI_FRAMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spBus->put_SPIFraming((Tkdpo2k3k4kBusSPIFramingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPI_IDLE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, false, rgBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spBus->get_SPIIdleTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPI_IDLE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kBus> rgBus;
	status = GetBusInterfaces(Vi, RepCapIdentifier, true, rgBus);
	for (size_t i = 0; i < rgBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kBus> spBus(rgBus[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spBus->put_SPIIdleTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DDT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursor->get_DDT(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRACK_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursor->get_TrackMode((Tkdpo2k3k4kCursorTrackModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRACK_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursor->put_TrackMode((Tkdpo2k3k4kCursorTrackModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursor->get_Type((Tkdpo2k3k4kCursorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursor->put_Type((Tkdpo2k3k4kCursorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE13 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursor->get_Source((Tkdpo2k3k4kCursorSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE13 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursor> spCursor;
	status = GetDriverInterface(Vi, &spCursor);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursor->put_Source((Tkdpo2k3k4kCursorSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursorHBars->get_Units((Tkdpo2k3k4kCursorHBarsUnitsEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursorHBars->put_Units((Tkdpo2k3k4kCursorHBarsUnitsEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorHBars->get_Delta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorHBars->get_Position1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorHBars->put_Position1(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorHBars->get_Position2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorHBars> spCursorHBars;
	status = GetDriverInterface(Vi, &spCursorHBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorHBars->put_Position2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_Delta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_Position1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorVBars->put_Position1(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_Position2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorVBars->put_Position2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursorVBars->get_Units((Tkdpo2k3k4kCursorVBarsUnitsEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursorVBars->put_Units((Tkdpo2k3k4kCursorVBarsUnitsEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION1 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_HorizontalPosition1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_HorizontalPosition2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_V_DELTA ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorVBars->get_VDelta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ALTERNATIVE_READOUT1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorVBars->get_AlternativeReadout1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ALTERNATIVE_READOUT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorVBars> spCursorVBars;
	status = GetDriverInterface(Vi, &spCursorVBars);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorVBars->get_AlternativeReadout2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_READOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXY> spCursorXY;
	status = GetDriverInterface(Vi, &spCursorXY);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spCursorXY->get_Readout((Tkdpo2k3k4kCursorXYReadoutEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_READOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXY> spCursorXY;
	status = GetDriverInterface(Vi, &spCursorXY);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spCursorXY->put_Readout((Tkdpo2k3k4kCursorXYReadoutEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_XDelta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_XPosition1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorXYRectangle->put_XPosition1(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_XPosition2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorXYRectangle->put_XPosition2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYRectangle->get_XUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_YDelta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_YPosition1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorXYRectangle->put_YPosition1(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRectangle->get_YPosition2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCursorXYRectangle->put_YPosition2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRectangle> spCursorXYRectangle;
	status = GetDriverInterface(Vi, &spCursorXYRectangle);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYRectangle->get_YUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA5 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRatio> spCursorXYRatio;
	status = GetDriverInterface(Vi, &spCursorXYRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRatio->get_Delta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION9 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRatio> spCursorXYRatio;
	status = GetDriverInterface(Vi, &spCursorXYRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRatio->get_Position1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION10 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRatio> spCursorXYRatio;
	status = GetDriverInterface(Vi, &spCursorXYRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYRatio->get_Position2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYRatio> spCursorXYRatio;
	status = GetDriverInterface(Vi, &spCursorXYRatio);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYRatio->get_Units(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA6 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYProduct> spCursorXYProduct;
	status = GetDriverInterface(Vi, &spCursorXYProduct);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYProduct->get_Delta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION11 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYProduct> spCursorXYProduct;
	status = GetDriverInterface(Vi, &spCursorXYProduct);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYProduct->get_Position1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION102 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYProduct> spCursorXYProduct;
	status = GetDriverInterface(Vi, &spCursorXYProduct);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYProduct->get_Position2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYProduct> spCursorXYProduct;
	status = GetDriverInterface(Vi, &spCursorXYProduct);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYProduct->get_Units(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA7 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_ThetaDelta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION12 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_ThetaPosition1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION103 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_ThetaPosition2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_ThetaUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA8 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_Delta(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION13 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_Position1(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION104 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_Position2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kCursorXYPolarCoordinates> spCursorXYPolarCoordinates;
	status = GetDriverInterface(Vi, &spCursorXYPolarCoordinates);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spCursorXYPolarCoordinates->get_Units(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_ClockState((Tkdpo2k3k4kDisplayClockStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_ClockState((Tkdpo2k3k4kDisplayClockStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BACK_LIGHT_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_BackLightIntensity((Tkdpo2k3k4kDisplayBackLightIntensityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BACK_LIGHT_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_BackLightIntensity((Tkdpo2k3k4kDisplayBackLightIntensityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_Format((Tkdpo2k3k4kDisplayDisplayFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_Format((Tkdpo2k3k4kDisplayDisplayFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GRATICULE_STYLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_GraticuleStyle((Tkdpo2k3k4kDisplayGraticuleEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GRATICULE_STYLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_GraticuleStyle((Tkdpo2k3k4kDisplayGraticuleEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PERSISTENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spDisplay->get_Persistence(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PERSISTENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDisplay->put_Persistence(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PERSISTENCE_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_PersistenceEnum((Tkdpo2k3k4kDisplayPersistenceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WAVEFORM_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_WaveformIntensity(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WAVEFORM_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_WaveformIntensity(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GRATICULE_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_GraticuleIntensity(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GRATICULE_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_GraticuleIntensity(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DOTS_ONLY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDisplay->get_DotsOnly(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DOTS_ONLY ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDisplay->put_DotsOnly(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_MESSAGE_BOX ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDisplay->get_DisplayMessageBox(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_MESSAGE_BOX ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDisplay->put_DisplayMessageBox(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_CAPTURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spDisplay->get_GlitchCaptureState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_CAPTURE_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spDisplay->put_GlitchCaptureState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GLITCH_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDisplay->get_GlitchIntensity(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GLITCH_INTENSITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDisplay> spDisplay;
	status = GetDriverInterface(Vi, &spDisplay);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDisplay->put_GlitchIntensity(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHardCopy> spHardCopy;
	status = GetDriverInterface(Vi, &spHardCopy);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHardCopy->get_Layout((Tkdpo2k3k4kPrintLayoutEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHardCopy> spHardCopy;
	status = GetDriverInterface(Vi, &spHardCopy);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHardCopy->put_Layout((Tkdpo2k3k4kPrintLayoutEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INK_SAVER ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHardCopy> spHardCopy;
	status = GetDriverInterface(Vi, &spHardCopy);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spHardCopy->get_InkSaver(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INK_SAVER ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHardCopy> spHardCopy;
	status = GetDriverInterface(Vi, &spHardCopy);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spHardCopy->put_InkSaver(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spHistogram->get_Data(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHistogram->get_Display((Tkdpo2k3k4kHistogramDisplayEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHistogram->put_Display((Tkdpo2k3k4kHistogramDisplayEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHistogram->get_Mode((Tkdpo2k3k4kHistogramModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHistogram->put_Mode((Tkdpo2k3k4kHistogramModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHistogram->get_Source((Tkdpo2k3k4kSource1Enum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHistogram> spHistogram;
	status = GetDriverInterface(Vi, &spHistogram);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHistogram->put_Source((Tkdpo2k3k4kSource1Enum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spHorizontal->get_DelayMode(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_DelayMode(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_DelayTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_DelayTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAIN_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_DigitalMainRecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_DigitalMagniVuRecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAIN_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_DigitalMainSampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITAL_MAGNI_VU_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_DigitalMagniVuSampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_Scale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_Scale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION14 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION14 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHorizontal->get_Resolution(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_Resolution(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHorizontal->get_RecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RECORD_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_RecordLength(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spHorizontal->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_SampleRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spHorizontal->get_TriggerPosition(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kHorizontal> spHorizontal;
	status = GetDriverInterface(Vi, &spHorizontal);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spHorizontal->put_TriggerPosition(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MATH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMaths> spMaths;
	status = GetDriverInterface(Vi, &spMaths);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMaths->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spMath->get_DisplayState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spMath->put_DisplayState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_EXPRESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spMath->get_Expression(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_EXPRESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spMath->put_Expression(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spMath->get_Label(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spMath->put_Label(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_HorizontalPosition(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_HorizontalPosition(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_HorizontalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_HorizontalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spMath->get_HorizontalUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_VerticalPosition(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_VerticalPosition(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMath->get_VerticalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMath->put_VerticalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spMath->get_VerticalUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMath);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMath->get_Type((Tkdpo2k3k4kMathTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMath> rgMath;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMath);
	for (size_t i = 0; i < rgMath.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMath> spMath(rgMath[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMath->put_Type((Tkdpo2k3k4kMathTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_GATING_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spMathSpectral->get_DisplayGatingIndicators(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_GATING_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMathSpectral);
	for (size_t i = 0; i < rgMathSpectral.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spMathSpectral->put_DisplayGatingIndicators(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WINDOW ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMathSpectral->get_Window((Tkdpo2k3k4kSpectralWindowEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WINDOW ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMathSpectral);
	for (size_t i = 0; i < rgMathSpectral.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMathSpectral->put_Window((Tkdpo2k3k4kSpectralWindowEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAGNITUDE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, false, rgMathSpectral);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMathSpectral->get_MagnitudeUnits((Tkdpo2k3k4kSpectralMagUnitEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MAGNITUDE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMathSpectral> rgMathSpectral;
	status = GetMathInterfaces(Vi, RepCapIdentifier, true, rgMathSpectral);
	for (size_t i = 0; i < rgMathSpectral.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMathSpectral> spMathSpectral(rgMathSpectral[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMathSpectral->put_MagnitudeUnits((Tkdpo2k3k4kSpectralMagUnitEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEASUREMENTSLOT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurements->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_DIRECTION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_DelayDirection((Tkdpo2k3k4kMeasurementDelayDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_DIRECTION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_DelayDirection((Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_DelayEdge1((Tkdpo2k3k4kMeasurementEdgeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_DelayEdge1((Tkdpo2k3k4kMeasurementEdgeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_DelayEdge2((Tkdpo2k3k4kMeasurementEdgeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_DelayEdge2((Tkdpo2k3k4kMeasurementEdgeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAXIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_Maximum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_Mean(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MINIMUM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_Minimum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_Source1((Tkdpo2k3k4kSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_Source1((Tkdpo2k3k4kSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_Source2((Tkdpo2k3k4kSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_Source2((Tkdpo2k3k4kSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_StandardDeviation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spMeasurementSlot->get_State(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_State(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementSlot->get_Type((Tkdpo2k3k4kMeasurementTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, true, rgMeasurementSlot);
	for (size_t i = 0; i < rgMeasurementSlot.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementSlot->put_Type((Tkdpo2k3k4kMeasurementTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spMeasurementSlot->get_Units(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kMeasurementSlot> rgMeasurementSlot;
	status = GetMeasurementSlotInterfaces(Vi, RepCapIdentifier, false, rgMeasurementSlot);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kMeasurementSlot> spMeasurementSlot(rgMeasurementSlot[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementSlot->get_Value(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spMeasurements->get_StatisticsMode(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spMeasurements->put_StatisticsMode(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_WEIGHTING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurements->get_StatisticsWeighting(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_WEIGHTING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurements->put_StatisticsWeighting(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurements->get_Gating((Tkdpo2k3k4kMeasurementGatingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurements> spMeasurements;
	status = GetDriverInterface(Vi, &spMeasurements);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurements->put_Gating((Tkdpo2k3k4kMeasurementGatingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementsIndicators->get_State((Tkdpo2k3k4kMeasurementIndicatorStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementsIndicators->put_State((Tkdpo2k3k4kMeasurementIndicatorStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementsIndicators->get_HorizontalIndicators(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_INDICATORS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsIndicators> spMeasurementsIndicators;
	status = GetDriverInterface(Vi, &spMeasurementsIndicators);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementsIndicators->get_VerticalIndicators(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementsFrequency->get_Type((Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementsFrequency> spMeasurementsFrequency;
	status = GetDriverInterface(Vi, &spMeasurementsFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementsFrequency->put_Type((Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAVE_BUTTON_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSaveRecall->get_SaveButtonType((Tkdpo2k3k4kSaveButtonTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAVE_BUTTON_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_SaveButtonType((Tkdpo2k3k4kSaveButtonTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMAGE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSaveRecall->get_ImageFormat((Tkdpo2k3k4kImageFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMAGE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_ImageFormat((Tkdpo2k3k4kImageFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMAGE_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSaveRecall->get_ImageLayout((Tkdpo2k3k4kImageLayoutEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMAGE_LAYOUT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_ImageLayout((Tkdpo2k3k4kImageLayoutEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INK_SAVER_PALETTE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spSaveRecall->get_InkSaverPalette(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INK_SAVER_PALETTE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_InkSaverPalette(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WAVEFORM_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSaveRecall->get_WaveformGating((Tkdpo2k3k4kMeasurementGatingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WAVEFORM_GATING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_WaveformGating((Tkdpo2k3k4kMeasurementGatingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SAVE_WAVE_FORM_FILE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSaveRecall->get_SaveWaveFormFileFormat((Tkdpo2k3k4kSaveWaveformFileFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SAVE_WAVE_FORM_FILE_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSaveRecall> spSaveRecall;
	status = GetDriverInterface(Vi, &spSaveRecall);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSaveRecall->put_SaveWaveFormFileFormat((Tkdpo2k3k4kSaveWaveformFileFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SEARCH_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kSearches> spSearches;
	status = GetDriverInterface(Vi, &spSearches);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spSearches->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SEARCH_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spSearch->get_SearchType((Tkdpo2k3k4kSearchTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SEARCH_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSearch->put_SearchType((Tkdpo2k3k4kSearchTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spSearch->get_State((Tkdpo2k3k4kSearchStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, true, rgSearch);
	for (size_t i = 0; i < rgSearch.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSearch->put_State((Tkdpo2k3k4kSearchStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TOTAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearch> rgSearch;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, false, rgSearch);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearch> spSearch(rgSearch[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spSearch->get_Total(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBus> rgSearchBus;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, false, rgSearchBus);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kSearchBus> spSearchBus(rgSearchBus[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spSearchBus->get_BusSource((Tkdpo2k3k4kTrigABusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kSearchBus> rgSearchBus;
	status = GetSearchInterfaces(Vi, RepCapIdentifier, true, rgSearchBus);
	for (size_t i = 0; i < rgSearchBus.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kSearchBus> spSearchBus(rgSearchBus[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spSearchBus->put_BusSource((Tkdpo2k3k4kTrigABusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_B_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spTrigger->get_BState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_B_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spTrigger->put_BState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_B_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_BDelayTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_B_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_BDelayTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CURRENT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spTrigger->get_CurrentState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_EVENT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_EventCount(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_EVENT_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_EventCount(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGERB_BY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_TriggerBBy((Tkdpo2k3k4kTriggerBByEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGERB_BY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_TriggerBBy((Tkdpo2k3k4kTriggerBByEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_Frequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_ATTENUATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_ProbeAttenuation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_ATTENUATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_ProbeAttenuation(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNIT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spTrigger->get_VerticalUnitValue(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_A_HOLDOFF_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_AHoldoffTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_A_HOLDOFF_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_AHoldoffTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Mode((Tkdpo2k3k4kTriggerModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Mode((Tkdpo2k3k4kTriggerModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_Type((Tkdpo2k3k4kTriggerTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_Type((Tkdpo2k3k4kTriggerTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABus->get_BusSource((Tkdpo2k3k4kTrigABusSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerABus->put_BusSource((Tkdpo2k3k4kTrigABusSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BUS_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerABus->get_BusType((Tkdpo2k3k4kTriggerBusTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BUS_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerABus> spTriggerABus;
	status = GetDriverInterface(Vi, &spTriggerABus);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerABus->put_BusType((Tkdpo2k3k4kTriggerBusTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAEdge->get_Source((Tkdpo2k3k4kTriggerSource2Enum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAEdge->put_Source((Tkdpo2k3k4kTriggerSource2Enum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAEdge->get_Coupling((Tkdpo2k3k4kTriggerEdgeCouplingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAEdge->put_Coupling((Tkdpo2k3k4kTriggerEdgeCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAEdge->get_Level(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAEdge->put_Level(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAEdge->put_LevelEnum((Tkdpo2k3k4kTriggerLevelEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAEdge->get_Slope((Tkdpo2k3k4kTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAEdge> spTriggerAEdge;
	status = GetDriverInterface(Vi, &spTriggerAEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAEdge->put_Slope((Tkdpo2k3k4kTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerALogic->get_Condition((Tkdpo2k3k4kTriggerPatternConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerALogic->put_Condition((Tkdpo2k3k4kTriggerPatternConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LESS_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerALogic->get_LessLimit(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LESS_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerALogic->put_LessLimit(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MORE_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerALogic->get_MoreLimit(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MORE_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerALogic->put_MoreLimit(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerALogic->get_Function((Tkdpo2k3k4kTriggerLogicOperatorTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerALogic> spTriggerALogic;
	status = GetDriverInterface(Vi, &spTriggerALogic);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerALogic->put_Function((Tkdpo2k3k4kTriggerLogicOperatorTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAWidth->get_Source((Tkdpo2k3k4kTiggerPulseSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_Source((Tkdpo2k3k4kTiggerPulseSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAWidth->get_Condition((Tkdpo2k3k4kTriggerPulseWidthConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_Condition((Tkdpo2k3k4kTriggerPulseWidthConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAWidth->get_Polarity((Tkdpo2k3k4kTriggerPulsePolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_Polarity((Tkdpo2k3k4kTriggerPulsePolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAWidth->get_Width(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_Width(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UPPER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAWidth->get_UpperLimit(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_UPPER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_UpperLimit(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOWER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAWidth->get_LowerLimit(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LOWER_LIMIT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAWidth> spTriggerAWidth;
	status = GetDriverInterface(Vi, &spTriggerAWidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAWidth->put_LowerLimit(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerARunt->get_Polarity((Tkdpo2k3k4kTriggerRuntPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_Polarity((Tkdpo2k3k4kTriggerRuntPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerARunt->get_Source((Tkdpo2k3k4kChannelChannelEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_Source((Tkdpo2k3k4kChannelChannelEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerARunt->get_Condition((Tkdpo2k3k4kTriggerRuntConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_Condition((Tkdpo2k3k4kTriggerRuntConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WIDTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerARunt->get_Width(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WIDTH2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_Width(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LOWER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerARunt->get_LowerLevel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LOWER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_LowerLevel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UPPER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerARunt->get_UpperLevel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_UPPER_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerARunt> spTriggerARunt;
	status = GetDriverInterface(Vi, &spTriggerARunt);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerARunt->put_UpperLevel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerASetupHold->get_DataSource((Tkdpo2k3k4kTriggerSource2Enum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_DataSource((Tkdpo2k3k4kTriggerSource2Enum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerASetupHold->get_DataLevel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_DataLevel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerASetupHold->get_ClockSource((Tkdpo2k3k4kTriggerSource2Enum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_ClockSource((Tkdpo2k3k4kTriggerSource2Enum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerASetupHold->get_ClockEdge((Tkdpo2k3k4kTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_EDGE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_ClockEdge((Tkdpo2k3k4kTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CLOCK_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerASetupHold->get_ClockLevel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CLOCK_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_ClockLevel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HOLD_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerASetupHold->get_HoldTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HOLD_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_HoldTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SET_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerASetupHold->get_SetTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SET_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerASetupHold> spTriggerASetupHold;
	status = GetDriverInterface(Vi, &spTriggerASetupHold);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerASetupHold->put_SetTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerATransition->get_Source((Tkdpo2k3k4kChannelEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerATransition->put_Source((Tkdpo2k3k4kChannelEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELTA_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerATransition->get_DeltaTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELTA_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerATransition->put_DeltaTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerATransition->get_Condition((Tkdpo2k3k4kTriggerTransitionConditionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDITION4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerATransition->put_Condition((Tkdpo2k3k4kTriggerTransitionConditionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerATransition->get_Polarity((Tkdpo2k3k4kTriggerRuntPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerATransition> spTriggerATransition;
	status = GetDriverInterface(Vi, &spTriggerATransition);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerATransition->put_Polarity((Tkdpo2k3k4kTriggerRuntPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FIELD_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAVideo->get_FieldHoldoff(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FIELD_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_FieldHoldoff(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POLARITY4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_Polarity((Tkdpo2k3k4kTriggerVideoPolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POLARITY4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_Polarity((Tkdpo2k3k4kTriggerVideoPolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_Source((Tkdpo2k3k4kTriggerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE6 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_Source((Tkdpo2k3k4kTriggerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_Standard((Tkdpo2k3k4kTriggerVideoStandardEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STANDARD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_Standard((Tkdpo2k3k4kTriggerVideoStandardEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRIGGER_ON ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_TriggerOn((Tkdpo2k3k4kTriggerVideoFieldsEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TRIGGER_ON ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_TriggerOn((Tkdpo2k3k4kTriggerVideoFieldsEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_LINE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAVideo->get_CustomLinePeriod(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_LINE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_CustomLinePeriod(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_SCAN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_CustomScan((Tkdpo2k3k4kTriggerVideoCustomScanEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_SCAN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_CustomScan((Tkdpo2k3k4kTriggerVideoCustomScanEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_SYNC_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerAVideo->get_CustomSyncInterval(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_SYNC_INTERVAL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_CustomSyncInterval(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CUSTOM_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_CustomFormat((Tkdpo2k3k4kTriggerVideoCustomFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CUSTOM_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_CustomFormat((Tkdpo2k3k4kTriggerVideoCustomFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HD_TV_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerAVideo->get_HDTvFormat((Tkdpo2k3k4kTriggerVideoHDTvFormatEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HD_TV_FORMAT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerAVideo> spTriggerAVideo;
	status = GetDriverInterface(Vi, &spTriggerAVideo);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerAVideo->put_HDTvFormat((Tkdpo2k3k4kTriggerVideoHDTvFormatEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerBEdge->get_Coupling((Tkdpo2k3k4kTriggerEdgeCouplingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerBEdge->put_Coupling((Tkdpo2k3k4kTriggerEdgeCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LEVEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTriggerBEdge->get_Level(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTriggerBEdge->put_Level(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LEVEL_ENUM2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerBEdge->put_LevelEnum((Tkdpo2k3k4kTriggerLevelEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerBEdge->get_Source((Tkdpo2k3k4kTriggerSource2Enum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerBEdge->put_Source((Tkdpo2k3k4kTriggerSource2Enum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SLOPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTriggerBEdge->get_Slope((Tkdpo2k3k4kTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SLOPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kTriggerBEdge> spTriggerBEdge;
	status = GetDriverInterface(Vi, &spTriggerBEdge);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTriggerBEdge->put_Slope((Tkdpo2k3k4kTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spChannels->get_AUXInProbeGain(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spChannels->get_AUXInProbeResistance(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_SERIAL_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spChannels->get_AUXInProbeSerialNumber(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spChannels->get_AUXInProbeType(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_PROBE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spChannels->get_AUXInProbeUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spChannels->get_AUXInTekVPIProbeDegaussState((Tkdpo2k3k4kProbeDegaussStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AUX_IN_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spChannels->get_AUXInTekVPIProbeRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_AUX_IN_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kChannels> spChannels;
	status = GetDriverInterface(Vi, &spChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannels->put_AUXInTekVPIProbeRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spChannel->get_AmpsViaVoltsState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spChannel->put_AmpsViaVoltsState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AMPS_VIA_VOLTS_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_AmpsViaVoltsFactor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_AMPS_VIA_VOLTS_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_AmpsViaVoltsFactor(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_Impedance(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spChannel->put_Impedance(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SENSITIVITY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_VerticalSensitivity(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SENSITIVITY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_VerticalSensitivity(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_YUNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_Yunits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_YUNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spChannel->put_Yunits(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TEKVPI_PROBE_DEGAUSS_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_TekVPIProbeDegaussState((Tkdpo2k3k4kProbeDegaussStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_TekVPIProbeRange(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TEKVPI_PROBE_RANGE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_TekVPIProbeRange(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TERMINATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Termination(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_BANDWIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Bandwidth(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BANDWIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Bandwidth(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_BANDWIDTH_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_BandwidthEnum((Tkdpo2k3k4kChannelBandwidthEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_COUPLING3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_Coupling((Tkdpo2k3k4kChannelCouplingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_COUPLING3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_Coupling((Tkdpo2k3k4kChannelCouplingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DESKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Deskew(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DESKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Deskew(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spChannel->get_DisplayState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spChannel->put_DisplayState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_LabelName(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spChannel->put_LabelName(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Offset(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Offset(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION17 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION17 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_ProbeGain(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_RESISTANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_ProbeResistance(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SERIAL_NUMBER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_ProbeSerialNumber(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_SIGNAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_ProbeSignal((Tkdpo2k3k4kChannelProbeSignalEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PROBE_SIGNAL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_ProbeSignal((Tkdpo2k3k4kChannelProbeSignalEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_ProbeType(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PROBE_UNITS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spChannel->get_ProbeUnits(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TERMINATION_ENUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_TerminationEnum((Tkdpo2k3k4kChannelTerminationEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spChannel->get_VerticalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spChannel->put_VerticalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INVERT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, false, rgChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[0]);
		CParam<ViBoolean> _val;
		HRESULT hr = spChannel->get_InvertState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INVERT_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kChannel> rgChannel;
	status = GetChannelInterfaces(Vi, RepCapIdentifier, true, rgChannel);
	for (size_t i = 0; i < rgChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kChannel> spChannel(rgChannel[i]);
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spChannel->put_InvertState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kReferences> spReferences;
	status = GetDriverInterface(Vi, &spReferences);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spReferences->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spReference->get_HorizontalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReference->put_HorizontalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION15 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spReference->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION15 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReference->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spReference->get_VerticalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReference->put_VerticalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_HORIZONTAL_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spReference->get_HorizontalDelayTime(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_HORIZONTAL_DELAY_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spReference->put_HorizontalDelayTime(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL3 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, false, rgReference);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spReference->get_Label(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL3 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kReference> rgReference;
	status = GetReferenceInterfaces(Vi, RepCapIdentifier, true, rgReference);
	for (size_t i = 0; i < rgReference.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kReference> spReference(rgReference[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spReference->put_Label(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DIGITALCHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kDigitalChannels> spDigitalChannels;
	status = GetDriverInterface(Vi, &spDigitalChannels);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDigitalChannels->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_LABEL4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, false, rgDigitalChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[0]);
		CParam<ViChar[]> _val;
		HRESULT hr = spDigitalChannel->get_Label(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_LABEL4 ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, true, rgDigitalChannel);
	for (size_t i = 0; i < rgDigitalChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[i]);
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spDigitalChannel->put_Label(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION18 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, false, rgDigitalChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spDigitalChannel->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION18 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, true, rgDigitalChannel);
	for (size_t i = 0; i < rgDigitalChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDigitalChannel->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, false, rgDigitalChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[0]);
		CParam<ViInt32> _val;
		HRESULT hr = spDigitalChannel->get_State((Tkdpo2k3k4kDigitalChannelStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE5 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, true, rgDigitalChannel);
	for (size_t i = 0; i < rgDigitalChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[i]);
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDigitalChannel->put_State((Tkdpo2k3k4kDigitalChannelStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, false, rgDigitalChannel);
	if (status == VI_SUCCESS)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[0]);
		CParam<ViReal64> _val;
		HRESULT hr = spDigitalChannel->get_Threshold(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CInterfaceArray<ITkdpo2k3k4kDigitalChannel> rgDigitalChannel;
	status = GetDigitalChannelInterfaces(Vi, RepCapIdentifier, true, rgDigitalChannel);
	for (size_t i = 0; i < rgDigitalChannel.GetCount() && status == VI_SUCCESS; i++)
	{
		CComPtr<ITkdpo2k3k4kDigitalChannel> spDigitalChannel(rgDigitalChannel[i]);
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spDigitalChannel->put_Threshold(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MODE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spZoom->get_Mode(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MODE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spZoom->put_Mode(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POSITION16 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spZoom->get_Position(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_POSITION16 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spZoom->put_Position(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spZoom->get_Scale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SCALE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spZoom->put_Scale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spZoom->get_State(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spZoom->put_State(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kZoom> spZoom;
	status = GetDriverInterface(Vi, &spZoom);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spZoom->get_Factor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataSource((Tkdpo2k3k4kDataSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_SOURCE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataSource((Tkdpo2k3k4kDataSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataStart(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataStart(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataStop(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataStop(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataWidth(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataWidth(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RECORD_LENGTH3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spWaveformTransfer->get_WaveformRecordLength(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_COMPOSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataComposition((Tkdpo2k3k4kDataCompositionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_COMPOSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataComposition((Tkdpo2k3k4kDataCompositionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DATA_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spWaveformTransfer->get_DataResolution((Tkdpo2k3k4kDataResolutionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DATA_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_DataResolution((Tkdpo2k3k4kDataResolutionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FILLTER_VU_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spWaveformTransfer->get_FillterVuFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FILLTER_VU_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kWaveformTransfer> spWaveformTransfer;
	status = GetDriverInterface(Vi, &spWaveformTransfer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spWaveformTransfer->put_FillterVuFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IO_SESSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kInstrumentIO> spInstrumentIO;
	status = GetDriverInterface(Vi, &spInstrumentIO);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spInstrumentIO->get_IOSession(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TOTAL_MARKS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_TotalMarks(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREE_MARKS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_FreeMarks(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_END ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedEnd(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_FOCUS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedFocus(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_LABEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spMark->get_SelectedLabel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_MARKS_IN_COLUMN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedMarksInColumn(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_OWNER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spMark->get_SelectedOwner(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedPosition(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedSource((Tkdpo2k3k4kSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_START ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMark->get_SelectedStart(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SELECTED_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMark> spMark;
	status = GetDriverInterface(Vi, &spMark);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spMark->get_SelectedState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_DelayDirection((Tkdpo2k3k4kMeasurementDelayDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_DelayDirection((Tkdpo2k3k4kMeasurementDelayDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_DelayEdge1((Tkdpo2k3k4kMeasurementEdgeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_DelayEdge1((Tkdpo2k3k4kMeasurementEdgeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DELAY_EDGE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_DelayEdge2((Tkdpo2k3k4kMeasurementEdgeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DELAY_EDGE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_DelayEdge2((Tkdpo2k3k4kMeasurementEdgeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelAbsoluteHigh(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelAbsoluteHigh(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelAbsoluteLow(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelAbsoluteLow(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelAbsoluteMid(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelAbsoluteMid(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_ABSOLUTE_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelAbsoluteMid2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_ABSOLUTE_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelAbsoluteMid2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_METHOD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelMethod((Tkdpo2k3k4kMeasurementMethodEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_METHOD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelMethod((Tkdpo2k3k4kMeasurementMethodEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelPercentHigh(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelPercentHigh(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelPercentLow(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_LOW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelPercentLow(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelPercentMid(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelPercentMid(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_PERCENT_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelPercentMid2(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_PERCENT_MID2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelPercentMid2(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL_UNIT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_ReferenceLevelUnit((Tkdpo2k3k4kMeasurementUnitEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL_UNIT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_ReferenceLevelUnit((Tkdpo2k3k4kMeasurementUnitEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_Source1((Tkdpo2k3k4kSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE1 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_Source1((Tkdpo2k3k4kSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_Source2((Tkdpo2k3k4kSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_Source2((Tkdpo2k3k4kSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spMeasurementImmediate->get_Type((Tkdpo2k3k4kMeasurementTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spMeasurementImmediate->put_Type((Tkdpo2k3k4kMeasurementTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_UNITS9 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spMeasurementImmediate->get_Units(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kMeasurementImmediate> spMeasurementImmediate;
	status = GetDriverInterface(Vi, &spMeasurementImmediate);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spMeasurementImmediate->get_Value(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FRONT_PANEL_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kUtilityEx> spUtilityEx;
	status = GetDriverInterface(Vi, &spUtilityEx);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spUtilityEx->get_FrontPanelLock((Tkdpo2k3k4kUtilityExFrontPanelLockEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FRONT_PANEL_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kUtilityEx> spUtilityEx;
	status = GetDriverInterface(Vi, &spUtilityEx);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spUtilityEx->put_FrontPanelLock((Tkdpo2k3k4kUtilityExFrontPanelLockEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_Type((Tkdpo2k3k4kPowerTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE7 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_Type((Tkdpo2k3k4kPowerTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VOLTAGE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_VoltageSource((Tkdpo2k3k4kPowerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VOLTAGE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_VoltageSource((Tkdpo2k3k4kPowerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CURRENT_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_CurrentSource((Tkdpo2k3k4kPowerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CURRENT_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_CurrentSource((Tkdpo2k3k4kPowerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spPowerAnalysis->get_DisplayState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_STATE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_DisplayState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_INDICATOR ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spPowerAnalysis->get_Indicator(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_INDICATOR ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_Indicator(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_GateSource((Tkdpo2k3k4kPowerGateSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_GateSource((Tkdpo2k3k4kPowerGateSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_GATING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_Gating((Tkdpo2k3k4kPowerGatingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_GATING2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_Gating((Tkdpo2k3k4kPowerGatingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_StatisticsMode((Tkdpo2k3k4kPowerStatisticsModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_StatisticsMode((Tkdpo2k3k4kPowerStatisticsModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STATISTICS_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysis->get_StatisticsSamples(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STATISTICS_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysis> spPowerAnalysis;
	status = GetDriverInterface(Vi, &spPowerAnalysis);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysis->put_StatisticsSamples(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisQuality->get_FrequencyReference((Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_FREQUENCY_REFERENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisQuality->put_FrequencyReference((Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_ALL_MEAS_DISPLAY_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisQuality->put_AllMeasDisplayState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_APPARENT_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_ApparentPower(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_FREQUENCY2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_Frequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_I_CREST_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_ICrestFactor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PHASE_ANGLE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_PhaseAngle(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_POWER_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_PowerFactor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REACTIVE_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_ReactivePower(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TRUE_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_TruePower(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VRMS ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_VRMS(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IRMS ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_IRMS(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_V_CREST_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisQuality> spPowerAnalysisQuality;
	status = GetDriverInterface(Vi, &spPowerAnalysisQuality);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisQuality->get_VCrestFactor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CONDUCTION_CALCULATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_ConductionCalculation((Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CONDUCTION_CALCULATION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_ConductionCalculation((Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RDS_ON_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_RDSOnValue(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RDS_ON_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_RDSOnValue(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VCE_SAT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_VCESatValue(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VCE_SAT_VALUE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_VCESatValue(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAS_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_MeasDisplayType((Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MEAS_DISPLAY_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSwitchingLoss->put_MeasDisplayType((Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_CYCLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSwitchingLoss> spPowerAnalysisSwitchingLoss;
	status = GetDriverInterface(Vi, &spPowerAnalysisSwitchingLoss);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSwitchingLoss->get_NumberOfCycles(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_Standard((Tkdpo2k3k4kPowerHarmonicsStandardEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STANDARD2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisHarmonics->put_Standard((Tkdpo2k3k4kPowerHarmonicsStandardEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_SET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_DisplaySet((Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_SET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisHarmonics->put_DisplaySet((Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DISPLAY_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_DisplayType((Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DISPLAY_TYPE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisHarmonics->put_DisplayType((Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_OVERALL_RESULTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_OverallResults((Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RMS_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_RMSResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THDF_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_THDFResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_THDR_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_THDRResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_FUNDAMENTAL_CURRENT_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECFundamentalCurrentResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_HARMONIC3_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECHarmonic3Result((Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_HARMONIC5_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECHarmonic5Result((Tkdpo2k3k4kPowerHamronicsPassFailEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IECPOHC_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECPOHCResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IECPOHL_RESULT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECPOHLResult(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_INPUT_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECInputPower(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_IEC_POWER_FACTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisHarmonics> spPowerAnalysisHarmonics;
	status = GetDriverInterface(Vi, &spPowerAnalysisHarmonics);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisHarmonics->get_IECPowerFactor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE11 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisRipple->get_Source((Tkdpo2k3k4kPowerRippleSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE11 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisRipple->put_Source((Tkdpo2k3k4kPowerRippleSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VALUE3 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisRipple->get_Value(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisRipple->get_Max(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MEAN2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisRipple->get_Mean(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisRipple->get_Min(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STANDARD_DEVIATION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisRipple> spPowerAnalysisRipple;
	status = GetDriverInterface(Vi, &spPowerAnalysisRipple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spPowerAnalysisRipple->get_StandardDeviation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SOURCE12 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisModulation> spPowerAnalysisModulation;
	status = GetDriverInterface(Vi, &spPowerAnalysisModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisModulation->get_Source((Tkdpo2k3k4kPowerModulationSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SOURCE12 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisModulation> spPowerAnalysisModulation;
	status = GetDriverInterface(Vi, &spPowerAnalysisModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisModulation->put_Source((Tkdpo2k3k4kPowerModulationSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisModulation> spPowerAnalysisModulation;
	status = GetDriverInterface(Vi, &spPowerAnalysisModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisModulation->get_Type((Tkdpo2k3k4kPowerModulationTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE8 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisModulation> spPowerAnalysisModulation;
	status = GetDriverInterface(Vi, &spPowerAnalysisModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisModulation->put_Type((Tkdpo2k3k4kPowerModulationTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_POINTS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_NumberOfPoints(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_PLOT_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_PlotType((Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_PLOT_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->put_PlotType((Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_ACTION_ON_VIOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_ActionOnViolation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_ACTION_ON_VIOLATION ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->put_ActionOnViolation(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MASK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_MaskState((Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MASK_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spPowerAnalysisSafeOperatingArea->put_MaskState((Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_FAILURE_SAMPLES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_ResultFailureSamples(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_WAVEFORMS_ACQUIRED ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_ResultWaveformsAcquired(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RESULT_TEST_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kPowerAnalysisSafeOperatingArea> spPowerAnalysisSafeOperatingArea;
	status = GetDriverInterface(Vi, &spPowerAnalysisSafeOperatingArea);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spPowerAnalysisSafeOperatingArea->get_ResultTestState((Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SQUELCH_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequency->get_SquelchState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SQUELCH_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spFrequency->put_SquelchState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SQUELCH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequency->get_SquelchThreshold(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SQUELCH_THRESHOLD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequency->put_SquelchThreshold(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_NUMBER_OF_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequency->get_NumberOfAverages(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_NUMBER_OF_AVERAGES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequency->put_NumberOfAverages(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_AVERAGE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequency> spFrequency;
	status = GetDriverInterface(Vi, &spFrequency);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequency->get_AverageCount(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequencyRF->get_SpectogramState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTOGRAM_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spFrequencyRF->put_SpectogramState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_NUMBER_OF_SLICES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRF->get_SpectogramNumberOfSlices(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTOGRAM_SELECT_SLICE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRF->get_SpectogramSelectSlice(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTOGRAM_SELECT_SLICE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRF->put_SpectogramSelectSlice(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_DETECTION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRF->get_DetectionMode((Tkdpo2k3k4kFrequencyRFDetectionModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_DETECTION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRF->put_DetectionMode((Tkdpo2k3k4kFrequencyRFDetectionModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPECTRUM_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRF->get_SpectrumMode((Tkdpo2k3k4kFrequencySpectrumModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPECTRUM_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRF> spFrequencyRF;
	status = GetDriverInterface(Vi, &spFrequencyRF);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRF->put_SpectrumMode((Tkdpo2k3k4kFrequencySpectrumModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_CENTER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFFrequencyAndSpan->get_CenterFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_CENTER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFFrequencyAndSpan->put_CenterFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFFrequencyAndSpan->get_Span(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPAN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFFrequencyAndSpan->put_Span(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFFrequencyAndSpan->get_Start(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFFrequencyAndSpan->put_Start(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFFrequencyAndSpan->get_Stop(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFFrequencyAndSpan> spFrequencyRFFrequencyAndSpan;
	status = GetDriverInterface(Vi, &spFrequencyRFFrequencyAndSpan);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFFrequencyAndSpan->put_Stop(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_REFERENCE_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFAmplitude->get_ReferenceLevel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_REFERENCE_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFAmplitude->put_ReferenceLevel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFAmplitude->get_VerticalPosition(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_POSITION2 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFAmplitude->put_VerticalPosition(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_SCALE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFAmplitude->get_VerticalScale(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_SCALE4 ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFAmplitude->put_VerticalScale(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_VERTICAL_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRFAmplitude->get_VerticalUnits((Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_VERTICAL_UNITS2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFAmplitude> spFrequencyRFAmplitude;
	status = GetDriverInterface(Vi, &spFrequencyRFAmplitude);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRFAmplitude->put_VerticalUnits((Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RBW_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRFBandwidth->get_RBWMode((Tkdpo2k3k4kFrequencyRBWModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RBW_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRFBandwidth->put_RBWMode((Tkdpo2k3k4kFrequencyRBWModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_RBW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFBandwidth->get_RBW(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_RBW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFBandwidth->put_RBW(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_SPANRBW_RATIO ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFrequencyRFBandwidth->get_SpanRBWRatio(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_SPANRBW_RATIO ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFrequencyRFBandwidth->put_SpanRBWRatio(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_WINDOW2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyRFBandwidth->get_Window((Tkdpo2k3k4kFrequencyRFWindowEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_WINDOW2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyRFBandwidth> spFrequencyRFBandwidth;
	status = GetDriverInterface(Vi, &spFrequencyRFBandwidth);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyRFBandwidth->put_Window((Tkdpo2k3k4kFrequencyRFWindowEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_MANUAL_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spFrequencyMarker->get_ManualState(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_MANUAL_STATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spFrequencyMarker->put_ManualState(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_get_TYPE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, TKDPO2K3K4K_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFrequencyMarker->get_Type((Tkdpo2k3k4kFrequencyRFMarkerTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC Tkdpo2k3k4k_set_TYPE10 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<ITkdpo2k3k4kFrequencyMarker> spFrequencyMarker;
	status = GetDriverInterface(Vi, &spFrequencyMarker);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFrequencyMarker->put_Type((Tkdpo2k3k4kFrequencyRFMarkerTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}


