#pragma once

#include "_Tkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4k.nimbus.h"

#define IVI_TKDPO2K3K4K_WFMTRANSFER_MAXROW			(200)
#define IVI_TKDPO2K3K4K_WFMTRANSFER_MAXCOL			(500)
#define IVI_TKDPO2K3K4K_WFMTRANSFER_DPO_MAXROW			(252)
#define IVI_TKDPO2K3K4K_WFMTRANSFER_DPO_MAXCOL			(1000)
#define TKDPO2K3K4K_QUERY_INTERVAL (15000)
#define TKDPO2K3K4K_QUERY_COUNTLIMIT (100)

#define IDS_E_TKDPO2K3K4K_ACQMODE_NOTSUPPORTED 0x000000ECL
#define IDS_E_TKDPO2K3K4K_OPTION_NOTSUPPORTED 0x000000F0L

#define IDS_E_TKDPO2K3K4K_PROPERTY_NOTSUPPORTED 0x000000F1L
#define IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED 0x000000F6L
//#define IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED 0x000000E7L
//#define IDS_E_IVISCOPE_INVALID_ACQ_TYPE  0x000000EAL
#define IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED 0x000000F6L
//#define IDS_E_IVISCOPE_MAX_TIME_EXCEEDED 0x000000E9L
//#define IDS_E_IVI_INVALID_VALUE          0x000000C5L
#define IDS_E_TKDPO2K3K4K_CHANNEL_NOTSUPPORTED 0x000000F5L

class ATL_NO_VTABLE Tkdpo2k3k4k :
	public _Driver<Tkdpo2k3k4k>,
	public _ITkdpo2k3k4k,
	public _IIviDriver,
	public _IIviDriverOperation,
	public _IIviDriverIdentity,
	public _IIviComponentIdentity,
	public _IIviDriverUtility,
	public _ITkdpo2k3k4kChannels,
	public _IIviScope,
	public _IIviScopeAcquisition,
	public _IIviScopeMeasurements,
	public _IIviScopeChannels,
	public _IIviScopeReferenceLevel,
	public _IIviScopeTrigger,
	public _IIviScopeTriggerAcLine,
	public _IIviScopeTriggerEdge,
	public _IIviScopeTriggerGlitch,
	public _IIviScopeTriggerRunt,
	public _IIviScopeTriggerTv,
	public _IIviScopeTriggerWidth,
	public _ITkdpo2k3k4kAcquisition,
	public _ITkdpo2k3k4kTrigger,
	public _ITkdpo2k3k4kTriggerAEdge,
	public _ITkdpo2k3k4kBuses,
	public _ITkdpo2k3k4kCursor,
	public _ITkdpo2k3k4kCursorHBars,
	public _ITkdpo2k3k4kCursorVBars,
	public _ITkdpo2k3k4kCursorXY,
	public _ITkdpo2k3k4kCursorXYRectangle,
	public _ITkdpo2k3k4kCursorXYRatio,
	public _ITkdpo2k3k4kCursorXYProduct,
	public _ITkdpo2k3k4kCursorXYPolarCoordinates,
	public _ITkdpo2k3k4kDisplay,
	public _ITkdpo2k3k4kHardCopy,
	public _ITkdpo2k3k4kHistogram,
	public _ITkdpo2k3k4kHorizontal,
	public _ITkdpo2k3k4kMark,
	public _ITkdpo2k3k4kMaths,
	public _ITkdpo2k3k4kMeasurementImmediate,
	public _ITkdpo2k3k4kMeasurements,
	public _ITkdpo2k3k4kMeasurementsIndicators,
	public _ITkdpo2k3k4kSaveRecall,
	public _ITkdpo2k3k4kSearches,
	public _ITkdpo2k3k4kTriggerABus,
	public _ITkdpo2k3k4kTriggerABusAudio,
	public _ITkdpo2k3k4kTriggerABusCAN,
	public _ITkdpo2k3k4kTriggerABusFlexray,
	public _ITkdpo2k3k4kTriggerABusI2C,
	public _ITkdpo2k3k4kTriggerABusLIN,
	public _ITkdpo2k3k4kTriggerABusRS232,
	public _ITkdpo2k3k4kTriggerABusSPI,
	public _ITkdpo2k3k4kTriggerABusUSB,
	public _ITkdpo2k3k4kTriggerALogic,
	public _ITkdpo2k3k4kTriggerAWidth,
	public _ITkdpo2k3k4kTriggerARunt,
	public _ITkdpo2k3k4kTriggerASetupHold,
	public _ITkdpo2k3k4kTriggerATransition,
	public _ITkdpo2k3k4kTriggerAVideo,
	public _ITkdpo2k3k4kTriggerBEdge,
	public _ITkdpo2k3k4kReferences,
	public _ITkdpo2k3k4kDigitalChannels,
	public _ITkdpo2k3k4kZoom,
	public _ITkdpo2k3k4kWaveformTransfer,
	public _ITkdpo2k3k4kUtilityEx,
	public _ITkdpo2k3k4kInstrumentIO,
	public _ITkdpo2k3k4kPowerAnalysis,
	public _ITkdpo2k3k4kPowerAnalysisQuality,
	public _ITkdpo2k3k4kPowerAnalysisSwitchingLoss,
	public _ITkdpo2k3k4kPowerAnalysisHarmonics,
	public _ITkdpo2k3k4kPowerAnalysisRipple,
	public _ITkdpo2k3k4kPowerAnalysisModulation,
	public _ITkdpo2k3k4kPowerAnalysisSafeOperatingArea,
	public _ITkdpo2k3k4kFrequency,
	public _ITkdpo2k3k4kFrequencyRF,
	public _ITkdpo2k3k4kFrequencyRFFrequencyAndSpan,
	public _ITkdpo2k3k4kFrequencyRFAmplitude,
	public _ITkdpo2k3k4kFrequencyRFBandwidth,
	public _ITkdpo2k3k4kMeasurementsFrequency,
	public _ITkdpo2k3k4kFrequencyMarker,
	public _ITkdpo2k3k4kFrequencyTrace
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4K()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalConstruct();
	virtual void OnFinalRelease();

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:
	// Helper functions for identifying specific types of scopes
	bool Is2Channel() { return GetModel().GetLength() > 6 && GetModel()[6] == '2'; }

public:
	STDMETHOD(ITkdpo2k3k4k_get_Channels)(ITkdpo2k3k4kChannels** val);
	STDMETHOD(ITkdpo2k3k4k_get_Acquisition)(ITkdpo2k3k4kAcquisition** val);
	STDMETHOD(ITkdpo2k3k4k_get_Trigger)(ITkdpo2k3k4kTrigger** val);
	STDMETHOD(ITkdpo2k3k4k_get_Buses)(ITkdpo2k3k4kBuses** val);
	STDMETHOD(ITkdpo2k3k4k_get_Cursor)(ITkdpo2k3k4kCursor** val);
	STDMETHOD(ITkdpo2k3k4k_get_Display)(ITkdpo2k3k4kDisplay** val);
	STDMETHOD(ITkdpo2k3k4k_get_HardCopy)(ITkdpo2k3k4kHardCopy** val);
	STDMETHOD(ITkdpo2k3k4k_get_Histogram)(ITkdpo2k3k4kHistogram** val);
	STDMETHOD(ITkdpo2k3k4k_get_Horizontal)(ITkdpo2k3k4kHorizontal** val);
	STDMETHOD(ITkdpo2k3k4k_get_Mark)(ITkdpo2k3k4kMark** val);
	STDMETHOD(ITkdpo2k3k4k_get_Maths)(ITkdpo2k3k4kMaths** val);
	STDMETHOD(ITkdpo2k3k4k_get_MeasurementImmediate)(ITkdpo2k3k4kMeasurementImmediate** val);
	STDMETHOD(ITkdpo2k3k4k_get_Measurements)(ITkdpo2k3k4kMeasurements** val);
	STDMETHOD(ITkdpo2k3k4k_get_SaveRecall)(ITkdpo2k3k4kSaveRecall** val);
	STDMETHOD(ITkdpo2k3k4k_get_Searches)(ITkdpo2k3k4kSearches** val);
	STDMETHOD(ITkdpo2k3k4k_get_References)(ITkdpo2k3k4kReferences** val);
	STDMETHOD(ITkdpo2k3k4k_get_DigitalChannels)(ITkdpo2k3k4kDigitalChannels** val);
	STDMETHOD(ITkdpo2k3k4k_get_Zoom)(ITkdpo2k3k4kZoom** val);
	STDMETHOD(ITkdpo2k3k4k_get_WaveformTransfer)(ITkdpo2k3k4kWaveformTransfer** val);
	STDMETHOD(ITkdpo2k3k4k_get_UtilityEx)(ITkdpo2k3k4kUtilityEx** val);
	STDMETHOD(ITkdpo2k3k4k_get_InstrumentIO)(ITkdpo2k3k4kInstrumentIO** val);
	STDMETHOD(ITkdpo2k3k4k_get_PowerAnalysis)(ITkdpo2k3k4kPowerAnalysis** val);
	STDMETHOD(ITkdpo2k3k4k_get_Frequency)(ITkdpo2k3k4kFrequency** val);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_GetOPC)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_Query)(BSTR Command, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_ReadPartialString)(long Length, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_ReadString)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_WriteString)(BSTR Command);
	STDMETHOD(ITkdpo2k3k4kInstrumentIO_get_IOSession)(long* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_Configure)(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_ConfigureDelay)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_ConfigurePhase)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_ConfigureReferenceLevel)(Tkdpo2k3k4kMeasurementMethodEnum Method, Tkdpo2k3k4kMeasurementUnitEnum Unit, double High, double Low, double Mid, double Mid2);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_Read)(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_ReadReferenceLevel)(Tkdpo2k3k4kMeasurementMethodEnum* Method, Tkdpo2k3k4kMeasurementUnitEnum* Unit, double* High, double* Low, double* Mid, double* Mid2);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_ReadValue)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_DelayDirection)(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_DelayDirection)(Tkdpo2k3k4kMeasurementDelayDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge1)(Tkdpo2k3k4kMeasurementEdgeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge1)(Tkdpo2k3k4kMeasurementEdgeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge2)(Tkdpo2k3k4kMeasurementEdgeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge2)(Tkdpo2k3k4kMeasurementEdgeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteHigh)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteHigh)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteLow)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteLow)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid2)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid2)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelMethod)(Tkdpo2k3k4kMeasurementMethodEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelMethod)(Tkdpo2k3k4kMeasurementMethodEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentHigh)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentHigh)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentLow)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentLow)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid2)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid2)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelUnit)(Tkdpo2k3k4kMeasurementUnitEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelUnit)(Tkdpo2k3k4kMeasurementUnitEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid)(double val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_Source1)(Tkdpo2k3k4kSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_Source1)(Tkdpo2k3k4kSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_Source2)(Tkdpo2k3k4kSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_Source2)(Tkdpo2k3k4kSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_Type)(Tkdpo2k3k4kMeasurementTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_put_Type)(Tkdpo2k3k4kMeasurementTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_Units)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementImmediate_get_Value)(double* val);

	STDMETHOD(ITkdpo2k3k4kMark_MoveZoomToMark)(Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark);
	STDMETHOD(ITkdpo2k3k4kMark_CreateMark)(Tkdpo2k3k4kMarkEnum Mark);
	STDMETHOD(ITkdpo2k3k4kMark_DeleteMark)(Tkdpo2k3k4kMarkEnum Mark);
	STDMETHOD(ITkdpo2k3k4kMark_get_FreeMarks)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_TotalMarks)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedEnd)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedFocus)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedMarksInColumn)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedOwner)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedSource)(Tkdpo2k3k4kSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedStart)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedPosition)(long* val);
	STDMETHOD(ITkdpo2k3k4kMark_get_SelectedLabel)(BSTR* val);

	STDMETHOD(IIviDriver_Initialize)(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	STDMETHOD(IIviDriver_Close)();
	STDMETHOD(IIviDriver_get_DriverOperation)(IIviDriverOperation** val);
	STDMETHOD(IIviDriver_get_Identity)(IIviDriverIdentity** val);
	STDMETHOD(IIviDriver_get_Utility)(IIviDriverUtility** val);
	STDMETHOD(IIviDriver_get_Initialized)(VARIANT_BOOL* val);

	STDMETHOD(IIviDriverOperation_InvalidateAllAttributes)();
	STDMETHOD(IIviDriverOperation_ClearInterchangeWarnings)();
	STDMETHOD(IIviDriverOperation_GetNextInterchangeWarning)(BSTR* val);
	STDMETHOD(IIviDriverOperation_ResetInterchangeCheck)();
	STDMETHOD(IIviDriverOperation_GetNextCoercionRecord)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_LogicalName)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_IoResourceDescriptor)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_Cache)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Cache)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_InterchangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_InterchangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_QueryInstrumentStatus)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_QueryInstrumentStatus)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RecordCoercions)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RecordCoercions)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_Simulate)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Simulate)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_DriverSetup)(BSTR* val);

	STDMETHOD(IIviDriverIdentity_get_InstrumentManufacturer)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentModel)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentFirmwareRevision)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_Identifier)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SupportedInstrumentModels)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMajorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMinorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_GroupCapabilities)(BSTR* val);

	STDMETHOD(IIviComponentIdentity_get_Description)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Revision)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Vendor)(BSTR* val);

	STDMETHOD(IIviDriverUtility_Reset)();
	STDMETHOD(IIviDriverUtility_ResetWithDefaults)();
	STDMETHOD(IIviDriverUtility_Disable)();
	STDMETHOD(IIviDriverUtility_SelfTest)(long* TestResult, BSTR* TestMessage);
	STDMETHOD(IIviDriverUtility_ErrorQuery)(long* ErrorCode, BSTR* ErrorMessage);
	STDMETHOD(IIviDriverUtility_LockObject)();
	STDMETHOD(IIviDriverUtility_UnlockObject)();

	STDMETHOD(ITkdpo2k3k4kChannels_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_Item)(BSTR Name, ITkdpo2k3k4kChannel** val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_Name)(long Index, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeSignal)(Tkdpo2k3k4kChannelProbeSignalEnum* val);
	STDMETHOD(ITkdpo2k3k4kChannels_put_AUXInProbeSignal)(Tkdpo2k3k4kChannelProbeSignalEnum val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeGain)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeResistance)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeSerialNumber)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeType)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInProbeUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeDegaussState)(Tkdpo2k3k4kProbeDegaussStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeRange)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannels_put_AUXInTekVPIProbeRange)(double val);
	STDMETHOD(ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeDegauss)();
	STDMETHOD(ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeCommand)(BSTR Command, BSTR State);
	STDMETHOD(ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeAutoZero)();

	STDMETHOD(IIviScope_get_Acquisition)(IIviScopeAcquisition** val);
	STDMETHOD(IIviScope_get_Channels)(IIviScopeChannels** val);
	STDMETHOD(IIviScope_get_Measurements)(IIviScopeMeasurements** val);
	STDMETHOD(IIviScope_get_ReferenceLevel)(IIviScopeReferenceLevel** val);
	STDMETHOD(IIviScope_get_Trigger)(IIviScopeTrigger** val);

	STDMETHOD(IIviScopeAcquisition_ConfigureRecord)(double TimePerRecord, long MinNumPts, double AcquisitionStartTime);
	STDMETHOD(IIviScopeAcquisition_get_NumberOfAverages)(long* val);
	STDMETHOD(IIviScopeAcquisition_put_NumberOfAverages)(long val);
	STDMETHOD(IIviScopeAcquisition_get_NumberOfEnvelopes)(long* val);
	STDMETHOD(IIviScopeAcquisition_put_NumberOfEnvelopes)(long val);
	STDMETHOD(IIviScopeAcquisition_get_Interpolation)(IviScopeInterpolationEnum* val);
	STDMETHOD(IIviScopeAcquisition_put_Interpolation)(IviScopeInterpolationEnum val);
	STDMETHOD(IIviScopeAcquisition_get_RecordLength)(long* val);
	STDMETHOD(IIviScopeAcquisition_get_SampleMode)(IviScopeSampleModeEnum* val);
	STDMETHOD(IIviScopeAcquisition_get_SampleRate)(double* val);
	STDMETHOD(IIviScopeAcquisition_get_Type)(IviScopeAcquisitionTypeEnum* val);
	STDMETHOD(IIviScopeAcquisition_put_Type)(IviScopeAcquisitionTypeEnum val);
	STDMETHOD(IIviScopeAcquisition_get_NumberOfPointsMin)(long* val);
	STDMETHOD(IIviScopeAcquisition_put_NumberOfPointsMin)(long val);
	STDMETHOD(IIviScopeAcquisition_get_StartTime)(double* val);
	STDMETHOD(IIviScopeAcquisition_put_StartTime)(double val);
	STDMETHOD(IIviScopeAcquisition_get_TimePerRecord)(double* val);
	STDMETHOD(IIviScopeAcquisition_put_TimePerRecord)(double val);

	STDMETHOD(IIviScopeMeasurements_Initiate)();
	STDMETHOD(IIviScopeMeasurements_Abort)();
	STDMETHOD(IIviScopeMeasurements_AutoSetup)();
	STDMETHOD(IIviScopeMeasurements_Status)(IviScopeAcquisitionStatusEnum* val);
	STDMETHOD(IIviScopeMeasurements_IsWaveformElementInvalid)(double Element, VARIANT_BOOL* val);
	STDMETHOD(IIviScopeMeasurements_get_Item)(BSTR Name, IIviScopeMeasurement** val);
	STDMETHOD(IIviScopeMeasurements_get_Count)(long* val);
	STDMETHOD(IIviScopeMeasurements_get_Name)(long Index, BSTR* val);

	STDMETHOD(IIviScopeChannels_get_Item)(BSTR Name, IIviScopeChannel** val);
	STDMETHOD(IIviScopeChannels_get_Count)(long* val);
	STDMETHOD(IIviScopeChannels_get_Name)(long Index, BSTR* val);

	STDMETHOD(IIviScopeReferenceLevel_Configure)(double Low, double Mid, double High);
	STDMETHOD(IIviScopeReferenceLevel_get_High)(double* val);
	STDMETHOD(IIviScopeReferenceLevel_put_High)(double val);
	STDMETHOD(IIviScopeReferenceLevel_get_Low)(double* val);
	STDMETHOD(IIviScopeReferenceLevel_put_Low)(double val);
	STDMETHOD(IIviScopeReferenceLevel_get_Mid)(double* val);
	STDMETHOD(IIviScopeReferenceLevel_put_Mid)(double val);

	STDMETHOD(IIviScopeTrigger_Configure)(IviScopeTriggerTypeEnum Type, double Holdoff);
	STDMETHOD(IIviScopeTrigger_get_Continuous)(VARIANT_BOOL* val);
	STDMETHOD(IIviScopeTrigger_put_Continuous)(VARIANT_BOOL val);
	STDMETHOD(IIviScopeTrigger_get_Coupling)(IviScopeTriggerCouplingEnum* val);
	STDMETHOD(IIviScopeTrigger_put_Coupling)(IviScopeTriggerCouplingEnum val);
	STDMETHOD(IIviScopeTrigger_get_Level)(double* val);
	STDMETHOD(IIviScopeTrigger_put_Level)(double val);
	STDMETHOD(IIviScopeTrigger_get_Modifier)(IviScopeTriggerModifierEnum* val);
	STDMETHOD(IIviScopeTrigger_put_Modifier)(IviScopeTriggerModifierEnum val);
	STDMETHOD(IIviScopeTrigger_get_Source)(BSTR* val);
	STDMETHOD(IIviScopeTrigger_put_Source)(BSTR val);
	STDMETHOD(IIviScopeTrigger_get_Holdoff)(double* val);
	STDMETHOD(IIviScopeTrigger_put_Holdoff)(double val);
	STDMETHOD(IIviScopeTrigger_get_Type)(IviScopeTriggerTypeEnum* val);
	STDMETHOD(IIviScopeTrigger_put_Type)(IviScopeTriggerTypeEnum val);
	STDMETHOD(IIviScopeTrigger_get_AcLine)(IIviScopeTriggerAcLine** val);
	STDMETHOD(IIviScopeTrigger_get_Edge)(IIviScopeTriggerEdge** val);
	STDMETHOD(IIviScopeTrigger_get_Glitch)(IIviScopeTriggerGlitch** val);
	STDMETHOD(IIviScopeTrigger_get_Runt)(IIviScopeTriggerRunt** val);
	STDMETHOD(IIviScopeTrigger_get_TV)(IIviScopeTriggerTv** val);
	STDMETHOD(IIviScopeTrigger_get_Width)(IIviScopeTriggerWidth** val);

	STDMETHOD(IIviScopeTriggerAcLine_get_Slope)(IviScopeACLineSlopeEnum* val);
	STDMETHOD(IIviScopeTriggerAcLine_put_Slope)(IviScopeACLineSlopeEnum val);

	STDMETHOD(IIviScopeTriggerEdge_Configure)(BSTR Source, double Level, IviScopeTriggerSlopeEnum Slope);
	STDMETHOD(IIviScopeTriggerEdge_get_Slope)(IviScopeTriggerSlopeEnum* val);
	STDMETHOD(IIviScopeTriggerEdge_put_Slope)(IviScopeTriggerSlopeEnum val);

	STDMETHOD(IIviScopeTriggerGlitch_Configure)(BSTR Source, double Level, double Width, IviScopeGlitchPolarityEnum polarity, IviScopeGlitchConditionEnum condition);
	STDMETHOD(IIviScopeTriggerGlitch_get_condition)(IviScopeGlitchConditionEnum* val);
	STDMETHOD(IIviScopeTriggerGlitch_put_condition)(IviScopeGlitchConditionEnum val);
	STDMETHOD(IIviScopeTriggerGlitch_get_polarity)(IviScopeGlitchPolarityEnum* val);
	STDMETHOD(IIviScopeTriggerGlitch_put_polarity)(IviScopeGlitchPolarityEnum val);
	STDMETHOD(IIviScopeTriggerGlitch_get_Width)(double* val);
	STDMETHOD(IIviScopeTriggerGlitch_put_Width)(double val);

	STDMETHOD(IIviScopeTriggerRunt_Configure)(BSTR Source, double ThresholdLow, double ThresholdHigh, IviScopeRuntPolarityEnum polarity);
	STDMETHOD(IIviScopeTriggerRunt_get_polarity)(IviScopeRuntPolarityEnum* val);
	STDMETHOD(IIviScopeTriggerRunt_put_polarity)(IviScopeRuntPolarityEnum val);
	STDMETHOD(IIviScopeTriggerRunt_get_ThresholdHigh)(double* val);
	STDMETHOD(IIviScopeTriggerRunt_put_ThresholdHigh)(double val);
	STDMETHOD(IIviScopeTriggerRunt_get_ThresholdLow)(double* val);
	STDMETHOD(IIviScopeTriggerRunt_put_ThresholdLow)(double val);

	STDMETHOD(IIviScopeTriggerTv_Configure)(BSTR Source, IviScopeTVSignalFormatEnum SignalFormat, IviScopeTVTriggerEventEnum Event, IviScopeTVTriggerPolarityEnum polarity);
	STDMETHOD(IIviScopeTriggerTv_get_LineNumber)(long* val);
	STDMETHOD(IIviScopeTriggerTv_put_LineNumber)(long val);
	STDMETHOD(IIviScopeTriggerTv_get_Event)(IviScopeTVTriggerEventEnum* val);
	STDMETHOD(IIviScopeTriggerTv_put_Event)(IviScopeTVTriggerEventEnum val);
	STDMETHOD(IIviScopeTriggerTv_get_polarity)(IviScopeTVTriggerPolarityEnum* val);
	STDMETHOD(IIviScopeTriggerTv_put_polarity)(IviScopeTVTriggerPolarityEnum val);
	STDMETHOD(IIviScopeTriggerTv_get_SignalFormat)(IviScopeTVSignalFormatEnum* val);
	STDMETHOD(IIviScopeTriggerTv_put_SignalFormat)(IviScopeTVSignalFormatEnum val);

	STDMETHOD(IIviScopeTriggerWidth_Configure)(BSTR Source, double Level, double ThresholdLow, double ThresholdHigh, IviScopeWidthPolarityEnum polarity, IviScopeWidthConditionEnum condition);
	STDMETHOD(IIviScopeTriggerWidth_get_condition)(IviScopeWidthConditionEnum* val);
	STDMETHOD(IIviScopeTriggerWidth_put_condition)(IviScopeWidthConditionEnum val);
	STDMETHOD(IIviScopeTriggerWidth_get_polarity)(IviScopeWidthPolarityEnum* val);
	STDMETHOD(IIviScopeTriggerWidth_put_polarity)(IviScopeWidthPolarityEnum val);
	STDMETHOD(IIviScopeTriggerWidth_get_ThresholdLow)(double* val);
	STDMETHOD(IIviScopeTriggerWidth_put_ThresholdLow)(double val);
	STDMETHOD(IIviScopeTriggerWidth_get_ThresholdHigh)(double* val);
	STDMETHOD(IIviScopeTriggerWidth_put_ThresholdHigh)(double val);

	STDMETHOD(ITkdpo2k3k4kAcquisition_ConfigureRecord)(double TimePerRecord, long MinNumPts, double AcquisitionStartTime);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_NumberAverages)(long* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_NumberAverages)(long val);


	STDMETHOD(ITkdpo2k3k4kAcquisition_get_RecordLength)(long* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_SampleRate)(double* val);

	STDMETHOD(ITkdpo2k3k4kAcquisition_get_NumberOfPointsMin)(long* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_NumberOfPointsMin)(long val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_StartTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_StartTime)(double val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_TimePerRecord)(double* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_TimePerRecord)(double val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_State)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_State)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_Mode)(Tkdpo2k3k4kAcquisitionModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_Mode)(Tkdpo2k3k4kAcquisitionModeEnum val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_NumberAcquisitions)(long* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_RunStop)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_RunStop)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_SingleSequence)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_SingleSequence)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_MagniVuState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_put_MagniVuState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_MaxSampleRate)(long* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_get_SamplingMode)(Tkdpo2k3k4kAcquisitionSamplingModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kAcquisition_Stop)();
	STDMETHOD(ITkdpo2k3k4kAcquisition_Start)();
	STDMETHOD(ITkdpo2k3k4kAcquisition_SetAverageMode)(long NumberAverages);
	STDMETHOD(ITkdpo2k3k4kAcquisition_AutoSet)();


	STDMETHOD(ITkdpo2k3k4kTrigger_get_AHoldoffTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_AHoldoffTime)(double val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_Type)(Tkdpo2k3k4kTriggerTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_Type)(Tkdpo2k3k4kTriggerTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_AEdge)(ITkdpo2k3k4kTriggerAEdge** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_BState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_BState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_BDelayTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_BDelayTime)(double val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_CurrentState)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_EventCount)(long* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_EventCount)(long val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_BLevel)(Tkdpo2k3k4kChannelEnum Source, double* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_BLevel)(Tkdpo2k3k4kChannelEnum Source, double val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_TriggerBBy)(Tkdpo2k3k4kTriggerBByEnum* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_TriggerBBy)(Tkdpo2k3k4kTriggerBByEnum val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_Frequency)(double* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ProbeAttenuation)(double* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_ProbeAttenuation)(double val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_VerticalUnitValue)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ABus)(ITkdpo2k3k4kTriggerABus** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ALogic)(ITkdpo2k3k4kTriggerALogic** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_AWidth)(ITkdpo2k3k4kTriggerAWidth** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ARunt)(ITkdpo2k3k4kTriggerARunt** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ASetupHold)(ITkdpo2k3k4kTriggerASetupHold** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_ATransition)(ITkdpo2k3k4kTriggerATransition** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_AVideo)(ITkdpo2k3k4kTriggerAVideo** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_BEdge)(ITkdpo2k3k4kTriggerBEdge** val);
	STDMETHOD(ITkdpo2k3k4kTrigger_get_Mode)(Tkdpo2k3k4kTriggerModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTrigger_put_Mode)(Tkdpo2k3k4kTriggerModeEnum val);
	STDMETHOD(ITkdpo2k3k4kTrigger_ReadARFIndependentParameters)(double* UpperThreshold, double* LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureARFIndependentParameters)(double UpperThreshold, double LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ReadBIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureBIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureAIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ReadAIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureAOnlyTrigger)(double HoldoffTime);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureAThenBAfterEventsTrigger)(double HoldoffTime, long Events);
	STDMETHOD(ITkdpo2k3k4kTrigger_ConfigureAThenBAfterTimeTrigger)(double HoldoffTime, double DelayTime);



	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_Configure)(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_get_Slope)(Tkdpo2k3k4kTriggerSlopeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_put_Slope)(Tkdpo2k3k4kTriggerSlopeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_get_Source)(Tkdpo2k3k4kTriggerSource2Enum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_put_Source)(Tkdpo2k3k4kTriggerSource2Enum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_get_Coupling)(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_put_Coupling)(Tkdpo2k3k4kTriggerEdgeCouplingEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_get_Level)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_put_Level)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_put_LevelEnum)(Tkdpo2k3k4kTriggerLevelEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_ConfigureLevelTo50Percent)();
	STDMETHOD(ITkdpo2k3k4kTriggerAEdge_Read)(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling);



	STDMETHOD(ITkdpo2k3k4kBuses_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kBuses_get_Item)(BSTR Name, ITkdpo2k3k4kBus** val);
	STDMETHOD(ITkdpo2k3k4kBuses_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kCursor_get_DDT)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_TrackMode)(Tkdpo2k3k4kCursorTrackModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursor_put_TrackMode)(Tkdpo2k3k4kCursorTrackModeEnum val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_Type)(Tkdpo2k3k4kCursorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursor_put_Type)(Tkdpo2k3k4kCursorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_HBars)(ITkdpo2k3k4kCursorHBars** val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_VBars)(ITkdpo2k3k4kCursorVBars** val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_XY)(ITkdpo2k3k4kCursorXY** val);
	STDMETHOD(ITkdpo2k3k4kCursor_get_Source)(Tkdpo2k3k4kCursorSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursor_put_Source)(Tkdpo2k3k4kCursorSourceEnum val);

	STDMETHOD(ITkdpo2k3k4kCursorHBars_SetMeasurementScale)(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_get_Units)(Tkdpo2k3k4kCursorHBarsUnitsEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_put_Units)(Tkdpo2k3k4kCursorHBarsUnitsEnum val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_get_Delta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_get_Position1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_put_Position1)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_get_Position2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorHBars_put_Position2)(double val);

	STDMETHOD(ITkdpo2k3k4kCursorVBars_SetMeasurementScale)(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_Delta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_Position1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_put_Position1)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_Position2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_put_Position2)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_Units)(Tkdpo2k3k4kCursorVBarsUnitsEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_put_Units)(Tkdpo2k3k4kCursorVBarsUnitsEnum val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_HorizontalPosition1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_HorizontalPosition2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_VDelta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_AlternativeReadout1)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kCursorVBars_get_AlternativeReadout2)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kCursorXY_get_Readout)(Tkdpo2k3k4kCursorXYReadoutEnum* val);
	STDMETHOD(ITkdpo2k3k4kCursorXY_put_Readout)(Tkdpo2k3k4kCursorXYReadoutEnum val);
	STDMETHOD(ITkdpo2k3k4kCursorXY_get_Rectangle)(ITkdpo2k3k4kCursorXYRectangle** val);
	STDMETHOD(ITkdpo2k3k4kCursorXY_get_Ratio)(ITkdpo2k3k4kCursorXYRatio** val);
	STDMETHOD(ITkdpo2k3k4kCursorXY_get_Product)(ITkdpo2k3k4kCursorXYProduct** val);
	STDMETHOD(ITkdpo2k3k4kCursorXY_get_PolarCoordinates)(ITkdpo2k3k4kCursorXYPolarCoordinates** val);

	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_XDelta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_XPosition1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_put_XPosition1)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_XPosition2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_put_XPosition2)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_XUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_YDelta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_YPosition1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_put_YPosition1)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_YPosition2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_put_YPosition2)(double val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRectangle_get_YUnits)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kCursorXYRatio_get_Delta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRatio_get_Position1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRatio_get_Position2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYRatio_get_Units)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kCursorXYProduct_get_Delta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYProduct_get_Position1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYProduct_get_Position2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYProduct_get_Units)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaDelta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_Delta)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position1)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position2)(double* val);
	STDMETHOD(ITkdpo2k3k4kCursorXYPolarCoordinates_get_Units)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kDisplay_get_ClockState)(Tkdpo2k3k4kDisplayClockStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_ClockState)(Tkdpo2k3k4kDisplayClockStateEnum val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_BackLightIntensity)(Tkdpo2k3k4kDisplayBackLightIntensityEnum* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_BackLightIntensity)(Tkdpo2k3k4kDisplayBackLightIntensityEnum val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_Format)(Tkdpo2k3k4kDisplayDisplayFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_Format)(Tkdpo2k3k4kDisplayDisplayFormatEnum val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_GraticuleStyle)(Tkdpo2k3k4kDisplayGraticuleEnum* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_GraticuleStyle)(Tkdpo2k3k4kDisplayGraticuleEnum val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_Persistence)(double* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_Persistence)(double val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_PersistenceEnum)(Tkdpo2k3k4kDisplayPersistenceEnum val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_WaveformIntensity)(long* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_WaveformIntensity)(long val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_GraticuleIntensity)(long* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_GraticuleIntensity)(long val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_DotsOnly)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_DotsOnly)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_DisplayMessageBox)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_DisplayMessageBox)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_GlitchCaptureState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_GlitchCaptureState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kDisplay_get_GlitchIntensity)(long* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_put_GlitchIntensity)(long val);
	STDMETHOD(ITkdpo2k3k4kDisplay_GetDisplayMessage)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kDisplay_ClearMessage)();
	STDMETHOD(ITkdpo2k3k4kDisplay_ShowMessage)(BSTR Message);
	STDMETHOD(ITkdpo2k3k4kDisplay_GetMessageBoxCoordinates)(long* X1, long* Y1, long* X2, long* Y2);
	STDMETHOD(ITkdpo2k3k4kDisplay_SetMessageBoxCoordinates)(long X1, long Y1, long X2, long Y2);

	STDMETHOD(ITkdpo2k3k4kHardCopy_Print)();
	STDMETHOD(ITkdpo2k3k4kHardCopy_get_Layout)(Tkdpo2k3k4kPrintLayoutEnum* val);
	STDMETHOD(ITkdpo2k3k4kHardCopy_put_Layout)(Tkdpo2k3k4kPrintLayoutEnum val);
	STDMETHOD(ITkdpo2k3k4kHardCopy_get_InkSaver)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kHardCopy_put_InkSaver)(VARIANT_BOOL val);

	STDMETHOD(ITkdpo2k3k4kHistogram_Configure)(Tkdpo2k3k4kSource1Enum Source, Tkdpo2k3k4kHistogramModeEnum Mode);
	STDMETHOD(ITkdpo2k3k4kHistogram_Read)(Tkdpo2k3k4kSource1Enum* Source, Tkdpo2k3k4kHistogramModeEnum* Mode);
	STDMETHOD(ITkdpo2k3k4kHistogram_ConfigureBoxCoordinates)(double Top, double Left, double Right, double Bottom);
	STDMETHOD(ITkdpo2k3k4kHistogram_ReadBoxCoordinates)(double* Top, double* Left, double* Right, double* Bottom);
	STDMETHOD(ITkdpo2k3k4kHistogram_ConfigureBoxCoordinatesPercent)(double Top, double Left, double Right, double Bottom);
	STDMETHOD(ITkdpo2k3k4kHistogram_ReadBoxCoordinatesPercent)(double* Top, double* Left, double* Right, double* Bottom);
	STDMETHOD(ITkdpo2k3k4kHistogram_Reset)();
	STDMETHOD(ITkdpo2k3k4kHistogram_get_Data)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kHistogram_get_Display)(Tkdpo2k3k4kHistogramDisplayEnum* val);
	STDMETHOD(ITkdpo2k3k4kHistogram_put_Display)(Tkdpo2k3k4kHistogramDisplayEnum val);
	STDMETHOD(ITkdpo2k3k4kHistogram_get_Mode)(Tkdpo2k3k4kHistogramModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kHistogram_put_Mode)(Tkdpo2k3k4kHistogramModeEnum val);
	STDMETHOD(ITkdpo2k3k4kHistogram_get_Source)(Tkdpo2k3k4kSource1Enum* val);
	STDMETHOD(ITkdpo2k3k4kHistogram_put_Source)(Tkdpo2k3k4kSource1Enum val);

	STDMETHOD(ITkdpo2k3k4kHorizontal_Configure)(double Position, double Scale, long RecordLength);
	STDMETHOD(ITkdpo2k3k4kHorizontal_ConfigureDelay)(VARIANT_BOOL Mode, double Time);
	STDMETHOD(ITkdpo2k3k4kHorizontal_Read)(double* Position, double* Scale, long* RecordLength);
	STDMETHOD(ITkdpo2k3k4kHorizontal_ReadDelay)(VARIANT_BOOL* Mode, double* Time);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DelayMode)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_DelayMode)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DelayTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_DelayTime)(double val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DigitalMainRecordLength)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DigitalMagniVuRecordLength)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DigitalMainSampleRate)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_DigitalMagniVuSampleRate)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_Scale)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_Scale)(double val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_Resolution)(long* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_Resolution)(long val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_RecordLength)(long* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_RecordLength)(long val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_SampleRate)(double* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_SampleRate)(double val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_get_TriggerPosition)(long* val);
	STDMETHOD(ITkdpo2k3k4kHorizontal_put_TriggerPosition)(long val);

	STDMETHOD(ITkdpo2k3k4kMaths_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kMaths_get_Item)(BSTR Name, ITkdpo2k3k4kMath** val);
	STDMETHOD(ITkdpo2k3k4kMaths_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Item)(BSTR Name, ITkdpo2k3k4kMeasurementSlot** val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Gating)(Tkdpo2k3k4kMeasurementGatingEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_put_Gating)(Tkdpo2k3k4kMeasurementGatingEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_StatisticsMode)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_put_StatisticsMode)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_StatisticsWeighting)(long* val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_put_StatisticsWeighting)(long val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Indicators)(ITkdpo2k3k4kMeasurementsIndicators** val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Frequency)(ITkdpo2k3k4kMeasurementsFrequency** val);
	STDMETHOD(ITkdpo2k3k4kMeasurements_ClearStatistics)();
	STDMETHOD(ITkdpo2k3k4kMeasurements_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_get_State)(Tkdpo2k3k4kMeasurementIndicatorStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_put_State)(Tkdpo2k3k4kMeasurementIndicatorStateEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalIndicators)(long* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalValue)(long Indicator, double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_get_VerticalIndicators)(long* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsIndicators_get_VerticalValue)(long Indicator, double* val);

	STDMETHOD(ITkdpo2k3k4kSaveRecall_DefaultSetup)();
	STDMETHOD(ITkdpo2k3k4kSaveRecall_RecallSetupFromFile)(BSTR FileName);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_RecallSetupFromMemory)(Tkdpo2k3k4kMemoryLocationEnum Location);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_RecallWaveformFromFile)(Tkdpo2k3k4kReferenceEnum RefMemory, BSTR FileName);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveAllDigitalChannels)(BSTR FileName);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveSetupToFile)(BSTR FileName);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveSetupToMemory)(Tkdpo2k3k4kMemoryLocationEnum Location);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveWaveformToFile)(Tkdpo2k3k4kDataSourceEnum Source, BSTR FileName);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveWaveformToReference)(Tkdpo2k3k4kDataSourceEnum Source, Tkdpo2k3k4kReferenceEnum RefMemory);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_SaveWaveFormFileFormat)(Tkdpo2k3k4kSaveWaveformFileFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_SaveWaveFormFileFormat)(Tkdpo2k3k4kSaveWaveformFileFormatEnum val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_SaveButtonType)(Tkdpo2k3k4kSaveButtonTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_SaveButtonType)(Tkdpo2k3k4kSaveButtonTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_ImageFormat)(Tkdpo2k3k4kImageFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_ImageFormat)(Tkdpo2k3k4kImageFormatEnum val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_ImageLayout)(Tkdpo2k3k4kImageLayoutEnum* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_ImageLayout)(Tkdpo2k3k4kImageLayoutEnum val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_InkSaverPalette)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_InkSaverPalette)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_get_WaveformGating)(Tkdpo2k3k4kMeasurementGatingEnum* val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_put_WaveformGating)(Tkdpo2k3k4kMeasurementGatingEnum val);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveAllWaveformsToFile)(BSTR FileName, Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveImage)(BSTR Filename, Tkdpo2k3k4kImageFormatEnum ImageFormat, Tkdpo2k3k4kImageLayoutEnum ImageLayout);
	STDMETHOD(ITkdpo2k3k4kSaveRecall_SaveEventTableBusData)(long Bus, BSTR Filename);

	STDMETHOD(ITkdpo2k3k4kSearches_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kSearches_get_Item)(BSTR Name, ITkdpo2k3k4kSearch** val);
	STDMETHOD(ITkdpo2k3k4kSearches_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_BusSource)(Tkdpo2k3k4kTrigABusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_put_BusSource)(Tkdpo2k3k4kTrigABusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_ParallelData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_put_ParallelData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_BusType)(Tkdpo2k3k4kTriggerBusTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_put_BusType)(Tkdpo2k3k4kTriggerBusTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_Audio)(ITkdpo2k3k4kTriggerABusAudio** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_CAN)(ITkdpo2k3k4kTriggerABusCAN** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_Flexray)(ITkdpo2k3k4kTriggerABusFlexray** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_I2C)(ITkdpo2k3k4kTriggerABusI2C** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_LIN)(ITkdpo2k3k4kTriggerABusLIN** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_RS232)(ITkdpo2k3k4kTriggerABusRS232** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_SPI)(ITkdpo2k3k4kTriggerABusSPI** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_get_USB)(ITkdpo2k3k4kTriggerABusUSB** val);
	STDMETHOD(ITkdpo2k3k4kTriggerABus_Configure)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTriggerBusTypeEnum BusType);

	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_get_DataWord)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusAudio_put_DataWord)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val);


	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusCAN_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);

	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_get_EOFType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_put_EOFType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_get_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_put_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ReadHeader)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ConfigureHeader)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ReadFrameID)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ConfigureFrameID)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ReadData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ConfigureData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ReadCycleCount)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kTriggerABusFlexray_ConfigureCycleCount)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);

	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_get_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusI2C_put_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val);
	
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_get_IdentifierValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusLIN_put_IdentifierValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);

	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_get_RXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_put_RXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_get_RXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_put_RXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_get_TXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_put_TXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_get_TXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusRS232_put_TXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);

	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_get_DataINValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_put_DataINValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_get_DataOUTValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusSPI_put_DataOUTValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);

	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_Qualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_Qualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_DataType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_DataType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_AddressHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_AddressHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_EndPointValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_EndPointValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_HandshakeType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_HandshakeType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_SOFFrameNumber)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_SOFFrameNumber)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_SpecialType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_SpecialType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_get_TokenType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerABusUSB_put_TokenType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val);


	STDMETHOD(ITkdpo2k3k4kTriggerALogic_Configure)();
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ConfigureSource)(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ReadSource)(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ConfigurePattern)(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ReadPattern)(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* LogicOperatorType);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ConfigureClock)(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ReadClock)(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_get_Condition)(Tkdpo2k3k4kTriggerPatternConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_put_Condition)(Tkdpo2k3k4kTriggerPatternConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_get_LessLimit)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_put_LessLimit)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_get_MoreLimit)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_put_MoreLimit)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_get_Function)(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_put_Function)(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ReadRF)(Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kTriggerALogic_ConfigureRF)(Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold);

	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_Configure)();
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_Source)(Tkdpo2k3k4kTiggerPulseSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_Source)(Tkdpo2k3k4kTiggerPulseSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_Condition)(Tkdpo2k3k4kTriggerPulseWidthConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_Condition)(Tkdpo2k3k4kTriggerPulseWidthConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_Polarity)(Tkdpo2k3k4kTriggerPulsePolarityEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_Polarity)(Tkdpo2k3k4kTriggerPulsePolarityEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_Width)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_Width)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_LowerLimit)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_LowerLimit)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_get_UpperLimit)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAWidth_put_UpperLimit)(double val);

	STDMETHOD(ITkdpo2k3k4kTriggerARunt_Configure)();
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_Polarity)(Tkdpo2k3k4kTriggerRuntPolarityEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_Polarity)(Tkdpo2k3k4kTriggerRuntPolarityEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_Source)(Tkdpo2k3k4kChannelChannelEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_Source)(Tkdpo2k3k4kChannelChannelEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_Condition)(Tkdpo2k3k4kTriggerRuntConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_Condition)(Tkdpo2k3k4kTriggerRuntConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_Width)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_Width)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_LowerLevel)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_LowerLevel)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_get_UpperLevel)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerARunt_put_UpperLevel)(double val);

	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_Configure)();
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_DataSource)(Tkdpo2k3k4kTriggerSource2Enum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_DataSource)(Tkdpo2k3k4kTriggerSource2Enum val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_DataLevel)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_DataLevel)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_ClockSource)(Tkdpo2k3k4kTriggerSource2Enum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_ClockSource)(Tkdpo2k3k4kTriggerSource2Enum val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_ClockEdge)(Tkdpo2k3k4kTriggerSlopeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_ClockEdge)(Tkdpo2k3k4kTriggerSlopeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_ClockLevel)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_ClockLevel)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_HoldTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_HoldTime)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_get_SetTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerASetupHold_put_SetTime)(double val);

	STDMETHOD(ITkdpo2k3k4kTriggerATransition_Configure)();
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_get_Source)(Tkdpo2k3k4kChannelEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_put_Source)(Tkdpo2k3k4kChannelEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_get_DeltaTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_put_DeltaTime)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_get_Condition)(Tkdpo2k3k4kTriggerTransitionConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_put_Condition)(Tkdpo2k3k4kTriggerTransitionConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_get_Polarity)(Tkdpo2k3k4kTriggerRuntPolarityEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerATransition_put_Polarity)(Tkdpo2k3k4kTriggerRuntPolarityEnum val);

	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_FieldHoldoff)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_FieldHoldoff)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_Polarity)(Tkdpo2k3k4kTriggerVideoPolarityEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_Polarity)(Tkdpo2k3k4kTriggerVideoPolarityEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_Source)(Tkdpo2k3k4kTriggerSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_Source)(Tkdpo2k3k4kTriggerSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_Standard)(Tkdpo2k3k4kTriggerVideoStandardEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_Standard)(Tkdpo2k3k4kTriggerVideoStandardEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_TriggerOn)(Tkdpo2k3k4kTriggerVideoFieldsEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_TriggerOn)(Tkdpo2k3k4kTriggerVideoFieldsEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_CustomLinePeriod)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_CustomLinePeriod)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_CustomScan)(Tkdpo2k3k4kTriggerVideoCustomScanEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_CustomScan)(Tkdpo2k3k4kTriggerVideoCustomScanEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_CustomSyncInterval)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_CustomSyncInterval)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_CustomFormat)(Tkdpo2k3k4kTriggerVideoCustomFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_CustomFormat)(Tkdpo2k3k4kTriggerVideoCustomFormatEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_get_HDTvFormat)(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerAVideo_put_HDTvFormat)(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum val);

	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_Configure)(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_Read)(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_get_Coupling)(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_put_Coupling)(Tkdpo2k3k4kTriggerEdgeCouplingEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_get_Level)(double* val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_put_Level)(double val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_put_LevelEnum)(Tkdpo2k3k4kTriggerLevelEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_get_Slope)(Tkdpo2k3k4kTriggerSlopeEnum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_put_Slope)(Tkdpo2k3k4kTriggerSlopeEnum val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_get_Source)(Tkdpo2k3k4kTriggerSource2Enum* val);
	STDMETHOD(ITkdpo2k3k4kTriggerBEdge_put_Source)(Tkdpo2k3k4kTriggerSource2Enum val);

	STDMETHOD(ITkdpo2k3k4kReferences_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kReferences_get_Item)(BSTR Name, ITkdpo2k3k4kReference** val);
	STDMETHOD(ITkdpo2k3k4kReferences_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kDigitalChannels_get_Count)(long* val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannels_get_Item)(BSTR Name, ITkdpo2k3k4kDigitalChannel** val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannels_get_Name)(long Index, BSTR* val);

	STDMETHOD(ITkdpo2k3k4kZoom_get_Mode)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kZoom_put_Mode)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kZoom_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kZoom_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kZoom_get_Scale)(double* val);
	STDMETHOD(ITkdpo2k3k4kZoom_put_Scale)(double val);
	STDMETHOD(ITkdpo2k3k4kZoom_get_State)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kZoom_put_State)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kZoom_get_Factor)(long* val);

	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_WriteWaveformToReference)(Tkdpo2k3k4kReferenceEnum WaveformReference, SAFEARRAY** WaveformArray, double InitialX, double XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_SaveWaveformToFile)(Tkdpo2k3k4kSourceEnum WaveformSource, BSTR FileName, Tkdpo2k3k4kWaveformFileFormatEnum FileFormat);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_ReadWaveformMinMax)(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_ReadWaveform)(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_IsWaveformElementInvalid)(double Element, VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_InitiateAcquisition)();
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinZoom)(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinCursor)(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformStartStop)(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformMinMax)(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformHighResolution)(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveformDigitizedLevel)(Tkdpo2k3k4kChannelEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement, double* YZero, double* YMult, double* YOffset);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_FetchWaveform)(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_CopyWaveformToClipboard)(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, long* PointsCopied);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataWidth)(long* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataWidth)(long val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataStop)(long* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataStop)(long val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataStart)(long* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataStart)(long val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataSource)(Tkdpo2k3k4kDataSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataSource)(Tkdpo2k3k4kDataSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_WaveformRecordLength)(double* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataComposition)(Tkdpo2k3k4kDataCompositionEnum* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataComposition)(Tkdpo2k3k4kDataCompositionEnum val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_DataResolution)(Tkdpo2k3k4kDataResolutionEnum* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_DataResolution)(Tkdpo2k3k4kDataResolutionEnum val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_get_FillterVuFrequency)(double* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_put_FillterVuFrequency)(double val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_GetAvailableFilterVuFrequencies)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kWaveformTransfer_GetAvailableDataCompositions)(BSTR* val);

	STDMETHOD(ITkdpo2k3k4kUtilityEx_Calibrate)(Tkdpo2k3k4kUtilityExCalibrationStatusEnum* val);
	STDMETHOD(ITkdpo2k3k4kUtilityEx_SelfTest)(long* TestResult, BSTR* TestMessage);
	STDMETHOD(ITkdpo2k3k4kUtilityEx_get_FrontPanelLock)(Tkdpo2k3k4kUtilityExFrontPanelLockEnum* val);
	STDMETHOD(ITkdpo2k3k4kUtilityEx_put_FrontPanelLock)(Tkdpo2k3k4kUtilityExFrontPanelLockEnum val);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Type)(Tkdpo2k3k4kPowerTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_Type)(Tkdpo2k3k4kPowerTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_VoltageSource)(Tkdpo2k3k4kPowerSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_VoltageSource)(Tkdpo2k3k4kPowerSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_CurrentSource)(Tkdpo2k3k4kPowerSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_CurrentSource)(Tkdpo2k3k4kPowerSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_DisplayState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_DisplayState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Indicator)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_Indicator)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_GateSource)(Tkdpo2k3k4kPowerGateSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_GateSource)(Tkdpo2k3k4kPowerGateSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Gating)(Tkdpo2k3k4kPowerGatingEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_Gating)(Tkdpo2k3k4kPowerGatingEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_RefLevelHigh)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_RefLevelHigh)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_RefLevelLow)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_RefLevelLow)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_RefLevelMid)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_RefLevelMid)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_StatisticsMode)(Tkdpo2k3k4kPowerStatisticsModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_StatisticsMode)(Tkdpo2k3k4kPowerStatisticsModeEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_StatisticsSamples)(long* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_put_StatisticsSamples)(long val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Quality)(ITkdpo2k3k4kPowerAnalysisQuality** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_SwitchingLoss)(ITkdpo2k3k4kPowerAnalysisSwitchingLoss** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Harmonics)(ITkdpo2k3k4kPowerAnalysisHarmonics** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Ripple)(ITkdpo2k3k4kPowerAnalysisRipple** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_Modulation)(ITkdpo2k3k4kPowerAnalysisModulation** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_get_SafeOperatingArea)(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea** val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_ResetStatistics)();
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_SetDefaultRefLevel)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_ReadRefLevel)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum* ReferenceLevelType, double* ReferenceLevelHysteresis, double* Mid);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysis_ConfigureRefLevel)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double ReferenceLevelHysteresis, double Mid);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_FrequencyReference)(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_put_FrequencyReference)(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_put_AllMeasDisplayState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_MeasDisplayState)(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_put_MeasDisplayState)(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_ApparentPower)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_Frequency)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_ICrestFactor)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_PhaseAngle)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_PowerFactor)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_ReactivePower)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_TruePower)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_VRMS)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_IRMS)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisQuality_get_VCrestFactor)(double* val);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowVoltage)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowVoltage)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowCurrent)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowCurrent)(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_ConductionCalculation)(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_ConductionCalculation)(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RDSOnValue)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RDSOnValue)(double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_VCESatValue)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_VCESatValue)(double val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_MeasDisplayType)(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_MeasDisplayType)(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_NumberOfCycles)(long* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadConductionLosses)(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTotalLosses)(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOnLosses)(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOffLosses)(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadGating)(Tkdpo2k3k4kPowerGatingPolarityEnum* Polarity, double* TurnOn);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ConfigureGating)(Tkdpo2k3k4kPowerGatingPolarityEnum Polarity, double TurnOn);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_Standard)(Tkdpo2k3k4kPowerHarmonicsStandardEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_put_Standard)(Tkdpo2k3k4kPowerHarmonicsStandardEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplaySet)(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplaySet)(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplayType)(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplayType)(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_OverallResults)(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_RMSResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDFResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDRResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicFrequencyResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPhaseResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicAbsoluteMagnitudeResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPercentageMagnitudeResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HamronicIECMaxResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicLimitResult)(long Harmonic, double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECClassALimitResult)(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECNormalLimitResult)(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECHigherLimitResult)(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicMILNormalLimitResult)(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECFundamentalCurrentResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic3Result)(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic5Result)(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHCResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHLResult)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECInputPower)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPowerFactor)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_SaveResultsToFile)(BSTR Filename);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_ReadMIL)(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum* FundamentalCurrentCalculating, double* UserCurrent, double* LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum* PowerLevel);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureMIL)(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating, double UserCurrent, double LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_ReadIEC)(Tkdpo2k3k4kPowerHarmonicsIECClassEnum* Class, VARIANT_BOOL* Filter, double* FundamentalCurrent, VARIANT_BOOL* Grouping, double* InputPower, double* LineFrequency, double* ObservationPeriod, double* PowerFactor);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureIEC)(Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class, VARIANT_BOOL Filter, double FundamentalCurrent, VARIANT_BOOL Grouping, double InputPower, double LineFrequency, double ObservationPeriod, double PowerFactor);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_GetParameters)(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum* FrequencyReference, double* FixedReference, long* NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum* HarmonicsSource);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisHarmonics_SetParameters)(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference, double FixedReference, long NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_Source)(Tkdpo2k3k4kPowerRippleSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_put_Source)(Tkdpo2k3k4kPowerRippleSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_Value)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_Max)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_Mean)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_Min)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_get_StandardDeviation)(double* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_SetOffsetToZero)();
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisRipple_DoVerticalAutoSet)();

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisModulation_get_Source)(Tkdpo2k3k4kPowerModulationSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisModulation_put_Source)(Tkdpo2k3k4kPowerModulationSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisModulation_get_Type)(Tkdpo2k3k4kPowerModulationTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisModulation_put_Type)(Tkdpo2k3k4kPowerModulationTypeEnum val);

	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureAxes)(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double YaxesMax, double YaxesMin, double XaxesMax, double XaxesMin);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_NumberOfPoints)(long* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_PlotType)(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_PlotType)(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ActionOnViolation)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_ActionOnViolation)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_MaskState)(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_MaskState)(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultFailureSamples)(long* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultWaveformsAcquired)(long* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultTestState)(Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_GetMaskPoints)(SAFEARRAY** Volts, SAFEARRAY** Amps);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_SetMaskPoints)(SAFEARRAY** Volts, SAFEARRAY** Amps);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadMaskLimits)(double* MaxVoltage, double* MaxCurrent, double* MaxPower);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureMaskLimits)(double MaxVoltage, double MaxCurrent, double MaxPower);
	STDMETHOD(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadAxes)(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double* YaxesMax, double* YaxesMin, double* XaxesMax, double* XaxesMin);

	STDMETHOD(ITkdpo2k3k4kFrequency_get_SpectrumTraceDisplayState)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_put_SpectrumTraceDisplayState)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_RFVsTimeTraceDisplayState)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_put_RFVsTimeTraceDisplayState)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_SquelchState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_put_SquelchState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_SquelchThreshold)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_put_SquelchThreshold)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_RF)(ITkdpo2k3k4kFrequencyRF** val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_NumberOfAverages)(long* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_put_NumberOfAverages)(long val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_AverageCount)(long* val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_Marker)(ITkdpo2k3k4kFrequencyMarker** val);
	STDMETHOD(ITkdpo2k3k4kFrequency_get_Trace)(ITkdpo2k3k4kFrequencyTrace** val);

	STDMETHOD(ITkdpo2k3k4kFrequencyRF_ConfigureVerticalParameters)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double Scale, double Position);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_ReadVerticalParameters)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double* Scale, double* Position);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_SpectogramState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_put_SpectogramState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_SpectogramNumberOfSlices)(long* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_SpectogramSelectSlice)(long* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_put_SpectogramSelectSlice)(long val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_DetectionMode)(Tkdpo2k3k4kFrequencyRFDetectionModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_put_DetectionMode)(Tkdpo2k3k4kFrequencyRFDetectionModeEnum val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_SpectrumMode)(Tkdpo2k3k4kFrequencySpectrumModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_put_SpectrumMode)(Tkdpo2k3k4kFrequencySpectrumModeEnum val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_FrequencyAndSpan)(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan** val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_Amplitude)(ITkdpo2k3k4kFrequencyRFAmplitude** val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_get_Bandwidth)(ITkdpo2k3k4kFrequencyRFBandwidth** val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_ReadManualDetectionMethod)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum* Method);
	STDMETHOD(ITkdpo2k3k4kFrequencyRF_ConfigureManualDetectionMethod)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method);

	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_CenterFrequency)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_CenterFrequency)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Span)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Span)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Start)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Start)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Stop)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Stop)(double val);

	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_get_ReferenceLevel)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_put_ReferenceLevel)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalPosition)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalPosition)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalUnits)(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalUnits)(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFAmplitude_SetAutoRefLevel)();

	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_get_RBWMode)(Tkdpo2k3k4kFrequencyRBWModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_put_RBWMode)(Tkdpo2k3k4kFrequencyRBWModeEnum val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_get_RBW)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_put_RBW)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_get_SpanRBWRatio)(double* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_put_SpanRBWRatio)(double val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_get_Window)(Tkdpo2k3k4kFrequencyRFWindowEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyRFBandwidth_put_Window)(Tkdpo2k3k4kFrequencyRFWindowEnum val);

	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_get_Type)(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_put_Type)(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ReadOBW)(double* AnalysisBandwidth, double* PercentageDown, double* LowerFrequency, double* UpperFrequency, double* Power);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ConfigureOBW)(double AnalysisBandwidth, double PercentageDown);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ReadACPR)(long* AdjacentChannels, double* ChannelBandwidth, double* ChannelSpacing, double* Power, double* LowerArea1Ratio, double* LowerArea2Ratio, double* LowerArea3Ratio, double* UpperArea1Ratio, double* UpperArea2Ratio, double* UpperArea3Ratio);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ConfigureACPR)(long AdjacentChannels, double ChannelBandwidth, double ChannelSpacing);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ReadChannelPower)(double* Bandwidth, double* Power);
	STDMETHOD(ITkdpo2k3k4kMeasurementsFrequency_ConfigureChannelPower)(double Bandwidth);

	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_get_ManualState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_put_ManualState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_get_Type)(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_put_Type)(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_ReadPeak)(VARIANT_BOOL* State, long* MaximumMarkers, double* Threshold, double* Excursion);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_ConfigurePeak)(long MaximumMarkers, double Threshold, double Excursion);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_ConfigureManual)(long Marker, double HorizontalValue);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_ReadManual)(long Marker, double* HorizontalValue, double* HorizontalDelta, double* VerticalValue, double* VerticalDelta);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_ReadReference)(double* Frequency, double* Amplitude);
	STDMETHOD(ITkdpo2k3k4kFrequencyMarker_MoveRefToCentre)();

	STDMETHOD(ITkdpo2k3k4kFrequencyTrace_FetchY)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement);
	STDMETHOD(ITkdpo2k3k4kFrequencyTrace_ReadY)(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement);
};

NIMBUS_OBJECT_ENTRY_AUTO(Tkdpo2k3k4k)
