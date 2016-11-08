/******************************************************************************
*                                                                         
*               Nimbus auto-generated file
*               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
*				 Changes will be OVERWRITTEN by NIMBUS.
*
*****************************************************************************/
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: IDS_S_IVI_SUCCESS
//
// MessageText:
//
// Tkdpo2k3k4k: Success.
//
#define IDS_S_IVI_SUCCESS                0x00000001L

//
// MessageId: IDS_E_IVI_CANNOT_RECOVER
//
// MessageText:
//
// Tkdpo2k3k4k: Unrecoverable failure.
//
#define IDS_E_IVI_CANNOT_RECOVER         0x00000002L

//
// MessageId: IDS_E_IVI_INSTRUMENT_STATUS
//
// MessageText:
//
// Tkdpo2k3k4k: Instrument error detected.  Use ErrorQuery() to determine error(s).
//
#define IDS_E_IVI_INSTRUMENT_STATUS      0x00000003L

//
// MessageId: IDS_E_IVI_CANNOT_OPEN_FILE
//
// MessageText:
//
// Tkdpo2k3k4k: Cannot open file.
//
#define IDS_E_IVI_CANNOT_OPEN_FILE       0x00000004L

//
// MessageId: IDS_E_IVI_READING_FILE
//
// MessageText:
//
// Tkdpo2k3k4k: Error reading file.
//
#define IDS_E_IVI_READING_FILE           0x00000005L

//
// MessageId: IDS_E_IVI_WRITING_FILE
//
// MessageText:
//
// Tkdpo2k3k4k: Error writing file.
//
#define IDS_E_IVI_WRITING_FILE           0x00000006L

//
// MessageId: IDS_E_IVI_INVALID_PATHNAME
//
// MessageText:
//
// Tkdpo2k3k4k: The path name is invalid.
//
#define IDS_E_IVI_INVALID_PATHNAME       0x00000007L

//
// MessageId: IDS_E_IVI_INVALID_VALUE
//
// MessageText:
//
// Tkdpo2k3k4k: Invalid value (%1) for method %2, parameter %3.
//
#define IDS_E_IVI_INVALID_VALUE          0x00000008L

//
// MessageId: IDS_E_IVI_METHOD_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Does not support this class-compliant feature: method %1.
//
#define IDS_E_IVI_METHOD_NOT_SUPPORTED   0x00000009L

//
// MessageId: IDS_E_IVI_PROPERTY_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Does not support this class-compliant feature: property %1.
//
#define IDS_E_IVI_PROPERTY_NOT_SUPPORTED 0x0000000AL

//
// MessageId: IDS_E_IVI_VALUE_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Does not support this class-compliant feature: (enumeration) value %1 passed as the value for parameter %2 in method %3.
//
#define IDS_E_IVI_VALUE_NOT_SUPPORTED    0x0000000BL

//
// MessageId: IDS_E_IVI_NOT_INITIALIZED
//
// MessageText:
//
// Tkdpo2k3k4k: A connection to the instrument has not been established.
//
#define IDS_E_IVI_NOT_INITIALIZED        0x0000000CL

//
// MessageId: IDS_E_IVI_UNKNOWN_CHANNEL_NAME
//
// MessageText:
//
// Tkdpo2k3k4k: Unknown channel name.
//
#define IDS_E_IVI_UNKNOWN_CHANNEL_NAME   0x0000000DL

//
// MessageId: IDS_E_IVI_TOO_MANY_OPEN_FILES
//
// MessageText:
//
// Tkdpo2k3k4k: Too many files are opened.
//
#define IDS_E_IVI_TOO_MANY_OPEN_FILES    0x0000000EL

//
// MessageId: IDS_E_IVI_CHANNEL_NAME_REQUIRED
//
// MessageText:
//
// Tkdpo2k3k4k: A channel name is required.
//
#define IDS_E_IVI_CHANNEL_NAME_REQUIRED  0x0000000FL

//
// MessageId: IDS_E_IVI_MISSING_OPTION_NAME
//
// MessageText:
//
// Tkdpo2k3k4k: The option string is missing an option name.
//
#define IDS_E_IVI_MISSING_OPTION_NAME    0x00000010L

//
// MessageId: IDS_E_IVI_MISSING_OPTION_VALUE
//
// MessageText:
//
// Tkdpo2k3k4k: The option string is missing an option value.
//
#define IDS_E_IVI_MISSING_OPTION_VALUE   0x00000011L

//
// MessageId: IDS_E_IVI_BAD_OPTION_NAME
//
// MessageText:
//
// Tkdpo2k3k4k: The %1 name in the option string is unknown.
//
#define IDS_E_IVI_BAD_OPTION_NAME        0x00000012L

//
// MessageId: IDS_E_IVI_BAD_OPTION_VALUE
//
// MessageText:
//
// Tkdpo2k3k4k: The %1 value in the option string is unknown.
//
#define IDS_E_IVI_BAD_OPTION_VALUE       0x00000013L

//
// MessageId: IDS_E_IVI_OUT_OF_MEMORY
//
// MessageText:
//
// Tkdpo2k3k4k: Could not allocate necessary memory.
//
#define IDS_E_IVI_OUT_OF_MEMORY          0x00000014L

//
// MessageId: IDS_E_IVI_OPERATION_PENDING
//
// MessageText:
//
// Tkdpo2k3k4k: Operation in progress.
//
#define IDS_E_IVI_OPERATION_PENDING      0x00000015L

//
// MessageId: IDS_E_IVI_NULL_POINTER
//
// MessageText:
//
// Tkdpo2k3k4k: Null pointer passed for method %1, parameter %2.
//
#define IDS_E_IVI_NULL_POINTER           0x00000016L

//
// MessageId: IDS_E_IVI_UNEXPECTED_RESPONSE
//
// MessageText:
//
// Tkdpo2k3k4k: Unexpected response from the instrument.
//
#define IDS_E_IVI_UNEXPECTED_RESPONSE    0x00000017L

//
// MessageId: IDS_E_IVI_FILE_NOT_FOUND
//
// MessageText:
//
// Tkdpo2k3k4k: File not found.
//
#define IDS_E_IVI_FILE_NOT_FOUND         0x00000018L

//
// MessageId: IDS_E_IVI_INVALID_FILE_FORMAT
//
// MessageText:
//
// Tkdpo2k3k4k: Invalid file format.
//
#define IDS_E_IVI_INVALID_FILE_FORMAT    0x00000019L

//
// MessageId: IDS_E_IVI_STATUS_NOT_AVAILABLE
//
// MessageText:
//
// Tkdpo2k3k4k: The instrument status is not available.
//
#define IDS_E_IVI_STATUS_NOT_AVAILABLE   0x0000001AL

//
// MessageId: IDS_E_IVI_ID_QUERY_FAILED
//
// MessageText:
//
// Tkdpo2k3k4k: Instrument ID query failed.
//
#define IDS_E_IVI_ID_QUERY_FAILED        0x0000001BL

//
// MessageId: IDS_E_IVI_RESET_FAILED
//
// MessageText:
//
// Tkdpo2k3k4k: Instrument reset failed.
//
#define IDS_E_IVI_RESET_FAILED           0x0000001CL

//
// MessageId: IDS_E_IVI_RESOURCE_UNKNOWN
//
// MessageText:
//
// Tkdpo2k3k4k: Unknown resource.
//
#define IDS_E_IVI_RESOURCE_UNKNOWN       0x0000001DL

//
// MessageId: IDS_E_IVI_ALREADY_INITIALIZED
//
// MessageText:
//
// Tkdpo2k3k4k: The driver is already initialized.
//
#define IDS_E_IVI_ALREADY_INITIALIZED    0x0000001EL

//
// MessageId: IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE
//
// MessageText:
//
// Tkdpo2k3k4k: The simulation state cannot be changed.
//
#define IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE 0x0000001FL

//
// MessageId: IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR
//
// MessageText:
//
// Tkdpo2k3k4k: The number of levels in the selector is not valid for the %1 repeated capability.
//
#define IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR 0x00000020L

//
// MessageId: IDS_E_IVI_INVALID_RANGE_IN_SELECTOR
//
// MessageText:
//
// Tkdpo2k3k4k: The range %1 is not valid for the repeated capability %2.
//
#define IDS_E_IVI_INVALID_RANGE_IN_SELECTOR 0x00000021L

//
// MessageId: IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR
//
// MessageText:
//
// Tkdpo2k3k4k: Unknown name in selector.
//
#define IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR 0x00000022L

//
// MessageId: IDS_E_IVI_BADLY_FORMED_SELECTOR
//
// MessageText:
//
// Tkdpo2k3k4k: The repeated capability selector is badly-formed.
//
#define IDS_E_IVI_BADLY_FORMED_SELECTOR  0x00000023L

//
// MessageId: IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER
//
// MessageText:
//
// Tkdpo2k3k4k: Unknown physical repeated capability selector.
//
#define IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER 0x00000024L

//
// MessageId: IDS_S_IVI_NSUP_ID_QUERY
//
// MessageText:
//
// Tkdpo2k3k4k: ID Query is not supported by this instrument.
//
#define IDS_S_IVI_NSUP_ID_QUERY          0x00000025L

//
// MessageId: IDS_S_IVI_NSUP_RESET
//
// MessageText:
//
// Tkdpo2k3k4k: Reset is not supported by this instrument.
//
#define IDS_S_IVI_NSUP_RESET             0x00000026L

//
// MessageId: IDS_S_IVI_NSUP_SELF_TEST
//
// MessageText:
//
// Tkdpo2k3k4k: Self test is not supported by this instrument.
//
#define IDS_S_IVI_NSUP_SELF_TEST         0x00000027L

//
// MessageId: IDS_S_IVI_NSUP_ERROR_QUERY
//
// MessageText:
//
// Tkdpo2k3k4k: Error query is not supported by this instrument.
//
#define IDS_S_IVI_NSUP_ERROR_QUERY       0x00000028L

//
// MessageId: IDS_S_IVI_NSUP_REV_QUERY
//
// MessageText:
//
// Tkdpo2k3k4k: Firmware revision query is not supported by this instrument.
//
#define IDS_S_IVI_NSUP_REV_QUERY         0x00000029L

//
// MessageId: IDS_E_TKDPO2K3K4K_IO_GENERAL
//
// MessageText:
//
// Tkdpo2k3k4k: I/O error: %1.
//
#define IDS_E_TKDPO2K3K4K_IO_GENERAL     0x0000002AL

//
// MessageId: IDS_E_TKDPO2K3K4K_IO_TIMEOUT
//
// MessageText:
//
// Tkdpo2k3k4k: I/O timeout error: %1.
//
#define IDS_E_TKDPO2K3K4K_IO_TIMEOUT     0x0000002BL

//
// MessageId: IDS_E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Instrument model does not support this feature: %1.
//
#define IDS_E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED 0x0000002CL

//
// MessageId: IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE
//
// MessageText:
//
// Tkdpo2k3k4k: Personality is not active.
//
#define IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE 0x0000002DL

//
// MessageId: IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED
//
// MessageText:
//
// Tkdpo2k3k4k: Personality is not licensed.
//
#define IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED 0x0000002EL

//
// MessageId: IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED
//
// MessageText:
//
// Tkdpo2k3k4k: Personality is not installed.
//
#define IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED 0x0000002FL

//
// MessageId: IDS_E_TKDPO2K3K4K_NO_ACQUISITION_MADE
//
// MessageText:
//
// Tkdpo2k3k4k: No acquisitions made, start acquisition.
//
#define IDS_E_TKDPO2K3K4K_NO_ACQUISITION_MADE 0x00000030L

//
// MessageId: IDS_E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Channel not supported.
//
#define IDS_E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED 0x00000031L

//
// MessageId: IDS_E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED
//
// MessageText:
//
// Tkdpo2k3k4k: Reference channel not supported.
//
#define IDS_E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED 0x00000032L

//
// MessageId: IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED
//
// MessageText:
//
// Tkdpo2k3k4k: Specified channel is not enabled.
//
#define IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED 0x00000033L

//
// MessageId: IDS_E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT
//
// MessageText:
//
// Tkdpo2k3k4k: Unable to perform desired measurement operation.
//
#define IDS_E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT 0x00000034L

//
// MessageId: IDS_E_IVISCOPE_MAX_TIME_EXCEEDED
//
// MessageText:
//
// Tkdpo2k3k4k: Maximum time exceeded before the operation completed.
//
#define IDS_E_IVISCOPE_MAX_TIME_EXCEEDED 0x00000035L

//
// MessageId: IDS_E_IVISCOPE_INVALID_ACQ_TYPE
//
// MessageText:
//
// Tkdpo2k3k4k: Invalid acquisition type.
//
#define IDS_E_IVISCOPE_INVALID_ACQ_TYPE  0x00000036L

//
// MessageId: IDS_S_IVISCOPE_INVALID_WFM_ELEMENT
//
// MessageText:
//
// Tkdpo2k3k4k: One of the elements in the waveform array is invalid.
//
#define IDS_S_IVISCOPE_INVALID_WFM_ELEMENT 0x00000037L

