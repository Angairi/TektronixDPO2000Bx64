/******************************************************************************
 *                                                                         
 * Copyright 2011 Tektronix. All rights reserved.
 *
 *****************************************************************************/

#ifndef __TKDPO2K3K4K_HEADER
#define __TKDPO2K3K4K_HEADER

#include <IviVisaType.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/
#ifndef IVI_ATTR_BASE
#define IVI_ATTR_BASE                 1000000
#endif

#ifndef IVI_INHERENT_ATTR_BASE		        
#define IVI_INHERENT_ATTR_BASE        (IVI_ATTR_BASE +  50000)   /* base for inherent capability attributes */
#endif

#ifndef IVI_CLASS_ATTR_BASE           
#define IVI_CLASS_ATTR_BASE           (IVI_ATTR_BASE + 250000)   /* base for IVI-defined class attributes */
#endif

#ifndef IVI_LXISYNC_ATTR_BASE         
#define IVI_LXISYNC_ATTR_BASE         (IVI_ATTR_BASE + 950000)   /* base for IviLxiSync attributes */
#endif

#ifndef IVI_SPECIFIC_ATTR_BASE        
#define IVI_SPECIFIC_ATTR_BASE        (IVI_ATTR_BASE + 150000)   /* base for attributes of specific drivers */
#endif


/*===== IVI Inherent Instrument Attributes ==============================*/    

/*- Driver Identification */

#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_DESCRIPTION              (IVI_INHERENT_ATTR_BASE + 514L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_PREFIX                   (IVI_INHERENT_ATTR_BASE + 302L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_VENDOR                   (IVI_INHERENT_ATTR_BASE + 513L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_REVISION                 (IVI_INHERENT_ATTR_BASE + 551L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION (IVI_INHERENT_ATTR_BASE + 515L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION (IVI_INHERENT_ATTR_BASE + 516L)  /* ViInt32, read-only */

/*- User Options */

#define TKDPO2K3K4K_ATTR_RANGE_CHECK                        (IVI_INHERENT_ATTR_BASE + 2L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_QUERY_INSTRUMENT_STATUS            (IVI_INHERENT_ATTR_BASE + 3L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_CACHE                              (IVI_INHERENT_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_SIMULATE                           (IVI_INHERENT_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_RECORD_COERCIONS                   (IVI_INHERENT_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_INTERCHANGE_CHECK                  (IVI_INHERENT_ATTR_BASE + 21L)  /* ViBoolean, read-write */

/*- Advanced Session Information */

#define TKDPO2K3K4K_ATTR_LOGICAL_NAME                       (IVI_INHERENT_ATTR_BASE + 305L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_IO_RESOURCE_DESCRIPTOR             (IVI_INHERENT_ATTR_BASE + 304L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_DRIVER_SETUP                       (IVI_INHERENT_ATTR_BASE + 7L)  /* ViString, read-only */

/*- Driver Capabilities */

#define TKDPO2K3K4K_ATTR_GROUP_CAPABILITIES                 (IVI_INHERENT_ATTR_BASE + 401L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SUPPORTED_INSTRUMENT_MODELS        (IVI_INHERENT_ATTR_BASE + 327L)  /* ViString, read-only */

/*- Instrument Identification */

#define TKDPO2K3K4K_ATTR_INSTRUMENT_FIRMWARE_REVISION       (IVI_INHERENT_ATTR_BASE + 510L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_INSTRUMENT_MANUFACTURER            (IVI_INHERENT_ATTR_BASE + 511L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_INSTRUMENT_MODEL                   (IVI_INHERENT_ATTR_BASE + 512L)  /* ViString, read-only */


/*===== Instrument-Specific Attributes =====================================*/

/*- Acquisition */

#define TKDPO2K3K4K_ATTR_INTERPOLATION                      (IVI_CLASS_ATTR_BASE + 19L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_NUM_AVERAGES                       (IVI_CLASS_ATTR_BASE + 104L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_NUM_ENVELOPES                      (IVI_CLASS_ATTR_BASE + 105L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_HORZ_MIN_NUM_PTS                   (IVI_CLASS_ATTR_BASE + 9L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_HORZ_RECORD_LENGTH                 (IVI_CLASS_ATTR_BASE + 8L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SAMPLE_MODE                        (IVI_CLASS_ATTR_BASE + 106L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_HORZ_SAMPLE_RATE                   (IVI_CLASS_ATTR_BASE + 10L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_ACQUISITION_START_TIME             (IVI_CLASS_ATTR_BASE + 109L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_HORZ_TIME_PER_RECORD               (IVI_CLASS_ATTR_BASE + 7L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_ACQUISITION_TYPE                   (IVI_CLASS_ATTR_BASE + 101L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_INITIATE_CONTINUOUS                (IVI_CLASS_ATTR_BASE + 107L)  /* ViBoolean, read-write */

/*- Channel */

#define TKDPO2K3K4K_ATTR_VERTICAL_COUPLING                  (IVI_CLASS_ATTR_BASE + 3L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CHANNEL_ENABLED                    (IVI_CLASS_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_MAX_INPUT_FREQUENCY                (IVI_CLASS_ATTR_BASE + 6L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_INPUT_IMPEDANCE                    (IVI_CLASS_ATTR_BASE + 103L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_OFFSET                    (IVI_CLASS_ATTR_BASE + 2L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_PROBE_ATTENUATION                  (IVI_CLASS_ATTR_BASE + 4L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_PROBE_SENSE_VALUE                  (IVI_CLASS_ATTR_BASE + 108L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_VERTICAL_RANGE                     (IVI_CLASS_ATTR_BASE + 1L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CHANNEL_COUNT                      (IVI_INHERENT_ATTR_BASE + 203L)  /* ViInt32, read-only */

/*- Waveform Measurement */

#define TKDPO2K3K4K_ATTR_MEAS_HIGH_REF                      (IVI_CLASS_ATTR_BASE + 607L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_MEAS_LOW_REF                       (IVI_CLASS_ATTR_BASE + 608L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_MEAS_MID_REF                       (IVI_CLASS_ATTR_BASE + 609L)  /* ViReal64, read-write */

/*- Trigger */

#define TKDPO2K3K4K_ATTR_TRIGGER_COUPLING                   (IVI_CLASS_ATTR_BASE + 14L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_HOLDOFF                    (IVI_CLASS_ATTR_BASE + 16L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_LEVEL                      (IVI_CLASS_ATTR_BASE + 17L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_MODIFIER                   (IVI_CLASS_ATTR_BASE + 102L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_SOURCE                     (IVI_CLASS_ATTR_BASE + 13L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_TYPE                       (IVI_CLASS_ATTR_BASE + 12L)  /* ViInt32, read-write */

/*- AC Line Triggering */

#define TKDPO2K3K4K_ATTR_AC_LINE_TRIGGER_SLOPE              (IVI_CLASS_ATTR_BASE + 701L)  /* ViInt32, read-write */

/*- Edge Triggering */

#define TKDPO2K3K4K_ATTR_TRIGGER_SLOPE                      (IVI_CLASS_ATTR_BASE + 18L)  /* ViInt32, read-write */

/*- Glitch Triggering */

#define TKDPO2K3K4K_ATTR_GLITCH_CONDITION                   (IVI_CLASS_ATTR_BASE + 403L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GLITCH_POLARITY                    (IVI_CLASS_ATTR_BASE + 402L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GLITCH_WIDTH                       (IVI_CLASS_ATTR_BASE + 401L)  /* ViReal64, read-write */

/*- Runt Triggering */

#define TKDPO2K3K4K_ATTR_RUNT_POLARITY                      (IVI_CLASS_ATTR_BASE + 303L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RUNT_HIGH_THRESHOLD                (IVI_CLASS_ATTR_BASE + 301L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_RUNT_LOW_THRESHOLD                 (IVI_CLASS_ATTR_BASE + 302L)  /* ViReal64, read-write */

/*- TV Triggering */

#define TKDPO2K3K4K_ATTR_TV_TRIGGER_EVENT                   (IVI_CLASS_ATTR_BASE + 205L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TV_TRIGGER_LINE_NUMBER             (IVI_CLASS_ATTR_BASE + 206L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TV_TRIGGER_POLARITY                (IVI_CLASS_ATTR_BASE + 204L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TV_TRIGGER_SIGNAL_FORMAT           (IVI_CLASS_ATTR_BASE + 201L)  /* ViInt32, read-write */

/*- Width Triggering */

#define TKDPO2K3K4K_ATTR_WIDTH_CONDITION                    (IVI_CLASS_ATTR_BASE + 504L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_WIDTH_POLARITY                     (IVI_CLASS_ATTR_BASE + 503L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_WIDTH_HIGH_THRESHOLD               (IVI_CLASS_ATTR_BASE + 502L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_WIDTH_LOW_THRESHOLD                (IVI_CLASS_ATTR_BASE + 501L)  /* ViReal64, read-write */

/*- Acquisition */

#define TKDPO2K3K4K_ATTR_STATE                              (IVI_SPECIFIC_ATTR_BASE + 1L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_MODE                               (IVI_SPECIFIC_ATTR_BASE + 2L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_NUMBER_ACQUISITIONS                (IVI_SPECIFIC_ATTR_BASE + 3L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_RUN_STOP                           (IVI_SPECIFIC_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_SINGLE_SEQUENCE                    (IVI_SPECIFIC_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_MAGNI_VU_STATE                     (IVI_SPECIFIC_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_MAX_SAMPLE_RATE                    (IVI_SPECIFIC_ATTR_BASE + 7L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SAMPLING_MODE                      (IVI_SPECIFIC_ATTR_BASE + 200L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_TIME_PER_RECORD                    (IVI_SPECIFIC_ATTR_BASE + 201L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_RECORD_LENGTH2                     (IVI_SPECIFIC_ATTR_BASE + 202L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SAMPLE_RATE2                       (IVI_SPECIFIC_ATTR_BASE + 203L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_NUMBER_AVERAGES                    (IVI_SPECIFIC_ATTR_BASE + 204L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_NUMBER_OF_POINTS_MIN               (IVI_SPECIFIC_ATTR_BASE + 205L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_START_TIME                         (IVI_SPECIFIC_ATTR_BASE + 206L)  /* ViReal64, read-write */

/*- Bus */

#define TKDPO2K3K4K_ATTR_BUS_COUNT                          (IVI_SPECIFIC_ATTR_BASE + 8L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_CAN_BIT_RATE_ENUM                  (IVI_SPECIFIC_ATTR_BASE + 9L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_POSITION                           (IVI_SPECIFIC_ATTR_BASE + 10L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LABEL                              (IVI_SPECIFIC_ATTR_BASE + 11L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_TYPE                               (IVI_SPECIFIC_ATTR_BASE + 12L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STATE2                             (IVI_SPECIFIC_ATTR_BASE + 13L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_TYPE                       (IVI_SPECIFIC_ATTR_BASE + 14L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_IS_CLOCKED_PARALLEL_BUS            (IVI_SPECIFIC_ATTR_BASE + 15L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_FORMAT                     (IVI_SPECIFIC_ATTR_BASE + 16L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_SOURCE          (IVI_SPECIFIC_ATTR_BASE + 17L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_EDGE            (IVI_SPECIFIC_ATTR_BASE + 18L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RS232_DELIMITER                    (IVI_SPECIFIC_ATTR_BASE + 19L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RS232_DISPLAY_MODE                 (IVI_SPECIFIC_ATTR_BASE + 20L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RS232TX_SOURCE                     (IVI_SPECIFIC_ATTR_BASE + 21L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RS232RX_SOURCE                     (IVI_SPECIFIC_ATTR_BASE + 22L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_PARALLEL_WIDTH                     (IVI_SPECIFIC_ATTR_BASE + 24L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SPI_FRAMING                        (IVI_SPECIFIC_ATTR_BASE + 25L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SPI_IDLE_TIME                      (IVI_SPECIFIC_ATTR_BASE + 26L)  /* ViReal64, read-write */

/*- Cursor */

#define TKDPO2K3K4K_ATTR_DDT                                (IVI_SPECIFIC_ATTR_BASE + 27L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_TRACK_MODE                         (IVI_SPECIFIC_ATTR_BASE + 28L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TYPE2                              (IVI_SPECIFIC_ATTR_BASE + 29L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE13                           (IVI_SPECIFIC_ATTR_BASE + 376L)  /* ViInt32, read-write */

/*- HBars */

#define TKDPO2K3K4K_ATTR_UNITS                              (IVI_SPECIFIC_ATTR_BASE + 30L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELTA                              (IVI_SPECIFIC_ATTR_BASE + 31L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION1                          (IVI_SPECIFIC_ATTR_BASE + 32L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION2                          (IVI_SPECIFIC_ATTR_BASE + 33L)  /* ViReal64, read-write */

/*- VBars */

#define TKDPO2K3K4K_ATTR_DELTA2                             (IVI_SPECIFIC_ATTR_BASE + 34L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION3                          (IVI_SPECIFIC_ATTR_BASE + 35L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION4                          (IVI_SPECIFIC_ATTR_BASE + 36L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_UNITS2                             (IVI_SPECIFIC_ATTR_BASE + 37L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION1               (IVI_SPECIFIC_ATTR_BASE + 38L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION2               (IVI_SPECIFIC_ATTR_BASE + 39L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_V_DELTA                            (IVI_SPECIFIC_ATTR_BASE + 40L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_ALTERNATIVE_READOUT1               (IVI_SPECIFIC_ATTR_BASE + 41L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_ALTERNATIVE_READOUT2               (IVI_SPECIFIC_ATTR_BASE + 42L)  /* ViString, read-only */

/*- XY */

#define TKDPO2K3K4K_ATTR_READOUT                            (IVI_SPECIFIC_ATTR_BASE + 43L)  /* ViInt32, read-write */

/*- Rectangle */

#define TKDPO2K3K4K_ATTR_DELTA3                             (IVI_SPECIFIC_ATTR_BASE + 44L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION5                          (IVI_SPECIFIC_ATTR_BASE + 45L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION6                          (IVI_SPECIFIC_ATTR_BASE + 46L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_UNITS3                             (IVI_SPECIFIC_ATTR_BASE + 47L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_DELTA4                             (IVI_SPECIFIC_ATTR_BASE + 48L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION7                          (IVI_SPECIFIC_ATTR_BASE + 49L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION8                          (IVI_SPECIFIC_ATTR_BASE + 50L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_UNITS4                             (IVI_SPECIFIC_ATTR_BASE + 51L)  /* ViString, read-only */

/*- Ratio */

#define TKDPO2K3K4K_ATTR_DELTA5                             (IVI_SPECIFIC_ATTR_BASE + 52L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION9                          (IVI_SPECIFIC_ATTR_BASE + 53L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION10                         (IVI_SPECIFIC_ATTR_BASE + 54L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_UNITS5                             (IVI_SPECIFIC_ATTR_BASE + 55L)  /* ViString, read-only */

/*- Product */

#define TKDPO2K3K4K_ATTR_DELTA6                             (IVI_SPECIFIC_ATTR_BASE + 56L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION11                         (IVI_SPECIFIC_ATTR_BASE + 57L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION102                        (IVI_SPECIFIC_ATTR_BASE + 58L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_UNITS6                             (IVI_SPECIFIC_ATTR_BASE + 59L)  /* ViString, read-only */

/*- PolarCordinates */

#define TKDPO2K3K4K_ATTR_DELTA7                             (IVI_SPECIFIC_ATTR_BASE + 60L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION12                         (IVI_SPECIFIC_ATTR_BASE + 61L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION103                        (IVI_SPECIFIC_ATTR_BASE + 62L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_UNITS7                             (IVI_SPECIFIC_ATTR_BASE + 63L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_DELTA8                             (IVI_SPECIFIC_ATTR_BASE + 64L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION13                         (IVI_SPECIFIC_ATTR_BASE + 65L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POSITION104                        (IVI_SPECIFIC_ATTR_BASE + 66L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_UNITS8                             (IVI_SPECIFIC_ATTR_BASE + 67L)  /* ViString, read-only */

/*- Display */

#define TKDPO2K3K4K_ATTR_CLOCK_STATE                        (IVI_SPECIFIC_ATTR_BASE + 68L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_BACK_LIGHT_INTENSITY               (IVI_SPECIFIC_ATTR_BASE + 69L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_FORMAT                             (IVI_SPECIFIC_ATTR_BASE + 70L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GRATICULE_STYLE                    (IVI_SPECIFIC_ATTR_BASE + 71L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_PERSISTENCE                        (IVI_SPECIFIC_ATTR_BASE + 72L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_PERSISTENCE_ENUM                   (IVI_SPECIFIC_ATTR_BASE + 73L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_WAVEFORM_INTENSITY                 (IVI_SPECIFIC_ATTR_BASE + 74L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GRATICULE_INTENSITY                (IVI_SPECIFIC_ATTR_BASE + 75L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DOTS_ONLY                          (IVI_SPECIFIC_ATTR_BASE + 76L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_MESSAGE_BOX                (IVI_SPECIFIC_ATTR_BASE + 77L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_GLITCH_CAPTURE_STATE               (IVI_SPECIFIC_ATTR_BASE + 382L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_GLITCH_INTENSITY                   (IVI_SPECIFIC_ATTR_BASE + 383L)  /* ViInt32, read-write */

/*- HardCopy */

#define TKDPO2K3K4K_ATTR_LAYOUT                             (IVI_SPECIFIC_ATTR_BASE + 78L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_INK_SAVER                          (IVI_SPECIFIC_ATTR_BASE + 79L)  /* ViBoolean, read-write */

/*- Histogram */

#define TKDPO2K3K4K_ATTR_DATA                               (IVI_SPECIFIC_ATTR_BASE + 80L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_DISPLAY                            (IVI_SPECIFIC_ATTR_BASE + 81L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_MODE2                              (IVI_SPECIFIC_ATTR_BASE + 82L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE                             (IVI_SPECIFIC_ATTR_BASE + 83L)  /* ViInt32, read-write */

/*- Horizontal */

#define TKDPO2K3K4K_ATTR_DELAY_MODE                         (IVI_SPECIFIC_ATTR_BASE + 84L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_DELAY_TIME                         (IVI_SPECIFIC_ATTR_BASE + 85L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_DIGITAL_MAIN_RECORD_LENGTH         (IVI_SPECIFIC_ATTR_BASE + 86L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_DIGITAL_MAGNI_VU_RECORD_LENGTH     (IVI_SPECIFIC_ATTR_BASE + 87L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_DIGITAL_MAIN_SAMPLE_RATE           (IVI_SPECIFIC_ATTR_BASE + 88L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_DIGITAL_MAGNI_VU_SAMPLE_RATE       (IVI_SPECIFIC_ATTR_BASE + 89L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_SCALE                              (IVI_SPECIFIC_ATTR_BASE + 90L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION14                         (IVI_SPECIFIC_ATTR_BASE + 91L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_RESOLUTION                         (IVI_SPECIFIC_ATTR_BASE + 92L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RECORD_LENGTH                      (IVI_SPECIFIC_ATTR_BASE + 93L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SAMPLE_RATE                        (IVI_SPECIFIC_ATTR_BASE + 94L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_POSITION                   (IVI_SPECIFIC_ATTR_BASE + 95L)  /* ViInt32, read-write */

/*- Math */

#define TKDPO2K3K4K_ATTR_MATH_COUNT                         (IVI_SPECIFIC_ATTR_BASE + 96L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_DISPLAY_STATE                      (IVI_SPECIFIC_ATTR_BASE + 97L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_EXPRESSION                         (IVI_SPECIFIC_ATTR_BASE + 98L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_LABEL2                             (IVI_SPECIFIC_ATTR_BASE + 99L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_POSITION                (IVI_SPECIFIC_ATTR_BASE + 100L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_SCALE                   (IVI_SPECIFIC_ATTR_BASE + 101L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_UNITS                   (IVI_SPECIFIC_ATTR_BASE + 102L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_VERTICAL_POSITION                  (IVI_SPECIFIC_ATTR_BASE + 103L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_SCALE                     (IVI_SPECIFIC_ATTR_BASE + 104L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_UNITS                     (IVI_SPECIFIC_ATTR_BASE + 105L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_TYPE3                              (IVI_SPECIFIC_ATTR_BASE + 106L)  /* ViInt32, read-write */

/*- Spectral */

#define TKDPO2K3K4K_ATTR_DISPLAY_GATING_INDICATORS          (IVI_SPECIFIC_ATTR_BASE + 107L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_WINDOW                             (IVI_SPECIFIC_ATTR_BASE + 108L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_MAGNITUDE_UNITS                    (IVI_SPECIFIC_ATTR_BASE + 109L)  /* ViInt32, read-write */

/*- MeasurementSlot */

#define TKDPO2K3K4K_ATTR_MEASUREMENTSLOT_COUNT              (IVI_SPECIFIC_ATTR_BASE + 110L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_COUNT                              (IVI_SPECIFIC_ATTR_BASE + 257L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_DELAY_DIRECTION2                   (IVI_SPECIFIC_ATTR_BASE + 258L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELAY_EDGE3                        (IVI_SPECIFIC_ATTR_BASE + 259L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELAY_EDGE4                        (IVI_SPECIFIC_ATTR_BASE + 260L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_MAXIMUM                            (IVI_SPECIFIC_ATTR_BASE + 261L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_MEAN                               (IVI_SPECIFIC_ATTR_BASE + 262L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_MINIMUM                            (IVI_SPECIFIC_ATTR_BASE + 263L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_SOURCE9                            (IVI_SPECIFIC_ATTR_BASE + 264L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE10                           (IVI_SPECIFIC_ATTR_BASE + 265L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STANDARD_DEVIATION                 (IVI_SPECIFIC_ATTR_BASE + 266L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_STATE6                             (IVI_SPECIFIC_ATTR_BASE + 267L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_TYPE5                              (IVI_SPECIFIC_ATTR_BASE + 268L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_UNITS10                            (IVI_SPECIFIC_ATTR_BASE + 269L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_VALUE2                             (IVI_SPECIFIC_ATTR_BASE + 270L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_STATISTICS_MODE                    (IVI_SPECIFIC_ATTR_BASE + 271L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_STATISTICS_WEIGHTING               (IVI_SPECIFIC_ATTR_BASE + 272L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GATING                             (IVI_SPECIFIC_ATTR_BASE + 273L)  /* ViInt32, read-write */

/*- Indicators */

#define TKDPO2K3K4K_ATTR_STATE3                             (IVI_SPECIFIC_ATTR_BASE + 111L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_INDICATORS              (IVI_SPECIFIC_ATTR_BASE + 112L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_VERTICAL_INDICATORS                (IVI_SPECIFIC_ATTR_BASE + 113L)  /* ViInt32, read-only */

/*- Frequency */

#define TKDPO2K3K4K_ATTR_TYPE9                              (IVI_SPECIFIC_ATTR_BASE + 373L)  /* ViInt32, read-write */

/*- SaveRecall */

#define TKDPO2K3K4K_ATTR_SAVE_BUTTON_TYPE                   (IVI_SPECIFIC_ATTR_BASE + 114L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_IMAGE_FORMAT                       (IVI_SPECIFIC_ATTR_BASE + 115L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_IMAGE_LAYOUT                       (IVI_SPECIFIC_ATTR_BASE + 116L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_INK_SAVER_PALETTE                  (IVI_SPECIFIC_ATTR_BASE + 117L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_WAVEFORM_GATING                    (IVI_SPECIFIC_ATTR_BASE + 118L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SAVE_WAVE_FORM_FILE_FORMAT         (IVI_SPECIFIC_ATTR_BASE + 274L)  /* ViInt32, read-write */

/*- Search */

#define TKDPO2K3K4K_ATTR_SEARCH_COUNT                       (IVI_SPECIFIC_ATTR_BASE + 119L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SEARCH_TYPE                        (IVI_SPECIFIC_ATTR_BASE + 275L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STATE7                             (IVI_SPECIFIC_ATTR_BASE + 276L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TOTAL                              (IVI_SPECIFIC_ATTR_BASE + 277L)  /* ViInt32, read-only */

/*- Bus */

#define TKDPO2K3K4K_ATTR_BUS_SOURCE2                        (IVI_SPECIFIC_ATTR_BASE + 172L)  /* ViInt32, read-write */

/*- Trigger */

#define TKDPO2K3K4K_ATTR_B_STATE                            (IVI_SPECIFIC_ATTR_BASE + 120L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_B_DELAY_TIME                       (IVI_SPECIFIC_ATTR_BASE + 121L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CURRENT_STATE                      (IVI_SPECIFIC_ATTR_BASE + 122L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_EVENT_COUNT                        (IVI_SPECIFIC_ATTR_BASE + 123L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGERB_BY                        (IVI_SPECIFIC_ATTR_BASE + 124L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_FREQUENCY                          (IVI_SPECIFIC_ATTR_BASE + 125L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_PROBE_ATTENUATION2                 (IVI_SPECIFIC_ATTR_BASE + 126L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_UNIT_VALUE                (IVI_SPECIFIC_ATTR_BASE + 127L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_A_HOLDOFF_TIME                     (IVI_SPECIFIC_ATTR_BASE + 278L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_MODE4                              (IVI_SPECIFIC_ATTR_BASE + 279L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TYPE6                              (IVI_SPECIFIC_ATTR_BASE + 280L)  /* ViInt32, read-write */

/*- ABus */

#define TKDPO2K3K4K_ATTR_BUS_SOURCE                         (IVI_SPECIFIC_ATTR_BASE + 128L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_BUS_TYPE                           (IVI_SPECIFIC_ATTR_BASE + 129L)  /* ViInt32, read-write */

/*- AEdge */

#define TKDPO2K3K4K_ATTR_SOURCE2                            (IVI_SPECIFIC_ATTR_BASE + 130L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_COUPLING                           (IVI_SPECIFIC_ATTR_BASE + 131L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_LEVEL                              (IVI_SPECIFIC_ATTR_BASE + 132L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LEVEL_ENUM                         (IVI_SPECIFIC_ATTR_BASE + 133L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_SLOPE                              (IVI_SPECIFIC_ATTR_BASE + 281L)  /* ViInt32, read-write */

/*- ALogic */

#define TKDPO2K3K4K_ATTR_CONDITION                          (IVI_SPECIFIC_ATTR_BASE + 134L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_LESS_LIMIT                         (IVI_SPECIFIC_ATTR_BASE + 135L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_MORE_LIMIT                         (IVI_SPECIFIC_ATTR_BASE + 136L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_FUNCTION                           (IVI_SPECIFIC_ATTR_BASE + 137L)  /* ViInt32, read-write */

/*- AWidth */

#define TKDPO2K3K4K_ATTR_SOURCE3                            (IVI_SPECIFIC_ATTR_BASE + 138L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CONDITION2                         (IVI_SPECIFIC_ATTR_BASE + 139L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_POLARITY                           (IVI_SPECIFIC_ATTR_BASE + 140L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_WIDTH                              (IVI_SPECIFIC_ATTR_BASE + 141L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_UPPER_LIMIT                        (IVI_SPECIFIC_ATTR_BASE + 284L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LOWER_LIMIT                        (IVI_SPECIFIC_ATTR_BASE + 285L)  /* ViReal64, read-write */

/*- ARunt */

#define TKDPO2K3K4K_ATTR_POLARITY2                          (IVI_SPECIFIC_ATTR_BASE + 142L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE4                            (IVI_SPECIFIC_ATTR_BASE + 143L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CONDITION3                         (IVI_SPECIFIC_ATTR_BASE + 144L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_WIDTH2                             (IVI_SPECIFIC_ATTR_BASE + 145L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LOWER_LEVEL                        (IVI_SPECIFIC_ATTR_BASE + 282L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_UPPER_LEVEL                        (IVI_SPECIFIC_ATTR_BASE + 283L)  /* ViReal64, read-write */

/*- ASetupHold */

#define TKDPO2K3K4K_ATTR_DATA_SOURCE                        (IVI_SPECIFIC_ATTR_BASE + 146L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DATA_LEVEL                         (IVI_SPECIFIC_ATTR_BASE + 147L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CLOCK_SOURCE                       (IVI_SPECIFIC_ATTR_BASE + 148L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CLOCK_EDGE                         (IVI_SPECIFIC_ATTR_BASE + 149L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CLOCK_LEVEL                        (IVI_SPECIFIC_ATTR_BASE + 150L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_HOLD_TIME                          (IVI_SPECIFIC_ATTR_BASE + 151L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_SET_TIME                           (IVI_SPECIFIC_ATTR_BASE + 152L)  /* ViReal64, read-write */

/*- ATransition */

#define TKDPO2K3K4K_ATTR_SOURCE5                            (IVI_SPECIFIC_ATTR_BASE + 153L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELTA_TIME                         (IVI_SPECIFIC_ATTR_BASE + 154L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CONDITION4                         (IVI_SPECIFIC_ATTR_BASE + 155L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_POLARITY3                          (IVI_SPECIFIC_ATTR_BASE + 156L)  /* ViInt32, read-write */

/*- AVideo */

#define TKDPO2K3K4K_ATTR_FIELD_HOLDOFF                      (IVI_SPECIFIC_ATTR_BASE + 157L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POLARITY4                          (IVI_SPECIFIC_ATTR_BASE + 159L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE6                            (IVI_SPECIFIC_ATTR_BASE + 160L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STANDARD                           (IVI_SPECIFIC_ATTR_BASE + 161L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TRIGGER_ON                         (IVI_SPECIFIC_ATTR_BASE + 162L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CUSTOM_LINE_PERIOD                 (IVI_SPECIFIC_ATTR_BASE + 163L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CUSTOM_SCAN                        (IVI_SPECIFIC_ATTR_BASE + 164L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CUSTOM_SYNC_INTERVAL               (IVI_SPECIFIC_ATTR_BASE + 165L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_CUSTOM_FORMAT                      (IVI_SPECIFIC_ATTR_BASE + 166L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_HD_TV_FORMAT                       (IVI_SPECIFIC_ATTR_BASE + 167L)  /* ViInt32, read-write */

/*- BEdge */

#define TKDPO2K3K4K_ATTR_COUPLING2                          (IVI_SPECIFIC_ATTR_BASE + 168L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_LEVEL2                             (IVI_SPECIFIC_ATTR_BASE + 169L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LEVEL_ENUM2                        (IVI_SPECIFIC_ATTR_BASE + 170L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_SOURCE7                            (IVI_SPECIFIC_ATTR_BASE + 171L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SLOPE2                             (IVI_SPECIFIC_ATTR_BASE + 286L)  /* ViInt32, read-write */

/*- Channel */

#define TKDPO2K3K4K_ATTR_AUX_IN_PROBE_GAIN                  (IVI_SPECIFIC_ATTR_BASE + 173L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_PROBE_RESISTANCE            (IVI_SPECIFIC_ATTR_BASE + 174L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_PROBE_SERIAL_NUMBER         (IVI_SPECIFIC_ATTR_BASE + 175L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_PROBE_TYPE                  (IVI_SPECIFIC_ATTR_BASE + 176L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_PROBE_UNITS                 (IVI_SPECIFIC_ATTR_BASE + 177L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE  (IVI_SPECIFIC_ATTR_BASE + 178L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_AUX_IN_TEKVPI_PROBE_RANGE          (IVI_SPECIFIC_ATTR_BASE + 179L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_AMPS_VIA_VOLTS_STATE               (IVI_SPECIFIC_ATTR_BASE + 180L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_AMPS_VIA_VOLTS_FACTOR              (IVI_SPECIFIC_ATTR_BASE + 181L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_IMPEDANCE                          (IVI_SPECIFIC_ATTR_BASE + 182L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_SENSITIVITY               (IVI_SPECIFIC_ATTR_BASE + 183L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_YUNITS                             (IVI_SPECIFIC_ATTR_BASE + 184L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_TEKVPI_PROBE_DEGAUSS_STATE         (IVI_SPECIFIC_ATTR_BASE + 185L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_TEKVPI_PROBE_RANGE                 (IVI_SPECIFIC_ATTR_BASE + 186L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_TERMINATION                        (IVI_SPECIFIC_ATTR_BASE + 199L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_BANDWIDTH                          (IVI_SPECIFIC_ATTR_BASE + 207L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_BANDWIDTH_ENUM                     (IVI_SPECIFIC_ATTR_BASE + 208L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_COUPLING3                          (IVI_SPECIFIC_ATTR_BASE + 209L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DESKEW                             (IVI_SPECIFIC_ATTR_BASE + 210L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_STATE2                     (IVI_SPECIFIC_ATTR_BASE + 211L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_LABEL_NAME                         (IVI_SPECIFIC_ATTR_BASE + 212L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_OFFSET                             (IVI_SPECIFIC_ATTR_BASE + 213L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION17                         (IVI_SPECIFIC_ATTR_BASE + 214L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_PROBE_GAIN                         (IVI_SPECIFIC_ATTR_BASE + 215L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_PROBE_RESISTANCE                   (IVI_SPECIFIC_ATTR_BASE + 216L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_PROBE_SERIAL_NUMBER                (IVI_SPECIFIC_ATTR_BASE + 217L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_PROBE_SIGNAL                       (IVI_SPECIFIC_ATTR_BASE + 218L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_PROBE_TYPE                         (IVI_SPECIFIC_ATTR_BASE + 219L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_PROBE_UNITS                        (IVI_SPECIFIC_ATTR_BASE + 220L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_TERMINATION_ENUM                   (IVI_SPECIFIC_ATTR_BASE + 221L)  /* ViInt32, write-only */
#define TKDPO2K3K4K_ATTR_VERTICAL_SCALE3                    (IVI_SPECIFIC_ATTR_BASE + 222L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_INVERT_STATE                       (IVI_SPECIFIC_ATTR_BASE + 377L)  /* ViBoolean, read-write */

/*- Reference */

#define TKDPO2K3K4K_ATTR_REFERENCE_COUNT                    (IVI_SPECIFIC_ATTR_BASE + 187L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_SCALE2                  (IVI_SPECIFIC_ATTR_BASE + 189L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_POSITION15                         (IVI_SPECIFIC_ATTR_BASE + 190L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_SCALE2                    (IVI_SPECIFIC_ATTR_BASE + 191L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_HORIZONTAL_DELAY_TIME              (IVI_SPECIFIC_ATTR_BASE + 192L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_LABEL3                             (IVI_SPECIFIC_ATTR_BASE + 193L)  /* ViString, read-write */

/*- DigitalChannel */

#define TKDPO2K3K4K_ATTR_DIGITALCHANNEL_COUNT               (IVI_SPECIFIC_ATTR_BASE + 188L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_LABEL4                             (IVI_SPECIFIC_ATTR_BASE + 223L)  /* ViString, read-write */
#define TKDPO2K3K4K_ATTR_POSITION18                         (IVI_SPECIFIC_ATTR_BASE + 224L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_STATE5                             (IVI_SPECIFIC_ATTR_BASE + 225L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_THRESHOLD                          (IVI_SPECIFIC_ATTR_BASE + 226L)  /* ViReal64, read-write */

/*- Zoom */

#define TKDPO2K3K4K_ATTR_MODE3                              (IVI_SPECIFIC_ATTR_BASE + 194L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_POSITION16                         (IVI_SPECIFIC_ATTR_BASE + 195L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_SCALE2                             (IVI_SPECIFIC_ATTR_BASE + 196L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_STATE4                             (IVI_SPECIFIC_ATTR_BASE + 197L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_FACTOR                             (IVI_SPECIFIC_ATTR_BASE + 198L)  /* ViInt32, read-only */

/*- WaveformTransfer */

#define TKDPO2K3K4K_ATTR_DATA_SOURCE2                       (IVI_SPECIFIC_ATTR_BASE + 289L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DATA_START                         (IVI_SPECIFIC_ATTR_BASE + 290L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DATA_STOP                          (IVI_SPECIFIC_ATTR_BASE + 291L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DATA_WIDTH                         (IVI_SPECIFIC_ATTR_BASE + 292L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RECORD_LENGTH3                     (IVI_SPECIFIC_ATTR_BASE + 378L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_DATA_COMPOSITION                   (IVI_SPECIFIC_ATTR_BASE + 379L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DATA_RESOLUTION                    (IVI_SPECIFIC_ATTR_BASE + 380L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_FILLTER_VU_FREQUENCY               (IVI_SPECIFIC_ATTR_BASE + 381L)  /* ViReal64, read-write */

/*- InstrumentIO */

#define TKDPO2K3K4K_ATTR_IO_SESSION                         (IVI_SPECIFIC_ATTR_BASE + 227L)  /* ViInt32, read-only */

/*- Mark */

#define TKDPO2K3K4K_ATTR_TOTAL_MARKS                        (IVI_SPECIFIC_ATTR_BASE + 228L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_FREE_MARKS                         (IVI_SPECIFIC_ATTR_BASE + 229L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_END                       (IVI_SPECIFIC_ATTR_BASE + 230L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_FOCUS                     (IVI_SPECIFIC_ATTR_BASE + 231L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_LABEL                     (IVI_SPECIFIC_ATTR_BASE + 232L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_MARKS_IN_COLUMN           (IVI_SPECIFIC_ATTR_BASE + 233L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_OWNER                     (IVI_SPECIFIC_ATTR_BASE + 234L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_POSITION                  (IVI_SPECIFIC_ATTR_BASE + 235L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_SOURCE                    (IVI_SPECIFIC_ATTR_BASE + 236L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_START                     (IVI_SPECIFIC_ATTR_BASE + 237L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SELECTED_STATE                     (IVI_SPECIFIC_ATTR_BASE + 238L)  /* ViBoolean, read-only */

/*- MeasurementImmediate */

#define TKDPO2K3K4K_ATTR_DELAY_DIRECTION                    (IVI_SPECIFIC_ATTR_BASE + 239L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELAY_EDGE1                        (IVI_SPECIFIC_ATTR_BASE + 240L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DELAY_EDGE2                        (IVI_SPECIFIC_ATTR_BASE + 241L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_HIGH      (IVI_SPECIFIC_ATTR_BASE + 242L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_LOW       (IVI_SPECIFIC_ATTR_BASE + 243L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_MID       (IVI_SPECIFIC_ATTR_BASE + 244L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_ABSOLUTE_MID2      (IVI_SPECIFIC_ATTR_BASE + 245L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_METHOD             (IVI_SPECIFIC_ATTR_BASE + 246L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_HIGH       (IVI_SPECIFIC_ATTR_BASE + 247L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_LOW        (IVI_SPECIFIC_ATTR_BASE + 248L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_MID        (IVI_SPECIFIC_ATTR_BASE + 249L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_PERCENT_MID2       (IVI_SPECIFIC_ATTR_BASE + 250L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_UNIT               (IVI_SPECIFIC_ATTR_BASE + 251L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE1                            (IVI_SPECIFIC_ATTR_BASE + 252L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SOURCE8                            (IVI_SPECIFIC_ATTR_BASE + 253L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TYPE4                              (IVI_SPECIFIC_ATTR_BASE + 254L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_UNITS9                             (IVI_SPECIFIC_ATTR_BASE + 255L)  /* ViString, read-only */
#define TKDPO2K3K4K_ATTR_VALUE                              (IVI_SPECIFIC_ATTR_BASE + 256L)  /* ViReal64, read-only */

/*- UtilityEx */

#define TKDPO2K3K4K_ATTR_FRONT_PANEL_LOCK                   (IVI_SPECIFIC_ATTR_BASE + 288L)  /* ViInt32, read-write */

/*- PowerAnalysis */

#define TKDPO2K3K4K_ATTR_TYPE7                              (IVI_SPECIFIC_ATTR_BASE + 293L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_VOLTAGE_SOURCE                     (IVI_SPECIFIC_ATTR_BASE + 294L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_CURRENT_SOURCE                     (IVI_SPECIFIC_ATTR_BASE + 295L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_STATE3                     (IVI_SPECIFIC_ATTR_BASE + 296L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_INDICATOR                          (IVI_SPECIFIC_ATTR_BASE + 297L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_GATE_SOURCE                        (IVI_SPECIFIC_ATTR_BASE + 298L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_GATING2                            (IVI_SPECIFIC_ATTR_BASE + 299L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STATISTICS_MODE2                   (IVI_SPECIFIC_ATTR_BASE + 300L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_STATISTICS_SAMPLES                 (IVI_SPECIFIC_ATTR_BASE + 301L)  /* ViInt32, read-write */

/*- Quality */

#define TKDPO2K3K4K_ATTR_FREQUENCY_REFERENCE                (IVI_SPECIFIC_ATTR_BASE + 302L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_ALL_MEAS_DISPLAY_STATE             (IVI_SPECIFIC_ATTR_BASE + 303L)  /* ViBoolean, write-only */
#define TKDPO2K3K4K_ATTR_APPARENT_POWER                     (IVI_SPECIFIC_ATTR_BASE + 304L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_FREQUENCY2                         (IVI_SPECIFIC_ATTR_BASE + 305L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_I_CREST_FACTOR                     (IVI_SPECIFIC_ATTR_BASE + 306L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_PHASE_ANGLE                        (IVI_SPECIFIC_ATTR_BASE + 307L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_POWER_FACTOR                       (IVI_SPECIFIC_ATTR_BASE + 308L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_REACTIVE_POWER                     (IVI_SPECIFIC_ATTR_BASE + 309L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_TRUE_POWER                         (IVI_SPECIFIC_ATTR_BASE + 310L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_VRMS                               (IVI_SPECIFIC_ATTR_BASE + 311L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IRMS                               (IVI_SPECIFIC_ATTR_BASE + 312L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_V_CREST_FACTOR                     (IVI_SPECIFIC_ATTR_BASE + 313L)  /* ViReal64, read-only */

/*- SwitchingLoss */

#define TKDPO2K3K4K_ATTR_CONDUCTION_CALCULATION             (IVI_SPECIFIC_ATTR_BASE + 314L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RDS_ON_VALUE                       (IVI_SPECIFIC_ATTR_BASE + 315L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VCE_SAT_VALUE                      (IVI_SPECIFIC_ATTR_BASE + 316L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_MEAS_DISPLAY_TYPE                  (IVI_SPECIFIC_ATTR_BASE + 317L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_NUMBER_OF_CYCLES                   (IVI_SPECIFIC_ATTR_BASE + 318L)  /* ViInt32, read-only */

/*- Harmonics */

#define TKDPO2K3K4K_ATTR_STANDARD2                          (IVI_SPECIFIC_ATTR_BASE + 319L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_SET                        (IVI_SPECIFIC_ATTR_BASE + 320L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DISPLAY_TYPE2                      (IVI_SPECIFIC_ATTR_BASE + 321L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_OVERALL_RESULTS                    (IVI_SPECIFIC_ATTR_BASE + 322L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_RMS_RESULT                         (IVI_SPECIFIC_ATTR_BASE + 323L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_THDF_RESULT                        (IVI_SPECIFIC_ATTR_BASE + 324L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_THDR_RESULT                        (IVI_SPECIFIC_ATTR_BASE + 325L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IEC_FUNDAMENTAL_CURRENT_RESULT     (IVI_SPECIFIC_ATTR_BASE + 330L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IEC_HARMONIC3_RESULT               (IVI_SPECIFIC_ATTR_BASE + 331L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_IEC_HARMONIC5_RESULT               (IVI_SPECIFIC_ATTR_BASE + 332L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_IECPOHC_RESULT                     (IVI_SPECIFIC_ATTR_BASE + 333L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IECPOHL_RESULT                     (IVI_SPECIFIC_ATTR_BASE + 334L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IEC_INPUT_POWER                    (IVI_SPECIFIC_ATTR_BASE + 335L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_IEC_POWER_FACTOR                   (IVI_SPECIFIC_ATTR_BASE + 336L)  /* ViReal64, read-only */

/*- Ripple */

#define TKDPO2K3K4K_ATTR_SOURCE11                           (IVI_SPECIFIC_ATTR_BASE + 337L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_VALUE3                             (IVI_SPECIFIC_ATTR_BASE + 338L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_MAX                                (IVI_SPECIFIC_ATTR_BASE + 339L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_MEAN2                              (IVI_SPECIFIC_ATTR_BASE + 340L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_MIN                                (IVI_SPECIFIC_ATTR_BASE + 341L)  /* ViReal64, read-only */
#define TKDPO2K3K4K_ATTR_STANDARD_DEVIATION2                (IVI_SPECIFIC_ATTR_BASE + 342L)  /* ViReal64, read-only */

/*- Modulation */

#define TKDPO2K3K4K_ATTR_SOURCE12                           (IVI_SPECIFIC_ATTR_BASE + 343L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_TYPE8                              (IVI_SPECIFIC_ATTR_BASE + 344L)  /* ViInt32, read-write */

/*- SafeOperatingArea */

#define TKDPO2K3K4K_ATTR_NUMBER_OF_POINTS                   (IVI_SPECIFIC_ATTR_BASE + 345L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_PLOT_TYPE                          (IVI_SPECIFIC_ATTR_BASE + 346L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_ACTION_ON_VIOLATION                (IVI_SPECIFIC_ATTR_BASE + 347L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_MASK_STATE                         (IVI_SPECIFIC_ATTR_BASE + 348L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RESULT_FAILURE_SAMPLES             (IVI_SPECIFIC_ATTR_BASE + 349L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_RESULT_WAVEFORMS_ACQUIRED          (IVI_SPECIFIC_ATTR_BASE + 350L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_RESULT_TEST_STATE                  (IVI_SPECIFIC_ATTR_BASE + 351L)  /* ViInt32, read-only */

/*- Frequency */

#define TKDPO2K3K4K_ATTR_SQUELCH_STATE                      (IVI_SPECIFIC_ATTR_BASE + 352L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_SQUELCH_THRESHOLD                  (IVI_SPECIFIC_ATTR_BASE + 353L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_NUMBER_OF_AVERAGES                 (IVI_SPECIFIC_ATTR_BASE + 354L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_AVERAGE_COUNT                      (IVI_SPECIFIC_ATTR_BASE + 355L)  /* ViInt32, read-only */

/*- RF */

#define TKDPO2K3K4K_ATTR_SPECTOGRAM_STATE                   (IVI_SPECIFIC_ATTR_BASE + 356L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_SPECTOGRAM_NUMBER_OF_SLICES        (IVI_SPECIFIC_ATTR_BASE + 357L)  /* ViInt32, read-only */
#define TKDPO2K3K4K_ATTR_SPECTOGRAM_SELECT_SLICE            (IVI_SPECIFIC_ATTR_BASE + 358L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_DETECTION_MODE                     (IVI_SPECIFIC_ATTR_BASE + 359L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_SPECTRUM_MODE                      (IVI_SPECIFIC_ATTR_BASE + 360L)  /* ViInt32, read-write */

/*- FrequencyAndSpan */

#define TKDPO2K3K4K_ATTR_CENTER_FREQUENCY                   (IVI_SPECIFIC_ATTR_BASE + 361L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_SPAN                               (IVI_SPECIFIC_ATTR_BASE + 362L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_START                              (IVI_SPECIFIC_ATTR_BASE + 363L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_STOP                               (IVI_SPECIFIC_ATTR_BASE + 364L)  /* ViReal64, read-write */

/*- Amplitude */

#define TKDPO2K3K4K_ATTR_REFERENCE_LEVEL                    (IVI_SPECIFIC_ATTR_BASE + 365L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_POSITION2                 (IVI_SPECIFIC_ATTR_BASE + 366L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_SCALE4                    (IVI_SPECIFIC_ATTR_BASE + 367L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_VERTICAL_UNITS2                    (IVI_SPECIFIC_ATTR_BASE + 368L)  /* ViInt32, read-write */

/*- Bandwidth */

#define TKDPO2K3K4K_ATTR_RBW_MODE                           (IVI_SPECIFIC_ATTR_BASE + 369L)  /* ViInt32, read-write */
#define TKDPO2K3K4K_ATTR_RBW                                (IVI_SPECIFIC_ATTR_BASE + 370L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_SPANRBW_RATIO                      (IVI_SPECIFIC_ATTR_BASE + 371L)  /* ViReal64, read-write */
#define TKDPO2K3K4K_ATTR_WINDOW2                            (IVI_SPECIFIC_ATTR_BASE + 372L)  /* ViInt32, read-write */

/*- Marker */

#define TKDPO2K3K4K_ATTR_MANUAL_STATE                       (IVI_SPECIFIC_ATTR_BASE + 374L)  /* ViBoolean, read-write */
#define TKDPO2K3K4K_ATTR_TYPE10                             (IVI_SPECIFIC_ATTR_BASE + 375L)  /* ViInt32, read-write */


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_INTERPOLATION
	parameter Interpolation in function Tkdpo2k3k4k_ConfigureInterpolation */

#define TKDPO2K3K4K_VAL_NO_INTERPOLATION                    1
#define TKDPO2K3K4K_VAL_SINE_X                              2
#define TKDPO2K3K4K_VAL_LINEAR                              3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SAMPLE_MODE
	parameter SampleMode in function Tkdpo2k3k4k_SampleMode */

#define TKDPO2K3K4K_VAL_REAL_TIME                           0
#define TKDPO2K3K4K_VAL_EQUIVALENT_TIME                     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_ACQUISITION_TYPE
	parameter AcquisitionType in function Tkdpo2k3k4k_ConfigureAcquisitionType */

#define TKDPO2K3K4K_VAL_NORMAL                              0
#define TKDPO2K3K4K_VAL_PEAK_DETECT                         1
#define TKDPO2K3K4K_VAL_HI_RES                              2
#define TKDPO2K3K4K_VAL_ENVELOPE                            3
#define TKDPO2K3K4K_VAL_AVERAGE                             4

/*- Defined values for 
	parameter Coupling in function Tkdpo2k3k4k_ConfigureChannel */

#define TKDPO2K3K4K_VAL_AC                                  0
#define TKDPO2K3K4K_VAL_DC                                  1
#define TKDPO2K3K4K_VAL_GND                                 2

/*- Defined values for 
	parameter MeasFunction in function Tkdpo2k3k4k_ReadWaveformMeasurement
	parameter MeasFunction in function Tkdpo2k3k4k_FetchWaveformMeasurement */

#define TKDPO2K3K4K_VAL_RISE_TIME                           0
#define TKDPO2K3K4K_VAL_FALL_TIME                           1
#define TKDPO2K3K4K_VAL_FREQUENCY                           2
#define TKDPO2K3K4K_VAL_PERIOD                              3
#define TKDPO2K3K4K_VAL_VOLTAGE_RMS                         4
#define TKDPO2K3K4K_VAL_VOLTAGE_PEAK_TO_PEAK                5
#define TKDPO2K3K4K_VAL_VOLTAGE_MAX                         6
#define TKDPO2K3K4K_VAL_VOLTAGE_MIN                         7
#define TKDPO2K3K4K_VAL_VOLTAGE_HIGH                        8
#define TKDPO2K3K4K_VAL_VOLTAGE_LOW                         9
#define TKDPO2K3K4K_VAL_VOLTAGE_AVERAGE                     10
#define TKDPO2K3K4K_VAL_WIDTH_NEG                           11
#define TKDPO2K3K4K_VAL_WIDTH_POS                           12
#define TKDPO2K3K4K_VAL_DUTY_CYCLE_NEG                      13
#define TKDPO2K3K4K_VAL_DUTY_CYCLE_POS                      14
#define TKDPO2K3K4K_VAL_AMPLITUDE                           15
#define TKDPO2K3K4K_VAL_VOLTAGE_CYCLE_RMS                   16
#define TKDPO2K3K4K_VAL_VOLTAGE_CYCLE_AVERAGE               17
#define TKDPO2K3K4K_VAL_OVERSHOOT                           18
#define TKDPO2K3K4K_VAL_PRESHOOT                            19

/*- Defined values for 
	parameter Status in function Tkdpo2k3k4k_AcquisitionStatus */

#define TKDPO2K3K4K_VAL_ACQ_IN_PROGRESS                     0
#define TKDPO2K3K4K_VAL_ACQ_COMPLETE                        1
#define TKDPO2K3K4K_VAL_ACQ_STATUS_UNKNOWN                  -1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRIGGER_TYPE
	parameter TriggerType in function Tkdpo2k3k4k_ConfigureTrigger */

#define TKDPO2K3K4K_VAL_EDGE_TRIGGER                        1
#define TKDPO2K3K4K_VAL_WIDTH_TRIGGER                       2
#define TKDPO2K3K4K_VAL_RUNT_TRIGGER                        3
#define TKDPO2K3K4K_VAL_GLITCH_TRIGGER                      4
#define TKDPO2K3K4K_VAL_TV_TRIGGER                          5
#define TKDPO2K3K4K_VAL_IMMEDIATE_TRIGGER                   6
#define TKDPO2K3K4K_VAL_AC_LINE_TRIGGER                     7

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRIGGER_COUPLING
	parameter Coupling in function Tkdpo2k3k4k_ConfigureTriggerCoupling */

#define TKDPO2K3K4K_VAL_AC                                  0
#define TKDPO2K3K4K_VAL_DC                                  1
#define TKDPO2K3K4K_VAL_HF_REJECT                           3
#define TKDPO2K3K4K_VAL_LF_REJECT                           4
#define TKDPO2K3K4K_VAL_NOISE_REJECT                        5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRIGGER_MODIFIER
	parameter TriggerModifier in function Tkdpo2k3k4k_ConfigureTriggerModifier */

#define TKDPO2K3K4K_VAL_NO_TRIGGER_MOD                      1
#define TKDPO2K3K4K_VAL_AUTO                                2
#define TKDPO2K3K4K_VAL_AUTO_LEVEL                          3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_AC_LINE_TRIGGER_SLOPE
	parameter ACLineSlope in function Tkdpo2k3k4k_ConfigureAcLineTriggerSlope */

#define TKDPO2K3K4K_VAL_AC_LINE_POSITIVE                    1
#define TKDPO2K3K4K_VAL_AC_LINE_NEGATIVE                    2
#define TKDPO2K3K4K_VAL_AC_LINE_EITHER                      3

/*- Defined values for 
	parameter Slope in function Tkdpo2k3k4k_ConfigureEdgeTriggerSource */

#define TKDPO2K3K4K_VAL_NEGATIVE                            0
#define TKDPO2K3K4K_VAL_POSITIVE                            1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GLITCH_POLARITY
	parameter GlitchPolarity in function Tkdpo2k3k4k_ConfigureGlitchTriggerSource */

#define TKDPO2K3K4K_VAL_GLITCH_POSITIVE                     1
#define TKDPO2K3K4K_VAL_GLITCH_NEGATIVE                     2
#define TKDPO2K3K4K_VAL_GLITCH_EITHER                       3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GLITCH_CONDITION
	parameter GlitchCondition in function Tkdpo2k3k4k_ConfigureGlitchTriggerSource */

#define TKDPO2K3K4K_VAL_GLITCH_LESS_THAN                    1
#define TKDPO2K3K4K_VAL_GLITCH_GREATER_THAN                 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_RUNT_POLARITY
	parameter RuntPolarity in function Tkdpo2k3k4k_ConfigureRuntTriggerSource */

#define TKDPO2K3K4K_VAL_RUNT_POSITIVE                       1
#define TKDPO2K3K4K_VAL_RUNT_NEGATIVE                       2
#define TKDPO2K3K4K_VAL_RUNT_EITHER                         3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TV_TRIGGER_SIGNAL_FORMAT
	parameter TVSignalFormat in function Tkdpo2k3k4k_ConfigureTVTriggerSource */

#define TKDPO2K3K4K_VAL_NTSC                                1
#define TKDPO2K3K4K_VAL_PAL                                 2
#define TKDPO2K3K4K_VAL_SECAM                               3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TV_TRIGGER_EVENT
	parameter TVEvent in function Tkdpo2k3k4k_ConfigureTVTriggerSource */

#define TKDPO2K3K4K_VAL_TV_EVENT_FIELD1                     1
#define TKDPO2K3K4K_VAL_TV_EVENT_FIELD2                     2
#define TKDPO2K3K4K_VAL_TV_EVENT_ANY_FIELD                  3
#define TKDPO2K3K4K_VAL_TV_EVENT_ANY_LINE                   4
#define TKDPO2K3K4K_VAL_TV_EVENT_LINE_NUMBER                5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TV_TRIGGER_POLARITY
	parameter TVPolarity in function Tkdpo2k3k4k_ConfigureTVTriggerSource */

#define TKDPO2K3K4K_VAL_TV_POSITIVE                         1
#define TKDPO2K3K4K_VAL_TV_NEGATIVE                         2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_WIDTH_POLARITY
	parameter WidthPolarity in function Tkdpo2k3k4k_ConfigureWidthTriggerSource */

#define TKDPO2K3K4K_VAL_WIDTH_POSITIVE                      1
#define TKDPO2K3K4K_VAL_WIDTH_NEGATIVE                      2
#define TKDPO2K3K4K_VAL_WIDTH_EITHER                        3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_WIDTH_CONDITION
	parameter WidthCondition in function Tkdpo2k3k4k_ConfigureWidthTriggerSource */

#define TKDPO2K3K4K_VAL_WIDTH_WITHIN                        1
#define TKDPO2K3K4K_VAL_WIDTH_OUTSIDE                       2

/*- Defined values for */

#define TKDPO2K3K4K_VAL_MAX_TIME_IMMEDIATE                  0
#define TKDPO2K3K4K_VAL_MAX_TIME_INFINITE                   -1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MODE */

#define TKDPO2K3K4K_VAL_ACQUISITION_MODE_SAMPLE             0
#define TKDPO2K3K4K_VAL_ACQUISITION_MODE_PEAK_DETECT        1
#define TKDPO2K3K4K_VAL_ACQUISITION_MODE_HI_RES             2
#define TKDPO2K3K4K_VAL_ACQUISITION_MODE_AVERAGE            4
#define TKDPO2K3K4K_VAL_ACQUISITION_MODE_ENVELOPE           3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_SOURCE
	attribute TKDPO2K3K4K_ATTR_RS232TX_SOURCE
	attribute TKDPO2K3K4K_ATTR_RS232RX_SOURCE
	parameter ClockSource in function Tkdpo2k3k4k_ConfigureI2C
	parameter DataSource in function Tkdpo2k3k4k_ConfigureI2C
	parameter ClockSource in function Tkdpo2k3k4k_ReadI2C
	parameter DataSource in function Tkdpo2k3k4k_ReadI2C
	parameter ClockSource in function Tkdpo2k3k4k_ConfigureAudioInputs
	parameter DataSource in function Tkdpo2k3k4k_ConfigureAudioInputs
	parameter WordSelectSource in function Tkdpo2k3k4k_ConfigureAudioInputs
	parameter FrameSyncSource in function Tkdpo2k3k4k_ConfigureAudioInputs
	parameter ClockSource in function Tkdpo2k3k4k_ReadAudioInputs
	parameter DataSource in function Tkdpo2k3k4k_ReadAudioInputs
	parameter WordSelectSource in function Tkdpo2k3k4k_ReadAudioInputs
	parameter FrameSyncSource in function Tkdpo2k3k4k_ReadAudioInputs
	parameter Source in function Tkdpo2k3k4k_ConfigureCAN
	parameter Source in function Tkdpo2k3k4k_ReadCAN
	parameter Source in function Tkdpo2k3k4k_ConfigureFlexray
	parameter Source in function Tkdpo2k3k4k_ReadFlexray
	parameter Source in function Tkdpo2k3k4k_ConfigureLIN
	parameter Source in function Tkdpo2k3k4k_ReadLIN
	parameter RXSource in function Tkdpo2k3k4k_ConfigureRS232
	parameter TXSource in function Tkdpo2k3k4k_ConfigureRS232
	parameter RXSource in function Tkdpo2k3k4k_ReadRS232
	parameter TXSource in function Tkdpo2k3k4k_ReadRS232
	parameter DifferentialSource in function Tkdpo2k3k4k_ReadUSB
	parameter DPLUSSource in function Tkdpo2k3k4k_ReadUSB
	parameter DMINUSSource in function Tkdpo2k3k4k_ReadUSB
	parameter DifferentialSource in function Tkdpo2k3k4k_ConfigureUSB
	parameter DPLUSSource in function Tkdpo2k3k4k_ConfigureUSB
	parameter DMINUSSource in function Tkdpo2k3k4k_ConfigureUSB
	parameter Clocksource in function Tkdpo2k3k4k_ConfigureSPI
	parameter DataMISOSource in function Tkdpo2k3k4k_ConfigureSPI
	parameter SlaveSelectSource in function Tkdpo2k3k4k_ConfigureSPI
	parameter DataMOSISource in function Tkdpo2k3k4k_ConfigureSPI
	parameter Clocksource in function Tkdpo2k3k4k_ReadSPI
	parameter DataMISOSource in function Tkdpo2k3k4k_ReadSPI
	parameter SlaveSelectSource in function Tkdpo2k3k4k_ReadSPI
	parameter DataMOSISource in function Tkdpo2k3k4k_ReadSPI
	parameter ParallelSource in function Tkdpo2k3k4k_GetParallelBitSource
	parameter ParallelSource in function Tkdpo2k3k4k_SetParallelBitSource */

#define TKDPO2K3K4K_VAL_BUS_SOURCECH1                       0
#define TKDPO2K3K4K_VAL_BUS_SOURCECH2                       1
#define TKDPO2K3K4K_VAL_BUS_SOURCECH3                       2
#define TKDPO2K3K4K_VAL_BUS_SOURCECH4                       3
#define TKDPO2K3K4K_VAL_BUS_SOURCED0                        4
#define TKDPO2K3K4K_VAL_BUS_SOURCED1                        5
#define TKDPO2K3K4K_VAL_BUS_SOURCED2                        6
#define TKDPO2K3K4K_VAL_BUS_SOURCED3                        7
#define TKDPO2K3K4K_VAL_BUS_SOURCED4                        8
#define TKDPO2K3K4K_VAL_BUS_SOURCED5                        9
#define TKDPO2K3K4K_VAL_BUS_SOURCED6                        10
#define TKDPO2K3K4K_VAL_BUS_SOURCED7                        11
#define TKDPO2K3K4K_VAL_BUS_SOURCED8                        12
#define TKDPO2K3K4K_VAL_BUS_SOURCED9                        13
#define TKDPO2K3K4K_VAL_BUS_SOURCED10                       14
#define TKDPO2K3K4K_VAL_BUS_SOURCED11                       15
#define TKDPO2K3K4K_VAL_BUS_SOURCED12                       16
#define TKDPO2K3K4K_VAL_BUS_SOURCED13                       17
#define TKDPO2K3K4K_VAL_BUS_SOURCED14                       18
#define TKDPO2K3K4K_VAL_BUS_SOURCED15                       19

/*- Defined values for 
	parameter RWInAddress in function Tkdpo2k3k4k_ConfigureI2C
	parameter RWInAddress in function Tkdpo2k3k4k_ReadI2C */

#define TKDPO2K3K4K_VAL_BUSI2CRW_IN_ADDRESSYES              1
#define TKDPO2K3K4K_VAL_BUSI2CRW_IN_ADDRESSNO               0

/*- Defined values for 
	parameter ClockPolarity in function Tkdpo2k3k4k_ConfigureSPI
	parameter ClockPolarity in function Tkdpo2k3k4k_ReadSPI */

#define TKDPO2K3K4K_VAL_BUSSPI_CLOCK_POLARITYRISE           0
#define TKDPO2K3K4K_VAL_BUSSPI_CLOCK_POLARITYFALL           1

/*- Defined values for 
	parameter BitOrder in function Tkdpo2k3k4k_ConfigureAudio
	parameter BitOrder in function Tkdpo2k3k4k_ReadAudio */

#define TKDPO2K3K4K_VAL_BUS_BIT_ORDERLSB                    0
#define TKDPO2K3K4K_VAL_BUS_BIT_ORDERMSB                    1

/*- Defined values for 
	parameter SlaveSelectPolarity in function Tkdpo2k3k4k_ConfigureSPI
	parameter SlaveSelectPolarity in function Tkdpo2k3k4k_ReadSPI */

#define TKDPO2K3K4K_VAL_BUSSPI_SLAVE_SELECT_POLARITYLOW     0
#define TKDPO2K3K4K_VAL_BUSSPI_SLAVE_SELECT_POLARITYHIGH    1

/*- Defined values for 
	parameter DataMISOPolarity in function Tkdpo2k3k4k_ConfigureSPI
	parameter DataMOSIPolarity in function Tkdpo2k3k4k_ConfigureSPI
	parameter DataMISOPolarity in function Tkdpo2k3k4k_ReadSPI
	parameter DataMOSIPolarity in function Tkdpo2k3k4k_ReadSPI */

#define TKDPO2K3K4K_VAL_BUSSPI_DATA_POLARITYLOW             0
#define TKDPO2K3K4K_VAL_BUSSPI_DATA_POLARITYHIGH            1

/*- Defined values for 
	parameter InputPolarity in function Tkdpo2k3k4k_ConfigureRS232
	parameter InputPolarity in function Tkdpo2k3k4k_ReadRS232 */

#define TKDPO2K3K4K_VAL_BUSRS232_POLARITY_NORMAL            0
#define TKDPO2K3K4K_VAL_BUSRS232_POLARITY_INVERTED          1

/*- Defined values for 
	parameter InputParity in function Tkdpo2k3k4k_ConfigureRS232
	parameter InputParity in function Tkdpo2k3k4k_ReadRS232 */

#define TKDPO2K3K4K_VAL_BUSRS232_PARITY_NONE                0
#define TKDPO2K3K4K_VAL_BUSRS232_PARITY_ODD                 1
#define TKDPO2K3K4K_VAL_BUSRS232_PARITY_EVEN                2

/*- Defined values for 
	parameter Probe in function Tkdpo2k3k4k_ReadUSB
	parameter Probe in function Tkdpo2k3k4k_ConfigureUSB */

#define TKDPO2K3K4K_VAL_BUSUSB_PROBE_SINGLE_ENDED           0
#define TKDPO2K3K4K_VAL_BUSUSB_PROBE_DIFFERENTIAL           1

/*- Defined values for 
	parameter Bitrate in function Tkdpo2k3k4k_ReadUSB
	parameter Bitrate in function Tkdpo2k3k4k_ConfigureUSB */

#define TKDPO2K3K4K_VAL_BUSUSB_BITRATE_LOW                  0
#define TKDPO2K3K4K_VAL_BUSUSB_BITRATE_HIGH                 1
#define TKDPO2K3K4K_VAL_BUSUSB_BITRATE_FULL                 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE5
	parameter InputSource in function Tkdpo2k3k4k_GetLowThresholdChannel
	parameter InputSource in function Tkdpo2k3k4k_GetThresholdChannel
	parameter InputSource in function Tkdpo2k3k4k_SetLowThreshholdChannel
	parameter InputSource in function Tkdpo2k3k4k_SetThresholdChannel
	parameter InputSource in function Tkdpo2k3k4k_SetUpperThreshhold
	parameter InputSource in function Tkdpo2k3k4k_GetUpperThreshhold
	parameter Source in function Tkdpo2k3k4k_ConfigureAIndependentParameters
	parameter Source in function Tkdpo2k3k4k_ReadAIndependentParameters
	parameter Source in function Tkdpo2k3k4k_GetBLevel
	parameter Source in function Tkdpo2k3k4k_SetBLevel
	parameter Source in function Tkdpo2k3k4k_ConfigureBIndependentParameters
	parameter Source in function Tkdpo2k3k4k_ReadBIndependentParameters
	parameter Source in function Tkdpo2k3k4k_ConfigureAIndependentParameters2
	parameter Source in function Tkdpo2k3k4k_ReadAIndependentParameters2
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformDigitizedLevel */

#define TKDPO2K3K4K_VAL_CHANNEL1                            0
#define TKDPO2K3K4K_VAL_CHANNEL2                            1
#define TKDPO2K3K4K_VAL_CHANNEL3                            2
#define TKDPO2K3K4K_VAL_CHANNEL4                            3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE
	parameter BusType in function Tkdpo2k3k4k_Configure11 */

#define TKDPO2K3K4K_VAL_BUS_TYPEPARALLEL                    0
#define TKDPO2K3K4K_VAL_BUS_TYPEI2C                         1
#define TKDPO2K3K4K_VAL_BUS_TYPESPI                         2
#define TKDPO2K3K4K_VAL_BUS_TYPERS232                       3
#define TKDPO2K3K4K_VAL_BUS_TYPEUSB                         4
#define TKDPO2K3K4K_VAL_BUS_TYPE_AUDIO                      5
#define TKDPO2K3K4K_VAL_BUS_TYPECAN                         6
#define TKDPO2K3K4K_VAL_BUS_TYPELIN                         7

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STATE2 */

#define TKDPO2K3K4K_VAL_BUS_STATEOFF                        0
#define TKDPO2K3K4K_VAL_BUS_STATEON                         1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DISPLAY_TYPE */

#define TKDPO2K3K4K_VAL_BUS_DISPLAY_TYPEBUS                 0
#define TKDPO2K3K4K_VAL_BUS_DISPLAY_TYPEBOTH                1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DISPLAY_FORMAT */

#define TKDPO2K3K4K_VAL_BUS_DISPLAY_FORMAT_BINARY           0
#define TKDPO2K3K4K_VAL_BUS_DISPLAY_FORMAT_HEXADECIMAL      1
#define TKDPO2K3K4K_VAL_BUS_DISPLAY_FORMATASCII             2
#define TKDPO2K3K4K_VAL_BUS_DISPLAY_FORMAT_MIXED            3
#define TKDPO2K3K4K_VAL_BUS_DISPLAY_FORMAT_MIXED2           4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_PARALLEL_BUS_CLOCK_EDGE */

#define TKDPO2K3K4K_VAL_BUS_PARALLEL_BUS_CLOCK_EDGE_EITHER  0
#define TKDPO2K3K4K_VAL_BUS_PARALLEL_BUS_CLOCK_EDGE_RISING  1
#define TKDPO2K3K4K_VAL_BUS_PARALLEL_BUS_CLOCK_EDGE_FALLING 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_RS232_DELIMITER */

#define TKDPO2K3K4K_VAL_BUSRS232_DELIMITERCR                0
#define TKDPO2K3K4K_VAL_BUSRS232_DELIMITERXFF               1
#define TKDPO2K3K4K_VAL_BUSRS232_DELIMITERLF                2
#define TKDPO2K3K4K_VAL_BUSRS232_DELIMITER_NULL             3
#define TKDPO2K3K4K_VAL_BUSRS232_DELIMITER_SPACE            4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_RS232_DISPLAY_MODE */

#define TKDPO2K3K4K_VAL_BUSRS232_DISPLAY_MODE_FRAME         0
#define TKDPO2K3K4K_VAL_BUSRS232_DISPLAY_MODE_PACKET        1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SPI_FRAMING */

#define TKDPO2K3K4K_VAL_BUSSPI_FRAMINGSS                    0
#define TKDPO2K3K4K_VAL_BUSSPI_FRAMING_IDLETIME             1

/*- Defined values for 
	parameter Type in function Tkdpo2k3k4k_ConfigureAudioInputs
	parameter Type in function Tkdpo2k3k4k_ReadAudioInputs */

#define TKDPO2K3K4K_VAL_AUDIO_BUS_TYPEI2S                   0
#define TKDPO2K3K4K_VAL_AUDIO_BUS_TYPELJ                    1
#define TKDPO2K3K4K_VAL_AUDIO_BUS_TYPERJ                    2
#define TKDPO2K3K4K_VAL_AUDIO_BUS_TYPETDM                   3

/*- Defined values for 
	parameter ClockPolarity in function Tkdpo2k3k4k_ConfigureAudio
	parameter FrameSyncPolarity in function Tkdpo2k3k4k_ConfigureAudio
	parameter ClockPolarity in function Tkdpo2k3k4k_ReadAudio
	parameter FrameSyncPolarity in function Tkdpo2k3k4k_ReadAudio */

#define TKDPO2K3K4K_VAL_AUDIO_POLARITY_FALL                 0
#define TKDPO2K3K4K_VAL_AUDIO_POLARITY_RISE                 1

/*- Defined values for 
	parameter DataPolarity in function Tkdpo2k3k4k_ConfigureAudio
	parameter WordSelectPolarity in function Tkdpo2k3k4k_ConfigureAudio
	parameter DataPolarity in function Tkdpo2k3k4k_ReadAudio
	parameter WordSelectPolarity in function Tkdpo2k3k4k_ReadAudio */

#define TKDPO2K3K4K_VAL_AUDIO_DATA_POLARITY_NORMAL          0
#define TKDPO2K3K4K_VAL_AUDIO_DATA_POLARITY_INVERTED        1

/*- Defined values for 
	parameter DisplayFormat in function Tkdpo2k3k4k_ConfigureAudio
	parameter DisplayFormat in function Tkdpo2k3k4k_ReadAudio */

#define TKDPO2K3K4K_VAL_DISPLAY_FORMAT_BINARY               0
#define TKDPO2K3K4K_VAL_DISPLAY_FORMAT_HEXADECIMAL          1
#define TKDPO2K3K4K_VAL_DISPLAY_FORMAT_SIGNED_DECIMAL       2

/*- Defined values for 
	parameter SignalType in function Tkdpo2k3k4k_ConfigureCAN
	parameter SignalType in function Tkdpo2k3k4k_ReadCAN */

#define TKDPO2K3K4K_VAL_CAN_PROBE_TYPECANH                  0
#define TKDPO2K3K4K_VAL_CAN_PROBE_TYPECANL                  1
#define TKDPO2K3K4K_VAL_CAN_PROBE_TYPERX                    2
#define TKDPO2K3K4K_VAL_CAN_PROBE_TYPETX                    3
#define TKDPO2K3K4K_VAL_CAN_PROBE_TYPE_DIFFERENTIAL         4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CAN_BIT_RATE_ENUM */

#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE10K                 0
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE20K                 1
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE33K                 2
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE37K                 3
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE50K                 4
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE62K                 5
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE83K                 6
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE92K                 7
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE100K                8
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE125K                9
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE250K                10
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE500K                11
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE800K                12
#define TKDPO2K3K4K_VAL_CAN_BIT_RATERATE1M                  13

/*- Defined values for 
	parameter Standard in function Tkdpo2k3k4k_ConfigureFlexray
	parameter Standard in function Tkdpo2k3k4k_ReadFlexray */

#define TKDPO2K3K4K_VAL_FLEXRAY_SIGNALBDIFFBP               0
#define TKDPO2K3K4K_VAL_FLEXRAY_SIGNALBM                    1
#define TKDPO2K3K4K_VAL_FLEXRAY_SIGNALTXRX                  2

/*- Defined values for 
	parameter IDFormat in function Tkdpo2k3k4k_ConfigureFlexray
	parameter IDFormat in function Tkdpo2k3k4k_ReadFlexray */

#define TKDPO2K3K4K_VAL_FLEXRAY_CHANNELA                    0
#define TKDPO2K3K4K_VAL_FLEXRAY_CHANNELB                    1

/*- Defined values for 
	parameter IDFormat in function Tkdpo2k3k4k_ConfigureLIN
	parameter IDFormat in function Tkdpo2k3k4k_ReadLIN */

#define TKDPO2K3K4K_VAL_LINID_FORMAT_NO_PARITY              0
#define TKDPO2K3K4K_VAL_LINID_FORMAT_PARITY                 1

/*- Defined values for 
	parameter Polarity in function Tkdpo2k3k4k_ConfigureLIN
	parameter Polarity in function Tkdpo2k3k4k_ReadLIN */

#define TKDPO2K3K4K_VAL_LIN_POLARITY_NORMAL                 0
#define TKDPO2K3K4K_VAL_LIN_POLARITY_INVERTED               1

/*- Defined values for 
	parameter Standard in function Tkdpo2k3k4k_ConfigureLIN
	parameter Standard in function Tkdpo2k3k4k_ReadLIN */

#define TKDPO2K3K4K_VAL_LIN_STANDARDV1X                     0
#define TKDPO2K3K4K_VAL_LIN_STANDARDV2X                     1
#define TKDPO2K3K4K_VAL_LIN_STANDARD_MIXED                  2

/*- Defined values for 
	parameter InputSource in function Tkdpo2k3k4k_SetThresholdDigitalChannel
	parameter InputSource in function Tkdpo2k3k4k_GetThresholdDigitalChannel */

#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD0                   0
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD1                   1
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD2                   2
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD3                   3
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD4                   4
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD5                   5
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD6                   6
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD7                   7
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD8                   8
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD9                   9
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD10                  10
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD11                  11
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD12                  12
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD13                  13
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD14                  14
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNELD15                  15

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRACK_MODE */

#define TKDPO2K3K4K_VAL_CURSOR_TRACK_MODE_INDEPENDENT       0
#define TKDPO2K3K4K_VAL_CURSOR_TRACK_MODE_TRACK             1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE2 */

#define TKDPO2K3K4K_VAL_CURSOR_TYPEOFF                      0
#define TKDPO2K3K4K_VAL_CURSOR_TYPE_SCREEN                  1
#define TKDPO2K3K4K_VAL_CURSOR_TYPE_WAVEFORM                2

/*- Defined values for 
	parameter MeasurementScale in function Tkdpo2k3k4k_SetMeasurementScale
	parameter MeasurementScale in function Tkdpo2k3k4k_SetMeasurementScale2 */

#define TKDPO2K3K4K_VAL_CURSOR_MEASUREMENT_SCALE_CURRENT        0
#define TKDPO2K3K4K_VAL_CURSOR_MEASUREMENT_SCALE_HALF_GRATICULE 1
#define TKDPO2K3K4K_VAL_CURSOR_MEASUREMENT_SCALE_FIVE_DIVISIONS 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_UNITS */

#define TKDPO2K3K4K_VAL_CURSORH_BARS_UNITS_BASE             0
#define TKDPO2K3K4K_VAL_CURSORH_BARS_UNITS_PERCENT          1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_UNITS2 */

#define TKDPO2K3K4K_VAL_CURSORV_BARS_UNITS_SECONDS          0
#define TKDPO2K3K4K_VAL_CURSORV_BARS_UNITS_HERTZ            1
#define TKDPO2K3K4K_VAL_CURSORV_BARS_UNITS_DEGREES          2
#define TKDPO2K3K4K_VAL_CURSORV_BARS_UNITS_PERCENT          3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_READOUT */

#define TKDPO2K3K4K_VAL_CURSORXY_READOUT_RECTANGULAR        0
#define TKDPO2K3K4K_VAL_CURSORXY_READOUT_POLAR_COORDINATES  1
#define TKDPO2K3K4K_VAL_CURSORXY_READOUT_PRODUCT            2
#define TKDPO2K3K4K_VAL_CURSORXY_READOUT_RATIO              3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CLOCK_STATE */

#define TKDPO2K3K4K_VAL_DISPLAY_CLOCK_STATE_DATA_ONLY       0
#define TKDPO2K3K4K_VAL_DISPLAY_CLOCK_STATE_TIME_ONLY       1
#define TKDPO2K3K4K_VAL_DISPLAY_CLOCK_STATE_ON              2
#define TKDPO2K3K4K_VAL_DISPLAY_CLOCK_STATE_OFF             3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_BACK_LIGHT_INTENSITY */

#define TKDPO2K3K4K_VAL_DISPLAY_BACK_LIGHT_INTENSITY_LOW    0
#define TKDPO2K3K4K_VAL_DISPLAY_BACK_LIGHT_INTENSITY_MEDIUM 1
#define TKDPO2K3K4K_VAL_DISPLAY_BACK_LIGHT_INTENSITY_HIGH   2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GRATICULE_STYLE */

#define TKDPO2K3K4K_VAL_DISPLAY_GRATICULE_CROSS_HAIR        0
#define TKDPO2K3K4K_VAL_DISPLAY_GRATICULE_FRAME             1
#define TKDPO2K3K4K_VAL_DISPLAY_GRATICULE_FULL              2
#define TKDPO2K3K4K_VAL_DISPLAY_GRATICULE_GRID              3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_FORMAT */

#define TKDPO2K3K4K_VAL_DISPLAY_DISPLAY_FORMATYT            1
#define TKDPO2K3K4K_VAL_DISPLAY_DISPLAY_FORMATXY            0

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_PERSISTENCE_ENUM */

#define TKDPO2K3K4K_VAL_DISPLAY_PERSISTENCE_CLEAR           0
#define TKDPO2K3K4K_VAL_DISPLAY_PERSISTENCE_AUTO            1
#define TKDPO2K3K4K_VAL_DISPLAY_PERSISTENCE_MINIMUM         2
#define TKDPO2K3K4K_VAL_DISPLAY_PERSISTENCE_INFINITE        3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_LAYOUT */

#define TKDPO2K3K4K_VAL_PRINT_LAYOUT_PORTRAIT               0
#define TKDPO2K3K4K_VAL_PRINT_LAYOUT_LANDSCAPE              1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MODE2
	parameter Mode in function Tkdpo2k3k4k_Configure
	parameter Mode in function Tkdpo2k3k4k_Read */

#define TKDPO2K3K4K_VAL_HISTOGRAM_MODE_OFF                  0
#define TKDPO2K3K4K_VAL_HISTOGRAM_MODE_HORIZONTAL           1
#define TKDPO2K3K4K_VAL_HISTOGRAM_MODE_VERTICAL             2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE9
	attribute TKDPO2K3K4K_ATTR_SOURCE10
	attribute TKDPO2K3K4K_ATTR_SELECTED_SOURCE
	attribute TKDPO2K3K4K_ATTR_SOURCE1
	attribute TKDPO2K3K4K_ATTR_SOURCE8
	parameter Source1 in function Tkdpo2k3k4k_ReadDelay2
	parameter Source2 in function Tkdpo2k3k4k_ReadDelay2
	parameter Source in function Tkdpo2k3k4k_Configure15
	parameter Source1 in function Tkdpo2k3k4k_ConfigureDelay3
	parameter Source2 in function Tkdpo2k3k4k_ConfigureDelay3
	parameter Source1 in function Tkdpo2k3k4k_ConfigurePhase2
	parameter Source2 in function Tkdpo2k3k4k_ConfigurePhase2
	parameter Source1 in function Tkdpo2k3k4k_Read9
	parameter Source2 in function Tkdpo2k3k4k_Read9
	parameter Source1 in function Tkdpo2k3k4k_ReadValue2
	parameter Source2 in function Tkdpo2k3k4k_ReadValue2
	parameter WaveformSource in function Tkdpo2k3k4k_CopyWaveformToClipboard
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveform2
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformHighResolution
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformMinMax
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformStartStop
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformWithinCursor
	parameter WaveformSource in function Tkdpo2k3k4k_FetchWaveformWithinZoom
	parameter WaveformSource in function Tkdpo2k3k4k_ReadWaveform2
	parameter WaveformSource in function Tkdpo2k3k4k_ReadWaveformMinMax
	parameter WaveformSource in function Tkdpo2k3k4k_SaveWaveformToFile2
	parameter Source in function Tkdpo2k3k4k_Configure14
	parameter Source1 in function Tkdpo2k3k4k_ConfigureDelay2
	parameter Source2 in function Tkdpo2k3k4k_ConfigureDelay2
	parameter Source1 in function Tkdpo2k3k4k_ConfigurePhase
	parameter Source2 in function Tkdpo2k3k4k_ConfigurePhase
	parameter Source1 in function Tkdpo2k3k4k_Read8
	parameter Source2 in function Tkdpo2k3k4k_Read8
	parameter Source1 in function Tkdpo2k3k4k_ReadValue
	parameter Source2 in function Tkdpo2k3k4k_ReadValue */

#define TKDPO2K3K4K_VAL_SOURCECH1                           0
#define TKDPO2K3K4K_VAL_SOURCECH2                           1
#define TKDPO2K3K4K_VAL_SOURCECH3                           2
#define TKDPO2K3K4K_VAL_SOURCECH4                           3
#define TKDPO2K3K4K_VAL_SOURCEMATH                          4
#define TKDPO2K3K4K_VAL_SOURCEREF1                          5
#define TKDPO2K3K4K_VAL_SOURCEREF2                          6
#define TKDPO2K3K4K_VAL_SOURCEREF3                          7
#define TKDPO2K3K4K_VAL_SOURCEREF4                          8
#define TKDPO2K3K4K_VAL_SOURCED0                            9
#define TKDPO2K3K4K_VAL_SOURCED1                            10
#define TKDPO2K3K4K_VAL_SOURCED2                            11
#define TKDPO2K3K4K_VAL_SOURCED3                            12
#define TKDPO2K3K4K_VAL_SOURCED4                            13
#define TKDPO2K3K4K_VAL_SOURCED5                            14
#define TKDPO2K3K4K_VAL_SOURCED6                            15
#define TKDPO2K3K4K_VAL_SOURCED7                            16
#define TKDPO2K3K4K_VAL_SOURCED8                            17
#define TKDPO2K3K4K_VAL_SOURCED9                            18
#define TKDPO2K3K4K_VAL_SOURCED10                           19
#define TKDPO2K3K4K_VAL_SOURCED11                           20
#define TKDPO2K3K4K_VAL_SOURCED12                           21
#define TKDPO2K3K4K_VAL_SOURCED13                           22
#define TKDPO2K3K4K_VAL_SOURCED14                           23
#define TKDPO2K3K4K_VAL_SOURCED15                           24
#define TKDPO2K3K4K_VAL_SOURCERF_AMPLITUDE                  25
#define TKDPO2K3K4K_VAL_SOURCERF_FREQUENCY                  26
#define TKDPO2K3K4K_VAL_SOURCERF_PHASE                      27

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DISPLAY */

#define TKDPO2K3K4K_VAL_HISTOGRAM_DISPLAY_LOG               0
#define TKDPO2K3K4K_VAL_HISTOGRAM_DISPLAY_LINEAR            1

/*- Defined values for 
	parameter Mark in function Tkdpo2k3k4k_CreateMark
	parameter Mark in function Tkdpo2k3k4k_DeleteMark */

#define TKDPO2K3K4K_VAL_MARKCH1                             0
#define TKDPO2K3K4K_VAL_MARKCH2                             1
#define TKDPO2K3K4K_VAL_MARKCH3                             2
#define TKDPO2K3K4K_VAL_MARKCH4                             3
#define TKDPO2K3K4K_VAL_MARKMATH                            4
#define TKDPO2K3K4K_VAL_MARKREF1                            5
#define TKDPO2K3K4K_VAL_MARKREF2                            6
#define TKDPO2K3K4K_VAL_MARKREF3                            7
#define TKDPO2K3K4K_VAL_MARKREF4                            8
#define TKDPO2K3K4K_VAL_MARKB1                              9
#define TKDPO2K3K4K_VAL_MARKB2                              10
#define TKDPO2K3K4K_VAL_MARKB3                              11
#define TKDPO2K3K4K_VAL_MARKB4                              12
#define TKDPO2K3K4K_VAL_MARK_DIGITAL                        13
#define TKDPO2K3K4K_VAL_MARK_COLUMN                         14
#define TKDPO2K3K4K_VAL_MARKRF_AMPLITUDE                    15
#define TKDPO2K3K4K_VAL_MARKRF_FREQUENCY                    16
#define TKDPO2K3K4K_VAL_MARKRF_PHASE                        17

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE3
	parameter Type in function Tkdpo2k3k4k_Configure3
	parameter Type in function Tkdpo2k3k4k_Read3 */

#define TKDPO2K3K4K_VAL_MATH_TYPE_DUAL                      0
#define TKDPO2K3K4K_VAL_MATH_TYPEFFT                        1
#define TKDPO2K3K4K_VAL_MATH_TYPE_ADVANCED                  2
#define TKDPO2K3K4K_VAL_MATH_TYPE_SPECTRUM                  3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_WINDOW */

#define TKDPO2K3K4K_VAL_SPECTRAL_WINDOW_RECTANGULAR         0
#define TKDPO2K3K4K_VAL_SPECTRAL_WINDOW_HAMMING             1
#define TKDPO2K3K4K_VAL_SPECTRAL_WINDOW_HANNING             2
#define TKDPO2K3K4K_VAL_SPECTRAL_WINDOW_BLACKMANHARRIS      3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MAGNITUDE_UNITS */

#define TKDPO2K3K4K_VAL_SPECTRAL_MAG_UNIT_LINEAR            0
#define TKDPO2K3K4K_VAL_SPECTRAL_MAG_UNITDB                 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DELAY_DIRECTION2
	attribute TKDPO2K3K4K_ATTR_DELAY_DIRECTION
	parameter Direction in function Tkdpo2k3k4k_ReadDelay2
	parameter Direction in function Tkdpo2k3k4k_ConfigureDelay3
	parameter Direction in function Tkdpo2k3k4k_Read9
	parameter Direction in function Tkdpo2k3k4k_ReadValue2
	parameter Direction in function Tkdpo2k3k4k_ConfigureDelay2
	parameter Direction in function Tkdpo2k3k4k_Read8
	parameter Direction in function Tkdpo2k3k4k_ReadValue */

#define TKDPO2K3K4K_VAL_MEASUREMENT_DELAY_DIRECTION_BACKWARD 0
#define TKDPO2K3K4K_VAL_MEASUREMENT_DELAY_DIRECTION_FORWARD  1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DELAY_EDGE3
	attribute TKDPO2K3K4K_ATTR_DELAY_EDGE4
	attribute TKDPO2K3K4K_ATTR_DELAY_EDGE1
	attribute TKDPO2K3K4K_ATTR_DELAY_EDGE2
	parameter Edge1 in function Tkdpo2k3k4k_ReadDelay2
	parameter Edge2 in function Tkdpo2k3k4k_ReadDelay2
	parameter Edge1 in function Tkdpo2k3k4k_ConfigureDelay3
	parameter Edge2 in function Tkdpo2k3k4k_ConfigureDelay3
	parameter Edge1 in function Tkdpo2k3k4k_Read9
	parameter Edge2 in function Tkdpo2k3k4k_Read9
	parameter Edge1 in function Tkdpo2k3k4k_ReadValue2
	parameter Edge2 in function Tkdpo2k3k4k_ReadValue2
	parameter Edge1 in function Tkdpo2k3k4k_ConfigureDelay2
	parameter Edge2 in function Tkdpo2k3k4k_ConfigureDelay2
	parameter Edge1 in function Tkdpo2k3k4k_Read8
	parameter Edge2 in function Tkdpo2k3k4k_Read8
	parameter Edge1 in function Tkdpo2k3k4k_ReadValue
	parameter Edge2 in function Tkdpo2k3k4k_ReadValue */

#define TKDPO2K3K4K_VAL_MEASUREMENT_EDGE_FALL               0
#define TKDPO2K3K4K_VAL_MEASUREMENT_EDGE_RISE               1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STATE3 */

#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATEOFF      0
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS1   1
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS2   2
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS3   3
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS4   4
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS5   5
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS6   6
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS7   7
#define TKDPO2K3K4K_VAL_MEASUREMENT_INDICATOR_STATE_MEAS8   8

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SAVE_BUTTON_TYPE */

#define TKDPO2K3K4K_VAL_SAVE_BUTTON_TYPE_IMAGE              0
#define TKDPO2K3K4K_VAL_SAVE_BUTTON_TYPE_WAVEFORM           1
#define TKDPO2K3K4K_VAL_SAVE_BUTTON_TYPE_SETUP              2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_IMAGE_FORMAT
	parameter ImageFormat in function Tkdpo2k3k4k_SaveImage */

#define TKDPO2K3K4K_VAL_IMAGE_FORMATPNG                     0
#define TKDPO2K3K4K_VAL_IMAGE_FORMATBMP                     1
#define TKDPO2K3K4K_VAL_IMAGE_FORMATTIFF                    2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_IMAGE_LAYOUT
	parameter ImageLayout in function Tkdpo2k3k4k_SaveImage */

#define TKDPO2K3K4K_VAL_IMAGE_LAYOUT_LANDSCAPE              0
#define TKDPO2K3K4K_VAL_IMAGE_LAYOUT_PORTRAIT               1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GATING
	attribute TKDPO2K3K4K_ATTR_WAVEFORM_GATING */

#define TKDPO2K3K4K_VAL_MEASUREMENT_GATING_OFF              0
#define TKDPO2K3K4K_VAL_MEASUREMENT_GATING_SCREEN           1
#define TKDPO2K3K4K_VAL_MEASUREMENT_GATING_CURSOR           3

/*- Defined values for 
	parameter Type in function Tkdpo2k3k4k_Copy */

#define TKDPO2K3K4K_VAL_SEARCH_COPY_SEARCH_TRIGGER_TO_SEARCH 0
#define TKDPO2K3K4K_VAL_SEARCH_COPY_SEARCH_SEARCH_TO_TRIGGER 1

/*- Defined values for */

#define TKDPO2K3K4K_VAL_SEARCH_SOURCECH1                    0
#define TKDPO2K3K4K_VAL_SEARCH_SOURCECH2                    1
#define TKDPO2K3K4K_VAL_SEARCH_SOURCECH3                    2
#define TKDPO2K3K4K_VAL_SEARCH_SOURCECH4                    3
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE_MATH                  4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CONDITION3
	parameter When in function Tkdpo2k3k4k_ConfigureRunt
	parameter When in function Tkdpo2k3k4k_ReadRunt */

#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_CONDITION_LESSTHAN     0
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_CONDITION_MORETHAN     1
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_CONDITION_EQUAL        2
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_CONDITION_UNEQUAL      3
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_CONDITION_OCCURS       4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_POLARITY
	parameter Polarity in function Tkdpo2k3k4k_ConfigureTransition
	parameter Polarity in function Tkdpo2k3k4k_ReadTransition */

#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_POLARITY_NEGATIVE     0
#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_POLARITY_POSITIVE     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CONDITION4
	parameter When in function Tkdpo2k3k4k_ConfigureTransition
	parameter When in function Tkdpo2k3k4k_ReadTransition */

#define TKDPO2K3K4K_VAL_TRIGGER_TRANSITION_CONDITION_SLOWER  0
#define TKDPO2K3K4K_VAL_TRIGGER_TRANSITION_CONDITION_FASTER  1
#define TKDPO2K3K4K_VAL_TRIGGER_TRANSITION_CONDITION_EQUAL   2
#define TKDPO2K3K4K_VAL_TRIGGER_TRANSITION_CONDITION_UNEQUAL 3

/*- Defined values for 
	parameter Input in function Tkdpo2k3k4k_ConfigureLogicSearchSource
	parameter PatternInput in function Tkdpo2k3k4k_ConfigureLogicSearchSource
	parameter Input in function Tkdpo2k3k4k_ReadLogicSearchSource
	parameter PatternInput in function Tkdpo2k3k4k_ReadLogicSearchSource
	parameter Input in function Tkdpo2k3k4k_ConfigureSource
	parameter Input in function Tkdpo2k3k4k_ReadSource
	parameter Input in function Tkdpo2k3k4k_ConfigureRF
	parameter Input in function Tkdpo2k3k4k_ReadRF */

#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_INPUT_CHANNEL_HIGH    0
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_INPUT_CHANNEL_LOW     1
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_INPUT_CHANNELX        2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CONDITION
	parameter Condition in function Tkdpo2k3k4k_ConfigureLogicPattern
	parameter Condition in function Tkdpo2k3k4k_ReadLogicPattern
	parameter Condition in function Tkdpo2k3k4k_ConfigurePattern
	parameter Condition in function Tkdpo2k3k4k_ReadPattern */

#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_TRUE      0
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_FALSE     1
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_LESSTHAN  2
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_MORETHAN  3
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_EQUAL     4
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_CONDITION_UNEQUAL   5

/*- Defined values for 
	parameter Source in function Tkdpo2k3k4k_ConfigureLogicSearchSource
	parameter Source in function Tkdpo2k3k4k_ReadLogicSearchSource
	parameter Source in function Tkdpo2k3k4k_ConfigureRunt
	parameter Source in function Tkdpo2k3k4k_ConfigureTransition
	parameter Source in function Tkdpo2k3k4k_ReadRunt
	parameter Source in function Tkdpo2k3k4k_ReadTransition */

#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2CH1                   0
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2CH2                   1
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2CH3                   2
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2CH4                   3
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2_MATH                 4
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2REF1                  5
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2REF2                  6
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2REF3                  7
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2REF4                  8
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2RF_AMPLITUDE          9
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2RF_FREQUENCY          10
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE2RF_PHASE              11

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_FUNCTION
	parameter LogicOperatorType in function Tkdpo2k3k4k_ConfigurePattern
	parameter LogicOperatorType in function Tkdpo2k3k4k_ReadPattern */

#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_OPERATOR_TYPEAND      0
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_OPERATOR_TYPENAND     1
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_OPERATOR_TYPENOR      2
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_OPERATOR_TYPEOR       3

/*- Defined values for 
	parameter Clocksource in function Tkdpo2k3k4k_ReadSetupHoldSearchSource
	parameter DataSource in function Tkdpo2k3k4k_ReadSetupHoldSearchSource
	parameter Source in function Tkdpo2k3k4k_ConfigureEdge
	parameter Source in function Tkdpo2k3k4k_ConfigurePulseWidth
	parameter Source in function Tkdpo2k3k4k_ConfigureSetupHold
	parameter ClockSource in function Tkdpo2k3k4k_ConfigureSetupHold
	parameter Source in function Tkdpo2k3k4k_ReadEdge
	parameter Source in function Tkdpo2k3k4k_ReadPulseWidth
	parameter Source in function Tkdpo2k3k4k_ReadSetupHold
	parameter Clocksource in function Tkdpo2k3k4k_ReadSetupHold */

#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3CH1                   0
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3CH2                   1
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3CH3                   2
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3CH4                   3
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3_MATH                 4
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3REF1                  5
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3REF2                  6
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3REF3                  7
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3REF4                  8
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D0                    9
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D1                    10
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D2                    11
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D3                    12
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D4                    13
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D5                    14
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D6                    15
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D7                    16
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D8                    17
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D9                    18
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D10                   19
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D11                   20
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D12                   21
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D13                   22
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D14                   23
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3D15                   24
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3NONE                  25
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3RF_AMPLITUDE          26
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3RF_FREQUENCY          27
#define TKDPO2K3K4K_VAL_SEARCH_SOURCE3RF_PHASE              28

/*- Defined values for 
	parameter EdgeType in function Tkdpo2k3k4k_ConfigureLogicClock
	parameter EdgeType in function Tkdpo2k3k4k_ReadLogicClock
	parameter EdgeType in function Tkdpo2k3k4k_ConfigureClock
	parameter EdgeType in function Tkdpo2k3k4k_ReadClock */

#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_EDGE_TYPE_FALL   0
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_EDGE_TYPE_RISE   1
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_EDGE_TYPE_EITHER 2

/*- Defined values for 
	parameter Source in function Tkdpo2k3k4k_ConfigureLogicClock
	parameter Source in function Tkdpo2k3k4k_ReadLogicClock
	parameter Source in function Tkdpo2k3k4k_ConfigureClock
	parameter Source in function Tkdpo2k3k4k_ReadClock */

#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCECH1       0
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCECH2       1
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCECH3       2
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCECH4       3
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCE_MATH     4
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCEREF1      5
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCEREF2      6
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCEREF3      7
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCEREF4      8
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED0        9
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED1        10
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED2        11
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED3        12
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED4        13
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED5        14
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED6        15
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED7        16
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED8        17
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED9        18
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED10       19
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED11       20
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED12       21
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED13       22
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED14       23
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCED15       24
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCE_NONE     25
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC_CLOCK_SOURCERF        26

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SEARCH_TYPE */

#define TKDPO2K3K4K_VAL_SEARCH_TYPE_EDGE                    0
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_SETHOLD                 1
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_PULSEWIDTH              2
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_RUNT                    3
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_TRANSITION              4
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_LOGIC                   5
#define TKDPO2K3K4K_VAL_SEARCH_TYPE_BUS                     6

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_BUS_SOURCE2
	attribute TKDPO2K3K4K_ATTR_BUS_SOURCE
	parameter BusSource in function Tkdpo2k3k4k_Configure11
	parameter BusSource in function Tkdpo2k3k4k_GetParallelData2
	parameter BusSource in function Tkdpo2k3k4k_SetParallelData2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition9
	parameter BusSource in function Tkdpo2k3k4k_SetCondition9
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue4
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue4
	parameter BusSource in function Tkdpo2k3k4k_GetDataOffset3
	parameter BusSource in function Tkdpo2k3k4k_SetDataOffset3
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier5
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier5
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue6
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue6
	parameter BusSource in function Tkdpo2k3k4k_GetDataWord2
	parameter BusSource in function Tkdpo2k3k4k_SetDataWord2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition10
	parameter BusSource in function Tkdpo2k3k4k_SetCondition10
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue5
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue5
	parameter BusSource in function Tkdpo2k3k4k_GetDataOffset4
	parameter BusSource in function Tkdpo2k3k4k_SetDataOffset4
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier6
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier6
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue7
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue7
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize5
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize5
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue4
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue4
	parameter BusSource in function Tkdpo2k3k4k_GetAddressType3
	parameter BusSource in function Tkdpo2k3k4k_SetAddressType3
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode4
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode4
	parameter BusSource in function Tkdpo2k3k4k_GetEndPointValue3
	parameter BusSource in function Tkdpo2k3k4k_SetEndPointValue3
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType4
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType4
	parameter BusSource in function Tkdpo2k3k4k_GetHandshakeType2
	parameter BusSource in function Tkdpo2k3k4k_SetHandshakeType2
	parameter BusSource in function Tkdpo2k3k4k_GetSofFrameNumber2
	parameter BusSource in function Tkdpo2k3k4k_SetSofFrameNumber2
	parameter BusSource in function Tkdpo2k3k4k_GetSpecialType2
	parameter BusSource in function Tkdpo2k3k4k_SetSpecialType2
	parameter BusSource in function Tkdpo2k3k4k_GetTokenType2
	parameter BusSource in function Tkdpo2k3k4k_SetTokenType2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition11
	parameter BusSource in function Tkdpo2k3k4k_SetCondition11
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataValue3
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataValue3
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataSize3
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataSize3
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataValue3
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataValue3
	parameter BusSource in function Tkdpo2k3k4k_GetCondition12
	parameter BusSource in function Tkdpo2k3k4k_SetCondition12
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataSize2
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataSize2
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataValue4
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataValue4
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataSize4
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataSize4
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataValue4
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataValue4
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue8
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue8
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier7
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier7
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue6
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue6
	parameter BusSource in function Tkdpo2k3k4k_GetCondition13
	parameter BusSource in function Tkdpo2k3k4k_SetCondition13
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize6
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize6
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType5
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType5
	parameter BusSource in function Tkdpo2k3k4k_GetIdentifierValue2
	parameter BusSource in function Tkdpo2k3k4k_SetIdentifierValue2
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize7
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize7
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue9
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue9
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue5
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue5
	parameter BusSource in function Tkdpo2k3k4k_GetDataDirection3
	parameter BusSource in function Tkdpo2k3k4k_SetDataDirection3
	parameter BusSource in function Tkdpo2k3k4k_GetCondition14
	parameter BusSource in function Tkdpo2k3k4k_SetCondition14
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode5
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode5
	parameter BusSource in function Tkdpo2k3k4k_GetCondition15
	parameter BusSource in function Tkdpo2k3k4k_SetCondition15
	parameter BusSource in function Tkdpo2k3k4k_GetEofType2
	parameter BusSource in function Tkdpo2k3k4k_SetEofType2
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType6
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType6
	parameter BusSource in function Tkdpo2k3k4k_GetFrameType3
	parameter BusSource in function Tkdpo2k3k4k_SetFrameType3
	parameter BusSource in function Tkdpo2k3k4k_ConfigureCycleCount2
	parameter BusSource in function Tkdpo2k3k4k_ReadCycleCount2
	parameter BusSource in function Tkdpo2k3k4k_ConfigureData2
	parameter BusSource in function Tkdpo2k3k4k_ReadData2
	parameter BusSource in function Tkdpo2k3k4k_ConfigureFrameID2
	parameter BusSource in function Tkdpo2k3k4k_ReadFrameID2
	parameter BusSource in function Tkdpo2k3k4k_ConfigureHeader2
	parameter BusSource in function Tkdpo2k3k4k_ReadHeader2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition16
	parameter BusSource in function Tkdpo2k3k4k_SetCondition16
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier8
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier8
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue10
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue10
	parameter BusSource in function Tkdpo2k3k4k_GetDataDirection4
	parameter BusSource in function Tkdpo2k3k4k_SetDataDirection4
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize8
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize8
	parameter BusSource in function Tkdpo2k3k4k_GetFrameType4
	parameter BusSource in function Tkdpo2k3k4k_SetFrameType4
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode6
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode6
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue6
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue6
	parameter BusSource in function Tkdpo2k3k4k_Configure4
	parameter BusSource in function Tkdpo2k3k4k_GetParallelData
	parameter BusSource in function Tkdpo2k3k4k_SetParallelData
	parameter BusSource in function Tkdpo2k3k4k_GetCondition
	parameter BusSource in function Tkdpo2k3k4k_SetCondition
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue
	parameter BusSource in function Tkdpo2k3k4k_GetDataOffset
	parameter BusSource in function Tkdpo2k3k4k_SetDataOffset
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue
	parameter BusSource in function Tkdpo2k3k4k_GetDataWord
	parameter BusSource in function Tkdpo2k3k4k_SetDataWord
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize
	parameter BusSource in function Tkdpo2k3k4k_GetCondition2
	parameter BusSource in function Tkdpo2k3k4k_SetCondition2
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier2
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier2
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue2
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue2
	parameter BusSource in function Tkdpo2k3k4k_GetDataDirection
	parameter BusSource in function Tkdpo2k3k4k_SetDataDirection
	parameter BusSource in function Tkdpo2k3k4k_GetFrameType
	parameter BusSource in function Tkdpo2k3k4k_SetFrameType
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue
	parameter BusSource in function Tkdpo2k3k4k_GetCondition3
	parameter BusSource in function Tkdpo2k3k4k_SetCondition3
	parameter BusSource in function Tkdpo2k3k4k_ConfigureCycleCount
	parameter BusSource in function Tkdpo2k3k4k_ReadCycleCount
	parameter BusSource in function Tkdpo2k3k4k_ConfigureData
	parameter BusSource in function Tkdpo2k3k4k_ReadData
	parameter BusSource in function Tkdpo2k3k4k_ConfigureFrameID
	parameter BusSource in function Tkdpo2k3k4k_ReadFrameID
	parameter BusSource in function Tkdpo2k3k4k_ConfigureHeader
	parameter BusSource in function Tkdpo2k3k4k_ReadHeader
	parameter BusSource in function Tkdpo2k3k4k_GetEofType
	parameter BusSource in function Tkdpo2k3k4k_SetEofType
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType
	parameter BusSource in function Tkdpo2k3k4k_GetFrameType2
	parameter BusSource in function Tkdpo2k3k4k_SetFrameType2
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize2
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize2
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue3
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue3
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue2
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue2
	parameter BusSource in function Tkdpo2k3k4k_GetDataDirection2
	parameter BusSource in function Tkdpo2k3k4k_SetDataDirection2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition4
	parameter BusSource in function Tkdpo2k3k4k_SetCondition4
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode2
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode2
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue4
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue4
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier3
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier3
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue2
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition5
	parameter BusSource in function Tkdpo2k3k4k_SetCondition5
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize3
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize3
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType2
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType2
	parameter BusSource in function Tkdpo2k3k4k_GetIdentifierValue
	parameter BusSource in function Tkdpo2k3k4k_SetIdentifierValue
	parameter BusSource in function Tkdpo2k3k4k_GetCondition6
	parameter BusSource in function Tkdpo2k3k4k_SetCondition6
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataSize
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataSize
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataValue
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataValue
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataSize
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataSize
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataValue
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataValue
	parameter BusSource in function Tkdpo2k3k4k_GetCondition7
	parameter BusSource in function Tkdpo2k3k4k_SetCondition7
	parameter BusSource in function Tkdpo2k3k4k_GetRxDataValue2
	parameter BusSource in function Tkdpo2k3k4k_SetRxDataValue2
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataSize2
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataSize2
	parameter BusSource in function Tkdpo2k3k4k_GetTxDataValue2
	parameter BusSource in function Tkdpo2k3k4k_SetTxDataValue2
	parameter BusSource in function Tkdpo2k3k4k_GetCondition8
	parameter BusSource in function Tkdpo2k3k4k_SetCondition8
	parameter BusSource in function Tkdpo2k3k4k_GetDataHighValue3
	parameter BusSource in function Tkdpo2k3k4k_SetDataHighValue3
	parameter BusSource in function Tkdpo2k3k4k_GetDataOffset2
	parameter BusSource in function Tkdpo2k3k4k_SetDataOffset2
	parameter BusSource in function Tkdpo2k3k4k_GetDataQualifier4
	parameter BusSource in function Tkdpo2k3k4k_SetDataQualifier4
	parameter BusSource in function Tkdpo2k3k4k_GetDataValue5
	parameter BusSource in function Tkdpo2k3k4k_SetDataValue5
	parameter BusSource in function Tkdpo2k3k4k_GetDataSize4
	parameter BusSource in function Tkdpo2k3k4k_SetDataSize4
	parameter BusSource in function Tkdpo2k3k4k_GetAddressValue3
	parameter BusSource in function Tkdpo2k3k4k_SetAddressValue3
	parameter BusSource in function Tkdpo2k3k4k_GetAddressType2
	parameter BusSource in function Tkdpo2k3k4k_SetAddressType2
	parameter BusSource in function Tkdpo2k3k4k_GetAddressMode3
	parameter BusSource in function Tkdpo2k3k4k_SetAddressMode3
	parameter BusSource in function Tkdpo2k3k4k_GetEndPointValue2
	parameter BusSource in function Tkdpo2k3k4k_SetEndPointValue2
	parameter BusSource in function Tkdpo2k3k4k_GetErrorType3
	parameter BusSource in function Tkdpo2k3k4k_SetErrorType3
	parameter BusSource in function Tkdpo2k3k4k_GetHandshakeType
	parameter BusSource in function Tkdpo2k3k4k_SetHandshakeType
	parameter BusSource in function Tkdpo2k3k4k_GetSofFrameNumber
	parameter BusSource in function Tkdpo2k3k4k_SetSofFrameNumber
	parameter BusSource in function Tkdpo2k3k4k_GetSpecialType
	parameter BusSource in function Tkdpo2k3k4k_SetSpecialType
	parameter BusSource in function Tkdpo2k3k4k_GetTokenType
	parameter BusSource in function Tkdpo2k3k4k_SetTokenType */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_SOURCEB1                  0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_SOURCEB2                  1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_SOURCEB3                  2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_SOURCEB4                  3

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition9
	parameter Condition in function Tkdpo2k3k4k_SetCondition9
	parameter Condition in function Tkdpo2k3k4k_GetCondition
	parameter Condition in function Tkdpo2k3k4k_SetCondition */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_CONDITIONSOF        0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_CONDITION_DATA      1

/*- Defined values for 
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier5
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier5
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_LESSTHAN   0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_MORETHAN   1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_EQUAL      2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_UNEQUAL    3
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_LESS_EQUAL 4
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_MORE_EQUAL 5
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_INRANGE    6
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_QUALIFIER_OUTRANGE   7

/*- Defined values for 
	parameter DataWord in function Tkdpo2k3k4k_GetDataWord2
	parameter DataWord in function Tkdpo2k3k4k_SetDataWord2
	parameter DataWord in function Tkdpo2k3k4k_GetDataWord
	parameter DataWord in function Tkdpo2k3k4k_SetDataWord */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_ALIGNMENT_EITHER 0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_ALIGNMENT_LEFT   1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_AUDIO_DATA_ALIGNMENT_RIGHT  2

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition16
	parameter Condition in function Tkdpo2k3k4k_SetCondition16
	parameter Condition in function Tkdpo2k3k4k_GetCondition2
	parameter Condition in function Tkdpo2k3k4k_SetCondition2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITIONSOF              0
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITION_FRAME_TYPE      1
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITION_IDENTIFIER      2
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITION_DATA            3
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITION_IDENTIFIER_DATA 4
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITIONEOF              5
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_CONDITIONACK_MISS         6

/*- Defined values for 
	parameter DataDirection in function Tkdpo2k3k4k_GetDataDirection4
	parameter DataDirection in function Tkdpo2k3k4k_SetDataDirection4
	parameter DataDirection in function Tkdpo2k3k4k_GetDataDirection
	parameter DataDirection in function Tkdpo2k3k4k_SetDataDirection */

#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_DATA_DIRECTIONREAD     0
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_DATA_DIRECTIONWRITE    1
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_DATA_DIRECTIONNOCARE   2

/*- Defined values for 
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier8
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier8
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier2
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_LESSTHAN     0
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_MORETHAN     1
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_EQUAL        2
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_UNEQUAL      3
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_LESS_EQUAL   4
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_QUALIFIER_MORE_EQUAL   5

/*- Defined values for 
	parameter FrameType in function Tkdpo2k3k4k_GetFrameType4
	parameter FrameType in function Tkdpo2k3k4k_SetFrameType4
	parameter FrameType in function Tkdpo2k3k4k_GetFrameType
	parameter FrameType in function Tkdpo2k3k4k_SetFrameType */

#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_FRAME_TYPE_DATA        0
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_FRAME_TYPE_REMOTE      1
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_FRAME_TYPE_ERROR       2
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_FRAME_TYPE_OVERLOAD    3

/*- Defined values for 
	parameter AddressMode in function Tkdpo2k3k4k_GetAddressMode6
	parameter AddressMode in function Tkdpo2k3k4k_SetAddressMode6
	parameter AddressMode in function Tkdpo2k3k4k_GetAddressMode
	parameter AddressMode in function Tkdpo2k3k4k_SetAddressMode */

#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_ADDRESS_MODE_STANDARD  0
#define TKDPO2K3K4K_VAL_TRIGA_BUSCAN_ADDRESS_MODE_EXTENDED  1

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition15
	parameter Condition in function Tkdpo2k3k4k_SetCondition15
	parameter Condition in function Tkdpo2k3k4k_GetCondition3
	parameter Condition in function Tkdpo2k3k4k_SetCondition3 */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITIONSOF              0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_FRAME_TYPE      1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_DATA            2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_IDENTIFIER_DATA 3
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITIONEOF              4
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_CYCLECOUNT      5
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_HEADER          6
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CONDITION_ERROR           7

/*- Defined values for 
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureCycleCount2
	parameter Qualifier in function Tkdpo2k3k4k_ReadCycleCount2
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureData2
	parameter Qualifier in function Tkdpo2k3k4k_ReadData2
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureFrameID2
	parameter Qualifier in function Tkdpo2k3k4k_ReadFrameID2
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureCycleCount
	parameter Qualifier in function Tkdpo2k3k4k_ReadCycleCount
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureData
	parameter Qualifier in function Tkdpo2k3k4k_ReadData
	parameter Qualifier in function Tkdpo2k3k4k_ConfigureFrameID
	parameter Qualifier in function Tkdpo2k3k4k_ReadFrameID */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_LESSTHAN   0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_MORETHAN   1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_EQUAL      2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_UNEQUAL    3
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_LESS_EQUAL 4
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_MORE_EQUAL 5
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_INRANGE    6
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_CYCLE_COUNT_OUTRANGE   7

/*- Defined values for 
	parameter EOFType in function Tkdpo2k3k4k_GetEofType2
	parameter EOFType in function Tkdpo2k3k4k_SetEofType2
	parameter EOFType in function Tkdpo2k3k4k_GetEofType
	parameter EOFType in function Tkdpo2k3k4k_SetEofType */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAYEOF_TYPE_STATIC    0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAYEOF_TYPE_DYNAMIC   1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAYEOF_TYPE_ANY       2

/*- Defined values for 
	parameter FrameType in function Tkdpo2k3k4k_GetFrameType3
	parameter FrameType in function Tkdpo2k3k4k_SetFrameType3
	parameter FrameType in function Tkdpo2k3k4k_GetFrameType2
	parameter FrameType in function Tkdpo2k3k4k_SetFrameType2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_FRAME_TYPE_NORMAL  0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_FRAME_TYPE_PAYLOAD 1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_FRAME_TYPE_NULL    2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_FRAME_TYPE_SYNC    3
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_FRAME_TYPE_STARTUP 4

/*- Defined values for 
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType6
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType6
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType */

#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPECRC_HEADER     0
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPECRC_TRAILER    1
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPESYNC_FRAME     2
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPESTAR_TUPNOSYNC 3
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPENULLFR_STATIC  4
#define TKDPO2K3K4K_VAL_TRIGA_BUS_FLEXRAY_ERROR_TYPENULLFR_DYNAMIC 5

/*- Defined values for 
	parameter DataDirection in function Tkdpo2k3k4k_GetDataDirection3
	parameter DataDirection in function Tkdpo2k3k4k_SetDataDirection3
	parameter DataDirection in function Tkdpo2k3k4k_GetDataDirection2
	parameter DataDirection in function Tkdpo2k3k4k_SetDataDirection2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_DATA_DIRECTIONREAD     0
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_DATA_DIRECTIONWRITE    1
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_DATA_DIRECTIONNOCARE   2

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition14
	parameter Condition in function Tkdpo2k3k4k_SetCondition14
	parameter Condition in function Tkdpo2k3k4k_GetCondition4
	parameter Condition in function Tkdpo2k3k4k_SetCondition4 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONSTART2       0
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONSTOP2        1
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONREPEATSTART2 2
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONACKMISS2     3
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONADDRESS2     4
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONDATA2        5
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_TRIG_CONDITIONADDRANDDATA2 6

/*- Defined values for 
	parameter AddressMode in function Tkdpo2k3k4k_GetAddressMode5
	parameter AddressMode in function Tkdpo2k3k4k_SetAddressMode5
	parameter AddressMode in function Tkdpo2k3k4k_GetAddressMode2
	parameter AddressMode in function Tkdpo2k3k4k_SetAddressMode2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_ADDR_MODEADDR8         0
#define TKDPO2K3K4K_VAL_TRIGA_BUSI2C_ADDR_MODEADDR102       1

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition13
	parameter Condition in function Tkdpo2k3k4k_SetCondition13
	parameter Condition in function Tkdpo2k3k4k_GetCondition5
	parameter Condition in function Tkdpo2k3k4k_SetCondition5 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONSYNC_FIELD    0
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONI_DENTIFIER   1
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONDATA          2
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONIDANDDATA     3
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONWAK_EUP       4
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONSLEEP         5
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_CONDITIONERROR         6

/*- Defined values for 
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier7
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier7
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier3
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier3 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_LESSTHAN     0
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_MORETHAN     1
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_EQUAL        2
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_UNEQUAL      3
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_LESS_EQUAL   4
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_MORE_EQUAL   5
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_INRANGE      6
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_QUALIFIER_OUTRANGE     7

/*- Defined values for 
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType5
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType5
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType2
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPESYNC         0
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPEPA_RITY      1
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPEC_HECKSUM    2
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPEHEA_DERTIME  3
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPERES_PTIME    4
#define TKDPO2K3K4K_VAL_TRIGA_BUSLIN_ERROR_TYPEFRA_METIME   5

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition12
	parameter Condition in function Tkdpo2k3k4k_SetCondition12
	parameter Condition in function Tkdpo2k3k4k_GetCondition6
	parameter Condition in function Tkdpo2k3k4k_SetCondition6 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONRX_DATA         0
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONRXEOP           1
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONRX_PARITY_ERROR 2
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONRX_START        3
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONTX_DATA         4
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONTXEOP           5
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONTX_PARITY_ERROR 6
#define TKDPO2K3K4K_VAL_TRIGA_BUSRS232_CONDITIONTX_START        7

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition11
	parameter Condition in function Tkdpo2k3k4k_SetCondition11
	parameter Condition in function Tkdpo2k3k4k_GetCondition7
	parameter Condition in function Tkdpo2k3k4k_SetCondition7 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSSPI_CONDITIONSS            0
#define TKDPO2K3K4K_VAL_TRIGA_BUSSPI_CONDITIONMISO          1
#define TKDPO2K3K4K_VAL_TRIGA_BUSSPI_CONDITIONMOSI          2
#define TKDPO2K3K4K_VAL_TRIGA_BUSSPI_CONDITIONMISOMOSI      3

/*- Defined values for 
	parameter SpecialType in function Tkdpo2k3k4k_GetSpecialType2
	parameter SpecialType in function Tkdpo2k3k4k_SetSpecialType2
	parameter SpecialType in function Tkdpo2k3k4k_GetSpecialType
	parameter SpecialType in function Tkdpo2k3k4k_SetSpecialType */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_SPECIAL_TYPEANY2       0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_SPECIALPRE2            1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_SPECIAL_TYPERESERVED2  2

/*- Defined values for 
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier6
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier6
	parameter DataQualifier in function Tkdpo2k3k4k_GetDataQualifier4
	parameter DataQualifier in function Tkdpo2k3k4k_SetDataQualifier4 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIEREQUAL2        0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERINRANGE2      1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERLESSEQUAL2    2
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERMOREEQUAL2    3
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIEROUTRANGE2     4
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERUNEQUAL2      5
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERLESSTHAN2     6
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_QUALIFIERMORETHAN2     7

/*- Defined values for 
	parameter HandshakeType in function Tkdpo2k3k4k_GetHandshakeType2
	parameter HandshakeType in function Tkdpo2k3k4k_SetHandshakeType2
	parameter HandshakeType in function Tkdpo2k3k4k_GetHandshakeType
	parameter HandshakeType in function Tkdpo2k3k4k_SetHandshakeType */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_HANDSHAKE_TYPEACK2     0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_HANDSHAKE_TYPEANY2     1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_HANDSHAKE_TYPENAK2     2
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_HANDSHAKE_TYPESTALL2   3

/*- Defined values for 
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType4
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType4
	parameter ErrorType in function Tkdpo2k3k4k_GetErrorType3
	parameter ErrorType in function Tkdpo2k3k4k_SetErrorType3 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBERR_TYPE_BIT_STUFFING2  0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBERR_TYPECRC162          1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBERR_TYPECRC6            2
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBERR_TYPEPID2            3

/*- Defined values for 
	parameter AddressType in function Tkdpo2k3k4k_GetAddressType3
	parameter AddressType in function Tkdpo2k3k4k_SetAddressType3
	parameter AddressType in function Tkdpo2k3k4k_GetAddressType2
	parameter AddressType in function Tkdpo2k3k4k_SetAddressType2 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBDATA_TYPEDATA3          0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBDATA_TYPEDATA4          1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSBDATA_TYPE_ANY2          2

/*- Defined values for 
	parameter Condition in function Tkdpo2k3k4k_GetCondition10
	parameter Condition in function Tkdpo2k3k4k_SetCondition10
	parameter Condition in function Tkdpo2k3k4k_GetCondition8
	parameter Condition in function Tkdpo2k3k4k_SetCondition8 */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONSYNC             0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONRESET            1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONSUSPEND          2
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONRESUME           3
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONEOP              4
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONTOKEN_PACKET     5
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONDATA_PACKET      6
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONHANDSHAKE_PACKET 7
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONSPECIAL_PACKET   8
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_CONDITIONER_ROR           9

/*- Defined values for 
	parameter TokenType in function Tkdpo2k3k4k_GetTokenType2
	parameter TokenType in function Tkdpo2k3k4k_SetTokenType2
	parameter TokenType in function Tkdpo2k3k4k_GetTokenType
	parameter TokenType in function Tkdpo2k3k4k_SetTokenType */

#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_TOKEN_TYPEANY          0
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_TOKEN_TYPESOF          1
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_TOKEN_TYPEOUT          2
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_TOKEN_TYPEIN           3
#define TKDPO2K3K4K_VAL_TRIGA_BUSUSB_TOKEN_TYPESETUP        4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE2
	attribute TKDPO2K3K4K_ATTR_DATA_SOURCE
	attribute TKDPO2K3K4K_ATTR_CLOCK_SOURCE
	attribute TKDPO2K3K4K_ATTR_SOURCE7
	parameter Source in function Tkdpo2k3k4k_Read4
	parameter Source in function Tkdpo2k3k4k_Configure16
	parameter Source in function Tkdpo2k3k4k_Configure10
	parameter Source in function Tkdpo2k3k4k_Read5 */

#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2CH1                  0
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2CH2                  1
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2CH3                  2
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2CH4                  3
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D0                   4
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D1                   5
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D2                   6
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D3                   7
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D4                   8
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D5                   9
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D6                   10
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D7                   11
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D8                   12
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D9                   13
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D10                  14
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D11                  15
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D12                  16
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D13                  17
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D14                  18
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2D15                  19
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2EXT                  20
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2_LINE                21
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2AUX                  22
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCE2RF                   23

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_COUPLING
	attribute TKDPO2K3K4K_ATTR_COUPLING2
	parameter Coupling in function Tkdpo2k3k4k_Read4
	parameter Coupling in function Tkdpo2k3k4k_Configure16
	parameter Coupling in function Tkdpo2k3k4k_Configure10
	parameter Coupling in function Tkdpo2k3k4k_Read5 */

#define TKDPO2K3K4K_VAL_TRIGGER_EDGE_COUPLINGDC             0
#define TKDPO2K3K4K_VAL_TRIGGER_EDGE_COUPLINGHF_REJ         1
#define TKDPO2K3K4K_VAL_TRIGGER_EDGE_COUPLINGLF_REJ         2
#define TKDPO2K3K4K_VAL_TRIGGER_EDGE_COUPLINGNOIS_EREJ      3
#define TKDPO2K3K4K_VAL_TRIGGER_EDGE_COUPLINGAC             4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_LEVEL_ENUM
	attribute TKDPO2K3K4K_ATTR_LEVEL_ENUM2 */

#define TKDPO2K3K4K_VAL_TRIGGER_LEVELECL                    0
#define TKDPO2K3K4K_VAL_TRIGGER_LEVELTTL                    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE6
	parameter Source in function Tkdpo2k3k4k_ConfigureSource
	parameter Source in function Tkdpo2k3k4k_ReadSource */

#define TKDPO2K3K4K_VAL_TRIGGER_SOURCECH1                   0
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCECH2                   1
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCECH3                   2
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCECH4                   3
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED0                    4
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED1                    5
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED2                    6
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED3                    7
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED4                    8
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED5                    9
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED6                    10
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED7                    11
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED8                    12
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED9                    13
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED10                   14
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED11                   15
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED12                   16
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED13                   17
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED14                   18
#define TKDPO2K3K4K_VAL_TRIGGER_SOURCED15                   19

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_POLARITY4 */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_POLARITY_NEGATIVE     0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_POLARITY_POSITIVE     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STANDARD */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_STANDARDNT_SC         0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_STANDARDPAL           1
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_STANDARDSECAM         2
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_STANDARDCUS_TOM       3
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_STANDARDH_DTV         4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRIGGER_ON */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_FIELDSODD             0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_FIELDSEVEN            1
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_FIELDSALL_FIELDS      2
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_FIELDSALL_LINES       3
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_FIELDSNUME_RIC        4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CUSTOM_FORMAT */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_FORMATINTERL_ACED  0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_FORMATPRO_GRESSIVE 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CUSTOM_SCAN */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_SCANRATE15K    0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_SCANRATE20K    1
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_SCANRATE25K    2
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_SCANRATE35K    3
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO_CUSTOM_SCANRATE50K    4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_HD_TV_FORMAT */

#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD1080P24   0
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD720P60    1
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD480P60    2
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD1080I50   3
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD1080P25   4
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD1080I60   5
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEOHD_TV_FORMATHD1080PSF24 6

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_BUS_TYPE
	parameter BusType in function Tkdpo2k3k4k_Configure4 */

#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPEI2C                 0
#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPESPI                 1
#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPECAN                 2
#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPERS232C              3
#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPEPA_RALLEL           4
#define TKDPO2K3K4K_VAL_TRIGGER_BUS_TYPEUSB                 5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MODE4 */

#define TKDPO2K3K4K_VAL_TRIGGER_MODEAUTO                    0
#define TKDPO2K3K4K_VAL_TRIGGER_MODENOR_MAL                 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TRIGGERB_BY */

#define TKDPO2K3K4K_VAL_TRIGGERB_BY_EVENTS                  0
#define TKDPO2K3K4K_VAL_TRIGGERB_BY_TIME                    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_PROBE_SIGNAL */

#define TKDPO2K3K4K_VAL_CHANNEL_PROBE_SIGNALPASS            0
#define TKDPO2K3K4K_VAL_CHANNEL_PROBE_SIGNALBYPASS          1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_COUPLING3
	parameter Coupling in function Tkdpo2k3k4k_Configure13
	parameter Coupling in function Tkdpo2k3k4k_Read7 */

#define TKDPO2K3K4K_VAL_CHANNEL_COUPLINGAC                  0
#define TKDPO2K3K4K_VAL_CHANNEL_COUPLINGDC                  1
#define TKDPO2K3K4K_VAL_CHANNEL_COUPLINGGND                 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TERMINATION_ENUM
	parameter Termination in function Tkdpo2k3k4k_Configure13
	parameter Termination in function Tkdpo2k3k4k_Read7 */

#define TKDPO2K3K4K_VAL_CHANNEL_TERMINATION_FIFTY           0
#define TKDPO2K3K4K_VAL_CHANNEL_TERMINATION_MEGA            1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_BANDWIDTH_ENUM
	parameter Bandwidth in function Tkdpo2k3k4k_Configure13 */

#define TKDPO2K3K4K_VAL_CHANNEL_BANDWIDTH_TWENTY            0
#define TKDPO2K3K4K_VAL_CHANNEL_BANDWIDTH_TWO_FIFTY         1
#define TKDPO2K3K4K_VAL_CHANNEL_BANDWIDTH_FULL              2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_AUX_IN_TEKVPI_PROBE_DEGAUSS_STATE
	attribute TKDPO2K3K4K_ATTR_TEKVPI_PROBE_DEGAUSS_STATE */

#define TKDPO2K3K4K_VAL_PROBE_DEGAUSS_STATENEEDED           0
#define TKDPO2K3K4K_VAL_PROBE_DEGAUSS_STATERECOMMENDED      1
#define TKDPO2K3K4K_VAL_PROBE_DEGAUSS_STATEPASSED           2
#define TKDPO2K3K4K_VAL_PROBE_DEGAUSS_STATEFAILED           3
#define TKDPO2K3K4K_VAL_PROBE_DEGAUSS_STATERUNNING          4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DATA_SOURCE2
	parameter Source in function Tkdpo2k3k4k_SaveWaveformToFile
	parameter Source in function Tkdpo2k3k4k_SaveWaveformToReference */

#define TKDPO2K3K4K_VAL_DATA_SOURCECH1                      0
#define TKDPO2K3K4K_VAL_DATA_SOURCECH2                      1
#define TKDPO2K3K4K_VAL_DATA_SOURCECH3                      2
#define TKDPO2K3K4K_VAL_DATA_SOURCECH4                      3
#define TKDPO2K3K4K_VAL_DATA_SOURCE_MATH                    4
#define TKDPO2K3K4K_VAL_DATA_SOURCEREF1                     5
#define TKDPO2K3K4K_VAL_DATA_SOURCEREF2                     6
#define TKDPO2K3K4K_VAL_DATA_SOURCEREF3                     7
#define TKDPO2K3K4K_VAL_DATA_SOURCEREF4                     8
#define TKDPO2K3K4K_VAL_DATA_SOURCED0                       9
#define TKDPO2K3K4K_VAL_DATA_SOURCED1                       10
#define TKDPO2K3K4K_VAL_DATA_SOURCED2                       11
#define TKDPO2K3K4K_VAL_DATA_SOURCED3                       12
#define TKDPO2K3K4K_VAL_DATA_SOURCED4                       13
#define TKDPO2K3K4K_VAL_DATA_SOURCED5                       14
#define TKDPO2K3K4K_VAL_DATA_SOURCED6                       15
#define TKDPO2K3K4K_VAL_DATA_SOURCED7                       16
#define TKDPO2K3K4K_VAL_DATA_SOURCED8                       17
#define TKDPO2K3K4K_VAL_DATA_SOURCED9                       18
#define TKDPO2K3K4K_VAL_DATA_SOURCED10                      19
#define TKDPO2K3K4K_VAL_DATA_SOURCED11                      20
#define TKDPO2K3K4K_VAL_DATA_SOURCED12                      21
#define TKDPO2K3K4K_VAL_DATA_SOURCED13                      22
#define TKDPO2K3K4K_VAL_DATA_SOURCED14                      23
#define TKDPO2K3K4K_VAL_DATA_SOURCED15                      24
#define TKDPO2K3K4K_VAL_DATA_SOURCE_DIGITAL                 25
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_AM_PLITUDE            26
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_FRE_QUENCY            27
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_PHA_SE                28
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_NOR_MAL               29
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_AV_ERAGE              30
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_MAX_HOLD              31
#define TKDPO2K3K4K_VAL_DATA_SOURCERF_MIN_HOLD              32

/*- Defined values for 
	parameter FileFormat in function Tkdpo2k3k4k_SaveWaveformToFile2 */

#define TKDPO2K3K4K_VAL_WAVEFORM_FILE_FORMAT_WITHOUT_SCALE_FACTOR 0
#define TKDPO2K3K4K_VAL_WAVEFORM_FILE_FORMAT_WITH_SCALE_FACTOR    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SLOPE
	attribute TKDPO2K3K4K_ATTR_CLOCK_EDGE
	attribute TKDPO2K3K4K_ATTR_SLOPE2
	parameter Slope in function Tkdpo2k3k4k_ConfigureEdge
	parameter ClockEdge in function Tkdpo2k3k4k_ConfigureSetupHold
	parameter Slope in function Tkdpo2k3k4k_ReadEdge
	parameter ClockEdge in function Tkdpo2k3k4k_ReadSetupHold
	parameter Slope in function Tkdpo2k3k4k_Read4
	parameter Slope in function Tkdpo2k3k4k_Configure16
	parameter Slope in function Tkdpo2k3k4k_Configure10
	parameter Slope in function Tkdpo2k3k4k_Read5 */

#define TKDPO2K3K4K_VAL_TRIGGER_SLOPE_RISE                  1
#define TKDPO2K3K4K_VAL_TRIGGER_SLOPE_FALL                  0

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE3 */

#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCECH1              0
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCECH2              1
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCECH3              2
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCECH4              3
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED0               4
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED1               5
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED2               6
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED3               7
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED4               8
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED5               9
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED6               10
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED7               11
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED8               12
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED9               13
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED10              14
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED11              15
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED12              16
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED13              17
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED14              18
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCED15              19
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCELINE             20
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCEEXT              21
#define TKDPO2K3K4K_VAL_TIGGER_PULSE_SOURCERF               22

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CONDITION2
	parameter Condition in function Tkdpo2k3k4k_ConfigurePulseWidth
	parameter Condition in function Tkdpo2k3k4k_ReadPulseWidth */

#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_WIDTH_CONDITIONLES_STHAN 0
#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_WIDTH_CONDITIONMOR_ETHAN 1
#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_WIDTH_CONDITIONE_QUAL    2
#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_WIDTH_CONDITIONUNE_QUAL  3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_POLARITY2
	attribute TKDPO2K3K4K_ATTR_POLARITY3
	parameter Polarity in function Tkdpo2k3k4k_ConfigureRunt
	parameter Polarity in function Tkdpo2k3k4k_ReadRunt */

#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_POLARITYEI_THER        0
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_POLARITYNE_GATIVE      1
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT_POLARITYPO_SITIVE      2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SAMPLING_MODE */

#define TKDPO2K3K4K_VAL_ACQUISITION_SAMPLING_MODERT         0
#define TKDPO2K3K4K_VAL_ACQUISITION_SAMPLING_MODEET         1
#define TKDPO2K3K4K_VAL_ACQUISITION_SAMPLING_MODEIT         2

/*- Defined values for 
	parameter BitOrder in function Tkdpo2k3k4k_ConfigureSPI
	parameter BitOrder in function Tkdpo2k3k4k_ReadSPI */

#define TKDPO2K3K4K_VAL_BUSSPI_BIT_ORDERLSB                 0
#define TKDPO2K3K4K_VAL_BUSSPI_BIT_ORDERMSB                 1

/*- Defined values for 
	parameter Calibration in function Tkdpo2k3k4k_ReadProbeDetails */

#define TKDPO2K3K4K_VAL_CHANNEL_CALIBRATION_PASS            0
#define TKDPO2K3K4K_VAL_CHANNEL_CALIBRATION_INITIALIZED     1
#define TKDPO2K3K4K_VAL_CHANNEL_CALIBRATION_RUNNING         2
#define TKDPO2K3K4K_VAL_CHANNEL_CALIBRATION_FAIL            3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STATE5 */

#define TKDPO2K3K4K_VAL_DIGITAL_CHANNEL_STATEON             0
#define TKDPO2K3K4K_VAL_DIGITAL_CHANNEL_STATEOFF            1

/*- Defined values for 
	parameter Mark in function Tkdpo2k3k4k_MoveZoomToMark */

#define TKDPO2K3K4K_VAL_MARK_MOVE_ZOOM_TO_MARKNEXT          0
#define TKDPO2K3K4K_VAL_MARK_MOVE_ZOOM_TO_MARKPREVIOUS      1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE5
	attribute TKDPO2K3K4K_ATTR_TYPE4
	parameter Type in function Tkdpo2k3k4k_Configure15
	parameter Type in function Tkdpo2k3k4k_Read9
	parameter Type in function Tkdpo2k3k4k_ReadValue2
	parameter Type in function Tkdpo2k3k4k_Configure14
	parameter Type in function Tkdpo2k3k4k_Read8
	parameter Type in function Tkdpo2k3k4k_ReadValue */

#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_RISE               0
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_FALL               1
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_FREQUENCY          2
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_PERIOD             3
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPERMS                 4
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_PK2_PK             5
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_MAXIMUM            6
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_MINIMUM            7
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_HIGH               8
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_LOW                9
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_MEAN               10
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEN_WIDTH             11
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEP_WIDTH             12
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEN_DUTY              13
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEP_DUTY              14
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_AMPLITUDE          15
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPECRMS                16
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEC_MEAN              17
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEP_OVER_SHOOT        18
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEN_OVER_SHOOT        19
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_AREA               20
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_BURST              21
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEC_AREA              22
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_DELAY              23
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_PHASE              24
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_WAVEFORMS          25
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_HITS               26
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_PEAK_HITS          27
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_MEDIAN             28
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_STD_DEV            29
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_SIGMA1             30
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_SIGMA2             31
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPE_SIGMA3             32
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEN_EDGE_COUNT        33
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEN_PULSE_COUNT       34
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEP_EDGE_COUNT        35
#define TKDPO2K3K4K_VAL_MEASUREMENT_TYPEP_PULSE_COUNT       36

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_METHOD
	parameter Method in function Tkdpo2k3k4k_ConfigureReferenceLevel
	parameter Method in function Tkdpo2k3k4k_ReadReferenceLevel */

#define TKDPO2K3K4K_VAL_MEASUREMENT_METHOD_HISTOGRAM        0
#define TKDPO2K3K4K_VAL_MEASUREMENT_METHOD_MIN_MAX          1
#define TKDPO2K3K4K_VAL_MEASUREMENT_METHOD_AUTO             2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_REFERENCE_LEVEL_UNIT
	parameter Unit in function Tkdpo2k3k4k_ConfigureReferenceLevel
	parameter Unit in function Tkdpo2k3k4k_ReadReferenceLevel */

#define TKDPO2K3K4K_VAL_MEASUREMENT_UNIT_ABSOLUTE           0
#define TKDPO2K3K4K_VAL_MEASUREMENT_UNIT_PERCENT            1

/*- Defined values for 
	parameter Location in function Tkdpo2k3k4k_RecallSetupFromMemory
	parameter Location in function Tkdpo2k3k4k_SaveSetupToMemory */

#define TKDPO2K3K4K_VAL_MEMORY_LOCATION1                    1
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION2                    2
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION3                    3
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION4                    4
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION5                    5
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION6                    6
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION7                    7
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION8                    8
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION9                    9
#define TKDPO2K3K4K_VAL_MEMORY_LOCATION10                   10

/*- Defined values for 
	parameter RefMemory in function Tkdpo2k3k4k_RecallWaveformFromFile
	parameter RefMemory in function Tkdpo2k3k4k_SaveWaveformToReference
	parameter WaveformReference in function Tkdpo2k3k4k_WriteWaveformToReference */

#define TKDPO2K3K4K_VAL_REFERENCE1                          0
#define TKDPO2K3K4K_VAL_REFERENCE2                          1
#define TKDPO2K3K4K_VAL_REFERENCE3                          2
#define TKDPO2K3K4K_VAL_REFERENCE4                          3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SAVE_WAVE_FORM_FILE_FORMAT
	parameter FileFormat in function Tkdpo2k3k4k_SaveAllWaveformsToFile */

#define TKDPO2K3K4K_VAL_SAVE_WAVEFORM_FILE_FORMAT_INTERNAL     0
#define TKDPO2K3K4K_VAL_SAVE_WAVEFORM_FILE_FORMAT_SPREAD_SHEET 3

/*- Defined values for 
	parameter PatternType in function Tkdpo2k3k4k_ConfigureLogicPattern
	parameter PatternType in function Tkdpo2k3k4k_ReadLogicPattern */

#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_TYPEAND             0
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_TYPENAND            1
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_TYPENOR             2
#define TKDPO2K3K4K_VAL_TRIGGER_PATTERN_TYPEOR              3

/*- Defined values for 
	parameter Polarity in function Tkdpo2k3k4k_ConfigurePulseWidth
	parameter Polarity in function Tkdpo2k3k4k_ReadPulseWidth */

#define TKDPO2K3K4K_VAL_TRIGGER_WIDTH_POLARITY_POSITIVE     1
#define TKDPO2K3K4K_VAL_TRIGGER_WIDTH_POLARITY_NEGATIVE     2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STATE7 */

#define TKDPO2K3K4K_VAL_SEARCH_STATEON                      0
#define TKDPO2K3K4K_VAL_SEARCH_STATEOFF                     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE6 */

#define TKDPO2K3K4K_VAL_TRIGGER_EDGE                        1
#define TKDPO2K3K4K_VAL_TRIGGER_PULSE_WIDTH                 2
#define TKDPO2K3K4K_VAL_TRIGGER_RUNT                        3
#define TKDPO2K3K4K_VAL_TRIGGER_LOGIC                       4
#define TKDPO2K3K4K_VAL_TRIGGER_SETUP_HOLD                  5
#define TKDPO2K3K4K_VAL_TRIGGER_RISE_FALL_TIME              6
#define TKDPO2K3K4K_VAL_TRIGGER_VIDEO                       7
#define TKDPO2K3K4K_VAL_TRIGGER_BUS                         0
#define TKDPO2K3K4K_VAL_TRIGGER_SEQUENCE                    8

/*- Defined values for 
	parameter Val in function Tkdpo2k3k4k_Calibrate */

#define TKDPO2K3K4K_VAL_UTILITY_EX_CALIBRATION_STATUS_INIT    0
#define TKDPO2K3K4K_VAL_UTILITY_EX_CALIBRATION_STATUS_PASS    1
#define TKDPO2K3K4K_VAL_UTILITY_EX_CALIBRATION_STATUS_FAIL    2
#define TKDPO2K3K4K_VAL_UTILITY_EX_CALIBRATION_STATUS_RUNNING 3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_FRONT_PANEL_LOCK */

#define TKDPO2K3K4K_VAL_UTILITY_EX_FRONT_PANEL_LOCK_ALL     0
#define TKDPO2K3K4K_VAL_UTILITY_EX_FRONT_PANEL_LOCK_NONE    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE7 */

#define TKDPO2K3K4K_VAL_POWER_TYPENO_NE                     0
#define TKDPO2K3K4K_VAL_POWER_TYPEQUA_LITY                  1
#define TKDPO2K3K4K_VAL_POWER_TYPESWITC_HINGLOSS            2
#define TKDPO2K3K4K_VAL_POWER_TYPESOA                       3
#define TKDPO2K3K4K_VAL_POWER_TYPEHAR_MONICS                4
#define TKDPO2K3K4K_VAL_POWER_TYPERIP_PLE                   5
#define TKDPO2K3K4K_VAL_POWER_TYPEMODU_LATIONANALYSIS       6
#define TKDPO2K3K4K_VAL_POWER_TYPEDES_KEW                   7

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_VOLTAGE_SOURCE
	attribute TKDPO2K3K4K_ATTR_CURRENT_SOURCE */

#define TKDPO2K3K4K_VAL_POWER_SOURCECH1                     0
#define TKDPO2K3K4K_VAL_POWER_SOURCECH2                     1
#define TKDPO2K3K4K_VAL_POWER_SOURCECH3                     2
#define TKDPO2K3K4K_VAL_POWER_SOURCECH4                     3
#define TKDPO2K3K4K_VAL_POWER_SOURCEREF1                    4
#define TKDPO2K3K4K_VAL_POWER_SOURCEREF2                    5
#define TKDPO2K3K4K_VAL_POWER_SOURCEREF3                    6
#define TKDPO2K3K4K_VAL_POWER_SOURCEREF4                    7

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GATE_SOURCE */

#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCECH1                0
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCECH2                1
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCECH3                2
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCECH4                3
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCEREF1               4
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCEREF2               5
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCEREF3               6
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCEREF4               7
#define TKDPO2K3K4K_VAL_POWER_GATE_SOURCE_NONE              8

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_GATING2 */

#define TKDPO2K3K4K_VAL_POWER_GATINGOFF                     0
#define TKDPO2K3K4K_VAL_POWER_GATINGSCR_EEN                 1
#define TKDPO2K3K4K_VAL_POWER_GATINGCUR_SOR                 2

/*- Defined values for 
	parameter ReferenceLevelType in function Tkdpo2k3k4k_ConfigureRefLevel
	parameter ReferenceLevelType in function Tkdpo2k3k4k_ReadRefLevel
	parameter ReferenceLevelType in function Tkdpo2k3k4k_SetDefaultRefLevel
	parameter ReferenceLevelType in function Tkdpo2k3k4k_GetRefLevelHigh
	parameter ReferenceLevelType in function Tkdpo2k3k4k_SetRefLevelHigh
	parameter ReferenceLevelType in function Tkdpo2k3k4k_GetRefLevelLow
	parameter ReferenceLevelType in function Tkdpo2k3k4k_SetRefLevelLow
	parameter ReferenceLevelType in function Tkdpo2k3k4k_GetRefLevelMid
	parameter ReferenceLevelType in function Tkdpo2k3k4k_SetRefLevelMid
	parameter Type in function Tkdpo2k3k4k_GetRefLevelLowVoltage
	parameter Type in function Tkdpo2k3k4k_SetRefLevelLowVoltage
	parameter Type in function Tkdpo2k3k4k_GetRefLevelLowCurrent
	parameter Type in function Tkdpo2k3k4k_SetRefLevelLowCurrent */

#define TKDPO2K3K4K_VAL_POWER_REFERENCE_LEVEL_TYPE_ABSOLUTE 0
#define TKDPO2K3K4K_VAL_POWER_REFERENCE_LEVEL_TYPE_PERCENT  1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STATISTICS_MODE2 */

#define TKDPO2K3K4K_VAL_POWER_STATISTICS_MODEOFF            0
#define TKDPO2K3K4K_VAL_POWER_STATISTICS_MODEALL            1

/*- Defined values for 
	parameter DisplayMeasurement in function Tkdpo2k3k4k_GetMeasDisplayState
	parameter DisplayMeasurement in function Tkdpo2k3k4k_SetMeasDisplayState */

#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTAP_PPWR       0
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTFRE_QUENCY    1
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTICRES_TFACTOR 2
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTIRMS          3
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTPHAS_EANGLE   4
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTPOWERFA_CTOR  5
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTREAC_TPWR     6
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTTRU_EPWR      7
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTVCRES_TFACTOR 8
#define TKDPO2K3K4K_VAL_POWER_QUALITY_DISPLAY_MEASUREMENTVRMS          9

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_FREQUENCY_REFERENCE */

#define TKDPO2K3K4K_VAL_POWER_QUALITY_FREQUENCY_REFERENCE_VOLTAGE 0
#define TKDPO2K3K4K_VAL_POWER_QUALITY_FREQUENCY_REFERENCE_CURRENT 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MEAS_DISPLAY_TYPE */

#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_MEASUREMENT_DISPLAYALL         0
#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_MEASUREMENT_DISPLAYENERGY_LOSS 1
#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_MEASUREMENT_DISPLAYPOWER_LOSS  2

/*- Defined values for 
	parameter Polarity in function Tkdpo2k3k4k_ConfigureGating
	parameter Polarity in function Tkdpo2k3k4k_ReadGating */

#define TKDPO2K3K4K_VAL_POWER_GATING_POLARITYFALL           0
#define TKDPO2K3K4K_VAL_POWER_GATING_POLARITY_RISE          1

/*- Defined values for 
	parameter Type in function Tkdpo2k3k4k_ReadTOffLosses
	parameter Type in function Tkdpo2k3k4k_ReadTOnLosses
	parameter Type in function Tkdpo2k3k4k_ReadTotalLosses
	parameter Type in function Tkdpo2k3k4k_ReadConductionLosses */

#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_TYPE_POWER     0
#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_TYPE_ENERGY    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_STANDARD2 */

#define TKDPO2K3K4K_VAL_POWER_HARMONICS_STANDARD_NONE       0
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_STANDARDIEC         1
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_STANDARDMIL         2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DISPLAY_SET */

#define TKDPO2K3K4K_VAL_POWER_HARMONICS_DISPLAY_SET_ODD     0
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_DISPLAY_SET_EVEN    1
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_DISPLAY_SET_ALL     2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DISPLAY_TYPE2 */

#define TKDPO2K3K4K_VAL_POWER_HARMONICS_DISPLAY_TYPE_GRAPH  0
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_DISPLAY_TYPE_TABLE  1

/*- Defined values for 
	parameter Class in function Tkdpo2k3k4k_ConfigureIEC
	parameter Class in function Tkdpo2k3k4k_ReadIEC */

#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSA           0
#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSB           1
#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSC1          2
#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSC2          3
#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSC3          4
#define TKDPO2K3K4K_VAL_POWER_HARMONICSIEC_CLASSD           5

/*- Defined values for 
	parameter HarmonicsSource in function Tkdpo2k3k4k_SetParameters
	parameter HarmonicsSource in function Tkdpo2k3k4k_GetParameters */

#define TKDPO2K3K4K_VAL_POWER_HARMONICS_SOURCE_VOLTAGE      0
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_SOURCE_CURRENT      1

/*- Defined values for 
	parameter FrequencyReference in function Tkdpo2k3k4k_SetParameters
	parameter FrequencyReference in function Tkdpo2k3k4k_GetParameters */

#define TKDPO2K3K4K_VAL_POWER_HARMONICS_FREQUENCY_REFERENCEVOL_TAGE        0
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_FREQUENCY_REFERENCECUR_RENT        1
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_FREQUENCY_REFERENCEHARMSOU_RCE     2
#define TKDPO2K3K4K_VAL_POWER_HARMONICS_FREQUENCY_REFERENCEFIXEDFRE_QUENCY 3

/*- Defined values for 
	parameter FundamentalCurrentCalculating in function Tkdpo2k3k4k_ConfigureMIL
	parameter FundamentalCurrentCalculating in function Tkdpo2k3k4k_ReadMIL */

#define TKDPO2K3K4K_VAL_POWER_HARMONICSMIL_CURRENT_CALCULATINGMEAS 0
#define TKDPO2K3K4K_VAL_POWER_HARMONICSMIL_CURRENT_CALCULATINGUSER 1

/*- Defined values for 
	parameter PowerLevel in function Tkdpo2k3k4k_ConfigureMIL
	parameter PowerLevel in function Tkdpo2k3k4k_ReadMIL */

#define TKDPO2K3K4K_VAL_POWER_HAMRONICSMIL_POWER_LEVEL_LOW  0
#define TKDPO2K3K4K_VAL_POWER_HAMRONICSMIL_POWER_LEVEL_HIGH 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_OVERALL_RESULTS
	attribute TKDPO2K3K4K_ATTR_IEC_HARMONIC3_RESULT
	attribute TKDPO2K3K4K_ATTR_IEC_HARMONIC5_RESULT
	parameter HarmonicIECClassALimitResult in function Tkdpo2k3k4k_GetHarmoniciecClassaLimitResult
	parameter HarmonicIECHigherLimitResult in function Tkdpo2k3k4k_GetHarmoniciecHigherLimitResult
	parameter HarmonicIECNormalLimitResult in function Tkdpo2k3k4k_GetHarmoniciecNormalLimitResult
	parameter HarmonicMILNormalLimitResult in function Tkdpo2k3k4k_GetHarmonicmilNormalLimitResult */

#define TKDPO2K3K4K_VAL_POWER_HAMRONICS_PASS_FAILPASS       0
#define TKDPO2K3K4K_VAL_POWER_HAMRONICS_PASS_FAILFAIL       1
#define TKDPO2K3K4K_VAL_POWER_HAMRONICS_PASS_FAILNA         2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE11 */

#define TKDPO2K3K4K_VAL_POWER_RIPPLE_SOURCE_VOLTAGE         0
#define TKDPO2K3K4K_VAL_POWER_RIPPLE_SOURCE_CURRENT         1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE12 */

#define TKDPO2K3K4K_VAL_POWER_MODULATION_SOURCE_VOLTAGE     0
#define TKDPO2K3K4K_VAL_POWER_MODULATION_SOURCE_CURRENT     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE8 */

#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPEPW_IDTH        0
#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPENW_IDTH        1
#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPEPER_IOD        2
#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPEPD_UTY         3
#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPEND_UTY         4
#define TKDPO2K3K4K_VAL_POWER_MODULATION_TYPEFRE_QUENCY     5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_PLOT_TYPE
	parameter Type in function Tkdpo2k3k4k_ConfigureAxes
	parameter Type in function Tkdpo2k3k4k_ReadAxes */

#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_PLOT_TYPELOG     0
#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_PLOT_TYPE_LINEAR 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_MASK_STATE */

#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_MASK_STATEOFF    0
#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_MASK_STATELIMITS 1
#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_MASK_STATEPOINTS 2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_RESULT_TEST_STATE */

#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_RESULT_STATEPASS 0
#define TKDPO2K3K4K_VAL_POWER_SAFE_OPERATING_AREA_RESULT_STATEFAIL 1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_CONDUCTION_CALCULATION */

#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_CONDUCTION_CALCULATION_VOLTAGE 0
#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_CONDUCTION_CALCULATIONRDS_ON   1
#define TKDPO2K3K4K_VAL_POWER_SWITCHING_LOSS_CONDUCTION_CALCULATIONVCE_SAT  2

/*- Defined values for 
	parameter Type in function Tkdpo2k3k4k_GetSpectrumTraceDisplayState
	parameter Type in function Tkdpo2k3k4k_SetSpectrumTraceDisplayState
	parameter Type in function Tkdpo2k3k4k_ConfigureManualDetectionMethod
	parameter Type in function Tkdpo2k3k4k_ReadManualDetectionMethod
	parameter Source in function Tkdpo2k3k4k_FetchY
	parameter Source in function Tkdpo2k3k4k_ReadY */

#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_TRACE_TYPE_NORMAL   0
#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_TRACE_TYPE_MIN_HOLD 1
#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_TRACE_TYPE_MAX_HOLD 2
#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_TRACE_TYPE_AVERAGE  3

/*- Defined values for 
	parameter Source in function Tkdpo2k3k4k_ConfigureARFIndependentParameters
	parameter Source in function Tkdpo2k3k4k_ReadARFIndependentParameters
	parameter Type in function Tkdpo2k3k4k_GetRfVsTimeTraceDisplayState
	parameter Type in function Tkdpo2k3k4k_SetRfVsTimeTraceDisplayState
	parameter RFTraceType in function Tkdpo2k3k4k_ConfigureVerticalParameters
	parameter RFTraceType in function Tkdpo2k3k4k_ReadVerticalParameters */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_TRACE_TYPE_AMPLITUDE    0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_TRACE_TYPE_FREQUENCY    1
#define TKDPO2K3K4K_VAL_FREQUENCYRF_TRACE_TYPE_PHASE        2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DETECTION_MODE */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_MODE_AUTO     0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_MODE_MANUAL   1

/*- Defined values for 
	parameter Method in function Tkdpo2k3k4k_ConfigureManualDetectionMethod
	parameter Method in function Tkdpo2k3k4k_ReadManualDetectionMethod */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_METHODMINU_SPEAK 0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_METHODSA_MPLE    1
#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_METHODPLU_SPEAK  2
#define TKDPO2K3K4K_VAL_FREQUENCYRF_DETECTION_METHODAV_ERAGE   3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SPECTRUM_MODE */

#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_MODETRI_GGERED   0
#define TKDPO2K3K4K_VAL_FREQUENCY_SPECTRUM_MODEFRE_ERUN     1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_VERTICAL_UNITS2 */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDBM       0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDBUW      1
#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDBMV      2
#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDMUV      3
#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDBMA      4
#define TKDPO2K3K4K_VAL_FREQUENCYRF_VERTICAL_UNITSDBUA      5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_WINDOW2 */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWREC_TANGULAR      0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWHA_MMING          1
#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWHA_NNING          2
#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWBL_ACKMANHARRIS   3
#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWKA_ISER           4
#define TKDPO2K3K4K_VAL_FREQUENCYRF_WINDOWFLA_TTOP          5

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE9 */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_MEASUREMENT_TYPENO_NE   0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_MEASUREMENT_TYPECP      1
#define TKDPO2K3K4K_VAL_FREQUENCYRF_MEASUREMENT_TYPEACPR    2
#define TKDPO2K3K4K_VAL_FREQUENCYRF_MEASUREMENT_TYPEOBW     3

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_RBW_MODE */

#define TKDPO2K3K4K_VAL_FREQUENCYRBW_MODE_AUTO              0
#define TKDPO2K3K4K_VAL_FREQUENCYRBW_MODE_MANUAL            1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_TYPE10 */

#define TKDPO2K3K4K_VAL_FREQUENCYRF_MARKER_TYPE_DELTA       0
#define TKDPO2K3K4K_VAL_FREQUENCYRF_MARKER_TYPE_ABSOLUTE    1

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE13 */

#define TKDPO2K3K4K_VAL_CURSOR_SOURCECH1                    0
#define TKDPO2K3K4K_VAL_CURSOR_SOURCECH2                    1
#define TKDPO2K3K4K_VAL_CURSOR_SOURCECH3                    2
#define TKDPO2K3K4K_VAL_CURSOR_SOURCECH4                    3
#define TKDPO2K3K4K_VAL_CURSOR_SOURCE_MATH                  4
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEREF1                   5
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEREF2                   6
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEREF3                   7
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEREF4                   8
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED0                     9
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED1                     10
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED2                     11
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED3                     12
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED4                     13
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED5                     14
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED6                     15
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED7                     16
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED8                     17
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED9                     18
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED10                    19
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED11                    20
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED12                    21
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED13                    22
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED14                    23
#define TKDPO2K3K4K_VAL_CURSOR_SOURCED15                    24
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEAUTO                   25
#define TKDPO2K3K4K_VAL_CURSOR_SOURCERF_AMPLITUDE           26
#define TKDPO2K3K4K_VAL_CURSOR_SOURCERF_FREQUENCY           27
#define TKDPO2K3K4K_VAL_CURSOR_SOURCERF_PHASE               28
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEBUS1                   29
#define TKDPO2K3K4K_VAL_CURSOR_SOURCEBUS2                   30

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE4 */

#define TKDPO2K3K4K_VAL_CHANNEL_CHANNEL1                    0
#define TKDPO2K3K4K_VAL_CHANNEL_CHANNEL2                    1
#define TKDPO2K3K4K_VAL_CHANNEL_CHANNEL3                    2
#define TKDPO2K3K4K_VAL_CHANNEL_CHANNEL4                    3
#define TKDPO2K3K4K_VAL_CHANNEL_CHANNELRF                   4

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_SOURCE
	parameter Source in function Tkdpo2k3k4k_Configure
	parameter Source in function Tkdpo2k3k4k_Read */

#define TKDPO2K3K4K_VAL_SOURCE1CH1                          0
#define TKDPO2K3K4K_VAL_SOURCE1CH2                          1
#define TKDPO2K3K4K_VAL_SOURCE1CH3                          2
#define TKDPO2K3K4K_VAL_SOURCE1CH4                          3
#define TKDPO2K3K4K_VAL_SOURCE1MATH                         4
#define TKDPO2K3K4K_VAL_SOURCE1REF1                         5
#define TKDPO2K3K4K_VAL_SOURCE1REF2                         6
#define TKDPO2K3K4K_VAL_SOURCE1REF3                         7
#define TKDPO2K3K4K_VAL_SOURCE1REF4                         8

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DATA_COMPOSITION */

#define TKDPO2K3K4K_VAL_DATA_COMPOSITION_COMPOSITEYT        0
#define TKDPO2K3K4K_VAL_DATA_COMPOSITION_COMPOSITE_ENVELOPE 1
#define TKDPO2K3K4K_VAL_DATA_COMPOSITION_SINGULARYT         2

/*- Defined values for 
	attribute TKDPO2K3K4K_ATTR_DATA_RESOLUTION */

#define TKDPO2K3K4K_VAL_DATA_RESOLUTION_FULL                0
#define TKDPO2K3K4K_VAL_DATA_RESOLUTION_REDUCED             1


/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

/*- Tkdpo2k3k4k */

ViStatus _VI_FUNC Tkdpo2k3k4k_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_close ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi );

/*- Utility */

ViStatus _VI_FUNC Tkdpo2k3k4k_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ClearError ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ClearInterchangeWarnings ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_InvalidateAllAttributes ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ResetInterchangeCheck ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_Disable ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_LockSession ( ViSession Vi, ViBoolean* CallerHasLock );
ViStatus _VI_FUNC Tkdpo2k3k4k_reset ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ResetWithDefaults ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock );
ViStatus _VI_FUNC Tkdpo2k3k4k_IsInvalidWfmElement ( ViSession Vi, ViReal64 ElementValue, ViBoolean* IsInvalid );

/*- Attribute Accessors */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue );

/*- Configuration Information */

ViStatus _VI_FUNC Tkdpo2k3k4k_ActualRecordLength ( ViSession Vi, ViInt32* ActualRecordLength );
ViStatus _VI_FUNC Tkdpo2k3k4k_SampleRate ( ViSession Vi, ViReal64* SampleRate );
ViStatus _VI_FUNC Tkdpo2k3k4k_AutoProbeSenseValue ( ViSession Vi, ViConstString ChannelName, ViReal64* AutoProbeSenseValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_SampleMode ( ViSession Vi, ViInt32* SampleMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_AutoSetup ( ViSession Vi );

/*- Acquisition */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcquisitionType ( ViSession Vi, ViInt32 AcquisitionType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureInterpolation ( ViSession Vi, ViInt32 Interpolation );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureInitiateContinuous ( ViSession Vi, ViBoolean ContinuousAcquisition );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureNumAverages ( ViSession Vi, ViInt32 NumberOfAverages );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureNumEnvelopes ( ViSession Vi, ViInt32 NumEnvelopes );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcquisitionRecord ( ViSession Vi, ViReal64 TimePerRecord, ViInt32 MinNumPts, ViReal64 AcquisitionStartTime );

/*- Trigger */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTriggerCoupling ( ViSession Vi, ViInt32 Coupling );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTVTriggerLineNumber ( ViSession Vi, ViInt32 TVLineNumber );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAcLineTriggerSlope ( ViSession Vi, ViInt32 ACLineSlope );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTriggerModifier ( ViSession Vi, ViInt32 TriggerModifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTrigger ( ViSession Vi, ViInt32 TriggerType, ViReal64 Holdoff );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureEdgeTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViInt32 Slope );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureGlitchTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViReal64 GlitchWidth, ViInt32 GlitchPolarity, ViInt32 GlitchCondition );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRuntTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 RuntThresholdLow, ViReal64 RuntThresholdHigh, ViInt32 RuntPolarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTVTriggerSource ( ViSession Vi, ViConstString Source, ViInt32 TVSignalFormat, ViInt32 TVEvent, ViInt32 TVPolarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureWidthTriggerSource ( ViSession Vi, ViConstString Source, ViReal64 Level, ViReal64 WidthLowThreshold, ViReal64 WidthHighThreshold, ViInt32 WidthPolarity, ViInt32 WidthCondition );

/*- Channel */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChannel ( ViSession Vi, ViConstString Channel, ViReal64 Range, ViReal64 Offset, ViInt32 Coupling, ViReal64 ProbeAttenuation, ViBoolean Enabled );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChanCharacteristics ( ViSession Vi, ViConstString Channel, ViReal64 InputImpedance, ViReal64 MaxInputFrequency );

/*- Measurement */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRefLevels ( ViSession Vi, ViReal64 Low, ViReal64 Mid, ViReal64 High );

/*- Waveform Acquisition */

ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViInt32 MaxTimeMilliseconds, ViReal64 WaveformArray[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveformMeasurement ( ViSession Vi, ViConstString Channel, ViInt32 MeasFunction, ViInt32 MaxTimeMilliseconds, ViReal64* Measurement );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMinMaxWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViInt32 MaxTimeMilliseconds, ViReal64 MinWaveform[], ViReal64 MaxWaveform[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement );

/*- Low-Level Acquisition */

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViReal64 WaveformArray[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformMeasurement ( ViSession Vi, ViConstString Channel, ViInt32 MeasFunction, ViReal64* Measurement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchMinMaxWaveform ( ViSession Vi, ViConstString Channel, ViInt32 WaveformSize, ViReal64 MinWaveform[], ViReal64 MaxWaveform[], ViInt32* ActualPoints, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_Abort ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_InitiateAcquisition ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_AcquisitionStatus ( ViSession Vi, ViInt32* Status );

/*- Acquisition */

ViStatus _VI_FUNC Tkdpo2k3k4k_AutoSet2 ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAverageMode ( ViSession Vi, ViInt32 NumberAverages );
ViStatus _VI_FUNC Tkdpo2k3k4k_Start ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_Stop ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRecord ( ViSession Vi, ViReal64 TimePerRecord, ViInt32 MinNumPts, ViReal64 AcquisitionStartTime );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetSingleSequence ( ViSession Vi, ViBoolean* SingleSequence );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSingleSequence ( ViSession Vi, ViBoolean SingleSequence );

/*- Bus */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetBusName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureI2C ( ViSession Vi, ViConstString Bus, ViInt32 ClockSource, ViInt32 DataSource, ViInt32 RWInAddress );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadI2C ( ViSession Vi, ViConstString Bus, ViInt32* ClockSource, ViInt32* DataSource, ViInt32* RWInAddress );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAudioInputs ( ViSession Vi, ViConstString Bus, ViInt32 Type, ViInt32 ClockSource, ViInt32 DataSource, ViInt32 WordSelectSource, ViInt32 FrameSyncSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAudioInputs ( ViSession Vi, ViConstString Bus, ViInt32* Type, ViInt32* ClockSource, ViInt32* DataSource, ViInt32* WordSelectSource, ViInt32* FrameSyncSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAudio ( ViSession Vi, ViConstString Bus, ViInt32 BitDelay, ViInt32 BitOrder, ViInt32 BitsPerChannel, ViInt32 ClockPolarity, ViInt32 DataPolarity, ViInt32 BitsPerWord, ViInt32 DisplayFormat, ViInt32 FrameSyncPolarity, ViInt32 WordSelectPolarity, ViInt32 ChannelsPerFrame );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAudio ( ViSession Vi, ViConstString Bus, ViInt32* BitDelay, ViInt32* BitOrder, ViInt32* BitsPerChannel, ViInt32* ClockPolarity, ViInt32* DataPolarity, ViInt32* BitsPerWord, ViInt32* DisplayFormat, ViInt32* FrameSyncPolarity, ViInt32* WordSelectPolarity, ViInt32* ChannelsPerFrame );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCAN ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 SamplePoint, ViInt32 SignalType, ViInt32 BitRate );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCAN ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* SamplePoint, ViInt32* SignalType, ViInt32* BitRate );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFlexray ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 IDFormat, ViInt32 Standard, ViInt32 BitRate );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFlexray ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* IDFormat, ViInt32* Standard, ViInt32* BitRate );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLIN ( ViSession Vi, ViConstString Bus, ViInt32 Source, ViInt32 IDFormat, ViInt32 BitRate, ViInt32 Polarity, ViInt32 SamplePoint, ViInt32 Standard );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLIN ( ViSession Vi, ViConstString Bus, ViInt32* Source, ViInt32* IDFormat, ViInt32* BitRate, ViInt32* Polarity, ViInt32* SamplePoint, ViInt32* Standard );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRS232 ( ViSession Vi, ViConstString Bus2, ViInt32 RXSource, ViInt32 InputPolarity, ViReal64 Bitrate, ViInt32 DataBits, ViInt32 InputParity, ViInt32 TXSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRS232 ( ViSession Vi, ViConstString Bus2, ViInt32* RXSource, ViInt32* InputPolarity, ViReal64* Bitrate, ViInt32* DataBits, ViInt32* InputParity, ViInt32* TXSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadUSB ( ViSession Vi, ViConstString Bus2, ViInt32* DifferentialSource, ViInt32* Probe, ViInt32* Bitrate, ViInt32* DPLUSSource, ViInt32* DMINUSSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureUSB ( ViSession Vi, ViConstString Bus2, ViInt32 DifferentialSource, ViInt32 Probe, ViInt32 Bitrate, ViInt32 DPLUSSource, ViInt32 DMINUSSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetLowThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64* Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64* Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetLowThreshholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetThresholdChannel ( ViSession Vi, ViConstString Bus2, ViInt32 InputSource, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetThresholdDigitalChannel ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetThresholdDigitalChannel ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64* Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetUpperThreshhold ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetUpperThreshhold ( ViSession Vi, ViConstString Bus, ViInt32 InputSource, ViReal64* Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveEventTable ( ViSession Vi, ViConstString Bus, ViConstString Filename );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSPI ( ViSession Vi, ViConstString Bus, ViInt32 Clocksource, ViInt32 ClockPolarity, ViInt32 DataSize, ViInt32 DataMISOSource, ViInt32 DataMISOPolarity, ViInt32 BitOrder, ViInt32 SlaveSelectSource, ViInt32 SlaveSelectPolarity, ViInt32 DataMOSISource, ViInt32 DataMOSIPolarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSPI ( ViSession Vi, ViConstString Bus, ViInt32* Clocksource, ViInt32* ClockPolarity, ViInt32* DataSize, ViInt32* DataMISOSource, ViInt32* DataMISOPolarity, ViInt32* BitOrder, ViInt32* SlaveSelectSource, ViInt32* SlaveSelectPolarity, ViInt32* DataMOSISource, ViInt32* DataMOSIPolarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelBitSource ( ViSession Vi, ViConstString Bus, ViInt32 Bit, ViInt32* ParallelSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelBitSource ( ViSession Vi, ViConstString Bus, ViInt32 Bit, ViInt32 ParallelSource );

/*- HBars */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasurementScale ( ViSession Vi, ViInt32 MeasurementScale );

/*- VBars */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasurementScale2 ( ViSession Vi, ViInt32 MeasurementScale );

/*- Display */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetMessageBoxCoordinates ( ViSession Vi, ViInt32 X1, ViInt32 Y1, ViInt32 X2, ViInt32 Y2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetMessageBoxCoordinates ( ViSession Vi, ViInt32* X1, ViInt32* Y1, ViInt32* X2, ViInt32* Y2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ShowMessage ( ViSession Vi, ViConstString Message );
ViStatus _VI_FUNC Tkdpo2k3k4k_ClearMessage ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDisplayMessage ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] );

/*- HardCopy */

ViStatus _VI_FUNC Tkdpo2k3k4k_Print ( ViSession Vi );

/*- Histogram */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure ( ViSession Vi, ViInt32 Source, ViInt32 Mode );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read ( ViSession Vi, ViInt32* Source, ViInt32* Mode );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBoxCoordinates ( ViSession Vi, ViReal64 Top, ViReal64 Left, ViReal64 Right, ViReal64 Bottom );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBoxCoordinates ( ViSession Vi, ViReal64* Top, ViReal64* Left, ViReal64* Right, ViReal64* Bottom );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBoxCoordinatesPercent ( ViSession Vi, ViReal64 Top, ViReal64 Left, ViReal64 Right, ViReal64 Bottom );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBoxCoordinatesPercent ( ViSession Vi, ViReal64* Top, ViReal64* Left, ViReal64* Right, ViReal64* Bottom );
ViStatus _VI_FUNC Tkdpo2k3k4k_Reset2 ( ViSession Vi );

/*- Horizontal */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure2 ( ViSession Vi, ViReal64 Position, ViReal64 Scale, ViInt32 RecordLength );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay ( ViSession Vi, ViBoolean Mode, ViReal64 Time );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read2 ( ViSession Vi, ViReal64* Position, ViReal64* Scale, ViInt32* RecordLength );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadDelay ( ViSession Vi, ViBoolean* Mode, ViReal64* Time );

/*- Math */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMathName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_Configure3 ( ViSession Vi, ViConstString Math, ViConstString Expression, ViReal64 VerticalPosition, ViReal64 VerticalScale, ViReal64 HorizontalPosition, ViReal64 HorizontalScale, ViBoolean DisplayState, ViInt32 Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read3 ( ViSession Vi, ViConstString Math, ViInt32 ExpressionBufferSize, ViChar Expression[], ViReal64* VerticalPosition, ViReal64* VerticalScale, ViInt32 VerticalUnitsBufferSize, ViChar VerticalUnits[], ViReal64* HorizontalPosition, ViReal64* HorizontalScale, ViInt32 HorizontalUnitsBufferSize, ViChar HorizontalUnits[], ViBoolean* DisplayState, ViInt32* Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetMathVariable ( ViSession Vi, ViConstString Math, ViInt32 Variable, ViReal64* MathVariable );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetMathVariable ( ViSession Vi, ViConstString Math, ViInt32 Variable, ViReal64 MathVariable );

/*- Spectral */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointGatingIndicator ( ViSession Vi, ViConstString Math, ViReal64* Val );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetStartPointGatingIndicator ( ViSession Vi, ViConstString Math, ViReal64* Val );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetNyquistFrequency ( ViSession Vi, ViConstString Math, ViReal64* Val );

/*- MeasurementSlot */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMeasurementSlotName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadDelay2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ClearStatistics ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_Configure15 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source, ViInt32 Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay3 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePhase2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read9 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2, ViInt32* Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadValue2 ( ViSession Vi, ViConstString MeasurementSlot, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2, ViInt32 Type, ViReal64* Val, ViInt32 UnitBufferSize, ViChar Unit[] );

/*- Indicators */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetHorizontalValue ( ViSession Vi, ViInt32 Indicator, ViReal64* HorizontalValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetVerticalValue ( ViSession Vi, ViInt32 Indicator, ViReal64* VerticalValue );

/*- Frequency */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureChannelPower ( ViSession Vi, ViReal64 Bandwidth );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadChannelPower ( ViSession Vi, ViReal64* Bandwidth, ViReal64* Power );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureACPR ( ViSession Vi, ViInt32 AdjacentChannels, ViReal64 ChannelBandwidth, ViReal64 ChannelSpacing );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadACPR ( ViSession Vi, ViInt32* AdjacentChannels, ViReal64* ChannelBandwidth, ViReal64* ChannelSpacing, ViReal64* Power, ViReal64* LowerArea1Ratio, ViReal64* LowerArea2Ratio, ViReal64* LowerArea3Ratio, ViReal64* UpperArea1Ratio, ViReal64* UpperArea2Ratio, ViReal64* UpperArea3Ratio );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureOBW ( ViSession Vi, ViReal64 AnalysisBandwidth, ViReal64 PercentageDown );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadOBW ( ViSession Vi, ViReal64* AnalysisBandwidth, ViReal64* PercentageDown, ViReal64* LowerFrequency, ViReal64* UpperFrequency, ViReal64* Power );

/*- SaveRecall */

ViStatus _VI_FUNC Tkdpo2k3k4k_SaveEventTableBusData ( ViSession Vi, ViInt32 Bus, ViConstString Filename );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveImage ( ViSession Vi, ViConstString Filename, ViInt32 ImageFormat, ViInt32 ImageLayout );
ViStatus _VI_FUNC Tkdpo2k3k4k_DefaultSetup ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_RecallSetupFromFile ( ViSession Vi, ViConstString FileName );
ViStatus _VI_FUNC Tkdpo2k3k4k_RecallSetupFromMemory ( ViSession Vi, ViInt32 Location );
ViStatus _VI_FUNC Tkdpo2k3k4k_RecallWaveformFromFile ( ViSession Vi, ViInt32 RefMemory, ViConstString FileName );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveAllDigitalChannels ( ViSession Vi, ViConstString FileName );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveSetupToFile ( ViSession Vi, ViConstString FileName );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveSetupToMemory ( ViSession Vi, ViInt32 Location );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToFile ( ViSession Vi, ViInt32 Source, ViConstString FileName );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToReference ( ViSession Vi, ViInt32 Source, ViInt32 RefMemory );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveAllWaveformsToFile ( ViSession Vi, ViConstString FileName, ViInt32 FileFormat );

/*- Search */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSearchName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicSearchSource ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 Input, ViReal64 Threshold, ViInt32 PatternInput );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicSearchSource ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32* Input, ViReal64* Threshold, ViInt32* PatternInput );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicClock ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 EdgeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicClock ( ViSession Vi, ViConstString Search, ViInt32* Source, ViInt32* EdgeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSetupHoldSearchSource ( ViSession Vi, ViConstString Search, ViInt32* Clocksource, ViInt32* DataSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureEdge ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 Slope );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLogicPattern ( ViSession Vi, ViConstString Search, ViInt32 Condition, ViReal64 LessLimit, ViReal64 MoreLimit, ViInt32 PatternType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePulseWidth ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 Condition, ViInt32 Polarity, ViReal64 HighLimit, ViReal64 LowLimit );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRunt ( ViSession Vi, ViConstString Search, ViInt32 Source, ViInt32 When, ViInt32 Polarity, ViReal64 Width );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSetupHold ( ViSession Vi, ViConstString Search, ViReal64 Level, ViInt32 Source, ViInt32 ClockEdge, ViInt32 ClockSource, ViReal64 HoldTime, ViReal64 SetTime, ViReal64 ClockLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureTransition ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 DeltaTime, ViInt32 When, ViInt32 Polarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadEdge ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* Slope );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadLogicPattern ( ViSession Vi, ViConstString Search, ViInt32* Condition, ViReal64* LessLimit, ViReal64* MoreLimit, ViInt32* PatternType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPulseWidth ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* Condition, ViInt32* Polarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRunt ( ViSession Vi, ViConstString Search, ViInt32* Source, ViInt32* When, ViInt32* Polarity, ViReal64* Width );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSetupHold ( ViSession Vi, ViConstString Search, ViReal64* Level, ViInt32* Source, ViInt32* ClockEdge, ViInt32* Clocksource, ViReal64* HoldTime, ViReal64* SetTime, ViReal64* ClockLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTransition ( ViSession Vi, ViConstString Search, ViInt32* Source, ViReal64* DeltaTime, ViInt32* When, ViInt32* Polarity );
ViStatus _VI_FUNC Tkdpo2k3k4k_Copy ( ViSession Vi, ViConstString Search, ViInt32 Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureARFIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadARFIndependentParameters ( ViSession Vi, ViConstString Search, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold );

/*- Bus */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 BusType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ParallelDataBufferSize, ViChar ParallelData[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString ParallelData );

/*- Audio */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataWord2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataWord );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataWord2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataWord );

/*- USB */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressModeBufferSize, ViChar AddressMode[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 EndPointValueBufferSize, ViChar EndPointValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetEndPointValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString EndPointValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHandshakeType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* HandshakeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetHandshakeType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HandshakeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetSofFrameNumber2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 SOFFrameNumberBufferSize, ViChar SOFFrameNumber[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSofFrameNumber2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString SOFFrameNumber );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpecialType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* SpecialType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpecialType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 SpecialType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTokenType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TokenType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTokenType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TokenType );

/*- SPI */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition11 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString RXDataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString TXDataValue );

/*- RS232 */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition12 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition12 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataSize2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* RXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataSize2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString RXDataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString TXDataValue );

/*- LIN */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition13 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition13 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetIdentifierValue2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 IdentifierValueBufferSize, ViChar IdentifierValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetIdentifierValue2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString IdentifierValue );

/*- I2C */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize7 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue9 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition14 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition14 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode5 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressMode );

/*- Flexray */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition15 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition15 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetEofType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* EOFType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetEofType2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 EOFType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType3 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCycleCount2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCycleCount2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Offset, ViInt32 Qualifier, ViInt32 Size, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadData2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Offset, ViInt32* Qualifier, ViInt32* Size, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFrameID2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFrameID2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureHeader2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString CRC, ViConstString CycleCount, ViConstString FrameID, ViConstString IndicatorBits, ViConstString PayloadLength );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadHeader2 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 CRCBufferSize, ViChar CRC[], ViInt32 CycleCountBufferSize, ViChar CycleCount[], ViInt32 FrameIDBufferSize, ViChar FrameID[], ViInt32 IndicatorBitsBufferSize, ViChar IndicatorBits[], ViInt32 PayloadLengthBufferSize, ViChar PayloadLength[] );

/*- CAN */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition16 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition16 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue10 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize8 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType4 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32* AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue6 ( ViSession Vi, ViConstString Search, ViInt32 BusSource, ViConstString AddressValue );

/*- Trigger */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetBLevel ( ViSession Vi, ViInt32 Source, ViReal64* BLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetBLevel ( ViSession Vi, ViInt32 Source, ViReal64 BLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureBIndependentParameters ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadBIndependentParameters ( ViSession Vi, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAIndependentParameters2 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViReal64 UpperThreshold, ViReal64 LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAIndependentParameters2 ( ViSession Vi, ViInt32 Source, ViReal64* Level, ViReal64* UpperThreshold, ViReal64* LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAOnlyTrigger ( ViSession Vi, ViReal64 HoldoffTime );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAThenBAfterEventsTrigger ( ViSession Vi, ViReal64 HoldoffTime, ViInt32 Events );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAThenBAfterTimeTrigger ( ViSession Vi, ViReal64 HoldoffTime, ViReal64 DelayTime );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadARFIndependentParameters2 ( ViSession Vi, ViReal64* UpperThreshold, ViReal64* LowerThreshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureARFIndependentParameters2 ( ViSession Vi, ViReal64 UpperThreshold, ViReal64 LowerThreshold );

/*- ABus */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure4 ( ViSession Vi, ViInt32 BusSource, ViInt32 BusType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetParallelData ( ViSession Vi, ViInt32 BusSource, ViInt32 ParallelDataBufferSize, ViChar ParallelData[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetParallelData ( ViSession Vi, ViInt32 BusSource, ViConstString ParallelData );

/*- Audio */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset ( ViSession Vi, ViInt32 BusSource, ViInt32* DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset ( ViSession Vi, ViInt32 BusSource, ViInt32 DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataWord ( ViSession Vi, ViInt32 BusSource, ViInt32* DataWord );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataWord ( ViSession Vi, ViInt32 BusSource, ViInt32 DataWord );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize );

/*- CAN */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition2 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition2 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection ( ViSession Vi, ViInt32 BusSource, ViInt32* DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection ( ViSession Vi, ViInt32 BusSource, ViInt32 DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType ( ViSession Vi, ViInt32 BusSource, ViInt32* FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType ( ViSession Vi, ViInt32 BusSource, ViInt32 FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue );

/*- Flexray */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition3 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition3 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureCycleCount ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadCycleCount ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureData ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Offset, ViInt32 Qualifier, ViInt32 Size, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadData ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Offset, ViInt32* Qualifier, ViInt32* Size, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureFrameID ( ViSession Vi, ViInt32 BusSource, ViConstString HighValue, ViInt32 Qualifier, ViConstString Value );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadFrameID ( ViSession Vi, ViInt32 BusSource, ViInt32 HighValueBufferSize, ViChar HighValue[], ViInt32* Qualifier, ViInt32 ValueBufferSize, ViChar Value[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureHeader ( ViSession Vi, ViInt32 BusSource, ViConstString CRC, ViConstString CycleCount, ViConstString FrameID, ViConstString IndicatorBits, ViConstString PayloadLength );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadHeader ( ViSession Vi, ViInt32 BusSource, ViInt32 CRCBufferSize, ViChar CRC[], ViInt32 CycleCountBufferSize, ViChar CycleCount[], ViInt32 FrameIDBufferSize, ViChar FrameID[], ViInt32 IndicatorBitsBufferSize, ViChar IndicatorBits[], ViInt32 PayloadLengthBufferSize, ViChar PayloadLength[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetEofType ( ViSession Vi, ViInt32 BusSource, ViInt32* EOFType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetEofType ( ViSession Vi, ViInt32 BusSource, ViInt32 EOFType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetFrameType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* FrameType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetFrameType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 FrameType );

/*- I2C */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataDirection2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataDirection2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataDirection );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition4 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition4 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode2 ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressMode );

/*- LIN */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue4 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier3 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition5 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition5 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize3 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetIdentifierValue ( ViSession Vi, ViInt32 BusSource, ViInt32 IdentifierValueBufferSize, ViChar IdentifierValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetIdentifierValue ( ViSession Vi, ViInt32 BusSource, ViConstString IdentifierValue );

/*- RS232 */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition6 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition6 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* RXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString RXDataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32* TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue ( ViSession Vi, ViInt32 BusSource, ViConstString TXDataValue );

/*- SPI */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition7 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition7 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 RXDataValueBufferSize, ViChar RXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString RXDataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32* TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataSize2 ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 TXDataValueBufferSize, ViChar TXDataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTxDataValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString TXDataValue );

/*- USB */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetCondition8 ( ViSession Vi, ViInt32 BusSource, ViInt32* Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetCondition8 ( ViSession Vi, ViInt32 BusSource, ViInt32 Condition );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataHighValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataHighValueBufferSize, ViChar DataHighValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataHighValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString DataHighValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataOffset2 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataOffset2 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataQualifier4 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataQualifier4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataQualifier );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataValue5 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataValueBufferSize, ViChar DataValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataValue5 ( ViSession Vi, ViInt32 BusSource, ViConstString DataValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDataSize4 ( ViSession Vi, ViInt32 BusSource, ViInt32* DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDataSize4 ( ViSession Vi, ViInt32 BusSource, ViInt32 DataSize );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressValue3 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressValueBufferSize, ViChar AddressValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressValue3 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressType2 ( ViSession Vi, ViInt32 BusSource, ViInt32* AddressType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressType2 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAddressMode3 ( ViSession Vi, ViInt32 BusSource, ViInt32 AddressModeBufferSize, ViChar AddressMode[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAddressMode3 ( ViSession Vi, ViInt32 BusSource, ViConstString AddressMode );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetEndPointValue2 ( ViSession Vi, ViInt32 BusSource, ViInt32 EndPointValueBufferSize, ViChar EndPointValue[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetEndPointValue2 ( ViSession Vi, ViInt32 BusSource, ViConstString EndPointValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetErrorType3 ( ViSession Vi, ViInt32 BusSource, ViInt32* ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetErrorType3 ( ViSession Vi, ViInt32 BusSource, ViInt32 ErrorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHandshakeType ( ViSession Vi, ViInt32 BusSource, ViInt32* HandshakeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetHandshakeType ( ViSession Vi, ViInt32 BusSource, ViInt32 HandshakeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetSofFrameNumber ( ViSession Vi, ViInt32 BusSource, ViInt32 SOFFrameNumberBufferSize, ViChar SOFFrameNumber[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSofFrameNumber ( ViSession Vi, ViInt32 BusSource, ViConstString SOFFrameNumber );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpecialType ( ViSession Vi, ViInt32 BusSource, ViInt32* SpecialType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpecialType ( ViSession Vi, ViInt32 BusSource, ViInt32 SpecialType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetTokenType ( ViSession Vi, ViInt32 BusSource, ViInt32* TokenType );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTokenType ( ViSession Vi, ViInt32 BusSource, ViInt32 TokenType );

/*- AEdge */

ViStatus _VI_FUNC Tkdpo2k3k4k_Read4 ( ViSession Vi, ViInt32* Source, ViReal64* Level, ViInt32* Slope, ViInt32* Coupling );
ViStatus _VI_FUNC Tkdpo2k3k4k_Configure16 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViInt32 Slope, ViInt32 Coupling );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureLevelTo50Percent ( ViSession Vi );

/*- ALogic */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure5 ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureSource ( ViSession Vi, ViInt32 Source, ViInt32 Input, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadSource ( ViSession Vi, ViInt32 Source, ViInt32* Input, ViReal64* Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePattern ( ViSession Vi, ViInt32 Condition, ViReal64 LessLimit, ViReal64 MoreLimit, ViInt32 LogicOperatorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPattern ( ViSession Vi, ViInt32* Condition, ViReal64* LessLimit, ViReal64* MoreLimit, ViInt32* LogicOperatorType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureClock ( ViSession Vi, ViInt32 Source, ViInt32 EdgeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadClock ( ViSession Vi, ViInt32* Source, ViInt32* EdgeType );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRF ( ViSession Vi, ViInt32 Input, ViReal64 Threshold );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRF ( ViSession Vi, ViInt32* Input, ViReal64* Threshold );

/*- AWidth */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure6 ( ViSession Vi );

/*- ARunt */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure7 ( ViSession Vi );

/*- ASetupHold */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure8 ( ViSession Vi );

/*- ATransition */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure9 ( ViSession Vi );

/*- BEdge */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure10 ( ViSession Vi, ViInt32 Source, ViReal64 Level, ViInt32 Slope, ViInt32 Coupling );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read5 ( ViSession Vi, ViInt32* Source, ViReal64* Level, ViInt32* Slope, ViInt32* Coupling );

/*- Channel */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeAutoZero ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeCommand ( ViSession Vi, ViConstString Command, ViConstString State );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAUXInTekVPIProbeDegauss ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetAllDeskewsToRecommendedValues ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC Tkdpo2k3k4k_InvertWaveform ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeAutoZero ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeCommand ( ViSession Vi, ViConstString Channel, ViConstString Command, ViConstString State );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetTekVPIProbeDegauss ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC Tkdpo2k3k4k_Configure13 ( ViSession Vi, ViConstString Channel, ViReal64 Position, ViReal64 Scale, ViReal64 Offset, ViReal64 Deskew, ViInt32 Coupling, ViInt32 Termination, ViInt32 Bandwidth, ViBoolean DisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read7 ( ViSession Vi, ViConstString Channel, ViReal64* Position, ViReal64* Scale, ViReal64* Offset, ViReal64* Deskew, ViInt32* Coupling, ViInt32* Termination, ViReal64* Bandwidth, ViBoolean* DisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadProbeDetails ( ViSession Vi, ViConstString Channel, ViInt32 TypeBufferSize, ViChar Type[], ViReal64* Resistance, ViReal64* Gain, ViInt32 SerialNumberBufferSize, ViChar SerialNumber[], ViInt32 UnitBufferSize, ViChar Unit[], ViReal64* ExternalAttenuation, ViReal64* ExternalAttenuationDB, ViInt32* Calibration );

/*- Reference */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetReferenceName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_Configure12 ( ViSession Vi, ViConstString Reference, ViReal64 Position, ViReal64 VerticalScale, ViReal64 HorizontalScale, ViBoolean DisplayState, ViReal64 HorizontalDelayTime );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read6 ( ViSession Vi, ViConstString Reference, ViReal64* Position, ViReal64* VerticalScale, ViReal64* HorizontalScale, ViBoolean* DisplayState, ViReal64* HorizontalDelayTime );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetDateTime ( ViSession Vi, ViConstString Reference, ViInt32 DateBufferSize, ViChar Date[], ViInt32 TimeBufferSize, ViChar Time[] );

/*- DigitalChannel */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetDigitalChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );

/*- WaveformTransfer */

ViStatus _VI_FUNC Tkdpo2k3k4k_CopyWaveformToClipboard ( ViSession Vi, ViInt32 WaveformSource, ViInt32 Start, ViInt32 Stop, ViInt32* PointsCopied );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveform2 ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformDigitizedLevel ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViInt32 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement, ViReal64* YZero, ViReal64* YMult, ViReal64* YOffset );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformHighResolution ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformMinMax ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MinWaveformBufferSize, ViReal64 MinWaveform[], ViInt32* MinWaveformActualSize, ViInt32 MaxWaveformBufferSize, ViReal64 MaxWaveform[], ViInt32* MaxWaveformActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformStartStop ( ViSession Vi, ViInt32 WaveformSource, ViInt32 Start, ViInt32 Stop, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformWithinCursor ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_FetchWaveformWithinZoom ( ViSession Vi, ViInt32 WaveformSource, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_InitiateAcquisition2 ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_IsWaveformElementInvalid ( ViSession Vi, ViReal64 Element, ViBoolean* Val );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveform2 ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MaxTimeMiliseconds, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViInt32* WaveformArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadWaveformMinMax ( ViSession Vi, ViInt32 WaveformSource, ViInt32 MaxTimeMiliseconds, ViInt32 MinWaveformBufferSize, ViReal64 MinWaveform[], ViInt32* MinWaveformActualSize, ViInt32 MaxWaveformBufferSize, ViReal64 MaxWaveform[], ViInt32* MaxWaveformActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveWaveformToFile2 ( ViSession Vi, ViInt32 WaveformSource, ViConstString FileName, ViInt32 FileFormat );
ViStatus _VI_FUNC Tkdpo2k3k4k_WriteWaveformToReference ( ViSession Vi, ViInt32 WaveformReference, ViInt32 WaveformArrayBufferSize, ViReal64 WaveformArray[], ViReal64 InitialX, ViReal64 XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAvailableDataCompositions ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetAvailableFilterVuFrequencies ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] );

/*- InstrumentIO */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetOPC ( ViSession Vi, ViBoolean* Val );
ViStatus _VI_FUNC Tkdpo2k3k4k_Query ( ViSession Vi, ViConstString Command, ViInt32 ValBufferSize, ViChar Val[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPartialString ( ViSession Vi, ViInt32 Length, ViInt32 ValBufferSize, ViChar Val[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadString ( ViSession Vi, ViInt32 ValBufferSize, ViChar Val[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_WriteString ( ViSession Vi, ViConstString Command );

/*- Mark */

ViStatus _VI_FUNC Tkdpo2k3k4k_CreateMark ( ViSession Vi, ViInt32 Mark );
ViStatus _VI_FUNC Tkdpo2k3k4k_DeleteMark ( ViSession Vi, ViInt32 Mark );
ViStatus _VI_FUNC Tkdpo2k3k4k_MoveZoomToMark ( ViSession Vi, ViInt32 Mark );

/*- MeasurementImmediate */

ViStatus _VI_FUNC Tkdpo2k3k4k_Configure14 ( ViSession Vi, ViInt32 Source, ViInt32 Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureDelay2 ( ViSession Vi, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePhase ( ViSession Vi, ViInt32 Source1, ViInt32 Source2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureReferenceLevel ( ViSession Vi, ViInt32 Method, ViInt32 Unit, ViReal64 High, ViReal64 Low, ViReal64 Mid, ViReal64 Mid2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_Read8 ( ViSession Vi, ViInt32* Source1, ViInt32* Source2, ViInt32* Direction, ViInt32* Edge1, ViInt32* Edge2, ViInt32* Type );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadReferenceLevel ( ViSession Vi, ViInt32* Method, ViInt32* Unit, ViReal64* High, ViReal64* Low, ViReal64* Mid, ViReal64* Mid2 );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadValue ( ViSession Vi, ViInt32 Source1, ViInt32 Source2, ViInt32 Direction, ViInt32 Edge1, ViInt32 Edge2, ViInt32 Type, ViReal64* Val, ViInt32 UnitBufferSize, ViChar Unit[] );

/*- UtilityEx */

ViStatus _VI_FUNC Tkdpo2k3k4k_Calibrate ( ViSession Vi, ViInt32* Val );
ViStatus _VI_FUNC Tkdpo2k3k4k_SelfTest ( ViSession Vi, ViInt32* TestResult, ViInt32 TestMessageBufferSize, ViChar TestMessage[] );

/*- PowerAnalysis */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureRefLevel ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 ReferenceLevelHysteresis, ViReal64 Mid );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadRefLevel ( ViSession Vi, ViInt32* ReferenceLevelType, ViReal64* ReferenceLevelHysteresis, ViReal64* Mid );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetDefaultRefLevel ( ViSession Vi, ViInt32 ReferenceLevelType );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelHigh ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64* ReferenceLevelHigh );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelHigh ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 ReferenceLevelHigh );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLow ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64* RefLevelLow );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLow ( ViSession Vi, ViInt32 ReferenceLevelType, ViReal64 RefLevelLow );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelMid ( ViSession Vi, ViInt32 ReferenceLevelType, ViInt32 Number, ViReal64* RefLevelMid );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelMid ( ViSession Vi, ViInt32 ReferenceLevelType, ViInt32 Number, ViReal64 RefLevelMid );
ViStatus _VI_FUNC Tkdpo2k3k4k_ResetStatistics ( ViSession Vi );

/*- Quality */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetMeasDisplayState ( ViSession Vi, ViInt32 DisplayMeasurement, ViBoolean* MeasDisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetMeasDisplayState ( ViSession Vi, ViInt32 DisplayMeasurement, ViBoolean MeasDisplayState );

/*- SwitchingLoss */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLowVoltage ( ViSession Vi, ViInt32 Type, ViReal64* RefLevelLowVoltage );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLowVoltage ( ViSession Vi, ViInt32 Type, ViReal64 RefLevelLowVoltage );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRefLevelLowCurrent ( ViSession Vi, ViInt32 Type, ViReal64* RefLevelLowCurrent );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRefLevelLowCurrent ( ViSession Vi, ViInt32 Type, ViReal64 RefLevelLowCurrent );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureGating ( ViSession Vi, ViInt32 Polarity, ViReal64 TurnOn );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadGating ( ViSession Vi, ViInt32* Polarity, ViReal64* TurnOn );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTOffLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTOnLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadTotalLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadConductionLosses ( ViSession Vi, ViInt32 Type, ViReal64 Mean, ViReal64 Min, ViReal64 Max );

/*- Harmonics */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetParameters ( ViSession Vi, ViInt32 FrequencyReference, ViReal64 FixedReference, ViInt32 NumberOfHarmonics, ViInt32 HarmonicsSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetParameters ( ViSession Vi, ViInt32* FrequencyReference, ViReal64* FixedReference, ViInt32* NumberOfHarmonics, ViInt32* HarmonicsSource );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureIEC ( ViSession Vi, ViInt32 Class, ViBoolean Filter, ViReal64 FundamentalCurrent, ViBoolean Grouping, ViReal64 InputPower, ViReal64 LineFrequency, ViReal64 ObservationPeriod, ViReal64 PowerFactor );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadIEC ( ViSession Vi, ViInt32* Class, ViBoolean* Filter, ViReal64* FundamentalCurrent, ViBoolean* Grouping, ViReal64* InputPower, ViReal64* LineFrequency, ViReal64* ObservationPeriod, ViReal64* PowerFactor );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureMIL ( ViSession Vi, ViInt32 FundamentalCurrentCalculating, ViReal64 UserCurrent, ViReal64 LineFrequency, ViInt32 PowerLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMIL ( ViSession Vi, ViInt32* FundamentalCurrentCalculating, ViReal64* UserCurrent, ViReal64* LineFrequency, ViInt32* PowerLevel );
ViStatus _VI_FUNC Tkdpo2k3k4k_SaveResultsToFile ( ViSession Vi, ViConstString Filename );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHamroniciecMaxResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HamronicIECMaxResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicPercentageMagnitudeResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicPercentageMagnitudeResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicAbsoluteMagnitudeResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicAbsoluteMagnitudeResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicPhaseResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicPhaseResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicFrequencyResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicFrequencyResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicLimitResult ( ViSession Vi, ViInt32 Harmonic, ViReal64* HarmonicLimitResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecClassaLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECClassALimitResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecHigherLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECHigherLimitResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmoniciecNormalLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicIECNormalLimitResult );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetHarmonicmilNormalLimitResult ( ViSession Vi, ViInt32 Harmonic, ViInt32* HarmonicMILNormalLimitResult );

/*- Ripple */

ViStatus _VI_FUNC Tkdpo2k3k4k_DoVerticalAutoSet ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetOffsetToZero ( ViSession Vi );

/*- SafeOperatingArea */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureAxes ( ViSession Vi, ViInt32 Type, ViReal64 YaxesMax, ViReal64 YaxesMin, ViReal64 XaxesMax, ViReal64 XaxesMin );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadAxes ( ViSession Vi, ViInt32 Type, ViReal64* YaxesMax, ViReal64* YaxesMin, ViReal64* XaxesMax, ViReal64* XaxesMin );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureMaskLimits ( ViSession Vi, ViReal64 MaxVoltage, ViReal64 MaxCurrent, ViReal64 MaxPower );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadMaskLimits ( ViSession Vi, ViReal64* MaxVoltage, ViReal64* MaxCurrent, ViReal64* MaxPower );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetMaskPoints ( ViSession Vi, ViInt32 VoltsBufferSize, ViReal64 Volts[], ViInt32 AmpsBufferSize, ViReal64 Amps[] );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetMaskPoints ( ViSession Vi, ViInt32 VoltsBufferSize, ViReal64 Volts[], ViInt32* VoltsActualSize, ViInt32 AmpsBufferSize, ViReal64 Amps[], ViInt32* AmpsActualSize );

/*- Frequency */

ViStatus _VI_FUNC Tkdpo2k3k4k_GetSpectrumTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean* SpectrumTraceDisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetSpectrumTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean SpectrumTraceDisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_GetRfVsTimeTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean* RFVsTimeTraceDisplayState );
ViStatus _VI_FUNC Tkdpo2k3k4k_SetRfVsTimeTraceDisplayState ( ViSession Vi, ViInt32 Type, ViBoolean RFVsTimeTraceDisplayState );

/*- RF */

ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureVerticalParameters ( ViSession Vi, ViInt32 RFTraceType, ViReal64 Scale, ViReal64 Position );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadVerticalParameters ( ViSession Vi, ViInt32 RFTraceType, ViReal64* Scale, ViReal64* Position );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureManualDetectionMethod ( ViSession Vi, ViInt32 Type, ViInt32 Method );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadManualDetectionMethod ( ViSession Vi, ViInt32 Type, ViInt32* Method );

/*- Amplitude */

ViStatus _VI_FUNC Tkdpo2k3k4k_SetAutoRefLevel ( ViSession Vi );

/*- Marker */

ViStatus _VI_FUNC Tkdpo2k3k4k_MoveRefToCentre ( ViSession Vi );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadReference ( ViSession Vi, ViReal64* Frequency, ViReal64* Amplitude );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadManual ( ViSession Vi, ViInt32 Marker, ViReal64* HorizontalValue, ViReal64* HorizontalDelta, ViReal64* VerticalValue, ViReal64* VerticalDelta );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigureManual ( ViSession Vi, ViInt32 Marker, ViReal64 HorizontalValue );
ViStatus _VI_FUNC Tkdpo2k3k4k_ConfigurePeak ( ViSession Vi, ViInt32 MaximumMarkers, ViReal64 Threshold, ViReal64 Excursion );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadPeak ( ViSession Vi, ViBoolean* State, ViInt32* MaximumMarkers, ViReal64* Threshold, ViReal64* Excursion );

/*- Trace */

ViStatus _VI_FUNC Tkdpo2k3k4k_FetchY ( ViSession Vi, ViInt32 Source, ViInt32 TraceArrayBufferSize, ViReal64 TraceArray[], ViInt32* TraceArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );
ViStatus _VI_FUNC Tkdpo2k3k4k_ReadY ( ViSession Vi, ViInt32 Source, ViInt32 TraceArrayBufferSize, ViReal64 TraceArray[], ViInt32* TraceArrayActualSize, ViReal64* InitialX, ViReal64* XIncrement );


/**************************************************************************** 
 *----------------- Instrument Error And Completion Codes ------------------* 
 ****************************************************************************/
#ifndef _IVIC_ERROR_BASE_DEFINES_
#define _IVIC_ERROR_BASE_DEFINES_

#define IVIC_WARN_BASE                           (0x3FFA0000L)
#define IVIC_CROSS_CLASS_WARN_BASE               (IVIC_WARN_BASE + 0x1000)
#define IVIC_CLASS_WARN_BASE                     (IVIC_WARN_BASE + 0x2000)
#define IVIC_SPECIFIC_WARN_BASE                  (IVIC_WARN_BASE + 0x4000)

#define IVIC_ERROR_BASE                          (0xBFFA0000L)
#define IVIC_CROSS_CLASS_ERROR_BASE              (IVIC_ERROR_BASE + 0x1000)
#define IVIC_CLASS_ERROR_BASE                    (IVIC_ERROR_BASE + 0x2000)
#define IVIC_SPECIFIC_ERROR_BASE                 (IVIC_ERROR_BASE + 0x4000)
#define IVIC_LXISYNC_ERROR_BASE                  (IVIC_ERROR_BASE + 0x2000)

#define IVIC_ERROR_INVALID_ATTRIBUTE             (IVIC_ERROR_BASE + 0x000C)
#define IVIC_ERROR_TYPES_DO_NOT_MATCH            (IVIC_ERROR_BASE + 0x0015)
#define IVIC_ERROR_IVI_ATTR_NOT_WRITABLE         (IVIC_ERROR_BASE + 0x000D)
#define IVIC_ERROR_IVI_ATTR_NOT_READABLE         (IVIC_ERROR_BASE + 0x000E)
#define IVIC_ERROR_INVALID_SESSION_HANDLE        (IVIC_ERROR_BASE + 0x1190)

#endif


#define TKDPO2K3K4K_ERROR_CANNOT_RECOVER                       (IVIC_ERROR_BASE + 0x0000)
#define TKDPO2K3K4K_ERROR_INSTRUMENT_STATUS                    (IVIC_ERROR_BASE + 0x0001)
#define TKDPO2K3K4K_ERROR_CANNOT_OPEN_FILE                     (IVIC_ERROR_BASE + 0x0002)
#define TKDPO2K3K4K_ERROR_READING_FILE                         (IVIC_ERROR_BASE + 0x0003)
#define TKDPO2K3K4K_ERROR_WRITING_FILE                         (IVIC_ERROR_BASE + 0x0004)
#define TKDPO2K3K4K_ERROR_INVALID_PATHNAME                     (IVIC_ERROR_BASE + 0x000B)
#define TKDPO2K3K4K_ERROR_INVALID_VALUE                        (IVIC_ERROR_BASE + 0x0010)
#define TKDPO2K3K4K_ERROR_FUNCTION_NOT_SUPPORTED               (IVIC_ERROR_BASE + 0x0011)
#define TKDPO2K3K4K_ERROR_ATTRIBUTE_NOT_SUPPORTED              (IVIC_ERROR_BASE + 0x0012)
#define TKDPO2K3K4K_ERROR_VALUE_NOT_SUPPORTED                  (IVIC_ERROR_BASE + 0x0013)
#define TKDPO2K3K4K_ERROR_NOT_INITIALIZED                      (IVIC_ERROR_BASE + 0x001D)
#define TKDPO2K3K4K_ERROR_UNKNOWN_CHANNEL_NAME                 (IVIC_ERROR_BASE + 0x0020)
#define TKDPO2K3K4K_ERROR_TOO_MANY_OPEN_FILES                  (IVIC_ERROR_BASE + 0x0023)
#define TKDPO2K3K4K_ERROR_CHANNEL_NAME_REQUIRED                (IVIC_ERROR_BASE + 0x0044)
#define TKDPO2K3K4K_ERROR_MISSING_OPTION_NAME                  (IVIC_ERROR_BASE + 0x0049)
#define TKDPO2K3K4K_ERROR_MISSING_OPTION_VALUE                 (IVIC_ERROR_BASE + 0x004A)
#define TKDPO2K3K4K_ERROR_BAD_OPTION_NAME                      (IVIC_ERROR_BASE + 0x004B)
#define TKDPO2K3K4K_ERROR_BAD_OPTION_VALUE                     (IVIC_ERROR_BASE + 0x004C)
#define TKDPO2K3K4K_ERROR_OUT_OF_MEMORY                        (IVIC_ERROR_BASE + 0x0056)
#define TKDPO2K3K4K_ERROR_OPERATION_PENDING                    (IVIC_ERROR_BASE + 0x0057)
#define TKDPO2K3K4K_ERROR_NULL_POINTER                         (IVIC_ERROR_BASE + 0x0058)
#define TKDPO2K3K4K_ERROR_UNEXPECTED_RESPONSE                  (IVIC_ERROR_BASE + 0x0059)
#define TKDPO2K3K4K_ERROR_FILE_NOT_FOUND                       (IVIC_ERROR_BASE + 0x005B)
#define TKDPO2K3K4K_ERROR_INVALID_FILE_FORMAT                  (IVIC_ERROR_BASE + 0x005C)
#define TKDPO2K3K4K_ERROR_STATUS_NOT_AVAILABLE                 (IVIC_ERROR_BASE + 0x005D)
#define TKDPO2K3K4K_ERROR_ID_QUERY_FAILED                      (IVIC_ERROR_BASE + 0x005E)
#define TKDPO2K3K4K_ERROR_RESET_FAILED                         (IVIC_ERROR_BASE + 0x005F)
#define TKDPO2K3K4K_ERROR_RESOURCE_UNKNOWN                     (IVIC_ERROR_BASE + 0x0060)
#define TKDPO2K3K4K_ERROR_ALREADY_INITIALIZED                  (IVIC_ERROR_BASE + 0x0061)
#define TKDPO2K3K4K_ERROR_CANNOT_CHANGE_SIMULATION_STATE       (IVIC_ERROR_BASE + 0x0062)
#define TKDPO2K3K4K_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR (IVIC_ERROR_BASE + 0x0063)
#define TKDPO2K3K4K_ERROR_INVALID_RANGE_IN_SELECTOR            (IVIC_ERROR_BASE + 0x0064)
#define TKDPO2K3K4K_ERROR_UNKOWN_NAME_IN_SELECTOR              (IVIC_ERROR_BASE + 0x0065)
#define TKDPO2K3K4K_ERROR_BADLY_FORMED_SELECTOR                (IVIC_ERROR_BASE + 0x0066)
#define TKDPO2K3K4K_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER          (IVIC_ERROR_BASE + 0x0067)



#define TKDPO2K3K4K_SUCCESS                                 0
#define TKDPO2K3K4K_WARN_NSUP_ID_QUERY                      (IVIC_WARN_BASE + 0x0065)
#define TKDPO2K3K4K_WARN_NSUP_RESET                         (IVIC_WARN_BASE + 0x0066)
#define TKDPO2K3K4K_WARN_NSUP_SELF_TEST                     (IVIC_WARN_BASE + 0x0067)
#define TKDPO2K3K4K_WARN_NSUP_ERROR_QUERY                   (IVIC_WARN_BASE + 0x0068)
#define TKDPO2K3K4K_WARN_NSUP_REV_QUERY                     (IVIC_WARN_BASE + 0x0069)



#define TKDPO2K3K4K_ERROR_IO_GENERAL                        (IVIC_SPECIFIC_ERROR_BASE + 0x0214)
#define TKDPO2K3K4K_ERROR_IO_TIMEOUT                        (IVIC_SPECIFIC_ERROR_BASE + 0x0215)
#define TKDPO2K3K4K_ERROR_MODEL_NOT_SUPPORTED               (IVIC_SPECIFIC_ERROR_BASE + 0x0216)
#define TKDPO2K3K4K_ERROR_PERSONALITY_NOT_ACTIVE            (IVIC_SPECIFIC_ERROR_BASE + 0x0211)
#define TKDPO2K3K4K_ERROR_PERSONALITY_NOT_LICENSED          (IVIC_SPECIFIC_ERROR_BASE + 0x0213)
#define TKDPO2K3K4K_ERROR_PERSONALITY_NOT_INSTALLED         (IVIC_SPECIFIC_ERROR_BASE + 0x0212)
#define TKDPO2K3K4K_ERROR_CHANNEL_NOT_ENABLED               (IVIC_CLASS_ERROR_BASE + 0x0001)
#define TKDPO2K3K4K_ERROR_UNABLE_TO_PERFORM_MEASUREMENT     (IVIC_CLASS_ERROR_BASE + 0x0002)
#define TKDPO2K3K4K_ERROR_MAX_TIME_EXCEEDED                 (IVIC_CLASS_ERROR_BASE + 0x0003)
#define TKDPO2K3K4K_ERROR_INVALID_ACQ_TYPE                  (IVIC_CLASS_ERROR_BASE + 0x0004)
#define TKDPO2K3K4K_ERROR_NO_ACQUISITION_MADE               (IVIC_SPECIFIC_ERROR_BASE + 0x021A)
#define TKDPO2K3K4K_ERROR_CHANNEL_NOT_SUPPORTED             (IVIC_SPECIFIC_ERROR_BASE + 0x021C)
#define TKDPO2K3K4K_ERROR_REFERENCE_NOT_SUPPORTED           (IVIC_SPECIFIC_ERROR_BASE + 0x021D)



#define TKDPO2K3K4K_WARN_INVALID_WFM_ELEMENT                (IVIC_CLASS_WARN_BASE + 0x0001)


/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif // __TKDPO2K3K4K_HEADER
