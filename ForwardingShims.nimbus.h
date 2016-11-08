/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

class Tkdpo2k3k4k;class Tkdpo2k3k4kChannel;class Tkdpo2k3k4kBus;class Tkdpo2k3k4kMath;class Tkdpo2k3k4kMeasurementSlot;class Tkdpo2k3k4kSearch;class Tkdpo2k3k4kReference;class Tkdpo2k3k4kDigitalChannel;

typedef CDriver DriverBase;

class ForwardingShimImpl
{
public:
	static HRESULT ITkdpo2k3k4k_get_Channels(Tkdpo2k3k4k* pT, ITkdpo2k3k4kChannels** val);
	static HRESULT ITkdpo2k3k4k_get_Acquisition(Tkdpo2k3k4k* pT, ITkdpo2k3k4kAcquisition** val);
	static HRESULT ITkdpo2k3k4k_get_Trigger(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTrigger** val);
	static HRESULT ITkdpo2k3k4k_get_Buses(Tkdpo2k3k4k* pT, ITkdpo2k3k4kBuses** val);
	static HRESULT ITkdpo2k3k4k_get_Cursor(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursor** val);
	static HRESULT ITkdpo2k3k4k_get_Display(Tkdpo2k3k4k* pT, ITkdpo2k3k4kDisplay** val);
	static HRESULT ITkdpo2k3k4k_get_HardCopy(Tkdpo2k3k4k* pT, ITkdpo2k3k4kHardCopy** val);
	static HRESULT ITkdpo2k3k4k_get_Histogram(Tkdpo2k3k4k* pT, ITkdpo2k3k4kHistogram** val);
	static HRESULT ITkdpo2k3k4k_get_Horizontal(Tkdpo2k3k4k* pT, ITkdpo2k3k4kHorizontal** val);
	static HRESULT ITkdpo2k3k4k_get_Mark(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMark** val);
	static HRESULT ITkdpo2k3k4k_get_Maths(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMaths** val);
	static HRESULT ITkdpo2k3k4k_get_MeasurementImmediate(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMeasurementImmediate** val);
	static HRESULT ITkdpo2k3k4k_get_Measurements(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMeasurements** val);
	static HRESULT ITkdpo2k3k4k_get_SaveRecall(Tkdpo2k3k4k* pT, ITkdpo2k3k4kSaveRecall** val);
	static HRESULT ITkdpo2k3k4k_get_Searches(Tkdpo2k3k4k* pT, ITkdpo2k3k4kSearches** val);
	static HRESULT ITkdpo2k3k4k_get_References(Tkdpo2k3k4k* pT, ITkdpo2k3k4kReferences** val);
	static HRESULT ITkdpo2k3k4k_get_DigitalChannels(Tkdpo2k3k4k* pT, ITkdpo2k3k4kDigitalChannels** val);
	static HRESULT ITkdpo2k3k4k_get_Zoom(Tkdpo2k3k4k* pT, ITkdpo2k3k4kZoom** val);
	static HRESULT ITkdpo2k3k4k_get_WaveformTransfer(Tkdpo2k3k4k* pT, ITkdpo2k3k4kWaveformTransfer** val);
	static HRESULT ITkdpo2k3k4k_get_UtilityEx(Tkdpo2k3k4k* pT, ITkdpo2k3k4kUtilityEx** val);
	static HRESULT ITkdpo2k3k4k_get_InstrumentIO(Tkdpo2k3k4k* pT, ITkdpo2k3k4kInstrumentIO** val);
	static HRESULT ITkdpo2k3k4k_get_PowerAnalysis(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysis** val);
	static HRESULT ITkdpo2k3k4k_get_Frequency(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequency** val);
	static HRESULT IIviDriver_Initialize(Tkdpo2k3k4k* pT, BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	static HRESULT IIviDriver_Close(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriver_get_DriverOperation(Tkdpo2k3k4k* pT, IIviDriverOperation** val);
	static HRESULT IIviDriver_get_Identity(Tkdpo2k3k4k* pT, IIviDriverIdentity** val);
	static HRESULT IIviDriver_get_Utility(Tkdpo2k3k4k* pT, IIviDriverUtility** val);
	static HRESULT IIviDriver_get_Initialized(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_InvalidateAllAttributes(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverOperation_ClearInterchangeWarnings(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverOperation_GetNextInterchangeWarning(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverOperation_ResetInterchangeCheck(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverOperation_GetNextCoercionRecord(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_LogicalName(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_IoResourceDescriptor(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_Cache(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Cache(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_InterchangeCheck(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_InterchangeCheck(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_QueryInstrumentStatus(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_QueryInstrumentStatus(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RangeCheck(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RangeCheck(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RecordCoercions(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RecordCoercions(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_Simulate(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Simulate(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_DriverSetup(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentManufacturer(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentModel(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentFirmwareRevision(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_Identifier(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SupportedInstrumentModels(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMajorVersion(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMinorVersion(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviDriverIdentity_get_GroupCapabilities(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Description(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Revision(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Vendor(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviDriverUtility_Reset(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverUtility_ResetWithDefaults(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverUtility_Disable(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverUtility_SelfTest(Tkdpo2k3k4k* pT, long* TestResult, BSTR* TestMessage);
	static HRESULT IIviDriverUtility_ErrorQuery(Tkdpo2k3k4k* pT, long* ErrorCode, BSTR* ErrorMessage);
	static HRESULT IIviDriverUtility_LockObject(Tkdpo2k3k4k* pT);
	static HRESULT IIviDriverUtility_UnlockObject(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeAutoZero(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeCommand(Tkdpo2k3k4k* pT, BSTR Command, BSTR State);
	static HRESULT ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeDegauss(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kChannels_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kChannels_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kChannel** val);
	static HRESULT ITkdpo2k3k4kChannels_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeSignal(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelProbeSignalEnum* val);
	static HRESULT ITkdpo2k3k4kChannels_put_AUXInProbeSignal(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelProbeSignalEnum val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeGain(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeResistance(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeSerialNumber(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeType(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInProbeUnits(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeDegaussState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kProbeDegaussStateEnum* val);
	static HRESULT ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeRange(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannels_put_AUXInTekVPIProbeRange(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScope_get_Acquisition(Tkdpo2k3k4k* pT, IIviScopeAcquisition** val);
	static HRESULT IIviScope_get_Channels(Tkdpo2k3k4k* pT, IIviScopeChannels** val);
	static HRESULT IIviScope_get_Measurements(Tkdpo2k3k4k* pT, IIviScopeMeasurements** val);
	static HRESULT IIviScope_get_ReferenceLevel(Tkdpo2k3k4k* pT, IIviScopeReferenceLevel** val);
	static HRESULT IIviScope_get_Trigger(Tkdpo2k3k4k* pT, IIviScopeTrigger** val);
	static HRESULT IIviScopeAcquisition_ConfigureRecord(Tkdpo2k3k4k* pT, double TimePerRecord, long MinNumPts, double AcquisitionStartTime);
	static HRESULT IIviScopeAcquisition_get_NumberOfAverages(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeAcquisition_put_NumberOfAverages(Tkdpo2k3k4k* pT, long val);
	static HRESULT IIviScopeAcquisition_get_NumberOfEnvelopes(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeAcquisition_put_NumberOfEnvelopes(Tkdpo2k3k4k* pT, long val);
	static HRESULT IIviScopeAcquisition_get_Interpolation(Tkdpo2k3k4k* pT, IviScopeInterpolationEnum* val);
	static HRESULT IIviScopeAcquisition_put_Interpolation(Tkdpo2k3k4k* pT, IviScopeInterpolationEnum val);
	static HRESULT IIviScopeAcquisition_get_RecordLength(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeAcquisition_get_SampleMode(Tkdpo2k3k4k* pT, IviScopeSampleModeEnum* val);
	static HRESULT IIviScopeAcquisition_get_SampleRate(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeAcquisition_get_Type(Tkdpo2k3k4k* pT, IviScopeAcquisitionTypeEnum* val);
	static HRESULT IIviScopeAcquisition_put_Type(Tkdpo2k3k4k* pT, IviScopeAcquisitionTypeEnum val);
	static HRESULT IIviScopeAcquisition_get_NumberOfPointsMin(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeAcquisition_put_NumberOfPointsMin(Tkdpo2k3k4k* pT, long val);
	static HRESULT IIviScopeAcquisition_get_StartTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeAcquisition_put_StartTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeAcquisition_get_TimePerRecord(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeAcquisition_put_TimePerRecord(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeMeasurements_Initiate(Tkdpo2k3k4k* pT);
	static HRESULT IIviScopeMeasurements_Abort(Tkdpo2k3k4k* pT);
	static HRESULT IIviScopeMeasurements_AutoSetup(Tkdpo2k3k4k* pT);
	static HRESULT IIviScopeMeasurements_Status(Tkdpo2k3k4k* pT, IviScopeAcquisitionStatusEnum* val);
	static HRESULT IIviScopeMeasurements_IsWaveformElementInvalid(Tkdpo2k3k4k* pT, double Element, VARIANT_BOOL* val);
	static HRESULT IIviScopeMeasurements_get_Item(Tkdpo2k3k4k* pT, BSTR Name, IIviScopeMeasurement** val);
	static HRESULT IIviScopeMeasurements_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeMeasurements_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT IIviScopeChannels_get_Item(Tkdpo2k3k4k* pT, BSTR Name, IIviScopeChannel** val);
	static HRESULT IIviScopeChannels_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeChannels_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT IIviScopeReferenceLevel_Configure(Tkdpo2k3k4k* pT, double Low, double Mid, double High);
	static HRESULT IIviScopeReferenceLevel_get_High(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeReferenceLevel_put_High(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeReferenceLevel_get_Low(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeReferenceLevel_put_Low(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeReferenceLevel_get_Mid(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeReferenceLevel_put_Mid(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTrigger_Configure(Tkdpo2k3k4k* pT, IviScopeTriggerTypeEnum Type, double Holdoff);
	static HRESULT IIviScopeTrigger_get_Continuous(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT IIviScopeTrigger_put_Continuous(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT IIviScopeTrigger_get_Coupling(Tkdpo2k3k4k* pT, IviScopeTriggerCouplingEnum* val);
	static HRESULT IIviScopeTrigger_put_Coupling(Tkdpo2k3k4k* pT, IviScopeTriggerCouplingEnum val);
	static HRESULT IIviScopeTrigger_get_Level(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTrigger_put_Level(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTrigger_get_Modifier(Tkdpo2k3k4k* pT, IviScopeTriggerModifierEnum* val);
	static HRESULT IIviScopeTrigger_put_Modifier(Tkdpo2k3k4k* pT, IviScopeTriggerModifierEnum val);
	static HRESULT IIviScopeTrigger_get_Source(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT IIviScopeTrigger_put_Source(Tkdpo2k3k4k* pT, BSTR val);
	static HRESULT IIviScopeTrigger_get_Holdoff(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTrigger_put_Holdoff(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTrigger_get_Type(Tkdpo2k3k4k* pT, IviScopeTriggerTypeEnum* val);
	static HRESULT IIviScopeTrigger_put_Type(Tkdpo2k3k4k* pT, IviScopeTriggerTypeEnum val);
	static HRESULT IIviScopeTrigger_get_AcLine(Tkdpo2k3k4k* pT, IIviScopeTriggerAcLine** val);
	static HRESULT IIviScopeTrigger_get_Edge(Tkdpo2k3k4k* pT, IIviScopeTriggerEdge** val);
	static HRESULT IIviScopeTrigger_get_Glitch(Tkdpo2k3k4k* pT, IIviScopeTriggerGlitch** val);
	static HRESULT IIviScopeTrigger_get_Runt(Tkdpo2k3k4k* pT, IIviScopeTriggerRunt** val);
	static HRESULT IIviScopeTrigger_get_TV(Tkdpo2k3k4k* pT, IIviScopeTriggerTv** val);
	static HRESULT IIviScopeTrigger_get_Width(Tkdpo2k3k4k* pT, IIviScopeTriggerWidth** val);
	static HRESULT IIviScopeTriggerAcLine_get_Slope(Tkdpo2k3k4k* pT, IviScopeACLineSlopeEnum* val);
	static HRESULT IIviScopeTriggerAcLine_put_Slope(Tkdpo2k3k4k* pT, IviScopeACLineSlopeEnum val);
	static HRESULT IIviScopeTriggerEdge_Configure(Tkdpo2k3k4k* pT, BSTR Source, double Level, IviScopeTriggerSlopeEnum Slope);
	static HRESULT IIviScopeTriggerEdge_get_Slope(Tkdpo2k3k4k* pT, IviScopeTriggerSlopeEnum* val);
	static HRESULT IIviScopeTriggerEdge_put_Slope(Tkdpo2k3k4k* pT, IviScopeTriggerSlopeEnum val);
	static HRESULT IIviScopeTriggerGlitch_Configure(Tkdpo2k3k4k* pT, BSTR Source, double Level, double Width, IviScopeGlitchPolarityEnum polarity, IviScopeGlitchConditionEnum condition);
	static HRESULT IIviScopeTriggerGlitch_get_condition(Tkdpo2k3k4k* pT, IviScopeGlitchConditionEnum* val);
	static HRESULT IIviScopeTriggerGlitch_put_condition(Tkdpo2k3k4k* pT, IviScopeGlitchConditionEnum val);
	static HRESULT IIviScopeTriggerGlitch_get_polarity(Tkdpo2k3k4k* pT, IviScopeGlitchPolarityEnum* val);
	static HRESULT IIviScopeTriggerGlitch_put_polarity(Tkdpo2k3k4k* pT, IviScopeGlitchPolarityEnum val);
	static HRESULT IIviScopeTriggerGlitch_get_Width(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTriggerGlitch_put_Width(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTriggerRunt_Configure(Tkdpo2k3k4k* pT, BSTR Source, double ThresholdLow, double ThresholdHigh, IviScopeRuntPolarityEnum polarity);
	static HRESULT IIviScopeTriggerRunt_get_polarity(Tkdpo2k3k4k* pT, IviScopeRuntPolarityEnum* val);
	static HRESULT IIviScopeTriggerRunt_put_polarity(Tkdpo2k3k4k* pT, IviScopeRuntPolarityEnum val);
	static HRESULT IIviScopeTriggerRunt_get_ThresholdHigh(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTriggerRunt_put_ThresholdHigh(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTriggerRunt_get_ThresholdLow(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTriggerRunt_put_ThresholdLow(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTriggerTv_Configure(Tkdpo2k3k4k* pT, BSTR Source, IviScopeTVSignalFormatEnum SignalFormat, IviScopeTVTriggerEventEnum Event, IviScopeTVTriggerPolarityEnum polarity);
	static HRESULT IIviScopeTriggerTv_get_LineNumber(Tkdpo2k3k4k* pT, long* val);
	static HRESULT IIviScopeTriggerTv_put_LineNumber(Tkdpo2k3k4k* pT, long val);
	static HRESULT IIviScopeTriggerTv_get_Event(Tkdpo2k3k4k* pT, IviScopeTVTriggerEventEnum* val);
	static HRESULT IIviScopeTriggerTv_put_Event(Tkdpo2k3k4k* pT, IviScopeTVTriggerEventEnum val);
	static HRESULT IIviScopeTriggerTv_get_polarity(Tkdpo2k3k4k* pT, IviScopeTVTriggerPolarityEnum* val);
	static HRESULT IIviScopeTriggerTv_put_polarity(Tkdpo2k3k4k* pT, IviScopeTVTriggerPolarityEnum val);
	static HRESULT IIviScopeTriggerTv_get_SignalFormat(Tkdpo2k3k4k* pT, IviScopeTVSignalFormatEnum* val);
	static HRESULT IIviScopeTriggerTv_put_SignalFormat(Tkdpo2k3k4k* pT, IviScopeTVSignalFormatEnum val);
	static HRESULT IIviScopeTriggerWidth_Configure(Tkdpo2k3k4k* pT, BSTR Source, double Level, double ThresholdLow, double ThresholdHigh, IviScopeWidthPolarityEnum polarity, IviScopeWidthConditionEnum condition);
	static HRESULT IIviScopeTriggerWidth_get_condition(Tkdpo2k3k4k* pT, IviScopeWidthConditionEnum* val);
	static HRESULT IIviScopeTriggerWidth_put_condition(Tkdpo2k3k4k* pT, IviScopeWidthConditionEnum val);
	static HRESULT IIviScopeTriggerWidth_get_polarity(Tkdpo2k3k4k* pT, IviScopeWidthPolarityEnum* val);
	static HRESULT IIviScopeTriggerWidth_put_polarity(Tkdpo2k3k4k* pT, IviScopeWidthPolarityEnum val);
	static HRESULT IIviScopeTriggerWidth_get_ThresholdLow(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTriggerWidth_put_ThresholdLow(Tkdpo2k3k4k* pT, double val);
	static HRESULT IIviScopeTriggerWidth_get_ThresholdHigh(Tkdpo2k3k4k* pT, double* val);
	static HRESULT IIviScopeTriggerWidth_put_ThresholdHigh(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kAcquisition_ConfigureRecord(Tkdpo2k3k4k* pT, double TimePerRecord, long MinNumPts, double AcquisitionStartTime);
	static HRESULT ITkdpo2k3k4kAcquisition_AutoSet(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kAcquisition_SetAverageMode(Tkdpo2k3k4k* pT, long NumberAverages);
	static HRESULT ITkdpo2k3k4kAcquisition_Start(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kAcquisition_Stop(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kAcquisition_get_NumberAverages(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_NumberAverages(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_RecordLength(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_SampleRate(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_NumberOfPointsMin(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_NumberOfPointsMin(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_StartTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_StartTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_TimePerRecord(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_TimePerRecord(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_State(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_State(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kAcquisitionModeEnum* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kAcquisitionModeEnum val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_NumberAcquisitions(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_RunStop(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_RunStop(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_SingleSequence(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_SingleSequence(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_MagniVuState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kAcquisition_put_MagniVuState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_MaxSampleRate(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kAcquisition_get_SamplingMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kAcquisitionSamplingModeEnum* val);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureAIndependentParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_ReadAIndependentParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureAOnlyTrigger(Tkdpo2k3k4k* pT, double HoldoffTime);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureAThenBAfterEventsTrigger(Tkdpo2k3k4k* pT, double HoldoffTime, long Events);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureAThenBAfterTimeTrigger(Tkdpo2k3k4k* pT, double HoldoffTime, double DelayTime);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureBIndependentParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_ReadBIndependentParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_ReadARFIndependentParameters(Tkdpo2k3k4k* pT, double* UpperThreshold, double* LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_ConfigureARFIndependentParameters(Tkdpo2k3k4k* pT, double UpperThreshold, double LowerThreshold);
	static HRESULT ITkdpo2k3k4kTrigger_get_AHoldoffTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_AHoldoffTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTrigger_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerTypeEnum val);
	static HRESULT ITkdpo2k3k4kTrigger_get_AEdge(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerAEdge** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_BState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_BState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kTrigger_get_BDelayTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_BDelayTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTrigger_get_CurrentState(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kTrigger_get_EventCount(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_EventCount(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kTrigger_get_BLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_BLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum Source, double val);
	static HRESULT ITkdpo2k3k4kTrigger_get_TriggerBBy(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerBByEnum* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_TriggerBBy(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerBByEnum val);
	static HRESULT ITkdpo2k3k4kTrigger_get_Frequency(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ProbeAttenuation(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_ProbeAttenuation(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTrigger_get_VerticalUnitValue(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ABus(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABus** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ALogic(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerALogic** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_AWidth(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerAWidth** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ARunt(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerARunt** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ASetupHold(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerASetupHold** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_ATransition(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerATransition** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_AVideo(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerAVideo** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_BEdge(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerBEdge** val);
	static HRESULT ITkdpo2k3k4kTrigger_get_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerModeEnum* val);
	static HRESULT ITkdpo2k3k4kTrigger_put_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerModeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_Configure(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_Read(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_ConfigureLevelTo50Percent(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_get_Slope(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_put_Slope(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_get_Coupling(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerEdgeCouplingEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_put_Coupling(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerEdgeCouplingEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_get_Level(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_put_Level(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAEdge_put_LevelEnum(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLevelEnum val);
	static HRESULT ITkdpo2k3k4kBuses_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kBuses_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kBuses_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kBus** val);
	static HRESULT ITkdpo2k3k4kCursor_get_DDT(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursor_get_TrackMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorTrackModeEnum* val);
	static HRESULT ITkdpo2k3k4kCursor_put_TrackMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorTrackModeEnum val);
	static HRESULT ITkdpo2k3k4kCursor_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kCursor_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorTypeEnum val);
	static HRESULT ITkdpo2k3k4kCursor_get_HBars(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorHBars** val);
	static HRESULT ITkdpo2k3k4kCursor_get_VBars(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorVBars** val);
	static HRESULT ITkdpo2k3k4kCursor_get_XY(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorXY** val);
	static HRESULT ITkdpo2k3k4kCursor_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorSourceEnum* val);
	static HRESULT ITkdpo2k3k4kCursor_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorSourceEnum val);
	static HRESULT ITkdpo2k3k4kCursorHBars_SetMeasurementScale(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
	static HRESULT ITkdpo2k3k4kCursorHBars_get_Units(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorHBarsUnitsEnum* val);
	static HRESULT ITkdpo2k3k4kCursorHBars_put_Units(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorHBarsUnitsEnum val);
	static HRESULT ITkdpo2k3k4kCursorHBars_get_Delta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorHBars_get_Position1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorHBars_put_Position1(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorHBars_get_Position2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorHBars_put_Position2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorVBars_SetMeasurementScale(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_Delta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_Position1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_put_Position1(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_Position2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_put_Position2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_Units(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorVBarsUnitsEnum* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_put_Units(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorVBarsUnitsEnum val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_HorizontalPosition1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_HorizontalPosition2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_VDelta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_AlternativeReadout1(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorVBars_get_AlternativeReadout2(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXY_get_Readout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorXYReadoutEnum* val);
	static HRESULT ITkdpo2k3k4kCursorXY_put_Readout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kCursorXYReadoutEnum val);
	static HRESULT ITkdpo2k3k4kCursorXY_get_Rectangle(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorXYRectangle** val);
	static HRESULT ITkdpo2k3k4kCursorXY_get_Ratio(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorXYRatio** val);
	static HRESULT ITkdpo2k3k4kCursorXY_get_Product(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorXYProduct** val);
	static HRESULT ITkdpo2k3k4kCursorXY_get_PolarCoordinates(Tkdpo2k3k4k* pT, ITkdpo2k3k4kCursorXYPolarCoordinates** val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_XDelta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_XPosition1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_put_XPosition1(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_XPosition2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_put_XPosition2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_XUnits(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_YDelta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_YPosition1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_put_YPosition1(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_YPosition2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_put_YPosition2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kCursorXYRectangle_get_YUnits(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXYRatio_get_Delta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRatio_get_Position1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRatio_get_Position2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYRatio_get_Units(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXYProduct_get_Delta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYProduct_get_Position1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYProduct_get_Position2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYProduct_get_Units(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaDelta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaUnits(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_Delta(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position1(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kCursorXYPolarCoordinates_get_Units(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kDisplay_SetMessageBoxCoordinates(Tkdpo2k3k4k* pT, long X1, long Y1, long X2, long Y2);
	static HRESULT ITkdpo2k3k4kDisplay_GetMessageBoxCoordinates(Tkdpo2k3k4k* pT, long* X1, long* Y1, long* X2, long* Y2);
	static HRESULT ITkdpo2k3k4kDisplay_ShowMessage(Tkdpo2k3k4k* pT, BSTR Message);
	static HRESULT ITkdpo2k3k4kDisplay_ClearMessage(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kDisplay_GetDisplayMessage(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kDisplay_get_ClockState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayClockStateEnum* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_ClockState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayClockStateEnum val);
	static HRESULT ITkdpo2k3k4kDisplay_get_BackLightIntensity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayBackLightIntensityEnum* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_BackLightIntensity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayBackLightIntensityEnum val);
	static HRESULT ITkdpo2k3k4kDisplay_get_Format(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayDisplayFormatEnum* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_Format(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayDisplayFormatEnum val);
	static HRESULT ITkdpo2k3k4kDisplay_get_GraticuleStyle(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayGraticuleEnum* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_GraticuleStyle(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayGraticuleEnum val);
	static HRESULT ITkdpo2k3k4kDisplay_get_Persistence(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_Persistence(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kDisplay_put_PersistenceEnum(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDisplayPersistenceEnum val);
	static HRESULT ITkdpo2k3k4kDisplay_get_WaveformIntensity(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_WaveformIntensity(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kDisplay_get_GraticuleIntensity(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_GraticuleIntensity(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kDisplay_get_DotsOnly(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_DotsOnly(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kDisplay_get_DisplayMessageBox(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_DisplayMessageBox(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kDisplay_get_GlitchCaptureState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_GlitchCaptureState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kDisplay_get_GlitchIntensity(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kDisplay_put_GlitchIntensity(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kHardCopy_Print(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kHardCopy_get_Layout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPrintLayoutEnum* val);
	static HRESULT ITkdpo2k3k4kHardCopy_put_Layout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPrintLayoutEnum val);
	static HRESULT ITkdpo2k3k4kHardCopy_get_InkSaver(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kHardCopy_put_InkSaver(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kHistogram_Configure(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSource1Enum Source, Tkdpo2k3k4kHistogramModeEnum Mode);
	static HRESULT ITkdpo2k3k4kHistogram_Read(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSource1Enum* Source, Tkdpo2k3k4kHistogramModeEnum* Mode);
	static HRESULT ITkdpo2k3k4kHistogram_ConfigureBoxCoordinates(Tkdpo2k3k4k* pT, double Top, double Left, double Right, double Bottom);
	static HRESULT ITkdpo2k3k4kHistogram_ReadBoxCoordinates(Tkdpo2k3k4k* pT, double* Top, double* Left, double* Right, double* Bottom);
	static HRESULT ITkdpo2k3k4kHistogram_ConfigureBoxCoordinatesPercent(Tkdpo2k3k4k* pT, double Top, double Left, double Right, double Bottom);
	static HRESULT ITkdpo2k3k4kHistogram_ReadBoxCoordinatesPercent(Tkdpo2k3k4k* pT, double* Top, double* Left, double* Right, double* Bottom);
	static HRESULT ITkdpo2k3k4kHistogram_Reset(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kHistogram_get_Data(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kHistogram_get_Display(Tkdpo2k3k4k* pT, Tkdpo2k3k4kHistogramDisplayEnum* val);
	static HRESULT ITkdpo2k3k4kHistogram_put_Display(Tkdpo2k3k4k* pT, Tkdpo2k3k4kHistogramDisplayEnum val);
	static HRESULT ITkdpo2k3k4kHistogram_get_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kHistogramModeEnum* val);
	static HRESULT ITkdpo2k3k4kHistogram_put_Mode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kHistogramModeEnum val);
	static HRESULT ITkdpo2k3k4kHistogram_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSource1Enum* val);
	static HRESULT ITkdpo2k3k4kHistogram_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSource1Enum val);
	static HRESULT ITkdpo2k3k4kHorizontal_Configure(Tkdpo2k3k4k* pT, double Position, double Scale, long RecordLength);
	static HRESULT ITkdpo2k3k4kHorizontal_ConfigureDelay(Tkdpo2k3k4k* pT, VARIANT_BOOL Mode, double Time);
	static HRESULT ITkdpo2k3k4kHorizontal_Read(Tkdpo2k3k4k* pT, double* Position, double* Scale, long* RecordLength);
	static HRESULT ITkdpo2k3k4kHorizontal_ReadDelay(Tkdpo2k3k4k* pT, VARIANT_BOOL* Mode, double* Time);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DelayMode(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_DelayMode(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DelayTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_DelayTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DigitalMainRecordLength(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DigitalMagniVuRecordLength(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DigitalMainSampleRate(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_DigitalMagniVuSampleRate(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_Scale(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_Scale(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_Position(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_Position(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_Resolution(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_Resolution(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_RecordLength(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_RecordLength(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_SampleRate(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_SampleRate(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kHorizontal_get_TriggerPosition(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kHorizontal_put_TriggerPosition(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kMark_MoveZoomToMark(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark);
	static HRESULT ITkdpo2k3k4kMark_CreateMark(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMarkEnum Mark);
	static HRESULT ITkdpo2k3k4kMark_DeleteMark(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMarkEnum Mark);
	static HRESULT ITkdpo2k3k4kMark_get_FreeMarks(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_TotalMarks(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedEnd(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedFocus(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedMarksInColumn(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedOwner(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedStart(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedPosition(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMark_get_SelectedLabel(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMaths_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMaths_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kMaths_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kMath** val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_Configure(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_ConfigureDelay(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_ConfigurePhase(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_ConfigureReferenceLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementMethodEnum Method, Tkdpo2k3k4kMeasurementUnitEnum Unit, double High, double Low, double Mid, double Mid2);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_Read(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_ReadReferenceLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementMethodEnum* Method, Tkdpo2k3k4kMeasurementUnitEnum* Unit, double* High, double* Low, double* Mid, double* Mid2);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_ReadValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_DelayDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementDelayDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_DelayDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementDelayDirectionEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge1(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementEdgeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge1(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementEdgeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge2(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementEdgeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge2(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementEdgeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteHigh(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteHigh(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteLow(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteLow(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelMethod(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementMethodEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelMethod(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementMethodEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentHigh(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentHigh(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentLow(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentLow(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid2(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid2(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelUnit(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementUnitEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelUnit(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementUnitEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_Source1(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_Source1(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_Source2(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_Source2(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementTypeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementTypeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_Units(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMeasurementImmediate_get_Value(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurements_ClearStatistics(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kMeasurementSlot** val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Gating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementGatingEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurements_put_Gating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementGatingEnum val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_StatisticsMode(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kMeasurements_put_StatisticsMode(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_StatisticsWeighting(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMeasurements_put_StatisticsWeighting(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Indicators(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMeasurementsIndicators** val);
	static HRESULT ITkdpo2k3k4kMeasurements_get_Frequency(Tkdpo2k3k4k* pT, ITkdpo2k3k4kMeasurementsFrequency** val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_get_State(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementIndicatorStateEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_put_State(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementIndicatorStateEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalIndicators(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalValue(Tkdpo2k3k4k* pT, long Indicator, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_get_VerticalIndicators(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kMeasurementsIndicators_get_VerticalValue(Tkdpo2k3k4k* pT, long Indicator, double* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_DefaultSetup(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kSaveRecall_RecallSetupFromFile(Tkdpo2k3k4k* pT, BSTR FileName);
	static HRESULT ITkdpo2k3k4kSaveRecall_RecallSetupFromMemory(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMemoryLocationEnum Location);
	static HRESULT ITkdpo2k3k4kSaveRecall_RecallWaveformFromFile(Tkdpo2k3k4k* pT, Tkdpo2k3k4kReferenceEnum RefMemory, BSTR FileName);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveAllDigitalChannels(Tkdpo2k3k4k* pT, BSTR FileName);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveSetupToFile(Tkdpo2k3k4k* pT, BSTR FileName);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveSetupToMemory(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMemoryLocationEnum Location);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveWaveformToFile(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataSourceEnum Source, BSTR FileName);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveWaveformToReference(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataSourceEnum Source, Tkdpo2k3k4kReferenceEnum RefMemory);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveEventTableBusData(Tkdpo2k3k4k* pT, long Bus, BSTR Filename);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveImage(Tkdpo2k3k4k* pT, BSTR Filename, Tkdpo2k3k4kImageFormatEnum ImageFormat, Tkdpo2k3k4kImageLayoutEnum ImageLayout);
	static HRESULT ITkdpo2k3k4kSaveRecall_SaveAllWaveformsToFile(Tkdpo2k3k4k* pT, BSTR FileName, Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_SaveWaveFormFileFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSaveWaveformFileFormatEnum* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_SaveWaveFormFileFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSaveWaveformFileFormatEnum val);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_SaveButtonType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSaveButtonTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_SaveButtonType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSaveButtonTypeEnum val);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_ImageFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kImageFormatEnum* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_ImageFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kImageFormatEnum val);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_ImageLayout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kImageLayoutEnum* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_ImageLayout(Tkdpo2k3k4k* pT, Tkdpo2k3k4kImageLayoutEnum val);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_InkSaverPalette(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_InkSaverPalette(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kSaveRecall_get_WaveformGating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementGatingEnum* val);
	static HRESULT ITkdpo2k3k4kSaveRecall_put_WaveformGating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kMeasurementGatingEnum val);
	static HRESULT ITkdpo2k3k4kSearches_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kSearches_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearches_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kSearch** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_Configure(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTriggerBusTypeEnum BusType);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_BusSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABus_put_BusSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_ParallelData(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABus_put_ParallelData(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_BusType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerBusTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABus_put_BusType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerBusTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_Audio(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusAudio** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_CAN(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusCAN** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_Flexray(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusFlexray** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_I2C(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusI2C** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_LIN(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusLIN** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_RS232(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusRS232** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_SPI(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusSPI** val);
	static HRESULT ITkdpo2k3k4kTriggerABus_get_USB(Tkdpo2k3k4k* pT, ITkdpo2k3k4kTriggerABusUSB** val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_DataOffset(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_DataOffset(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_get_DataWord(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusAudio_put_DataWord(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_DataDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_DataDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_FrameType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_FrameType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_AddressMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_AddressMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_get_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusCAN_put_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ConfigureCycleCount(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ReadCycleCount(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ConfigureData(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ReadData(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ConfigureFrameID(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ReadFrameID(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ConfigureHeader(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_ReadHeader(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_get_EOFType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_put_EOFType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_get_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_put_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_get_FrameType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusFlexray_put_FrameType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_DataDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_DataDirection(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_get_AddressMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusI2C_put_AddressMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_DataQualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_get_IdentifierValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusLIN_put_IdentifierValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_get_RXDataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_put_RXDataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_get_RXDataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_put_RXDataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_get_TXDataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_put_TXDataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_get_TXDataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusRS232_put_TXDataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_get_DataINValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_put_DataINValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_get_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_put_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_get_DataOUTValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusSPI_put_DataOUTValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_DataHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_DataOffset(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_DataOffset(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_Qualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_Qualifier(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_DataValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_DataSize(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_AddressValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_DataType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_DataType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_AddressHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_AddressHighValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_EndPointValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_EndPointValue(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_ErrorType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_HandshakeType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_HandshakeType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_SOFFrameNumber(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_SOFFrameNumber(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_SpecialType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_SpecialType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_get_TokenType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerABusUSB_put_TokenType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_Configure(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ConfigureSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ReadSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ConfigurePattern(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ReadPattern(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* LogicOperatorType);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ConfigureClock(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ReadClock(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ConfigureRF(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold);
	static HRESULT ITkdpo2k3k4kTriggerALogic_ReadRF(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold);
	static HRESULT ITkdpo2k3k4kTriggerALogic_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPatternConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPatternConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_get_LessLimit(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_put_LessLimit(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_get_MoreLimit(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_put_MoreLimit(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_get_Function(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerALogic_put_Function(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_Configure(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTiggerPulseSourceEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTiggerPulseSourceEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPulseWidthConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPulseWidthConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPulsePolarityEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerPulsePolarityEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_Width(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_Width(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_LowerLimit(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_LowerLimit(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_get_UpperLimit(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAWidth_put_UpperLimit(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_Configure(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntPolarityEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntPolarityEnum val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelChannelEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelChannelEnum val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_Width(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_Width(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_LowerLevel(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_LowerLevel(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_get_UpperLevel(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerARunt_put_UpperLevel(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_Configure(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_DataSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_DataSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_DataLevel(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_DataLevel(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_ClockSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_ClockSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_ClockEdge(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_ClockEdge(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_ClockLevel(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_ClockLevel(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_HoldTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_HoldTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_get_SetTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerASetupHold_put_SetTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_Configure(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kTriggerATransition_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_get_DeltaTime(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_put_DeltaTime(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_get_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerTransitionConditionEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_put_Condition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerTransitionConditionEnum val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_get_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntPolarityEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerATransition_put_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerRuntPolarityEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_FieldHoldoff(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_FieldHoldoff(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoPolarityEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_Polarity(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoPolarityEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSourceEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSourceEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_Standard(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoStandardEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_Standard(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoStandardEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_TriggerOn(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoFieldsEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_TriggerOn(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoFieldsEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_CustomLinePeriod(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_CustomLinePeriod(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_CustomScan(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoCustomScanEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_CustomScan(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoCustomScanEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_CustomSyncInterval(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_CustomSyncInterval(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_CustomFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoCustomFormatEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_CustomFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoCustomFormatEnum val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_get_HDTvFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoHDTvFormatEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerAVideo_put_HDTvFormat(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerVideoHDTvFormatEnum val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_Configure(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_Read(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_get_Coupling(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerEdgeCouplingEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_put_Coupling(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerEdgeCouplingEnum val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_get_Level(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_put_Level(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_put_LevelEnum(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerLevelEnum val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_get_Slope(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum* val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_put_Slope(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSlopeEnum val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum* val);
	static HRESULT ITkdpo2k3k4kTriggerBEdge_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kTriggerSource2Enum val);
	static HRESULT ITkdpo2k3k4kReferences_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kReferences_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kReferences_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kReference** val);
	static HRESULT ITkdpo2k3k4kDigitalChannels_get_Count(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kDigitalChannels_get_Name(Tkdpo2k3k4k* pT, long Index, BSTR* val);
	static HRESULT ITkdpo2k3k4kDigitalChannels_get_Item(Tkdpo2k3k4k* pT, BSTR Name, ITkdpo2k3k4kDigitalChannel** val);
	static HRESULT ITkdpo2k3k4kZoom_get_Mode(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kZoom_put_Mode(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kZoom_get_Position(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kZoom_put_Position(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kZoom_get_Scale(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kZoom_put_Scale(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kZoom_get_State(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kZoom_put_State(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kZoom_get_Factor(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_WriteWaveformToReference(Tkdpo2k3k4k* pT, Tkdpo2k3k4kReferenceEnum WaveformReference, SAFEARRAY** WaveformArray, double InitialX, double XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_SaveWaveformToFile(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, BSTR FileName, Tkdpo2k3k4kWaveformFileFormatEnum FileFormat);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_ReadWaveformMinMax(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_ReadWaveform(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_IsWaveformElementInvalid(Tkdpo2k3k4k* pT, double Element, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_InitiateAcquisition(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinZoom(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinCursor(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformStartStop(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformMinMax(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformHighResolution(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveformDigitizedLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kChannelEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement, double* YZero, double* YMult, double* YOffset);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_FetchWaveform(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_CopyWaveformToClipboard(Tkdpo2k3k4k* pT, Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, long* PointsCopied);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_GetAvailableDataCompositions(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_GetAvailableFilterVuFrequencies(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataWidth(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataWidth(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataStop(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataStop(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataStart(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataStart(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataSourceEnum* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataSourceEnum val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_WaveformRecordLength(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataComposition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataCompositionEnum* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataComposition(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataCompositionEnum val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_DataResolution(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataResolutionEnum* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_DataResolution(Tkdpo2k3k4k* pT, Tkdpo2k3k4kDataResolutionEnum val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_get_FillterVuFrequency(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kWaveformTransfer_put_FillterVuFrequency(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kUtilityEx_Calibrate(Tkdpo2k3k4k* pT, Tkdpo2k3k4kUtilityExCalibrationStatusEnum* val);
	static HRESULT ITkdpo2k3k4kUtilityEx_SelfTest(Tkdpo2k3k4k* pT, long* TestResult, BSTR* TestMessage);
	static HRESULT ITkdpo2k3k4kUtilityEx_get_FrontPanelLock(Tkdpo2k3k4k* pT, Tkdpo2k3k4kUtilityExFrontPanelLockEnum* val);
	static HRESULT ITkdpo2k3k4kUtilityEx_put_FrontPanelLock(Tkdpo2k3k4k* pT, Tkdpo2k3k4kUtilityExFrontPanelLockEnum val);
	static HRESULT ITkdpo2k3k4kInstrumentIO_GetOPC(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kInstrumentIO_Query(Tkdpo2k3k4k* pT, BSTR Command, BSTR* val);
	static HRESULT ITkdpo2k3k4kInstrumentIO_ReadPartialString(Tkdpo2k3k4k* pT, long Length, BSTR* val);
	static HRESULT ITkdpo2k3k4kInstrumentIO_ReadString(Tkdpo2k3k4k* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kInstrumentIO_WriteString(Tkdpo2k3k4k* pT, BSTR Command);
	static HRESULT ITkdpo2k3k4kInstrumentIO_get_IOSession(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_ConfigureRefLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double ReferenceLevelHysteresis, double Mid);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_ReadRefLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum* ReferenceLevelType, double* ReferenceLevelHysteresis, double* Mid);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_SetDefaultRefLevel(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_ResetStatistics(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerTypeEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerTypeEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_VoltageSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSourceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_VoltageSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSourceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_CurrentSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSourceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_CurrentSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSourceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_DisplayState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_DisplayState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Indicator(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_Indicator(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_GateSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGateSourceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_GateSource(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGateSourceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Gating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGatingEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_Gating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGatingEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_RefLevelHigh(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_RefLevelHigh(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_RefLevelLow(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_RefLevelLow(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_RefLevelMid(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_RefLevelMid(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_StatisticsMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerStatisticsModeEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_StatisticsMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerStatisticsModeEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_StatisticsSamples(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_put_StatisticsSamples(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Quality(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisQuality** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_SwitchingLoss(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisSwitchingLoss** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Harmonics(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisHarmonics** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Ripple(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisRipple** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_Modulation(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisModulation** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysis_get_SafeOperatingArea(Tkdpo2k3k4k* pT, ITkdpo2k3k4kPowerAnalysisSafeOperatingArea** val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_FrequencyReference(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_put_FrequencyReference(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_put_AllMeasDisplayState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_MeasDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_put_MeasDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_ApparentPower(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_Frequency(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_ICrestFactor(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_PhaseAngle(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_PowerFactor(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_ReactivePower(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_TruePower(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_VRMS(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_IRMS(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisQuality_get_VCrestFactor(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ConfigureGating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGatingPolarityEnum Polarity, double TurnOn);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadGating(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerGatingPolarityEnum* Polarity, double* TurnOn);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOffLosses(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOnLosses(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTotalLosses(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadConductionLosses(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowVoltage(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowVoltage(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowCurrent(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowCurrent(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_ConductionCalculation(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_ConductionCalculation(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RDSOnValue(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RDSOnValue(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_VCESatValue(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_VCESatValue(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_MeasDisplayType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_MeasDisplayType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_NumberOfCycles(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_SetParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference, double FixedReference, long NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_GetParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum* FrequencyReference, double* FixedReference, long* NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum* HarmonicsSource);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureIEC(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class, VARIANT_BOOL Filter, double FundamentalCurrent, VARIANT_BOOL Grouping, double InputPower, double LineFrequency, double ObservationPeriod, double PowerFactor);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_ReadIEC(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsIECClassEnum* Class, VARIANT_BOOL* Filter, double* FundamentalCurrent, VARIANT_BOOL* Grouping, double* InputPower, double* LineFrequency, double* ObservationPeriod, double* PowerFactor);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureMIL(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating, double UserCurrent, double LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_ReadMIL(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum* FundamentalCurrentCalculating, double* UserCurrent, double* LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum* PowerLevel);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_SaveResultsToFile(Tkdpo2k3k4k* pT, BSTR Filename);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_Standard(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsStandardEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_put_Standard(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsStandardEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplaySet(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplaySet(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplayType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplayType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_OverallResults(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_RMSResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDFResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDRResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicFrequencyResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPhaseResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicAbsoluteMagnitudeResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPercentageMagnitudeResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HamronicIECMaxResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicLimitResult(Tkdpo2k3k4k* pT, long Harmonic, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECClassALimitResult(Tkdpo2k3k4k* pT, long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECNormalLimitResult(Tkdpo2k3k4k* pT, long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECHigherLimitResult(Tkdpo2k3k4k* pT, long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicMILNormalLimitResult(Tkdpo2k3k4k* pT, long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECFundamentalCurrentResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic3Result(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic5Result(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHCResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHLResult(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECInputPower(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPowerFactor(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_DoVerticalAutoSet(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_SetOffsetToZero(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerRippleSourceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerRippleSourceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_Value(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_Max(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_Mean(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_Min(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisRipple_get_StandardDeviation(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisModulation_get_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerModulationSourceEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisModulation_put_Source(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerModulationSourceEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisModulation_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerModulationTypeEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisModulation_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerModulationTypeEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureAxes(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double YaxesMax, double YaxesMin, double XaxesMax, double XaxesMin);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadAxes(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double* YaxesMax, double* YaxesMin, double* XaxesMax, double* XaxesMin);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureMaskLimits(Tkdpo2k3k4k* pT, double MaxVoltage, double MaxCurrent, double MaxPower);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadMaskLimits(Tkdpo2k3k4k* pT, double* MaxVoltage, double* MaxCurrent, double* MaxPower);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_SetMaskPoints(Tkdpo2k3k4k* pT, SAFEARRAY** Volts, SAFEARRAY** Amps);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_GetMaskPoints(Tkdpo2k3k4k* pT, SAFEARRAY** Volts, SAFEARRAY** Amps);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_NumberOfPoints(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_PlotType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_PlotType(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ActionOnViolation(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_ActionOnViolation(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_MaskState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_MaskState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultFailureSamples(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultWaveformsAcquired(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultTestState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum* val);
	static HRESULT ITkdpo2k3k4kFrequency_get_SpectrumTraceDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kFrequency_put_SpectrumTraceDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kFrequency_get_RFVsTimeTraceDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kFrequency_put_RFVsTimeTraceDisplayState(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kFrequency_get_SquelchState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kFrequency_put_SquelchState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kFrequency_get_SquelchThreshold(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequency_put_SquelchThreshold(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequency_get_RF(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyRF** val);
	static HRESULT ITkdpo2k3k4kFrequency_get_NumberOfAverages(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kFrequency_put_NumberOfAverages(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kFrequency_get_AverageCount(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kFrequency_get_Marker(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyMarker** val);
	static HRESULT ITkdpo2k3k4kFrequency_get_Trace(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyTrace** val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_ConfigureVerticalParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double Scale, double Position);
	static HRESULT ITkdpo2k3k4kFrequencyRF_ReadVerticalParameters(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double* Scale, double* Position);
	static HRESULT ITkdpo2k3k4kFrequencyRF_ConfigureManualDetectionMethod(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method);
	static HRESULT ITkdpo2k3k4kFrequencyRF_ReadManualDetectionMethod(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum* Method);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_SpectogramState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_put_SpectogramState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_SpectogramNumberOfSlices(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_SpectogramSelectSlice(Tkdpo2k3k4k* pT, long* val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_put_SpectogramSelectSlice(Tkdpo2k3k4k* pT, long val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_DetectionMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFDetectionModeEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_put_DetectionMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFDetectionModeEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_SpectrumMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumModeEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_put_SpectrumMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumModeEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_FrequencyAndSpan(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyRFFrequencyAndSpan** val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_Amplitude(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyRFAmplitude** val);
	static HRESULT ITkdpo2k3k4kFrequencyRF_get_Bandwidth(Tkdpo2k3k4k* pT, ITkdpo2k3k4kFrequencyRFBandwidth** val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_CenterFrequency(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_CenterFrequency(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Span(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Span(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Start(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Start(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Stop(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Stop(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_SetAutoRefLevel(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_get_ReferenceLevel(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_put_ReferenceLevel(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalPosition(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalPosition(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalScale(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalScale(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalUnits(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalUnits(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_get_RBWMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRBWModeEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_put_RBWMode(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRBWModeEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_get_RBW(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_put_RBW(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_get_SpanRBWRatio(Tkdpo2k3k4k* pT, double* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_put_SpanRBWRatio(Tkdpo2k3k4k* pT, double val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_get_Window(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFWindowEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyRFBandwidth_put_Window(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFWindowEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ConfigureChannelPower(Tkdpo2k3k4k* pT, double Bandwidth);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ReadChannelPower(Tkdpo2k3k4k* pT, double* Bandwidth, double* Power);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ConfigureACPR(Tkdpo2k3k4k* pT, long AdjacentChannels, double ChannelBandwidth, double ChannelSpacing);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ReadACPR(Tkdpo2k3k4k* pT, long* AdjacentChannels, double* ChannelBandwidth, double* ChannelSpacing, double* Power, double* LowerArea1Ratio, double* LowerArea2Ratio, double* LowerArea3Ratio, double* UpperArea1Ratio, double* UpperArea2Ratio, double* UpperArea3Ratio);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ConfigureOBW(Tkdpo2k3k4k* pT, double AnalysisBandwidth, double PercentageDown);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_ReadOBW(Tkdpo2k3k4k* pT, double* AnalysisBandwidth, double* PercentageDown, double* LowerFrequency, double* UpperFrequency, double* Power);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementsFrequency_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_MoveRefToCentre(Tkdpo2k3k4k* pT);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_ReadReference(Tkdpo2k3k4k* pT, double* Frequency, double* Amplitude);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_ReadManual(Tkdpo2k3k4k* pT, long Marker, double* HorizontalValue, double* HorizontalDelta, double* VerticalValue, double* VerticalDelta);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_ConfigureManual(Tkdpo2k3k4k* pT, long Marker, double HorizontalValue);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_ConfigurePeak(Tkdpo2k3k4k* pT, long MaximumMarkers, double Threshold, double Excursion);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_ReadPeak(Tkdpo2k3k4k* pT, VARIANT_BOOL* State, long* MaximumMarkers, double* Threshold, double* Excursion);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_get_ManualState(Tkdpo2k3k4k* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_put_ManualState(Tkdpo2k3k4k* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_get_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFMarkerTypeEnum* val);
	static HRESULT ITkdpo2k3k4kFrequencyMarker_put_Type(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencyRFMarkerTypeEnum val);
	static HRESULT ITkdpo2k3k4kFrequencyTrace_FetchY(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kFrequencyTrace_ReadY(Tkdpo2k3k4k* pT, Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement);
	static HRESULT ITkdpo2k3k4kChannel_Configure(Tkdpo2k3k4kChannel* pT, double Position, double Scale, double Offset, double Deskew, Tkdpo2k3k4kChannelCouplingEnum Coupling, Tkdpo2k3k4kChannelTerminationEnum Termination, Tkdpo2k3k4kChannelBandwidthEnum Bandwidth, VARIANT_BOOL DisplayState);
	static HRESULT ITkdpo2k3k4kChannel_Read(Tkdpo2k3k4kChannel* pT, double* Position, double* Scale, double* Offset, double* Deskew, Tkdpo2k3k4kChannelCouplingEnum* Coupling, Tkdpo2k3k4kChannelTerminationEnum* Termination, double* Bandwidth, VARIANT_BOOL* DisplayState);
	static HRESULT ITkdpo2k3k4kChannel_ReadProbeDetails(Tkdpo2k3k4kChannel* pT, BSTR* Type, double* Resistance, double* Gain, BSTR* SerialNumber, BSTR* Unit, double* ExternalAttenuation, double* ExternalAttenuationDB, Tkdpo2k3k4kChannelCalibrationEnum* Calibration);
	static HRESULT ITkdpo2k3k4kChannel_SetAllDeskewsToRecommendedValues(Tkdpo2k3k4kChannel* pT);
	static HRESULT ITkdpo2k3k4kChannel_InvertWaveform(Tkdpo2k3k4kChannel* pT);
	static HRESULT ITkdpo2k3k4kChannel_SetTekVPIProbeAutoZero(Tkdpo2k3k4kChannel* pT);
	static HRESULT ITkdpo2k3k4kChannel_SetTekVPIProbeCommand(Tkdpo2k3k4kChannel* pT, BSTR Command, BSTR State);
	static HRESULT ITkdpo2k3k4kChannel_SetTekVPIProbeDegauss(Tkdpo2k3k4kChannel* pT);
	static HRESULT ITkdpo2k3k4kChannel_get_Bandwidth(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Bandwidth(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_put_BandwidthEnum(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelBandwidthEnum val);
	static HRESULT ITkdpo2k3k4kChannel_get_Coupling(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelCouplingEnum* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Coupling(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelCouplingEnum val);
	static HRESULT ITkdpo2k3k4kChannel_get_Deskew(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Deskew(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_DisplayState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kChannel_put_DisplayState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kChannel_get_LabelName(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_put_LabelName(Tkdpo2k3k4kChannel* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kChannel_get_Offset(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Offset(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_Position(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Position(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeGain(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeResistance(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeSerialNumber(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeType(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeUnits(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_get_VerticalScale(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_VerticalScale(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_put_TerminationEnum(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelTerminationEnum val);
	static HRESULT ITkdpo2k3k4kChannel_get_ProbeSignal(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelProbeSignalEnum* val);
	static HRESULT ITkdpo2k3k4kChannel_put_ProbeSignal(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kChannelProbeSignalEnum val);
	static HRESULT ITkdpo2k3k4kChannel_get_AmpsViaVoltsState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kChannel_put_AmpsViaVoltsState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kChannel_get_AmpsViaVoltsFactor(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_AmpsViaVoltsFactor(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_Impedance(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Impedance(Tkdpo2k3k4kChannel* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kChannel_get_VerticalSensitivity(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_VerticalSensitivity(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_Yunits(Tkdpo2k3k4kChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kChannel_put_Yunits(Tkdpo2k3k4kChannel* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kChannel_get_TekVPIProbeDegaussState(Tkdpo2k3k4kChannel* pT, Tkdpo2k3k4kProbeDegaussStateEnum* val);
	static HRESULT ITkdpo2k3k4kChannel_get_TekVPIProbeRange(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_put_TekVPIProbeRange(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kChannel_get_Termination(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kChannel_get_InvertState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kChannel_put_InvertState(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL val);
	static HRESULT IIviScopeMeasurement_FetchWaveform(Tkdpo2k3k4kChannel* pT, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT IIviScopeMeasurement_FetchWaveformMeasurement(Tkdpo2k3k4kChannel* pT, IviScopeMeasurementEnum MeasFunction, double* Measurement);
	static HRESULT IIviScopeMeasurement_FetchWaveformMinMax(Tkdpo2k3k4kChannel* pT, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	static HRESULT IIviScopeMeasurement_ReadWaveform(Tkdpo2k3k4kChannel* pT, long MaxTimeMilliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	static HRESULT IIviScopeMeasurement_ReadWaveformMeasurement(Tkdpo2k3k4kChannel* pT, IviScopeMeasurementEnum MeasFunction, long MaxTimeMilliseconds, double* Measurement);
	static HRESULT IIviScopeMeasurement_ReadWaveformMinMax(Tkdpo2k3k4kChannel* pT, long MaxTimeMilliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	static HRESULT IIviScopeChannel_Configure(Tkdpo2k3k4kChannel* pT, double Range, double Offset, IviScopeVerticalCouplingEnum Coupling, double ProbeAttenuation, VARIANT_BOOL Enabled);
	static HRESULT IIviScopeChannel_ConfigureCharacteristics(Tkdpo2k3k4kChannel* pT, double InputImpedance, double InputFrequencyMax);
	static HRESULT IIviScopeChannel_get_ProbeSense(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_get_Coupling(Tkdpo2k3k4kChannel* pT, IviScopeVerticalCouplingEnum* val);
	static HRESULT IIviScopeChannel_put_Coupling(Tkdpo2k3k4kChannel* pT, IviScopeVerticalCouplingEnum val);
	static HRESULT IIviScopeChannel_get_Enabled(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL* val);
	static HRESULT IIviScopeChannel_put_Enabled(Tkdpo2k3k4kChannel* pT, VARIANT_BOOL val);
	static HRESULT IIviScopeChannel_get_InputFrequencyMax(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_put_InputFrequencyMax(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT IIviScopeChannel_get_InputImpedance(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_put_InputImpedance(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT IIviScopeChannel_get_Offset(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_put_Offset(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT IIviScopeChannel_get_ProbeAttenuation(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_put_ProbeAttenuation(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT IIviScopeChannel_get_Range(Tkdpo2k3k4kChannel* pT, double* val);
	static HRESULT IIviScopeChannel_put_Range(Tkdpo2k3k4kChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kBus_ConfigureI2C(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress);
	static HRESULT ITkdpo2k3k4kBus_ReadI2C(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum* RWInAddress);
	static HRESULT ITkdpo2k3k4kBus_ConfigureAudioInputs(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kAudioBusTypeEnum Type, Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusSourceEnum WordSelectSource, Tkdpo2k3k4kBusSourceEnum FrameSyncSource);
	static HRESULT ITkdpo2k3k4kBus_ReadAudioInputs(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kAudioBusTypeEnum* Type, Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusSourceEnum* WordSelectSource, Tkdpo2k3k4kBusSourceEnum* FrameSyncSource);
	static HRESULT ITkdpo2k3k4kBus_ConfigureAudio(Tkdpo2k3k4kBus* pT, long BitDelay, Tkdpo2k3k4kBusBitOrderEnum BitOrder, long BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity, long BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity, long ChannelsPerFrame);
	static HRESULT ITkdpo2k3k4kBus_ReadAudio(Tkdpo2k3k4kBus* pT, long* BitDelay, Tkdpo2k3k4kBusBitOrderEnum* BitOrder, long* BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum* ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* DataPolarity, long* BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum* DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum* FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* WordSelectPolarity, long* ChannelsPerFrame);
	static HRESULT ITkdpo2k3k4kBus_ConfigureCAN(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum Source, long SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum SignalType, long BitRate);
	static HRESULT ITkdpo2k3k4kBus_ReadCAN(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* Source, long* SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum* SignalType, long* BitRate);
	static HRESULT ITkdpo2k3k4kBus_ConfigureFlexray(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kFlexrayChannelEnum IDFormat, Tkdpo2k3k4kFlexraySignalEnum Standard, long BitRate);
	static HRESULT ITkdpo2k3k4kBus_ReadFlexray(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kFlexrayChannelEnum* IDFormat, Tkdpo2k3k4kFlexraySignalEnum* Standard, long* BitRate);
	static HRESULT ITkdpo2k3k4kBus_ConfigureLIN(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kLINIDFormatEnum IDFormat, long BitRate, Tkdpo2k3k4kLINPolarityEnum Polarity, long SamplePoint, Tkdpo2k3k4kLINStandardEnum Standard);
	static HRESULT ITkdpo2k3k4kBus_ReadLIN(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kLINIDFormatEnum* IDFormat, long* BitRate, Tkdpo2k3k4kLINPolarityEnum* Polarity, long* SamplePoint, Tkdpo2k3k4kLINStandardEnum* Standard);
	static HRESULT ITkdpo2k3k4kBus_ConfigureSPI(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity, long DataSize, Tkdpo2k3k4kBusSourceEnum DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder, Tkdpo2k3k4kBusSourceEnum SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity);
	static HRESULT ITkdpo2k3k4kBus_ReadSPI(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum* ClockPolarity, long* DataSize, Tkdpo2k3k4kBusSourceEnum* DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum* BitOrder, Tkdpo2k3k4kBusSourceEnum* SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum* SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum* DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMOSIPolarity);
	static HRESULT ITkdpo2k3k4kBus_ConfigureRS232(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum RXSource, Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity, double Bitrate, long DataBits, Tkdpo2k3k4kBusRS232ParityEnum InputParity, Tkdpo2k3k4kBusSourceEnum TXSource);
	static HRESULT ITkdpo2k3k4kBus_ReadRS232(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* RXSource, Tkdpo2k3k4kBusRS232PolarityEnum* InputPolarity, double* Bitrate, long* DataBits, Tkdpo2k3k4kBusRS232ParityEnum* InputParity, Tkdpo2k3k4kBusSourceEnum* TXSource);
	static HRESULT ITkdpo2k3k4kBus_ReadUSB(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum* Probe, Tkdpo2k3k4kBusUSBBitrateEnum* Bitrate, Tkdpo2k3k4kBusSourceEnum* DPLUSSource, Tkdpo2k3k4kBusSourceEnum* DMINUSSource);
	static HRESULT ITkdpo2k3k4kBus_ConfigureUSB(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum Probe, Tkdpo2k3k4kBusUSBBitrateEnum Bitrate, Tkdpo2k3k4kBusSourceEnum DPLUSSource, Tkdpo2k3k4kBusSourceEnum DMINUSSource);
	static HRESULT ITkdpo2k3k4kBus_GetLowThresholdChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	static HRESULT ITkdpo2k3k4kBus_GetThresholdChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	static HRESULT ITkdpo2k3k4kBus_SetLowThreshholdChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	static HRESULT ITkdpo2k3k4kBus_SetThresholdChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	static HRESULT ITkdpo2k3k4kBus_SetThresholdDigitalChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kDigitalChannelEnum InputSource, double Threshold);
	static HRESULT ITkdpo2k3k4kBus_GetThresholdDigitalChannel(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kDigitalChannelEnum InputSource, double* Threshold);
	static HRESULT ITkdpo2k3k4kBus_SetUpperThreshhold(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	static HRESULT ITkdpo2k3k4kBus_GetUpperThreshhold(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	static HRESULT ITkdpo2k3k4kBus_SaveEventTable(Tkdpo2k3k4kBus* pT, BSTR Filename);
	static HRESULT ITkdpo2k3k4kBus_put_CANBitRateEnum(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kCANBitRateEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_Position(Tkdpo2k3k4kBus* pT, double* val);
	static HRESULT ITkdpo2k3k4kBus_put_Position(Tkdpo2k3k4kBus* pT, double val);
	static HRESULT ITkdpo2k3k4kBus_get_Label(Tkdpo2k3k4kBus* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kBus_put_Label(Tkdpo2k3k4kBus* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kBus_get_Type(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusTypeEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_Type(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusTypeEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_State(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusStateEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_State(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusStateEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_DisplayType(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusDisplayTypeEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_DisplayType(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusDisplayTypeEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_IsClockedParallelBus(Tkdpo2k3k4kBus* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kBus_put_IsClockedParallelBus(Tkdpo2k3k4kBus* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kBus_get_DisplayFormat(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusDisplayFormatEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_DisplayFormat(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusDisplayFormatEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_ParallelBusClockSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_ParallelBusClockSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_ParallelBusClockEdge(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusParallelBusClockEdgeEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_ParallelBusClockEdge(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusParallelBusClockEdgeEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_RS232Delimiter(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusRS232DelimiterEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_RS232Delimiter(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusRS232DelimiterEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_RS232DisplayMode(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusRS232DisplayModeEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_RS232DisplayMode(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusRS232DisplayModeEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_RS232TXSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_RS232TXSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_RS232RXSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_RS232RXSource(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSourceEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_ParallelBitSource(Tkdpo2k3k4kBus* pT, long Bit, Tkdpo2k3k4kBusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_ParallelBitSource(Tkdpo2k3k4kBus* pT, long Bit, Tkdpo2k3k4kBusSourceEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_ParallelWidth(Tkdpo2k3k4kBus* pT, long* val);
	static HRESULT ITkdpo2k3k4kBus_put_ParallelWidth(Tkdpo2k3k4kBus* pT, long val);
	static HRESULT ITkdpo2k3k4kBus_get_SPIFraming(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSPIFramingEnum* val);
	static HRESULT ITkdpo2k3k4kBus_put_SPIFraming(Tkdpo2k3k4kBus* pT, Tkdpo2k3k4kBusSPIFramingEnum val);
	static HRESULT ITkdpo2k3k4kBus_get_SPIIdleTime(Tkdpo2k3k4kBus* pT, double* val);
	static HRESULT ITkdpo2k3k4kBus_put_SPIIdleTime(Tkdpo2k3k4kBus* pT, double val);
	static HRESULT ITkdpo2k3k4kMath_Configure(Tkdpo2k3k4kMath* pT, BSTR Expression, double VerticalPosition, double VerticalScale, double HorizontalPosition, double HorizontalScale, VARIANT_BOOL DisplayState, Tkdpo2k3k4kMathTypeEnum Type);
	static HRESULT ITkdpo2k3k4kMath_Read(Tkdpo2k3k4kMath* pT, BSTR* Expression, double* VerticalPosition, double* VerticalScale, BSTR* VerticalUnits, double* HorizontalPosition, double* HorizontalScale, BSTR* HorizontalUnits, VARIANT_BOOL* DisplayState, Tkdpo2k3k4kMathTypeEnum* Type);
	static HRESULT ITkdpo2k3k4kMath_get_DisplayState(Tkdpo2k3k4kMath* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kMath_put_DisplayState(Tkdpo2k3k4kMath* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kMath_get_Expression(Tkdpo2k3k4kMath* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMath_put_Expression(Tkdpo2k3k4kMath* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kMath_get_Label(Tkdpo2k3k4kMath* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMath_put_Label(Tkdpo2k3k4kMath* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kMath_get_MathVariable(Tkdpo2k3k4kMath* pT, long Variable, double* val);
	static HRESULT ITkdpo2k3k4kMath_put_MathVariable(Tkdpo2k3k4kMath* pT, long Variable, double val);
	static HRESULT ITkdpo2k3k4kMath_get_HorizontalPosition(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMath_put_HorizontalPosition(Tkdpo2k3k4kMath* pT, double val);
	static HRESULT ITkdpo2k3k4kMath_get_HorizontalScale(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMath_put_HorizontalScale(Tkdpo2k3k4kMath* pT, double val);
	static HRESULT ITkdpo2k3k4kMath_get_HorizontalUnits(Tkdpo2k3k4kMath* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMath_get_VerticalPosition(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMath_put_VerticalPosition(Tkdpo2k3k4kMath* pT, double val);
	static HRESULT ITkdpo2k3k4kMath_get_VerticalScale(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMath_put_VerticalScale(Tkdpo2k3k4kMath* pT, double val);
	static HRESULT ITkdpo2k3k4kMath_get_VerticalUnits(Tkdpo2k3k4kMath* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMath_get_Type(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kMathTypeEnum* val);
	static HRESULT ITkdpo2k3k4kMath_put_Type(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kMathTypeEnum val);
	static HRESULT ITkdpo2k3k4kMath_get_Spectral(Tkdpo2k3k4kMath* pT, ITkdpo2k3k4kMathSpectral** val);
	static HRESULT ITkdpo2k3k4kMathSpectral_GetEndPointGatingIndicator(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_GetStartPointGatingIndicator(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_GetNyquistFrequency(Tkdpo2k3k4kMath* pT, double* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_get_DisplayGatingIndicators(Tkdpo2k3k4kMath* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_put_DisplayGatingIndicators(Tkdpo2k3k4kMath* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kMathSpectral_get_Window(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kSpectralWindowEnum* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_put_Window(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kSpectralWindowEnum val);
	static HRESULT ITkdpo2k3k4kMathSpectral_get_MagnitudeUnits(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kSpectralMagUnitEnum* val);
	static HRESULT ITkdpo2k3k4kMathSpectral_put_MagnitudeUnits(Tkdpo2k3k4kMath* pT, Tkdpo2k3k4kSpectralMagUnitEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_Configure(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_ConfigureDelay(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_ConfigurePhase(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_Read(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_ReadValue(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_ReadDelay(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Count(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_DelayDirection(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementDelayDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_DelayDirection(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementDelayDirectionEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_DelayEdge1(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementEdgeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_DelayEdge1(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementEdgeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_DelayEdge2(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementEdgeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_DelayEdge2(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementEdgeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Maximum(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Mean(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Minimum(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Source1(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_Source1(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Source2(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_Source2(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kSourceEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_StandardDeviation(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_State(Tkdpo2k3k4kMeasurementSlot* pT, VARIANT_BOOL* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_State(Tkdpo2k3k4kMeasurementSlot* pT, VARIANT_BOOL val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Type(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementTypeEnum* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_put_Type(Tkdpo2k3k4kMeasurementSlot* pT, Tkdpo2k3k4kMeasurementTypeEnum val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Units(Tkdpo2k3k4kMeasurementSlot* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kMeasurementSlot_get_Value(Tkdpo2k3k4kMeasurementSlot* pT, double* val);
	static HRESULT ITkdpo2k3k4kSearch_Copy(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchCopyEnum Type);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureEdge(Tkdpo2k3k4kSearch* pT, double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum Slope);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureRunt(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerRuntConditionEnum When, Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity, double Width);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureSetupHold(Tkdpo2k3k4kSearch* pT, double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum ClockEdge, Tkdpo2k3k4kSearchSource3Enum ClockSource, double HoldTime, double SetTime, double ClockLevel);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureTransition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum Source, double DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum When, Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity);
	static HRESULT ITkdpo2k3k4kSearch_ConfigurePulseWidth(Tkdpo2k3k4kSearch* pT, double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity, double HighLimit, double LowLimit);
	static HRESULT ITkdpo2k3k4kSearch_ReadEdge(Tkdpo2k3k4kSearch* pT, double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* Slope);
	static HRESULT ITkdpo2k3k4kSearch_ReadRunt(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum* Source, Tkdpo2k3k4kTriggerRuntConditionEnum* When, Tkdpo2k3k4kTriggerRuntPolarityEnum* Polarity, double* Width);
	static HRESULT ITkdpo2k3k4kSearch_ReadSetupHold(Tkdpo2k3k4kSearch* pT, double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* ClockEdge, Tkdpo2k3k4kSearchSource3Enum* Clocksource, double* HoldTime, double* SetTime, double* ClockLevel);
	static HRESULT ITkdpo2k3k4kSearch_ReadPulseWidth(Tkdpo2k3k4kSearch* pT, double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum* Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum* Polarity);
	static HRESULT ITkdpo2k3k4kSearch_ReadTransition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum* Source, double* DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum* When, Tkdpo2k3k4kTriggerPulsePolarityEnum* Polarity);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureLogicSearchSource(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput);
	static HRESULT ITkdpo2k3k4kSearch_ReadLogicSearchSource(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum* PatternInput);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureLogicPattern(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum PatternType);
	static HRESULT ITkdpo2k3k4kSearch_ReadLogicPattern(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum* PatternType);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureLogicClock(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
	static HRESULT ITkdpo2k3k4kSearch_ReadLogicClock(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType);
	static HRESULT ITkdpo2k3k4kSearch_ReadSetupHoldSearchSource(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchSource3Enum* Clocksource, Tkdpo2k3k4kSearchSource3Enum* DataSource);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureAIndependentParameters(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	static HRESULT ITkdpo2k3k4kSearch_ReadAIndependentParameters(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	static HRESULT ITkdpo2k3k4kSearch_ConfigureARFIndependentParameters(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	static HRESULT ITkdpo2k3k4kSearch_ReadARFIndependentParameters(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	static HRESULT ITkdpo2k3k4kSearch_get_SearchType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearch_put_SearchType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearch_get_State(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchStateEnum* val);
	static HRESULT ITkdpo2k3k4kSearch_put_State(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kSearchStateEnum val);
	static HRESULT ITkdpo2k3k4kSearch_get_Total(Tkdpo2k3k4kSearch* pT, long* val);
	static HRESULT ITkdpo2k3k4kSearch_get_Bus(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBus** val);
	static HRESULT ITkdpo2k3k4kSearchBus_Configure(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kBusTypeEnum BusType);
	static HRESULT ITkdpo2k3k4kSearchBus_get_BusSource(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBus_put_BusSource(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_ParallelData(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBus_put_ParallelData(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_Audio(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusAudio** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_USB(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusUSB** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_SPI(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusSPI** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_RS232(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusRS232** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_LIN(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusLIN** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_I2C(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusI2C** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_Flexray(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusFlexray** val);
	static HRESULT ITkdpo2k3k4kSearchBus_get_CAN(Tkdpo2k3k4kSearch* pT, ITkdpo2k3k4kSearchBusCAN** val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_DataOffset(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_DataOffset(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_get_DataWord(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusAudio_put_DataWord(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_DataOffset(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_DataOffset(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_Qualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_Qualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_DataType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_DataType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_AddressHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_AddressHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_EndPointValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_EndPointValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_HandshakeType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_HandshakeType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_SOFFrameNumber(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_SOFFrameNumber(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_SpecialType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_SpecialType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_get_TokenType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusUSB_put_TokenType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_get_DataINValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_put_DataINValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_get_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_put_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_get_DataOUTValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusSPI_put_DataOUTValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_get_RXDataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_put_RXDataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_get_RXDataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_put_RXDataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_get_TXDataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_put_TXDataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_get_TXDataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusRS232_put_TXDataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_DataHighValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_get_IdentifierValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusLIN_put_IdentifierValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_DataDirection(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_DataDirection(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_get_AddressMode(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusI2C_put_AddressMode(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ConfigureCycleCount(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ReadCycleCount(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ConfigureData(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ReadData(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ConfigureFrameID(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ReadFrameID(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ConfigureHeader(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_ReadHeader(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_get_EOFType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_put_EOFType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_get_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_put_ErrorType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_get_FrameType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusFlexray_put_FrameType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_Condition(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_DataQualifier(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_DataValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_DataDirection(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_DataDirection(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_DataSize(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_FrameType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_FrameType(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_AddressMode(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_AddressMode(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_get_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	static HRESULT ITkdpo2k3k4kSearchBusCAN_put_AddressValue(Tkdpo2k3k4kSearch* pT, Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	static HRESULT ITkdpo2k3k4kReference_Configure(Tkdpo2k3k4kReference* pT, double Position, double VerticalScale, double HorizontalScale, VARIANT_BOOL DisplayState, double HorizontalDelayTime);
	static HRESULT ITkdpo2k3k4kReference_Read(Tkdpo2k3k4kReference* pT, double* Position, double* VerticalScale, double* HorizontalScale, VARIANT_BOOL* DisplayState, double* HorizontalDelayTime);
	static HRESULT ITkdpo2k3k4kReference_GetDateTime(Tkdpo2k3k4kReference* pT, BSTR* Date, BSTR* Time);
	static HRESULT ITkdpo2k3k4kReference_get_HorizontalScale(Tkdpo2k3k4kReference* pT, double* val);
	static HRESULT ITkdpo2k3k4kReference_put_HorizontalScale(Tkdpo2k3k4kReference* pT, double val);
	static HRESULT ITkdpo2k3k4kReference_get_Position(Tkdpo2k3k4kReference* pT, double* val);
	static HRESULT ITkdpo2k3k4kReference_put_Position(Tkdpo2k3k4kReference* pT, double val);
	static HRESULT ITkdpo2k3k4kReference_get_VerticalScale(Tkdpo2k3k4kReference* pT, double* val);
	static HRESULT ITkdpo2k3k4kReference_put_VerticalScale(Tkdpo2k3k4kReference* pT, double val);
	static HRESULT ITkdpo2k3k4kReference_get_HorizontalDelayTime(Tkdpo2k3k4kReference* pT, double* val);
	static HRESULT ITkdpo2k3k4kReference_put_HorizontalDelayTime(Tkdpo2k3k4kReference* pT, double val);
	static HRESULT ITkdpo2k3k4kReference_get_Label(Tkdpo2k3k4kReference* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kReference_put_Label(Tkdpo2k3k4kReference* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_get_Label(Tkdpo2k3k4kDigitalChannel* pT, BSTR* val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_put_Label(Tkdpo2k3k4kDigitalChannel* pT, BSTR val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_get_Position(Tkdpo2k3k4kDigitalChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_put_Position(Tkdpo2k3k4kDigitalChannel* pT, double val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_get_State(Tkdpo2k3k4kDigitalChannel* pT, Tkdpo2k3k4kDigitalChannelStateEnum* val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_put_State(Tkdpo2k3k4kDigitalChannel* pT, Tkdpo2k3k4kDigitalChannelStateEnum val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_get_Threshold(Tkdpo2k3k4kDigitalChannel* pT, double* val);
	static HRESULT ITkdpo2k3k4kDigitalChannel_put_Threshold(Tkdpo2k3k4kDigitalChannel* pT, double val);
};

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4k
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4k : public ITkdpo2k3k4k
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Channels(ITkdpo2k3k4kChannels** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Channels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Acquisition(ITkdpo2k3k4kAcquisition** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Acquisition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(ITkdpo2k3k4kTrigger** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Trigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Buses(ITkdpo2k3k4kBuses** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Buses(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Cursor(ITkdpo2k3k4kCursor** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Cursor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Display(ITkdpo2k3k4kDisplay** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Display(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HardCopy(ITkdpo2k3k4kHardCopy** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_HardCopy(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Histogram(ITkdpo2k3k4kHistogram** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Histogram(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Horizontal(ITkdpo2k3k4kHorizontal** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Horizontal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mark(ITkdpo2k3k4kMark** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Mark(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Maths(ITkdpo2k3k4kMaths** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Maths(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MeasurementImmediate(ITkdpo2k3k4kMeasurementImmediate** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_MeasurementImmediate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Measurements(ITkdpo2k3k4kMeasurements** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Measurements(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SaveRecall(ITkdpo2k3k4kSaveRecall** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_SaveRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Searches(ITkdpo2k3k4kSearches** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Searches(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_References(ITkdpo2k3k4kReferences** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_References(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalChannels(ITkdpo2k3k4kDigitalChannels** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_DigitalChannels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Zoom(ITkdpo2k3k4kZoom** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Zoom(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_WaveformTransfer(ITkdpo2k3k4kWaveformTransfer** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_WaveformTransfer(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_UtilityEx(ITkdpo2k3k4kUtilityEx** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_UtilityEx(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentIO(ITkdpo2k3k4kInstrumentIO** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_InstrumentIO(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PowerAnalysis(ITkdpo2k3k4kPowerAnalysis** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_PowerAnalysis(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(ITkdpo2k3k4kFrequency** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4k_get_Frequency(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4k<Tkdpo2k3k4k> _ITkdpo2k3k4k;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriver
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriver : public IIviDriver
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriver<Tkdpo2k3k4k> _IIviDriver;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverOperation
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverOperation : public IIviDriverOperation
{
	STDMETHODIMP InvalidateAllAttributes()
	{
		return ForwardingShimImpl::IIviDriverOperation_InvalidateAllAttributes(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ClearInterchangeWarnings()
	{
		return ForwardingShimImpl::IIviDriverOperation_ClearInterchangeWarnings(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextInterchangeWarning(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextInterchangeWarning(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP ResetInterchangeCheck()
	{
		return ForwardingShimImpl::IIviDriverOperation_ResetInterchangeCheck(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextCoercionRecord(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextCoercionRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LogicalName(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_LogicalName(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IoResourceDescriptor(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_IoResourceDescriptor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Cache(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Cache(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InterchangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InterchangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_QueryInstrumentStatus(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_QueryInstrumentStatus(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordCoercions(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RecordCoercions(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Simulate(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Simulate(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DriverSetup(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_DriverSetup(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverOperation<Tkdpo2k3k4k> _IIviDriverOperation;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverIdentity : public IIviDriverIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentManufacturer(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentManufacturer(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentModel(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentModel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentFirmwareRevision(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentFirmwareRevision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identifier(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_Identifier(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SupportedInstrumentModels(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SupportedInstrumentModels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMajorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMajorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMinorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMinorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GroupCapabilities(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_GroupCapabilities(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverIdentity<Tkdpo2k3k4k> _IIviDriverIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviComponentIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviComponentIdentity : public IIviComponentIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviComponentIdentity<Tkdpo2k3k4k> _IIviComponentIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverUtility
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverUtility : public IIviDriverUtility
{
	STDMETHODIMP Reset()
	{
		return ForwardingShimImpl::IIviDriverUtility_Reset(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ResetWithDefaults()
	{
		return ForwardingShimImpl::IIviDriverUtility_ResetWithDefaults(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Disable()
	{
		return ForwardingShimImpl::IIviDriverUtility_Disable(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SelfTest(long* TestResult, BSTR* TestMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_SelfTest(static_cast<Deriving*>(this), TestResult, TestMessage);
	}
	STDMETHODIMP ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_ErrorQuery(static_cast<Deriving*>(this), ErrorCode, ErrorMessage);
	}
	STDMETHODIMP LockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_LockObject(static_cast<Deriving*>(this));
	}
	STDMETHODIMP UnlockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_UnlockObject(static_cast<Deriving*>(this));
	}
};

typedef __IIviDriverUtility<Tkdpo2k3k4k> _IIviDriverUtility;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kChannels
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kChannels : public ITkdpo2k3k4kChannels
{
	STDMETHODIMP SetAUXInTekVPIProbeAutoZero()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeAutoZero(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetAUXInTekVPIProbeCommand(BSTR Command, BSTR State)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeCommand(static_cast<Deriving*>(this), Command, State);
	}
	STDMETHODIMP SetAUXInTekVPIProbeDegauss()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeDegauss(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kChannel** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_Item(static_cast<Deriving*>(this), Name, val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_AUXInProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeSignal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AUXInProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_put_AUXInProbeSignal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInProbeGain(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeGain(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInProbeResistance(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeResistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInProbeSerialNumber(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeSerialNumber(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInProbeType(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInProbeUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInProbeUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInTekVPIProbeDegaussState(Tkdpo2k3k4kProbeDegaussStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeDegaussState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AUXInTekVPIProbeRange(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AUXInTekVPIProbeRange(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannels_put_AUXInTekVPIProbeRange(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kChannels<Tkdpo2k3k4k> _ITkdpo2k3k4kChannels;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScope
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScope : public IIviScope
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Acquisition(IIviScopeAcquisition** val)
	{
		return ForwardingShimImpl::IIviScope_get_Acquisition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Channels(IIviScopeChannels** val)
	{
		return ForwardingShimImpl::IIviScope_get_Channels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Measurements(IIviScopeMeasurements** val)
	{
		return ForwardingShimImpl::IIviScope_get_Measurements(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevel(IIviScopeReferenceLevel** val)
	{
		return ForwardingShimImpl::IIviScope_get_ReferenceLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IIviScopeTrigger** val)
	{
		return ForwardingShimImpl::IIviScope_get_Trigger(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScope<Tkdpo2k3k4k> _IIviScope;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeAcquisition
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeAcquisition : public IIviScopeAcquisition
{
	STDMETHODIMP ConfigureRecord(double TimePerRecord, long MinNumPts, double AcquisitionStartTime)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_ConfigureRecord(static_cast<Deriving*>(this), TimePerRecord, MinNumPts, AcquisitionStartTime);
	}
	STDMETHODIMP get_NumberOfAverages(long* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_NumberOfAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberOfAverages(long val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_NumberOfAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberOfEnvelopes(long* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_NumberOfEnvelopes(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberOfEnvelopes(long val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_NumberOfEnvelopes(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Interpolation(IviScopeInterpolationEnum* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_Interpolation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Interpolation(IviScopeInterpolationEnum val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_Interpolation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordLength(long* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_RecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleMode(IviScopeSampleModeEnum* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_SampleMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleRate(double* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(IviScopeAcquisitionTypeEnum* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(IviScopeAcquisitionTypeEnum val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberOfPointsMin(long* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_NumberOfPointsMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberOfPointsMin(long val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_NumberOfPointsMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StartTime(double* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_StartTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StartTime(double val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_StartTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TimePerRecord(double* val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_get_TimePerRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TimePerRecord(double val)
	{
		return ForwardingShimImpl::IIviScopeAcquisition_put_TimePerRecord(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeAcquisition<Tkdpo2k3k4k> _IIviScopeAcquisition;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeMeasurements
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeMeasurements : public IIviScopeMeasurements
{
	STDMETHODIMP Initiate()
	{
		return ForwardingShimImpl::IIviScopeMeasurements_Initiate(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Abort()
	{
		return ForwardingShimImpl::IIviScopeMeasurements_Abort(static_cast<Deriving*>(this));
	}
	STDMETHODIMP AutoSetup()
	{
		return ForwardingShimImpl::IIviScopeMeasurements_AutoSetup(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Status(IviScopeAcquisitionStatusEnum* val)
	{
		return ForwardingShimImpl::IIviScopeMeasurements_Status(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP IsWaveformElementInvalid(double Element, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviScopeMeasurements_IsWaveformElementInvalid(static_cast<Deriving*>(this), Element, val);
	}
	STDMETHODIMP get_Item(BSTR Name, IIviScopeMeasurement** val)
	{
		return ForwardingShimImpl::IIviScopeMeasurements_get_Item(static_cast<Deriving*>(this), Name, val);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IIviScopeMeasurements_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::IIviScopeMeasurements_get_Name(static_cast<Deriving*>(this), Index, val);
	}
};

typedef __IIviScopeMeasurements<Tkdpo2k3k4k> _IIviScopeMeasurements;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeChannels
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeChannels : public IIviScopeChannels
{
	STDMETHODIMP get_Item(BSTR Name, IIviScopeChannel** val)
	{
		return ForwardingShimImpl::IIviScopeChannels_get_Item(static_cast<Deriving*>(this), Name, val);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IIviScopeChannels_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::IIviScopeChannels_get_Name(static_cast<Deriving*>(this), Index, val);
	}
};

typedef __IIviScopeChannels<Tkdpo2k3k4k> _IIviScopeChannels;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeReferenceLevel
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeReferenceLevel : public IIviScopeReferenceLevel
{
	STDMETHODIMP Configure(double Low, double Mid, double High)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_Configure(static_cast<Deriving*>(this), Low, Mid, High);
	}
	STDMETHODIMP get_High(double* val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_get_High(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_High(double val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_put_High(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Low(double* val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_get_Low(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Low(double val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_put_Low(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mid(double* val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_get_Mid(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mid(double val)
	{
		return ForwardingShimImpl::IIviScopeReferenceLevel_put_Mid(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeReferenceLevel<Tkdpo2k3k4k> _IIviScopeReferenceLevel;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTrigger : public IIviScopeTrigger
{
	STDMETHODIMP Configure(IviScopeTriggerTypeEnum Type, double Holdoff)
	{
		return ForwardingShimImpl::IIviScopeTrigger_Configure(static_cast<Deriving*>(this), Type, Holdoff);
	}
	STDMETHODIMP get_Continuous(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Continuous(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Continuous(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Continuous(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Coupling(IviScopeTriggerCouplingEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Coupling(IviScopeTriggerCouplingEnum val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Level(double* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Level(double val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Modifier(IviScopeTriggerModifierEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Modifier(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Modifier(IviScopeTriggerModifierEnum val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Modifier(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(BSTR* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(BSTR val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Holdoff(double* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Holdoff(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Holdoff(double val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Holdoff(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(IviScopeTriggerTypeEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(IviScopeTriggerTypeEnum val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AcLine(IIviScopeTriggerAcLine** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_AcLine(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Edge(IIviScopeTriggerEdge** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Edge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Glitch(IIviScopeTriggerGlitch** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Glitch(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Runt(IIviScopeTriggerRunt** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Runt(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TV(IIviScopeTriggerTv** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_TV(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Width(IIviScopeTriggerWidth** val)
	{
		return ForwardingShimImpl::IIviScopeTrigger_get_Width(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTrigger<Tkdpo2k3k4k> _IIviScopeTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerAcLine
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerAcLine : public IIviScopeTriggerAcLine
{
	STDMETHODIMP get_Slope(IviScopeACLineSlopeEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerAcLine_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Slope(IviScopeACLineSlopeEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerAcLine_put_Slope(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerAcLine<Tkdpo2k3k4k> _IIviScopeTriggerAcLine;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerEdge
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerEdge : public IIviScopeTriggerEdge
{
	STDMETHODIMP Configure(BSTR Source, double Level, IviScopeTriggerSlopeEnum Slope)
	{
		return ForwardingShimImpl::IIviScopeTriggerEdge_Configure(static_cast<Deriving*>(this), Source, Level, Slope);
	}
	STDMETHODIMP get_Slope(IviScopeTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerEdge_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Slope(IviScopeTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerEdge_put_Slope(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerEdge<Tkdpo2k3k4k> _IIviScopeTriggerEdge;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerGlitch
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerGlitch : public IIviScopeTriggerGlitch
{
	STDMETHODIMP Configure(BSTR Source, double Level, double Width, IviScopeGlitchPolarityEnum polarity, IviScopeGlitchConditionEnum condition)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_Configure(static_cast<Deriving*>(this), Source, Level, Width, polarity, condition);
	}
	STDMETHODIMP get_condition(IviScopeGlitchConditionEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_get_condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_condition(IviScopeGlitchConditionEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_put_condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_polarity(IviScopeGlitchPolarityEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_get_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_polarity(IviScopeGlitchPolarityEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_put_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Width(double* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_get_Width(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Width(double val)
	{
		return ForwardingShimImpl::IIviScopeTriggerGlitch_put_Width(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerGlitch<Tkdpo2k3k4k> _IIviScopeTriggerGlitch;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerRunt
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerRunt : public IIviScopeTriggerRunt
{
	STDMETHODIMP Configure(BSTR Source, double ThresholdLow, double ThresholdHigh, IviScopeRuntPolarityEnum polarity)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_Configure(static_cast<Deriving*>(this), Source, ThresholdLow, ThresholdHigh, polarity);
	}
	STDMETHODIMP get_polarity(IviScopeRuntPolarityEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_get_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_polarity(IviScopeRuntPolarityEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_put_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThresholdHigh(double* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_get_ThresholdHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ThresholdHigh(double val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_put_ThresholdHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThresholdLow(double* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_get_ThresholdLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ThresholdLow(double val)
	{
		return ForwardingShimImpl::IIviScopeTriggerRunt_put_ThresholdLow(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerRunt<Tkdpo2k3k4k> _IIviScopeTriggerRunt;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerTv
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerTv : public IIviScopeTriggerTv
{
	STDMETHODIMP Configure(BSTR Source, IviScopeTVSignalFormatEnum SignalFormat, IviScopeTVTriggerEventEnum Event, IviScopeTVTriggerPolarityEnum polarity)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_Configure(static_cast<Deriving*>(this), Source, SignalFormat, Event, polarity);
	}
	STDMETHODIMP get_LineNumber(long* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_get_LineNumber(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LineNumber(long val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_put_LineNumber(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Event(IviScopeTVTriggerEventEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_get_Event(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Event(IviScopeTVTriggerEventEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_put_Event(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_polarity(IviScopeTVTriggerPolarityEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_get_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_polarity(IviScopeTVTriggerPolarityEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_put_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SignalFormat(IviScopeTVSignalFormatEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_get_SignalFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SignalFormat(IviScopeTVSignalFormatEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerTv_put_SignalFormat(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerTv<Tkdpo2k3k4k> _IIviScopeTriggerTv;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeTriggerWidth
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeTriggerWidth : public IIviScopeTriggerWidth
{
	STDMETHODIMP Configure(BSTR Source, double Level, double ThresholdLow, double ThresholdHigh, IviScopeWidthPolarityEnum polarity, IviScopeWidthConditionEnum condition)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_Configure(static_cast<Deriving*>(this), Source, Level, ThresholdLow, ThresholdHigh, polarity, condition);
	}
	STDMETHODIMP get_condition(IviScopeWidthConditionEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_get_condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_condition(IviScopeWidthConditionEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_put_condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_polarity(IviScopeWidthPolarityEnum* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_get_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_polarity(IviScopeWidthPolarityEnum val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_put_polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThresholdLow(double* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_get_ThresholdLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ThresholdLow(double val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_put_ThresholdLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThresholdHigh(double* val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_get_ThresholdHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ThresholdHigh(double val)
	{
		return ForwardingShimImpl::IIviScopeTriggerWidth_put_ThresholdHigh(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeTriggerWidth<Tkdpo2k3k4k> _IIviScopeTriggerWidth;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kAcquisition
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kAcquisition : public ITkdpo2k3k4kAcquisition
{
	STDMETHODIMP ConfigureRecord(double TimePerRecord, long MinNumPts, double AcquisitionStartTime)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_ConfigureRecord(static_cast<Deriving*>(this), TimePerRecord, MinNumPts, AcquisitionStartTime);
	}
	STDMETHODIMP AutoSet()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_AutoSet(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetAverageMode(long NumberAverages)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_SetAverageMode(static_cast<Deriving*>(this), NumberAverages);
	}
	STDMETHODIMP Start()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_Start(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Stop()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_Stop(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_NumberAverages(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_NumberAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberAverages(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_NumberAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordLength(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_RecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleRate(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberOfPointsMin(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_NumberOfPointsMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberOfPointsMin(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_NumberOfPointsMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StartTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_StartTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StartTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_StartTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TimePerRecord(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_TimePerRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TimePerRecord(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_TimePerRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mode(Tkdpo2k3k4kAcquisitionModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mode(Tkdpo2k3k4kAcquisitionModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberAcquisitions(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_NumberAcquisitions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RunStop(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_RunStop(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RunStop(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_RunStop(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SingleSequence(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_SingleSequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SingleSequence(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_SingleSequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MagniVuState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_MagniVuState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MagniVuState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_put_MagniVuState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MaxSampleRate(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_MaxSampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SamplingMode(Tkdpo2k3k4kAcquisitionSamplingModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kAcquisition_get_SamplingMode(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kAcquisition<Tkdpo2k3k4k> _ITkdpo2k3k4kAcquisition;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTrigger : public ITkdpo2k3k4kTrigger
{
	STDMETHODIMP ConfigureAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureAIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ReadAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ReadAIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ConfigureAOnlyTrigger(double HoldoffTime)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureAOnlyTrigger(static_cast<Deriving*>(this), HoldoffTime);
	}
	STDMETHODIMP ConfigureAThenBAfterEventsTrigger(double HoldoffTime, long Events)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureAThenBAfterEventsTrigger(static_cast<Deriving*>(this), HoldoffTime, Events);
	}
	STDMETHODIMP ConfigureAThenBAfterTimeTrigger(double HoldoffTime, double DelayTime)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureAThenBAfterTimeTrigger(static_cast<Deriving*>(this), HoldoffTime, DelayTime);
	}
	STDMETHODIMP ConfigureBIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureBIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ReadBIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ReadBIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ReadARFIndependentParameters(double* UpperThreshold, double* LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ReadARFIndependentParameters(static_cast<Deriving*>(this), UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ConfigureARFIndependentParameters(double UpperThreshold, double LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_ConfigureARFIndependentParameters(static_cast<Deriving*>(this), UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP get_AHoldoffTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_AHoldoffTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AHoldoffTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_AHoldoffTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kTriggerTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kTriggerTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AEdge(ITkdpo2k3k4kTriggerAEdge** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_AEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_BState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_BState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BDelayTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_BDelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BDelayTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_BDelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CurrentState(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_CurrentState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_EventCount(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_EventCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_EventCount(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_EventCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BLevel(Tkdpo2k3k4kChannelEnum Source, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_BLevel(static_cast<Deriving*>(this), Source, val);
	}
	STDMETHODIMP put_BLevel(Tkdpo2k3k4kChannelEnum Source, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_BLevel(static_cast<Deriving*>(this), Source, val);
	}
	STDMETHODIMP get_TriggerBBy(Tkdpo2k3k4kTriggerBByEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_TriggerBBy(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TriggerBBy(Tkdpo2k3k4kTriggerBByEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_TriggerBBy(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_Frequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeAttenuation(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ProbeAttenuation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ProbeAttenuation(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_ProbeAttenuation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalUnitValue(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_VerticalUnitValue(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ABus(ITkdpo2k3k4kTriggerABus** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ABus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ALogic(ITkdpo2k3k4kTriggerALogic** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ALogic(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AWidth(ITkdpo2k3k4kTriggerAWidth** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_AWidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ARunt(ITkdpo2k3k4kTriggerARunt** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ARunt(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ASetupHold(ITkdpo2k3k4kTriggerASetupHold** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ASetupHold(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ATransition(ITkdpo2k3k4kTriggerATransition** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_ATransition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AVideo(ITkdpo2k3k4kTriggerAVideo** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_AVideo(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BEdge(ITkdpo2k3k4kTriggerBEdge** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_BEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mode(Tkdpo2k3k4kTriggerModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_get_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mode(Tkdpo2k3k4kTriggerModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTrigger_put_Mode(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTrigger<Tkdpo2k3k4k> _ITkdpo2k3k4kTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerAEdge
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerAEdge : public ITkdpo2k3k4kTriggerAEdge
{
	STDMETHODIMP Configure(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_Configure(static_cast<Deriving*>(this), Source, Level, Slope, Coupling);
	}
	STDMETHODIMP Read(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_Read(static_cast<Deriving*>(this), Source, Level, Slope, Coupling);
	}
	STDMETHODIMP ConfigureLevelTo50Percent()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_ConfigureLevelTo50Percent(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Slope(Tkdpo2k3k4kTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Slope(Tkdpo2k3k4kTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_put_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kTriggerSource2Enum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kTriggerSource2Enum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_get_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_put_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Level(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_get_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Level(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_put_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LevelEnum(Tkdpo2k3k4kTriggerLevelEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAEdge_put_LevelEnum(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerAEdge<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerAEdge;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kBuses
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kBuses : public ITkdpo2k3k4kBuses
{
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBuses_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBuses_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kBus** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBuses_get_Item(static_cast<Deriving*>(this), Name, val);
	}
};

typedef __ITkdpo2k3k4kBuses<Tkdpo2k3k4k> _ITkdpo2k3k4kBuses;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursor
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursor : public ITkdpo2k3k4kCursor
{
	STDMETHODIMP get_DDT(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_DDT(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TrackMode(Tkdpo2k3k4kCursorTrackModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_TrackMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TrackMode(Tkdpo2k3k4kCursorTrackModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_put_TrackMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kCursorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kCursorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HBars(ITkdpo2k3k4kCursorHBars** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_HBars(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VBars(ITkdpo2k3k4kCursorVBars** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_VBars(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_XY(ITkdpo2k3k4kCursorXY** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_XY(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kCursorSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kCursorSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursor_put_Source(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursor<Tkdpo2k3k4k> _ITkdpo2k3k4kCursor;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorHBars
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorHBars : public ITkdpo2k3k4kCursorHBars
{
	STDMETHODIMP SetMeasurementScale(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_SetMeasurementScale(static_cast<Deriving*>(this), MeasurementScale);
	}
	STDMETHODIMP get_Units(Tkdpo2k3k4kCursorHBarsUnitsEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_get_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Units(Tkdpo2k3k4kCursorHBarsUnitsEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_put_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Delta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_get_Delta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_get_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position1(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_put_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_get_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorHBars_put_Position2(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorHBars<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorHBars;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorVBars
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorVBars : public ITkdpo2k3k4kCursorVBars
{
	STDMETHODIMP SetMeasurementScale(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_SetMeasurementScale(static_cast<Deriving*>(this), MeasurementScale);
	}
	STDMETHODIMP get_Delta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_Delta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position1(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_put_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_put_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(Tkdpo2k3k4kCursorVBarsUnitsEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Units(Tkdpo2k3k4kCursorVBarsUnitsEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_put_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalPosition1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_HorizontalPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalPosition2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_HorizontalPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VDelta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_VDelta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AlternativeReadout1(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_AlternativeReadout1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AlternativeReadout2(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorVBars_get_AlternativeReadout2(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorVBars<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorVBars;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorXY
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorXY : public ITkdpo2k3k4kCursorXY
{
	STDMETHODIMP get_Readout(Tkdpo2k3k4kCursorXYReadoutEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_get_Readout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Readout(Tkdpo2k3k4kCursorXYReadoutEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_put_Readout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Rectangle(ITkdpo2k3k4kCursorXYRectangle** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_get_Rectangle(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Ratio(ITkdpo2k3k4kCursorXYRatio** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_get_Ratio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Product(ITkdpo2k3k4kCursorXYProduct** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_get_Product(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PolarCoordinates(ITkdpo2k3k4kCursorXYPolarCoordinates** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXY_get_PolarCoordinates(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorXY<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorXY;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorXYRectangle
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorXYRectangle : public ITkdpo2k3k4kCursorXYRectangle
{
	STDMETHODIMP get_XDelta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_XDelta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_XPosition1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_XPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_XPosition1(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_put_XPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_XPosition2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_XPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_XPosition2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_put_XPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_XUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_XUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_YDelta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_YDelta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_YPosition1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_YPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_YPosition1(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_put_YPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_YPosition2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_YPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_YPosition2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_put_YPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_YUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRectangle_get_YUnits(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorXYRectangle<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorXYRectangle;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorXYRatio
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorXYRatio : public ITkdpo2k3k4kCursorXYRatio
{
	STDMETHODIMP get_Delta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRatio_get_Delta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRatio_get_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRatio_get_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYRatio_get_Units(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorXYRatio<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorXYRatio;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorXYProduct
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorXYProduct : public ITkdpo2k3k4kCursorXYProduct
{
	STDMETHODIMP get_Delta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYProduct_get_Delta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYProduct_get_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYProduct_get_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYProduct_get_Units(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorXYProduct<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorXYProduct;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kCursorXYPolarCoordinates
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kCursorXYPolarCoordinates : public ITkdpo2k3k4kCursorXYPolarCoordinates
{
	STDMETHODIMP get_ThetaDelta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaDelta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThetaPosition1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThetaPosition2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ThetaUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Delta(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Delta(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position1(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Units(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kCursorXYPolarCoordinates<Tkdpo2k3k4k> _ITkdpo2k3k4kCursorXYPolarCoordinates;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kDisplay
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kDisplay : public ITkdpo2k3k4kDisplay
{
	STDMETHODIMP SetMessageBoxCoordinates(long X1, long Y1, long X2, long Y2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_SetMessageBoxCoordinates(static_cast<Deriving*>(this), X1, Y1, X2, Y2);
	}
	STDMETHODIMP GetMessageBoxCoordinates(long* X1, long* Y1, long* X2, long* Y2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_GetMessageBoxCoordinates(static_cast<Deriving*>(this), X1, Y1, X2, Y2);
	}
	STDMETHODIMP ShowMessage(BSTR Message)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_ShowMessage(static_cast<Deriving*>(this), Message);
	}
	STDMETHODIMP ClearMessage()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_ClearMessage(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetDisplayMessage(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_GetDisplayMessage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ClockState(Tkdpo2k3k4kDisplayClockStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_ClockState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ClockState(Tkdpo2k3k4kDisplayClockStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_ClockState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_BackLightIntensity(Tkdpo2k3k4kDisplayBackLightIntensityEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_BackLightIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BackLightIntensity(Tkdpo2k3k4kDisplayBackLightIntensityEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_BackLightIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Format(Tkdpo2k3k4kDisplayDisplayFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_Format(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Format(Tkdpo2k3k4kDisplayDisplayFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_Format(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GraticuleStyle(Tkdpo2k3k4kDisplayGraticuleEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_GraticuleStyle(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_GraticuleStyle(Tkdpo2k3k4kDisplayGraticuleEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_GraticuleStyle(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Persistence(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_Persistence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Persistence(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_Persistence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_PersistenceEnum(Tkdpo2k3k4kDisplayPersistenceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_PersistenceEnum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_WaveformIntensity(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_WaveformIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_WaveformIntensity(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_WaveformIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GraticuleIntensity(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_GraticuleIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_GraticuleIntensity(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_GraticuleIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DotsOnly(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_DotsOnly(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DotsOnly(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_DotsOnly(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayMessageBox(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_DisplayMessageBox(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayMessageBox(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_DisplayMessageBox(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GlitchCaptureState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_GlitchCaptureState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_GlitchCaptureState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_GlitchCaptureState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GlitchIntensity(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_get_GlitchIntensity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_GlitchIntensity(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDisplay_put_GlitchIntensity(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kDisplay<Tkdpo2k3k4k> _ITkdpo2k3k4kDisplay;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kHardCopy
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kHardCopy : public ITkdpo2k3k4kHardCopy
{
	STDMETHODIMP Print()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHardCopy_Print(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Layout(Tkdpo2k3k4kPrintLayoutEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHardCopy_get_Layout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Layout(Tkdpo2k3k4kPrintLayoutEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHardCopy_put_Layout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InkSaver(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHardCopy_get_InkSaver(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InkSaver(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHardCopy_put_InkSaver(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kHardCopy<Tkdpo2k3k4k> _ITkdpo2k3k4kHardCopy;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kHistogram
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kHistogram : public ITkdpo2k3k4kHistogram
{
	STDMETHODIMP Configure(Tkdpo2k3k4kSource1Enum Source, Tkdpo2k3k4kHistogramModeEnum Mode)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_Configure(static_cast<Deriving*>(this), Source, Mode);
	}
	STDMETHODIMP Read(Tkdpo2k3k4kSource1Enum* Source, Tkdpo2k3k4kHistogramModeEnum* Mode)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_Read(static_cast<Deriving*>(this), Source, Mode);
	}
	STDMETHODIMP ConfigureBoxCoordinates(double Top, double Left, double Right, double Bottom)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_ConfigureBoxCoordinates(static_cast<Deriving*>(this), Top, Left, Right, Bottom);
	}
	STDMETHODIMP ReadBoxCoordinates(double* Top, double* Left, double* Right, double* Bottom)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_ReadBoxCoordinates(static_cast<Deriving*>(this), Top, Left, Right, Bottom);
	}
	STDMETHODIMP ConfigureBoxCoordinatesPercent(double Top, double Left, double Right, double Bottom)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_ConfigureBoxCoordinatesPercent(static_cast<Deriving*>(this), Top, Left, Right, Bottom);
	}
	STDMETHODIMP ReadBoxCoordinatesPercent(double* Top, double* Left, double* Right, double* Bottom)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_ReadBoxCoordinatesPercent(static_cast<Deriving*>(this), Top, Left, Right, Bottom);
	}
	STDMETHODIMP Reset()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_Reset(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Data(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_get_Data(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Display(Tkdpo2k3k4kHistogramDisplayEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_get_Display(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Display(Tkdpo2k3k4kHistogramDisplayEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_put_Display(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mode(Tkdpo2k3k4kHistogramModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_get_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mode(Tkdpo2k3k4kHistogramModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_put_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kSource1Enum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kSource1Enum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHistogram_put_Source(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kHistogram<Tkdpo2k3k4k> _ITkdpo2k3k4kHistogram;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kHorizontal
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kHorizontal : public ITkdpo2k3k4kHorizontal
{
	STDMETHODIMP Configure(double Position, double Scale, long RecordLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_Configure(static_cast<Deriving*>(this), Position, Scale, RecordLength);
	}
	STDMETHODIMP ConfigureDelay(VARIANT_BOOL Mode, double Time)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_ConfigureDelay(static_cast<Deriving*>(this), Mode, Time);
	}
	STDMETHODIMP Read(double* Position, double* Scale, long* RecordLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_Read(static_cast<Deriving*>(this), Position, Scale, RecordLength);
	}
	STDMETHODIMP ReadDelay(VARIANT_BOOL* Mode, double* Time)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_ReadDelay(static_cast<Deriving*>(this), Mode, Time);
	}
	STDMETHODIMP get_DelayMode(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DelayMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayMode(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_DelayMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_DelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalMainRecordLength(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DigitalMainRecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalMagniVuRecordLength(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DigitalMagniVuRecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalMainSampleRate(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DigitalMainSampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalMagniVuSampleRate(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_DigitalMagniVuSampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Scale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_Scale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Scale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_Scale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Resolution(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Resolution(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_Resolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordLength(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_RecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RecordLength(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_RecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleRate(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleRate(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TriggerPosition(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_get_TriggerPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TriggerPosition(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kHorizontal_put_TriggerPosition(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kHorizontal<Tkdpo2k3k4k> _ITkdpo2k3k4kHorizontal;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMark
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMark : public ITkdpo2k3k4kMark
{
	STDMETHODIMP MoveZoomToMark(Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_MoveZoomToMark(static_cast<Deriving*>(this), Mark);
	}
	STDMETHODIMP CreateMark(Tkdpo2k3k4kMarkEnum Mark)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_CreateMark(static_cast<Deriving*>(this), Mark);
	}
	STDMETHODIMP DeleteMark(Tkdpo2k3k4kMarkEnum Mark)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_DeleteMark(static_cast<Deriving*>(this), Mark);
	}
	STDMETHODIMP get_FreeMarks(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_FreeMarks(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TotalMarks(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_TotalMarks(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedEnd(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedEnd(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedFocus(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedFocus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedMarksInColumn(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedMarksInColumn(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedOwner(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedOwner(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedSource(Tkdpo2k3k4kSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedStart(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedStart(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedPosition(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SelectedLabel(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMark_get_SelectedLabel(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMark<Tkdpo2k3k4k> _ITkdpo2k3k4kMark;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMaths
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMaths : public ITkdpo2k3k4kMaths
{
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMaths_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMaths_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kMath** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMaths_get_Item(static_cast<Deriving*>(this), Name, val);
	}
};

typedef __ITkdpo2k3k4kMaths<Tkdpo2k3k4k> _ITkdpo2k3k4kMaths;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMeasurementImmediate
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMeasurementImmediate : public ITkdpo2k3k4kMeasurementImmediate
{
	STDMETHODIMP Configure(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_Configure(static_cast<Deriving*>(this), Source, Type);
	}
	STDMETHODIMP ConfigureDelay(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_ConfigureDelay(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2);
	}
	STDMETHODIMP ConfigurePhase(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_ConfigurePhase(static_cast<Deriving*>(this), Source1, Source2);
	}
	STDMETHODIMP ConfigureReferenceLevel(Tkdpo2k3k4kMeasurementMethodEnum Method, Tkdpo2k3k4kMeasurementUnitEnum Unit, double High, double Low, double Mid, double Mid2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_ConfigureReferenceLevel(static_cast<Deriving*>(this), Method, Unit, High, Low, Mid, Mid2);
	}
	STDMETHODIMP Read(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_Read(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2, Type);
	}
	STDMETHODIMP ReadReferenceLevel(Tkdpo2k3k4kMeasurementMethodEnum* Method, Tkdpo2k3k4kMeasurementUnitEnum* Unit, double* High, double* Low, double* Mid, double* Mid2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_ReadReferenceLevel(static_cast<Deriving*>(this), Method, Unit, High, Low, Mid, Mid2);
	}
	STDMETHODIMP ReadValue(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_ReadValue(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2, Type, Val, Unit);
	}
	STDMETHODIMP get_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_DelayDirection(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_DelayDirection(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelAbsoluteHigh(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelAbsoluteHigh(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelAbsoluteLow(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelAbsoluteLow(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelAbsoluteMid(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelAbsoluteMid(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelAbsoluteMid2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelAbsoluteMid2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelMethod(Tkdpo2k3k4kMeasurementMethodEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelMethod(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelMethod(Tkdpo2k3k4kMeasurementMethodEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelMethod(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelPercentHigh(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelPercentHigh(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentHigh(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelPercentLow(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelPercentLow(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentLow(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelPercentMid2(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelPercentMid2(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelUnit(Tkdpo2k3k4kMeasurementUnitEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelUnit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelUnit(Tkdpo2k3k4kMeasurementUnitEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelUnit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceLevelPercentMid(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevelPercentMid(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source1(Tkdpo2k3k4kSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_Source1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source1(Tkdpo2k3k4kSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_Source1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source2(Tkdpo2k3k4kSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_Source2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source2(Tkdpo2k3k4kSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_Source2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kMeasurementTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kMeasurementTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Value(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementImmediate_get_Value(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMeasurementImmediate<Tkdpo2k3k4k> _ITkdpo2k3k4kMeasurementImmediate;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMeasurements
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMeasurements : public ITkdpo2k3k4kMeasurements
{
	STDMETHODIMP ClearStatistics()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_ClearStatistics(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kMeasurementSlot** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Item(static_cast<Deriving*>(this), Name, val);
	}
	STDMETHODIMP get_Gating(Tkdpo2k3k4kMeasurementGatingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Gating(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Gating(Tkdpo2k3k4kMeasurementGatingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_put_Gating(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StatisticsMode(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_StatisticsMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StatisticsMode(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_put_StatisticsMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StatisticsWeighting(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_StatisticsWeighting(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StatisticsWeighting(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_put_StatisticsWeighting(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Indicators(ITkdpo2k3k4kMeasurementsIndicators** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Indicators(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(ITkdpo2k3k4kMeasurementsFrequency** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurements_get_Frequency(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMeasurements<Tkdpo2k3k4k> _ITkdpo2k3k4kMeasurements;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMeasurementsIndicators
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMeasurementsIndicators : public ITkdpo2k3k4kMeasurementsIndicators
{
	STDMETHODIMP get_State(Tkdpo2k3k4kMeasurementIndicatorStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(Tkdpo2k3k4kMeasurementIndicatorStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalIndicators(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalIndicators(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalValue(long Indicator, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalValue(static_cast<Deriving*>(this), Indicator, val);
	}
	STDMETHODIMP get_VerticalIndicators(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_get_VerticalIndicators(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalValue(long Indicator, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsIndicators_get_VerticalValue(static_cast<Deriving*>(this), Indicator, val);
	}
};

typedef __ITkdpo2k3k4kMeasurementsIndicators<Tkdpo2k3k4k> _ITkdpo2k3k4kMeasurementsIndicators;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSaveRecall
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSaveRecall : public ITkdpo2k3k4kSaveRecall
{
	STDMETHODIMP DefaultSetup()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_DefaultSetup(static_cast<Deriving*>(this));
	}
	STDMETHODIMP RecallSetupFromFile(BSTR FileName)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_RecallSetupFromFile(static_cast<Deriving*>(this), FileName);
	}
	STDMETHODIMP RecallSetupFromMemory(Tkdpo2k3k4kMemoryLocationEnum Location)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_RecallSetupFromMemory(static_cast<Deriving*>(this), Location);
	}
	STDMETHODIMP RecallWaveformFromFile(Tkdpo2k3k4kReferenceEnum RefMemory, BSTR FileName)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_RecallWaveformFromFile(static_cast<Deriving*>(this), RefMemory, FileName);
	}
	STDMETHODIMP SaveAllDigitalChannels(BSTR FileName)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveAllDigitalChannels(static_cast<Deriving*>(this), FileName);
	}
	STDMETHODIMP SaveSetupToFile(BSTR FileName)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveSetupToFile(static_cast<Deriving*>(this), FileName);
	}
	STDMETHODIMP SaveSetupToMemory(Tkdpo2k3k4kMemoryLocationEnum Location)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveSetupToMemory(static_cast<Deriving*>(this), Location);
	}
	STDMETHODIMP SaveWaveformToFile(Tkdpo2k3k4kDataSourceEnum Source, BSTR FileName)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveWaveformToFile(static_cast<Deriving*>(this), Source, FileName);
	}
	STDMETHODIMP SaveWaveformToReference(Tkdpo2k3k4kDataSourceEnum Source, Tkdpo2k3k4kReferenceEnum RefMemory)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveWaveformToReference(static_cast<Deriving*>(this), Source, RefMemory);
	}
	STDMETHODIMP SaveEventTableBusData(long Bus, BSTR Filename)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveEventTableBusData(static_cast<Deriving*>(this), Bus, Filename);
	}
	STDMETHODIMP SaveImage(BSTR Filename, Tkdpo2k3k4kImageFormatEnum ImageFormat, Tkdpo2k3k4kImageLayoutEnum ImageLayout)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveImage(static_cast<Deriving*>(this), Filename, ImageFormat, ImageLayout);
	}
	STDMETHODIMP SaveAllWaveformsToFile(BSTR FileName, Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_SaveAllWaveformsToFile(static_cast<Deriving*>(this), FileName, FileFormat);
	}
	STDMETHODIMP get_SaveWaveFormFileFormat(Tkdpo2k3k4kSaveWaveformFileFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_SaveWaveFormFileFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SaveWaveFormFileFormat(Tkdpo2k3k4kSaveWaveformFileFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_SaveWaveFormFileFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SaveButtonType(Tkdpo2k3k4kSaveButtonTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_SaveButtonType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SaveButtonType(Tkdpo2k3k4kSaveButtonTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_SaveButtonType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ImageFormat(Tkdpo2k3k4kImageFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_ImageFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ImageFormat(Tkdpo2k3k4kImageFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_ImageFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ImageLayout(Tkdpo2k3k4kImageLayoutEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_ImageLayout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ImageLayout(Tkdpo2k3k4kImageLayoutEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_ImageLayout(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InkSaverPalette(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_InkSaverPalette(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InkSaverPalette(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_InkSaverPalette(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_WaveformGating(Tkdpo2k3k4kMeasurementGatingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_get_WaveformGating(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_WaveformGating(Tkdpo2k3k4kMeasurementGatingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSaveRecall_put_WaveformGating(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kSaveRecall<Tkdpo2k3k4k> _ITkdpo2k3k4kSaveRecall;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearches
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearches : public ITkdpo2k3k4kSearches
{
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearches_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearches_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kSearch** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearches_get_Item(static_cast<Deriving*>(this), Name, val);
	}
};

typedef __ITkdpo2k3k4kSearches<Tkdpo2k3k4k> _ITkdpo2k3k4kSearches;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABus
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABus : public ITkdpo2k3k4kTriggerABus
{
	STDMETHODIMP Configure(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTriggerBusTypeEnum BusType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_Configure(static_cast<Deriving*>(this), BusSource, BusType);
	}
	STDMETHODIMP get_BusSource(Tkdpo2k3k4kTrigABusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_BusSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BusSource(Tkdpo2k3k4kTrigABusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_put_BusSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_ParallelData(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_put_ParallelData(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_BusType(Tkdpo2k3k4kTriggerBusTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_BusType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BusType(Tkdpo2k3k4kTriggerBusTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_put_BusType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Audio(ITkdpo2k3k4kTriggerABusAudio** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_Audio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CAN(ITkdpo2k3k4kTriggerABusCAN** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_CAN(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Flexray(ITkdpo2k3k4kTriggerABusFlexray** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_Flexray(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_I2C(ITkdpo2k3k4kTriggerABusI2C** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_I2C(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LIN(ITkdpo2k3k4kTriggerABusLIN** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_LIN(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232(ITkdpo2k3k4kTriggerABusRS232** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_RS232(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SPI(ITkdpo2k3k4kTriggerABusSPI** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_SPI(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_USB(ITkdpo2k3k4kTriggerABusUSB** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABus_get_USB(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerABus<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABus;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusAudio
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusAudio : public ITkdpo2k3k4kTriggerABusAudio
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_get_DataWord(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusAudio_put_DataWord(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusAudio<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusAudio;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusCAN
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusCAN : public ITkdpo2k3k4kTriggerABusCAN
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusCAN_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusCAN<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusCAN;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusFlexray
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusFlexray : public ITkdpo2k3k4kTriggerABusFlexray
{
	STDMETHODIMP ConfigureCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ConfigureCycleCount(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ReadCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ReadCycleCount(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ConfigureData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ConfigureData(static_cast<Deriving*>(this), BusSource, HighValue, Offset, Qualifier, Size, Value);
	}
	STDMETHODIMP ReadData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ReadData(static_cast<Deriving*>(this), BusSource, HighValue, Offset, Qualifier, Size, Value);
	}
	STDMETHODIMP ConfigureFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ConfigureFrameID(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ReadFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ReadFrameID(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ConfigureHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ConfigureHeader(static_cast<Deriving*>(this), BusSource, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);
	}
	STDMETHODIMP ReadHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_ReadHeader(static_cast<Deriving*>(this), BusSource, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_get_EOFType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_put_EOFType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_get_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusFlexray_put_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusFlexray<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusFlexray;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusI2C
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusI2C : public ITkdpo2k3k4kTriggerABusI2C
{
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_get_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusI2C_put_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusI2C<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusI2C;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusLIN
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusLIN : public ITkdpo2k3k4kTriggerABusLIN
{
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_get_IdentifierValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusLIN_put_IdentifierValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusLIN<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusLIN;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusRS232
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusRS232 : public ITkdpo2k3k4kTriggerABusRS232
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_get_RXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_put_RXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_get_RXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_put_RXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_get_TXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_put_TXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_get_TXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusRS232_put_TXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusRS232<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusRS232;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusSPI
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusSPI : public ITkdpo2k3k4kTriggerABusSPI
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_get_DataINValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_put_DataINValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_get_DataOUTValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusSPI_put_DataOUTValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusSPI<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusSPI;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerABusUSB
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerABusUSB : public ITkdpo2k3k4kTriggerABusUSB
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_Qualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_Qualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_DataType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_DataType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_AddressHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_AddressHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_EndPointValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_EndPointValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_HandshakeType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_HandshakeType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_SOFFrameNumber(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_SOFFrameNumber(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_SpecialType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_SpecialType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_get_TokenType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerABusUSB_put_TokenType(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kTriggerABusUSB<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerABusUSB;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerALogic
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerALogic : public ITkdpo2k3k4kTriggerALogic
{
	STDMETHODIMP Configure()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_Configure(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ConfigureSource(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ConfigureSource(static_cast<Deriving*>(this), Source, Input, Threshold);
	}
	STDMETHODIMP ReadSource(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ReadSource(static_cast<Deriving*>(this), Source, Input, Threshold);
	}
	STDMETHODIMP ConfigurePattern(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ConfigurePattern(static_cast<Deriving*>(this), Condition, LessLimit, MoreLimit, LogicOperatorType);
	}
	STDMETHODIMP ReadPattern(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* LogicOperatorType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ReadPattern(static_cast<Deriving*>(this), Condition, LessLimit, MoreLimit, LogicOperatorType);
	}
	STDMETHODIMP ConfigureClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ConfigureClock(static_cast<Deriving*>(this), Source, EdgeType);
	}
	STDMETHODIMP ReadClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ReadClock(static_cast<Deriving*>(this), Source, EdgeType);
	}
	STDMETHODIMP ConfigureRF(Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ConfigureRF(static_cast<Deriving*>(this), Input, Threshold);
	}
	STDMETHODIMP ReadRF(Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_ReadRF(static_cast<Deriving*>(this), Input, Threshold);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTriggerPatternConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_get_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTriggerPatternConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_put_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LessLimit(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_get_LessLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LessLimit(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_put_LessLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MoreLimit(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_get_MoreLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MoreLimit(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_put_MoreLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Function(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_get_Function(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Function(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerALogic_put_Function(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerALogic<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerALogic;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerAWidth
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerAWidth : public ITkdpo2k3k4kTriggerAWidth
{
	STDMETHODIMP Configure()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_Configure(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kTiggerPulseSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kTiggerPulseSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTriggerPulseWidthConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTriggerPulseWidthConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Polarity(Tkdpo2k3k4kTriggerPulsePolarityEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Polarity(Tkdpo2k3k4kTriggerPulsePolarityEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Width(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_Width(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Width(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_Width(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LowerLimit(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_LowerLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LowerLimit(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_LowerLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_UpperLimit(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_get_UpperLimit(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_UpperLimit(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAWidth_put_UpperLimit(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerAWidth<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerAWidth;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerARunt
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerARunt : public ITkdpo2k3k4kTriggerARunt
{
	STDMETHODIMP Configure()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_Configure(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kChannelChannelEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kChannelChannelEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTriggerRuntConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTriggerRuntConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Width(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_Width(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Width(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_Width(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LowerLevel(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_LowerLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LowerLevel(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_LowerLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_UpperLevel(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_get_UpperLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_UpperLevel(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerARunt_put_UpperLevel(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerARunt<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerARunt;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerASetupHold
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerASetupHold : public ITkdpo2k3k4kTriggerASetupHold
{
	STDMETHODIMP Configure()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_Configure(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DataSource(Tkdpo2k3k4kTriggerSource2Enum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_DataSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataSource(Tkdpo2k3k4kTriggerSource2Enum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_DataSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataLevel(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_DataLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataLevel(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_DataLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ClockSource(Tkdpo2k3k4kTriggerSource2Enum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_ClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ClockSource(Tkdpo2k3k4kTriggerSource2Enum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_ClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ClockEdge(Tkdpo2k3k4kTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_ClockEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ClockEdge(Tkdpo2k3k4kTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_ClockEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ClockLevel(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_ClockLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ClockLevel(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_ClockLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HoldTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_HoldTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HoldTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_HoldTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SetTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_get_SetTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SetTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerASetupHold_put_SetTime(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerASetupHold<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerASetupHold;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerATransition
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerATransition : public ITkdpo2k3k4kTriggerATransition
{
	STDMETHODIMP Configure()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_Configure(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kChannelEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kChannelEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DeltaTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_get_DeltaTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DeltaTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_put_DeltaTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTriggerTransitionConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_get_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTriggerTransitionConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_put_Condition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_get_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerATransition_put_Polarity(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerATransition<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerATransition;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerAVideo
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerAVideo : public ITkdpo2k3k4kTriggerAVideo
{
	STDMETHODIMP get_FieldHoldoff(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_FieldHoldoff(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FieldHoldoff(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_FieldHoldoff(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Polarity(Tkdpo2k3k4kTriggerVideoPolarityEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Polarity(Tkdpo2k3k4kTriggerVideoPolarityEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_Polarity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kTriggerSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kTriggerSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Standard(Tkdpo2k3k4kTriggerVideoStandardEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_Standard(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Standard(Tkdpo2k3k4kTriggerVideoStandardEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_Standard(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TriggerOn(Tkdpo2k3k4kTriggerVideoFieldsEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_TriggerOn(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TriggerOn(Tkdpo2k3k4kTriggerVideoFieldsEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_TriggerOn(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CustomLinePeriod(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_CustomLinePeriod(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CustomLinePeriod(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_CustomLinePeriod(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CustomScan(Tkdpo2k3k4kTriggerVideoCustomScanEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_CustomScan(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CustomScan(Tkdpo2k3k4kTriggerVideoCustomScanEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_CustomScan(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CustomSyncInterval(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_CustomSyncInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CustomSyncInterval(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_CustomSyncInterval(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CustomFormat(Tkdpo2k3k4kTriggerVideoCustomFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_CustomFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CustomFormat(Tkdpo2k3k4kTriggerVideoCustomFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_CustomFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HDTvFormat(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_get_HDTvFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HDTvFormat(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerAVideo_put_HDTvFormat(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerAVideo<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerAVideo;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kTriggerBEdge
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kTriggerBEdge : public ITkdpo2k3k4kTriggerBEdge
{
	STDMETHODIMP Configure(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_Configure(static_cast<Deriving*>(this), Source, Level, Slope, Coupling);
	}
	STDMETHODIMP Read(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_Read(static_cast<Deriving*>(this), Source, Level, Slope, Coupling);
	}
	STDMETHODIMP get_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_get_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_put_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Level(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_get_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Level(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_put_Level(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LevelEnum(Tkdpo2k3k4kTriggerLevelEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_put_LevelEnum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Slope(Tkdpo2k3k4kTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_get_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Slope(Tkdpo2k3k4kTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_put_Slope(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kTriggerSource2Enum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kTriggerSource2Enum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kTriggerBEdge_put_Source(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kTriggerBEdge<Tkdpo2k3k4k> _ITkdpo2k3k4kTriggerBEdge;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kReferences
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kReferences : public ITkdpo2k3k4kReferences
{
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReferences_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReferences_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kReference** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReferences_get_Item(static_cast<Deriving*>(this), Name, val);
	}
};

typedef __ITkdpo2k3k4kReferences<Tkdpo2k3k4k> _ITkdpo2k3k4kReferences;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kDigitalChannels
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kDigitalChannels : public ITkdpo2k3k4kDigitalChannels
{
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannels_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannels_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Item(BSTR Name, ITkdpo2k3k4kDigitalChannel** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannels_get_Item(static_cast<Deriving*>(this), Name, val);
	}
};

typedef __ITkdpo2k3k4kDigitalChannels<Tkdpo2k3k4k> _ITkdpo2k3k4kDigitalChannels;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kZoom
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kZoom : public ITkdpo2k3k4kZoom
{
	STDMETHODIMP get_Mode(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_get_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mode(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_put_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Scale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_get_Scale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Scale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_put_Scale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Factor(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kZoom_get_Factor(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kZoom<Tkdpo2k3k4k> _ITkdpo2k3k4kZoom;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kWaveformTransfer
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kWaveformTransfer : public ITkdpo2k3k4kWaveformTransfer
{
	STDMETHODIMP WriteWaveformToReference(Tkdpo2k3k4kReferenceEnum WaveformReference, SAFEARRAY** WaveformArray, double InitialX, double XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_WriteWaveformToReference(static_cast<Deriving*>(this), WaveformReference, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP SaveWaveformToFile(Tkdpo2k3k4kSourceEnum WaveformSource, BSTR FileName, Tkdpo2k3k4kWaveformFileFormatEnum FileFormat)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_SaveWaveformToFile(static_cast<Deriving*>(this), WaveformSource, FileName, FileFormat);
	}
	STDMETHODIMP ReadWaveformMinMax(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_ReadWaveformMinMax(static_cast<Deriving*>(this), WaveformSource, MaxTimeMiliseconds, MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
	STDMETHODIMP ReadWaveform(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_ReadWaveform(static_cast<Deriving*>(this), WaveformSource, MaxTimeMiliseconds, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP IsWaveformElementInvalid(double Element, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_IsWaveformElementInvalid(static_cast<Deriving*>(this), Element, val);
	}
	STDMETHODIMP InitiateAcquisition()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_InitiateAcquisition(static_cast<Deriving*>(this));
	}
	STDMETHODIMP FetchWaveformWithinZoom(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinZoom(static_cast<Deriving*>(this), WaveformSource, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformWithinCursor(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinCursor(static_cast<Deriving*>(this), WaveformSource, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformStartStop(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformStartStop(static_cast<Deriving*>(this), WaveformSource, Start, Stop, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformMinMax(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformMinMax(static_cast<Deriving*>(this), WaveformSource, MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformHighResolution(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformHighResolution(static_cast<Deriving*>(this), WaveformSource, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformDigitizedLevel(Tkdpo2k3k4kChannelEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement, double* YZero, double* YMult, double* YOffset)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveformDigitizedLevel(static_cast<Deriving*>(this), WaveformSource, WaveformArray, InitialX, XIncrement, YZero, YMult, YOffset);
	}
	STDMETHODIMP FetchWaveform(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_FetchWaveform(static_cast<Deriving*>(this), WaveformSource, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP CopyWaveformToClipboard(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, long* PointsCopied)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_CopyWaveformToClipboard(static_cast<Deriving*>(this), WaveformSource, Start, Stop, PointsCopied);
	}
	STDMETHODIMP GetAvailableDataCompositions(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_GetAvailableDataCompositions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP GetAvailableFilterVuFrequencies(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_GetAvailableFilterVuFrequencies(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataWidth(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataWidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataWidth(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataWidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataStop(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataStop(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataStop(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataStop(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataStart(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataStart(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataStart(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataStart(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataSource(Tkdpo2k3k4kDataSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataSource(Tkdpo2k3k4kDataSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_WaveformRecordLength(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_WaveformRecordLength(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataComposition(Tkdpo2k3k4kDataCompositionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataComposition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataComposition(Tkdpo2k3k4kDataCompositionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataComposition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DataResolution(Tkdpo2k3k4kDataResolutionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_DataResolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DataResolution(Tkdpo2k3k4kDataResolutionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_DataResolution(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FillterVuFrequency(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_get_FillterVuFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FillterVuFrequency(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kWaveformTransfer_put_FillterVuFrequency(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kWaveformTransfer<Tkdpo2k3k4k> _ITkdpo2k3k4kWaveformTransfer;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kUtilityEx
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kUtilityEx : public ITkdpo2k3k4kUtilityEx
{
	STDMETHODIMP Calibrate(Tkdpo2k3k4kUtilityExCalibrationStatusEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kUtilityEx_Calibrate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP SelfTest(long* TestResult, BSTR* TestMessage)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kUtilityEx_SelfTest(static_cast<Deriving*>(this), TestResult, TestMessage);
	}
	STDMETHODIMP get_FrontPanelLock(Tkdpo2k3k4kUtilityExFrontPanelLockEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kUtilityEx_get_FrontPanelLock(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FrontPanelLock(Tkdpo2k3k4kUtilityExFrontPanelLockEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kUtilityEx_put_FrontPanelLock(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kUtilityEx<Tkdpo2k3k4k> _ITkdpo2k3k4kUtilityEx;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kInstrumentIO
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kInstrumentIO : public ITkdpo2k3k4kInstrumentIO
{
	STDMETHODIMP GetOPC(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_GetOPC(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP Query(BSTR Command, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_Query(static_cast<Deriving*>(this), Command, val);
	}
	STDMETHODIMP ReadPartialString(long Length, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_ReadPartialString(static_cast<Deriving*>(this), Length, val);
	}
	STDMETHODIMP ReadString(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_ReadString(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP WriteString(BSTR Command)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_WriteString(static_cast<Deriving*>(this), Command);
	}
	STDMETHODIMP get_IOSession(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kInstrumentIO_get_IOSession(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kInstrumentIO<Tkdpo2k3k4k> _ITkdpo2k3k4kInstrumentIO;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysis
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysis : public ITkdpo2k3k4kPowerAnalysis
{
	STDMETHODIMP ConfigureRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double ReferenceLevelHysteresis, double Mid)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_ConfigureRefLevel(static_cast<Deriving*>(this), ReferenceLevelType, ReferenceLevelHysteresis, Mid);
	}
	STDMETHODIMP ReadRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum* ReferenceLevelType, double* ReferenceLevelHysteresis, double* Mid)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_ReadRefLevel(static_cast<Deriving*>(this), ReferenceLevelType, ReferenceLevelHysteresis, Mid);
	}
	STDMETHODIMP SetDefaultRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_SetDefaultRefLevel(static_cast<Deriving*>(this), ReferenceLevelType);
	}
	STDMETHODIMP ResetStatistics()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_ResetStatistics(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kPowerTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kPowerTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VoltageSource(Tkdpo2k3k4kPowerSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_VoltageSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VoltageSource(Tkdpo2k3k4kPowerSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_VoltageSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CurrentSource(Tkdpo2k3k4kPowerSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_CurrentSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CurrentSource(Tkdpo2k3k4kPowerSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_CurrentSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Indicator(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Indicator(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Indicator(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_Indicator(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GateSource(Tkdpo2k3k4kPowerGateSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_GateSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_GateSource(Tkdpo2k3k4kPowerGateSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_GateSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Gating(Tkdpo2k3k4kPowerGatingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Gating(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Gating(Tkdpo2k3k4kPowerGatingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_Gating(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RefLevelHigh(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_RefLevelHigh(static_cast<Deriving*>(this), ReferenceLevelType, val);
	}
	STDMETHODIMP put_RefLevelHigh(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_RefLevelHigh(static_cast<Deriving*>(this), ReferenceLevelType, val);
	}
	STDMETHODIMP get_RefLevelLow(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_RefLevelLow(static_cast<Deriving*>(this), ReferenceLevelType, val);
	}
	STDMETHODIMP put_RefLevelLow(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_RefLevelLow(static_cast<Deriving*>(this), ReferenceLevelType, val);
	}
	STDMETHODIMP get_RefLevelMid(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_RefLevelMid(static_cast<Deriving*>(this), ReferenceLevelType, Number, val);
	}
	STDMETHODIMP put_RefLevelMid(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_RefLevelMid(static_cast<Deriving*>(this), ReferenceLevelType, Number, val);
	}
	STDMETHODIMP get_StatisticsMode(Tkdpo2k3k4kPowerStatisticsModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_StatisticsMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StatisticsMode(Tkdpo2k3k4kPowerStatisticsModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_StatisticsMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StatisticsSamples(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_StatisticsSamples(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StatisticsSamples(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_put_StatisticsSamples(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Quality(ITkdpo2k3k4kPowerAnalysisQuality** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Quality(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SwitchingLoss(ITkdpo2k3k4kPowerAnalysisSwitchingLoss** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_SwitchingLoss(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Harmonics(ITkdpo2k3k4kPowerAnalysisHarmonics** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Harmonics(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Ripple(ITkdpo2k3k4kPowerAnalysisRipple** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Ripple(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Modulation(ITkdpo2k3k4kPowerAnalysisModulation** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_Modulation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SafeOperatingArea(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysis_get_SafeOperatingArea(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysis<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysis;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisQuality
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisQuality : public ITkdpo2k3k4kPowerAnalysisQuality
{
	STDMETHODIMP get_FrequencyReference(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_FrequencyReference(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FrequencyReference(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_put_FrequencyReference(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AllMeasDisplayState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_put_AllMeasDisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MeasDisplayState(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_MeasDisplayState(static_cast<Deriving*>(this), DisplayMeasurement, val);
	}
	STDMETHODIMP put_MeasDisplayState(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_put_MeasDisplayState(static_cast<Deriving*>(this), DisplayMeasurement, val);
	}
	STDMETHODIMP get_ApparentPower(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_ApparentPower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Frequency(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_Frequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ICrestFactor(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_ICrestFactor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PhaseAngle(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_PhaseAngle(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PowerFactor(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_PowerFactor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReactivePower(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_ReactivePower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TruePower(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_TruePower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VRMS(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_VRMS(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IRMS(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_IRMS(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VCrestFactor(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisQuality_get_VCrestFactor(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisQuality<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisQuality;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisSwitchingLoss
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisSwitchingLoss : public ITkdpo2k3k4kPowerAnalysisSwitchingLoss
{
	STDMETHODIMP ConfigureGating(Tkdpo2k3k4kPowerGatingPolarityEnum Polarity, double TurnOn)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ConfigureGating(static_cast<Deriving*>(this), Polarity, TurnOn);
	}
	STDMETHODIMP ReadGating(Tkdpo2k3k4kPowerGatingPolarityEnum* Polarity, double* TurnOn)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadGating(static_cast<Deriving*>(this), Polarity, TurnOn);
	}
	STDMETHODIMP ReadTOffLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOffLosses(static_cast<Deriving*>(this), Type, Mean, Min, Max);
	}
	STDMETHODIMP ReadTOnLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOnLosses(static_cast<Deriving*>(this), Type, Mean, Min, Max);
	}
	STDMETHODIMP ReadTotalLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTotalLosses(static_cast<Deriving*>(this), Type, Mean, Min, Max);
	}
	STDMETHODIMP ReadConductionLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadConductionLosses(static_cast<Deriving*>(this), Type, Mean, Min, Max);
	}
	STDMETHODIMP get_RefLevelLowVoltage(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowVoltage(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP put_RefLevelLowVoltage(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowVoltage(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP get_RefLevelLowCurrent(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowCurrent(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP put_RefLevelLowCurrent(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowCurrent(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP get_ConductionCalculation(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_ConductionCalculation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ConductionCalculation(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_ConductionCalculation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RDSOnValue(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RDSOnValue(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RDSOnValue(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RDSOnValue(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VCESatValue(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_VCESatValue(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VCESatValue(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_VCESatValue(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MeasDisplayType(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_MeasDisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MeasDisplayType(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_MeasDisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberOfCycles(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_NumberOfCycles(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisSwitchingLoss<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisSwitchingLoss;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisHarmonics
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisHarmonics : public ITkdpo2k3k4kPowerAnalysisHarmonics
{
	STDMETHODIMP SetParameters(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference, double FixedReference, long NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_SetParameters(static_cast<Deriving*>(this), FrequencyReference, FixedReference, NumberOfHarmonics, HarmonicsSource);
	}
	STDMETHODIMP GetParameters(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum* FrequencyReference, double* FixedReference, long* NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum* HarmonicsSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_GetParameters(static_cast<Deriving*>(this), FrequencyReference, FixedReference, NumberOfHarmonics, HarmonicsSource);
	}
	STDMETHODIMP ConfigureIEC(Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class, VARIANT_BOOL Filter, double FundamentalCurrent, VARIANT_BOOL Grouping, double InputPower, double LineFrequency, double ObservationPeriod, double PowerFactor)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureIEC(static_cast<Deriving*>(this), Class, Filter, FundamentalCurrent, Grouping, InputPower, LineFrequency, ObservationPeriod, PowerFactor);
	}
	STDMETHODIMP ReadIEC(Tkdpo2k3k4kPowerHarmonicsIECClassEnum* Class, VARIANT_BOOL* Filter, double* FundamentalCurrent, VARIANT_BOOL* Grouping, double* InputPower, double* LineFrequency, double* ObservationPeriod, double* PowerFactor)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_ReadIEC(static_cast<Deriving*>(this), Class, Filter, FundamentalCurrent, Grouping, InputPower, LineFrequency, ObservationPeriod, PowerFactor);
	}
	STDMETHODIMP ConfigureMIL(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating, double UserCurrent, double LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureMIL(static_cast<Deriving*>(this), FundamentalCurrentCalculating, UserCurrent, LineFrequency, PowerLevel);
	}
	STDMETHODIMP ReadMIL(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum* FundamentalCurrentCalculating, double* UserCurrent, double* LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum* PowerLevel)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_ReadMIL(static_cast<Deriving*>(this), FundamentalCurrentCalculating, UserCurrent, LineFrequency, PowerLevel);
	}
	STDMETHODIMP SaveResultsToFile(BSTR Filename)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_SaveResultsToFile(static_cast<Deriving*>(this), Filename);
	}
	STDMETHODIMP get_Standard(Tkdpo2k3k4kPowerHarmonicsStandardEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_Standard(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Standard(Tkdpo2k3k4kPowerHarmonicsStandardEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_put_Standard(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplaySet(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplaySet(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplaySet(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplaySet(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayType(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayType(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_OverallResults(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_OverallResults(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RMSResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_RMSResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_THDFResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDFResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_THDRResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDRResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HarmonicFrequencyResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicFrequencyResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicPhaseResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPhaseResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicAbsoluteMagnitudeResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicAbsoluteMagnitudeResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicPercentageMagnitudeResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPercentageMagnitudeResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HamronicIECMaxResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HamronicIECMaxResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicLimitResult(long Harmonic, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicLimitResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicIECClassALimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECClassALimitResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicIECNormalLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECNormalLimitResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicIECHigherLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECHigherLimitResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_HarmonicMILNormalLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicMILNormalLimitResult(static_cast<Deriving*>(this), Harmonic, val);
	}
	STDMETHODIMP get_IECFundamentalCurrentResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECFundamentalCurrentResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECHarmonic3Result(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic3Result(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECHarmonic5Result(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic5Result(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECPOHCResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHCResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECPOHLResult(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHLResult(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECInputPower(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECInputPower(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IECPowerFactor(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPowerFactor(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisHarmonics<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisHarmonics;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisRipple
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisRipple : public ITkdpo2k3k4kPowerAnalysisRipple
{
	STDMETHODIMP DoVerticalAutoSet()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_DoVerticalAutoSet(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetOffsetToZero()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_SetOffsetToZero(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Source(Tkdpo2k3k4kPowerRippleSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kPowerRippleSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Value(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_Value(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Max(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_Max(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mean(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_Mean(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Min(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_Min(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StandardDeviation(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisRipple_get_StandardDeviation(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisRipple<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisRipple;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisModulation
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisModulation : public ITkdpo2k3k4kPowerAnalysisModulation
{
	STDMETHODIMP get_Source(Tkdpo2k3k4kPowerModulationSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisModulation_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(Tkdpo2k3k4kPowerModulationSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisModulation_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kPowerModulationTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisModulation_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kPowerModulationTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisModulation_put_Type(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisModulation<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisModulation;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kPowerAnalysisSafeOperatingArea
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea : public ITkdpo2k3k4kPowerAnalysisSafeOperatingArea
{
	STDMETHODIMP ConfigureAxes(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double YaxesMax, double YaxesMin, double XaxesMax, double XaxesMin)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureAxes(static_cast<Deriving*>(this), Type, YaxesMax, YaxesMin, XaxesMax, XaxesMin);
	}
	STDMETHODIMP ReadAxes(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double* YaxesMax, double* YaxesMin, double* XaxesMax, double* XaxesMin)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadAxes(static_cast<Deriving*>(this), Type, YaxesMax, YaxesMin, XaxesMax, XaxesMin);
	}
	STDMETHODIMP ConfigureMaskLimits(double MaxVoltage, double MaxCurrent, double MaxPower)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureMaskLimits(static_cast<Deriving*>(this), MaxVoltage, MaxCurrent, MaxPower);
	}
	STDMETHODIMP ReadMaskLimits(double* MaxVoltage, double* MaxCurrent, double* MaxPower)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadMaskLimits(static_cast<Deriving*>(this), MaxVoltage, MaxCurrent, MaxPower);
	}
	STDMETHODIMP SetMaskPoints(SAFEARRAY** Volts, SAFEARRAY** Amps)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_SetMaskPoints(static_cast<Deriving*>(this), Volts, Amps);
	}
	STDMETHODIMP GetMaskPoints(SAFEARRAY** Volts, SAFEARRAY** Amps)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_GetMaskPoints(static_cast<Deriving*>(this), Volts, Amps);
	}
	STDMETHODIMP get_NumberOfPoints(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_NumberOfPoints(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PlotType(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_PlotType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_PlotType(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_PlotType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ActionOnViolation(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ActionOnViolation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ActionOnViolation(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_ActionOnViolation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MaskState(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_MaskState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MaskState(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_MaskState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResultFailureSamples(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultFailureSamples(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResultWaveformsAcquired(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultWaveformsAcquired(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ResultTestState(Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultTestState(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kPowerAnalysisSafeOperatingArea<Tkdpo2k3k4k> _ITkdpo2k3k4kPowerAnalysisSafeOperatingArea;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequency
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequency : public ITkdpo2k3k4kFrequency
{
	STDMETHODIMP get_SpectrumTraceDisplayState(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_SpectrumTraceDisplayState(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP put_SpectrumTraceDisplayState(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_put_SpectrumTraceDisplayState(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP get_RFVsTimeTraceDisplayState(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_RFVsTimeTraceDisplayState(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP put_RFVsTimeTraceDisplayState(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_put_RFVsTimeTraceDisplayState(static_cast<Deriving*>(this), Type, val);
	}
	STDMETHODIMP get_SquelchState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_SquelchState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SquelchState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_put_SquelchState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SquelchThreshold(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_SquelchThreshold(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SquelchThreshold(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_put_SquelchThreshold(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RF(ITkdpo2k3k4kFrequencyRF** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_RF(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberOfAverages(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_NumberOfAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_NumberOfAverages(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_put_NumberOfAverages(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AverageCount(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_AverageCount(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Marker(ITkdpo2k3k4kFrequencyMarker** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_Marker(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trace(ITkdpo2k3k4kFrequencyTrace** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequency_get_Trace(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequency<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequency;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyRF
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyRF : public ITkdpo2k3k4kFrequencyRF
{
	STDMETHODIMP ConfigureVerticalParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double Scale, double Position)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_ConfigureVerticalParameters(static_cast<Deriving*>(this), RFTraceType, Scale, Position);
	}
	STDMETHODIMP ReadVerticalParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double* Scale, double* Position)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_ReadVerticalParameters(static_cast<Deriving*>(this), RFTraceType, Scale, Position);
	}
	STDMETHODIMP ConfigureManualDetectionMethod(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_ConfigureManualDetectionMethod(static_cast<Deriving*>(this), Type, Method);
	}
	STDMETHODIMP ReadManualDetectionMethod(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum* Method)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_ReadManualDetectionMethod(static_cast<Deriving*>(this), Type, Method);
	}
	STDMETHODIMP get_SpectogramState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_SpectogramState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SpectogramState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_put_SpectogramState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpectogramNumberOfSlices(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_SpectogramNumberOfSlices(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpectogramSelectSlice(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_SpectogramSelectSlice(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SpectogramSelectSlice(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_put_SpectogramSelectSlice(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DetectionMode(Tkdpo2k3k4kFrequencyRFDetectionModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_DetectionMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DetectionMode(Tkdpo2k3k4kFrequencyRFDetectionModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_put_DetectionMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpectrumMode(Tkdpo2k3k4kFrequencySpectrumModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_SpectrumMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SpectrumMode(Tkdpo2k3k4kFrequencySpectrumModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_put_SpectrumMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FrequencyAndSpan(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_FrequencyAndSpan(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Amplitude(ITkdpo2k3k4kFrequencyRFAmplitude** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_Amplitude(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Bandwidth(ITkdpo2k3k4kFrequencyRFBandwidth** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRF_get_Bandwidth(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequencyRF<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyRF;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyRFFrequencyAndSpan
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan : public ITkdpo2k3k4kFrequencyRFFrequencyAndSpan
{
	STDMETHODIMP get_CenterFrequency(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_CenterFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CenterFrequency(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_CenterFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Span(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Span(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Span(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Span(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Start(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Start(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Start(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Start(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Stop(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Stop(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Stop(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Stop(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequencyRFFrequencyAndSpan<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyRFFrequencyAndSpan;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyRFAmplitude
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyRFAmplitude : public ITkdpo2k3k4kFrequencyRFAmplitude
{
	STDMETHODIMP SetAutoRefLevel()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_SetAutoRefLevel(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_ReferenceLevel(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_get_ReferenceLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceLevel(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_put_ReferenceLevel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalPosition(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalPosition(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalUnits(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalUnits(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalUnits(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequencyRFAmplitude<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyRFAmplitude;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyRFBandwidth
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyRFBandwidth : public ITkdpo2k3k4kFrequencyRFBandwidth
{
	STDMETHODIMP get_RBWMode(Tkdpo2k3k4kFrequencyRBWModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_get_RBWMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RBWMode(Tkdpo2k3k4kFrequencyRBWModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_put_RBWMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RBW(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_get_RBW(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RBW(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_put_RBW(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpanRBWRatio(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_get_SpanRBWRatio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SpanRBWRatio(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_put_SpanRBWRatio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Window(Tkdpo2k3k4kFrequencyRFWindowEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_get_Window(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Window(Tkdpo2k3k4kFrequencyRFWindowEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyRFBandwidth_put_Window(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequencyRFBandwidth<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyRFBandwidth;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMeasurementsFrequency
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMeasurementsFrequency : public ITkdpo2k3k4kMeasurementsFrequency
{
	STDMETHODIMP ConfigureChannelPower(double Bandwidth)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ConfigureChannelPower(static_cast<Deriving*>(this), Bandwidth);
	}
	STDMETHODIMP ReadChannelPower(double* Bandwidth, double* Power)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ReadChannelPower(static_cast<Deriving*>(this), Bandwidth, Power);
	}
	STDMETHODIMP ConfigureACPR(long AdjacentChannels, double ChannelBandwidth, double ChannelSpacing)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ConfigureACPR(static_cast<Deriving*>(this), AdjacentChannels, ChannelBandwidth, ChannelSpacing);
	}
	STDMETHODIMP ReadACPR(long* AdjacentChannels, double* ChannelBandwidth, double* ChannelSpacing, double* Power, double* LowerArea1Ratio, double* LowerArea2Ratio, double* LowerArea3Ratio, double* UpperArea1Ratio, double* UpperArea2Ratio, double* UpperArea3Ratio)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ReadACPR(static_cast<Deriving*>(this), AdjacentChannels, ChannelBandwidth, ChannelSpacing, Power, LowerArea1Ratio, LowerArea2Ratio, LowerArea3Ratio, UpperArea1Ratio, UpperArea2Ratio, UpperArea3Ratio);
	}
	STDMETHODIMP ConfigureOBW(double AnalysisBandwidth, double PercentageDown)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ConfigureOBW(static_cast<Deriving*>(this), AnalysisBandwidth, PercentageDown);
	}
	STDMETHODIMP ReadOBW(double* AnalysisBandwidth, double* PercentageDown, double* LowerFrequency, double* UpperFrequency, double* Power)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_ReadOBW(static_cast<Deriving*>(this), AnalysisBandwidth, PercentageDown, LowerFrequency, UpperFrequency, Power);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementsFrequency_put_Type(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMeasurementsFrequency<Tkdpo2k3k4k> _ITkdpo2k3k4kMeasurementsFrequency;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyMarker
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyMarker : public ITkdpo2k3k4kFrequencyMarker
{
	STDMETHODIMP MoveRefToCentre()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_MoveRefToCentre(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ReadReference(double* Frequency, double* Amplitude)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_ReadReference(static_cast<Deriving*>(this), Frequency, Amplitude);
	}
	STDMETHODIMP ReadManual(long Marker, double* HorizontalValue, double* HorizontalDelta, double* VerticalValue, double* VerticalDelta)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_ReadManual(static_cast<Deriving*>(this), Marker, HorizontalValue, HorizontalDelta, VerticalValue, VerticalDelta);
	}
	STDMETHODIMP ConfigureManual(long Marker, double HorizontalValue)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_ConfigureManual(static_cast<Deriving*>(this), Marker, HorizontalValue);
	}
	STDMETHODIMP ConfigurePeak(long MaximumMarkers, double Threshold, double Excursion)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_ConfigurePeak(static_cast<Deriving*>(this), MaximumMarkers, Threshold, Excursion);
	}
	STDMETHODIMP ReadPeak(VARIANT_BOOL* State, long* MaximumMarkers, double* Threshold, double* Excursion)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_ReadPeak(static_cast<Deriving*>(this), State, MaximumMarkers, Threshold, Excursion);
	}
	STDMETHODIMP get_ManualState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_get_ManualState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ManualState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_put_ManualState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyMarker_put_Type(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kFrequencyMarker<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyMarker;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kFrequencyTrace
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kFrequencyTrace : public ITkdpo2k3k4kFrequencyTrace
{
	STDMETHODIMP FetchY(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyTrace_FetchY(static_cast<Deriving*>(this), Source, TraceArray, InitialX, XIncrement);
	}
	STDMETHODIMP ReadY(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kFrequencyTrace_ReadY(static_cast<Deriving*>(this), Source, TraceArray, InitialX, XIncrement);
	}
};

typedef __ITkdpo2k3k4kFrequencyTrace<Tkdpo2k3k4k> _ITkdpo2k3k4kFrequencyTrace;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kChannel
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kChannel : public ITkdpo2k3k4kChannel
{
	STDMETHODIMP Configure(double Position, double Scale, double Offset, double Deskew, Tkdpo2k3k4kChannelCouplingEnum Coupling, Tkdpo2k3k4kChannelTerminationEnum Termination, Tkdpo2k3k4kChannelBandwidthEnum Bandwidth, VARIANT_BOOL DisplayState)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_Configure(static_cast<Deriving*>(this), Position, Scale, Offset, Deskew, Coupling, Termination, Bandwidth, DisplayState);
	}
	STDMETHODIMP Read(double* Position, double* Scale, double* Offset, double* Deskew, Tkdpo2k3k4kChannelCouplingEnum* Coupling, Tkdpo2k3k4kChannelTerminationEnum* Termination, double* Bandwidth, VARIANT_BOOL* DisplayState)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_Read(static_cast<Deriving*>(this), Position, Scale, Offset, Deskew, Coupling, Termination, Bandwidth, DisplayState);
	}
	STDMETHODIMP ReadProbeDetails(BSTR* Type, double* Resistance, double* Gain, BSTR* SerialNumber, BSTR* Unit, double* ExternalAttenuation, double* ExternalAttenuationDB, Tkdpo2k3k4kChannelCalibrationEnum* Calibration)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_ReadProbeDetails(static_cast<Deriving*>(this), Type, Resistance, Gain, SerialNumber, Unit, ExternalAttenuation, ExternalAttenuationDB, Calibration);
	}
	STDMETHODIMP SetAllDeskewsToRecommendedValues()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_SetAllDeskewsToRecommendedValues(static_cast<Deriving*>(this));
	}
	STDMETHODIMP InvertWaveform()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_InvertWaveform(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetTekVPIProbeAutoZero()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_SetTekVPIProbeAutoZero(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetTekVPIProbeCommand(BSTR Command, BSTR State)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_SetTekVPIProbeCommand(static_cast<Deriving*>(this), Command, State);
	}
	STDMETHODIMP SetTekVPIProbeDegauss()
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_SetTekVPIProbeDegauss(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Bandwidth(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Bandwidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Bandwidth(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Bandwidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BandwidthEnum(Tkdpo2k3k4kChannelBandwidthEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_BandwidthEnum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Coupling(Tkdpo2k3k4kChannelCouplingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Coupling(Tkdpo2k3k4kChannelCouplingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Deskew(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Deskew(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Deskew(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Deskew(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LabelName(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_LabelName(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_LabelName(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_LabelName(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Offset(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Offset(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeGain(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeGain(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeResistance(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeResistance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeSerialNumber(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeSerialNumber(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeType(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TerminationEnum(Tkdpo2k3k4kChannelTerminationEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_TerminationEnum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_ProbeSignal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_ProbeSignal(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AmpsViaVoltsState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_AmpsViaVoltsState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AmpsViaVoltsState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_AmpsViaVoltsState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AmpsViaVoltsFactor(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_AmpsViaVoltsFactor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_AmpsViaVoltsFactor(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_AmpsViaVoltsFactor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Impedance(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Impedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Impedance(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Impedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalSensitivity(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_VerticalSensitivity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalSensitivity(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_VerticalSensitivity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Yunits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Yunits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Yunits(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_Yunits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TekVPIProbeDegaussState(Tkdpo2k3k4kProbeDegaussStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_TekVPIProbeDegaussState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TekVPIProbeRange(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_TekVPIProbeRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TekVPIProbeRange(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_TekVPIProbeRange(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Termination(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_Termination(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InvertState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_get_InvertState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InvertState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kChannel_put_InvertState(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kChannel<Tkdpo2k3k4kChannel> _ITkdpo2k3k4kChannel;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeMeasurement
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeMeasurement : public IIviScopeMeasurement
{
	STDMETHODIMP FetchWaveform(SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_FetchWaveform(static_cast<Deriving*>(this), WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP FetchWaveformMeasurement(IviScopeMeasurementEnum MeasFunction, double* Measurement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_FetchWaveformMeasurement(static_cast<Deriving*>(this), MeasFunction, Measurement);
	}
	STDMETHODIMP FetchWaveformMinMax(SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_FetchWaveformMinMax(static_cast<Deriving*>(this), MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
	STDMETHODIMP ReadWaveform(long MaxTimeMilliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_ReadWaveform(static_cast<Deriving*>(this), MaxTimeMilliseconds, WaveformArray, InitialX, XIncrement);
	}
	STDMETHODIMP ReadWaveformMeasurement(IviScopeMeasurementEnum MeasFunction, long MaxTimeMilliseconds, double* Measurement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_ReadWaveformMeasurement(static_cast<Deriving*>(this), MeasFunction, MaxTimeMilliseconds, Measurement);
	}
	STDMETHODIMP ReadWaveformMinMax(long MaxTimeMilliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
	{
		return ForwardingShimImpl::IIviScopeMeasurement_ReadWaveformMinMax(static_cast<Deriving*>(this), MaxTimeMilliseconds, MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
};

typedef __IIviScopeMeasurement<Tkdpo2k3k4kChannel> _IIviScopeMeasurement;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviScopeChannel
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviScopeChannel : public IIviScopeChannel
{
	STDMETHODIMP Configure(double Range, double Offset, IviScopeVerticalCouplingEnum Coupling, double ProbeAttenuation, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IIviScopeChannel_Configure(static_cast<Deriving*>(this), Range, Offset, Coupling, ProbeAttenuation, Enabled);
	}
	STDMETHODIMP ConfigureCharacteristics(double InputImpedance, double InputFrequencyMax)
	{
		return ForwardingShimImpl::IIviScopeChannel_ConfigureCharacteristics(static_cast<Deriving*>(this), InputImpedance, InputFrequencyMax);
	}
	STDMETHODIMP get_ProbeSense(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_ProbeSense(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Coupling(IviScopeVerticalCouplingEnum* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Coupling(IviScopeVerticalCouplingEnum val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_Coupling(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Enabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Enabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InputFrequencyMax(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_InputFrequencyMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InputFrequencyMax(double val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_InputFrequencyMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InputImpedance(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_InputImpedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InputImpedance(double val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_InputImpedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Offset(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Offset(double val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ProbeAttenuation(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_ProbeAttenuation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ProbeAttenuation(double val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_ProbeAttenuation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Range(double* val)
	{
		return ForwardingShimImpl::IIviScopeChannel_get_Range(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Range(double val)
	{
		return ForwardingShimImpl::IIviScopeChannel_put_Range(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviScopeChannel<Tkdpo2k3k4kChannel> _IIviScopeChannel;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kBus
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kBus : public ITkdpo2k3k4kBus
{
	STDMETHODIMP ConfigureI2C(Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureI2C(static_cast<Deriving*>(this), ClockSource, DataSource, RWInAddress);
	}
	STDMETHODIMP ReadI2C(Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum* RWInAddress)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadI2C(static_cast<Deriving*>(this), ClockSource, DataSource, RWInAddress);
	}
	STDMETHODIMP ConfigureAudioInputs(Tkdpo2k3k4kAudioBusTypeEnum Type, Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusSourceEnum WordSelectSource, Tkdpo2k3k4kBusSourceEnum FrameSyncSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureAudioInputs(static_cast<Deriving*>(this), Type, ClockSource, DataSource, WordSelectSource, FrameSyncSource);
	}
	STDMETHODIMP ReadAudioInputs(Tkdpo2k3k4kAudioBusTypeEnum* Type, Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusSourceEnum* WordSelectSource, Tkdpo2k3k4kBusSourceEnum* FrameSyncSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadAudioInputs(static_cast<Deriving*>(this), Type, ClockSource, DataSource, WordSelectSource, FrameSyncSource);
	}
	STDMETHODIMP ConfigureAudio(long BitDelay, Tkdpo2k3k4kBusBitOrderEnum BitOrder, long BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity, long BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity, long ChannelsPerFrame)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureAudio(static_cast<Deriving*>(this), BitDelay, BitOrder, BitsPerChannel, ClockPolarity, DataPolarity, BitsPerWord, DisplayFormat, FrameSyncPolarity, WordSelectPolarity, ChannelsPerFrame);
	}
	STDMETHODIMP ReadAudio(long* BitDelay, Tkdpo2k3k4kBusBitOrderEnum* BitOrder, long* BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum* ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* DataPolarity, long* BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum* DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum* FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* WordSelectPolarity, long* ChannelsPerFrame)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadAudio(static_cast<Deriving*>(this), BitDelay, BitOrder, BitsPerChannel, ClockPolarity, DataPolarity, BitsPerWord, DisplayFormat, FrameSyncPolarity, WordSelectPolarity, ChannelsPerFrame);
	}
	STDMETHODIMP ConfigureCAN(Tkdpo2k3k4kBusSourceEnum Source, long SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum SignalType, long BitRate)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureCAN(static_cast<Deriving*>(this), Source, SamplePoint, SignalType, BitRate);
	}
	STDMETHODIMP ReadCAN(Tkdpo2k3k4kBusSourceEnum* Source, long* SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum* SignalType, long* BitRate)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadCAN(static_cast<Deriving*>(this), Source, SamplePoint, SignalType, BitRate);
	}
	STDMETHODIMP ConfigureFlexray(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kFlexrayChannelEnum IDFormat, Tkdpo2k3k4kFlexraySignalEnum Standard, long BitRate)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureFlexray(static_cast<Deriving*>(this), Source, IDFormat, Standard, BitRate);
	}
	STDMETHODIMP ReadFlexray(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kFlexrayChannelEnum* IDFormat, Tkdpo2k3k4kFlexraySignalEnum* Standard, long* BitRate)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadFlexray(static_cast<Deriving*>(this), Source, IDFormat, Standard, BitRate);
	}
	STDMETHODIMP ConfigureLIN(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kLINIDFormatEnum IDFormat, long BitRate, Tkdpo2k3k4kLINPolarityEnum Polarity, long SamplePoint, Tkdpo2k3k4kLINStandardEnum Standard)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureLIN(static_cast<Deriving*>(this), Source, IDFormat, BitRate, Polarity, SamplePoint, Standard);
	}
	STDMETHODIMP ReadLIN(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kLINIDFormatEnum* IDFormat, long* BitRate, Tkdpo2k3k4kLINPolarityEnum* Polarity, long* SamplePoint, Tkdpo2k3k4kLINStandardEnum* Standard)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadLIN(static_cast<Deriving*>(this), Source, IDFormat, BitRate, Polarity, SamplePoint, Standard);
	}
	STDMETHODIMP ConfigureSPI(Tkdpo2k3k4kBusSourceEnum Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity, long DataSize, Tkdpo2k3k4kBusSourceEnum DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder, Tkdpo2k3k4kBusSourceEnum SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureSPI(static_cast<Deriving*>(this), Clocksource, ClockPolarity, DataSize, DataMISOSource, DataMISOPolarity, BitOrder, SlaveSelectSource, SlaveSelectPolarity, DataMOSISource, DataMOSIPolarity);
	}
	STDMETHODIMP ReadSPI(Tkdpo2k3k4kBusSourceEnum* Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum* ClockPolarity, long* DataSize, Tkdpo2k3k4kBusSourceEnum* DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum* BitOrder, Tkdpo2k3k4kBusSourceEnum* SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum* SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum* DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMOSIPolarity)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadSPI(static_cast<Deriving*>(this), Clocksource, ClockPolarity, DataSize, DataMISOSource, DataMISOPolarity, BitOrder, SlaveSelectSource, SlaveSelectPolarity, DataMOSISource, DataMOSIPolarity);
	}
	STDMETHODIMP ConfigureRS232(Tkdpo2k3k4kBusSourceEnum RXSource, Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity, double Bitrate, long DataBits, Tkdpo2k3k4kBusRS232ParityEnum InputParity, Tkdpo2k3k4kBusSourceEnum TXSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureRS232(static_cast<Deriving*>(this), RXSource, InputPolarity, Bitrate, DataBits, InputParity, TXSource);
	}
	STDMETHODIMP ReadRS232(Tkdpo2k3k4kBusSourceEnum* RXSource, Tkdpo2k3k4kBusRS232PolarityEnum* InputPolarity, double* Bitrate, long* DataBits, Tkdpo2k3k4kBusRS232ParityEnum* InputParity, Tkdpo2k3k4kBusSourceEnum* TXSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadRS232(static_cast<Deriving*>(this), RXSource, InputPolarity, Bitrate, DataBits, InputParity, TXSource);
	}
	STDMETHODIMP ReadUSB(Tkdpo2k3k4kBusSourceEnum* DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum* Probe, Tkdpo2k3k4kBusUSBBitrateEnum* Bitrate, Tkdpo2k3k4kBusSourceEnum* DPLUSSource, Tkdpo2k3k4kBusSourceEnum* DMINUSSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ReadUSB(static_cast<Deriving*>(this), DifferentialSource, Probe, Bitrate, DPLUSSource, DMINUSSource);
	}
	STDMETHODIMP ConfigureUSB(Tkdpo2k3k4kBusSourceEnum DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum Probe, Tkdpo2k3k4kBusUSBBitrateEnum Bitrate, Tkdpo2k3k4kBusSourceEnum DPLUSSource, Tkdpo2k3k4kBusSourceEnum DMINUSSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_ConfigureUSB(static_cast<Deriving*>(this), DifferentialSource, Probe, Bitrate, DPLUSSource, DMINUSSource);
	}
	STDMETHODIMP GetLowThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_GetLowThresholdChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP GetThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_GetThresholdChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP SetLowThreshholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_SetLowThreshholdChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP SetThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_SetThresholdChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP SetThresholdDigitalChannel(Tkdpo2k3k4kDigitalChannelEnum InputSource, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_SetThresholdDigitalChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP GetThresholdDigitalChannel(Tkdpo2k3k4kDigitalChannelEnum InputSource, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_GetThresholdDigitalChannel(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP SetUpperThreshhold(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_SetUpperThreshhold(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP GetUpperThreshhold(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_GetUpperThreshhold(static_cast<Deriving*>(this), InputSource, Threshold);
	}
	STDMETHODIMP SaveEventTable(BSTR Filename)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_SaveEventTable(static_cast<Deriving*>(this), Filename);
	}
	STDMETHODIMP put_CANBitRateEnum(Tkdpo2k3k4kCANBitRateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_CANBitRateEnum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Label(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Label(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kBusTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kBusTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(Tkdpo2k3k4kBusStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(Tkdpo2k3k4kBusStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayType(Tkdpo2k3k4kBusDisplayTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_DisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayType(Tkdpo2k3k4kBusDisplayTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_DisplayType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IsClockedParallelBus(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_IsClockedParallelBus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_IsClockedParallelBus(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_IsClockedParallelBus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayFormat(Tkdpo2k3k4kBusDisplayFormatEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_DisplayFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayFormat(Tkdpo2k3k4kBusDisplayFormatEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_DisplayFormat(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ParallelBusClockSource(Tkdpo2k3k4kBusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_ParallelBusClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ParallelBusClockSource(Tkdpo2k3k4kBusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_ParallelBusClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ParallelBusClockEdge(Tkdpo2k3k4kBusParallelBusClockEdgeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_ParallelBusClockEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ParallelBusClockEdge(Tkdpo2k3k4kBusParallelBusClockEdgeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_ParallelBusClockEdge(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232Delimiter(Tkdpo2k3k4kBusRS232DelimiterEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_RS232Delimiter(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RS232Delimiter(Tkdpo2k3k4kBusRS232DelimiterEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_RS232Delimiter(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232DisplayMode(Tkdpo2k3k4kBusRS232DisplayModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_RS232DisplayMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RS232DisplayMode(Tkdpo2k3k4kBusRS232DisplayModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_RS232DisplayMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232TXSource(Tkdpo2k3k4kBusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_RS232TXSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RS232TXSource(Tkdpo2k3k4kBusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_RS232TXSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232RXSource(Tkdpo2k3k4kBusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_RS232RXSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RS232RXSource(Tkdpo2k3k4kBusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_RS232RXSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ParallelBitSource(long Bit, Tkdpo2k3k4kBusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_ParallelBitSource(static_cast<Deriving*>(this), Bit, val);
	}
	STDMETHODIMP put_ParallelBitSource(long Bit, Tkdpo2k3k4kBusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_ParallelBitSource(static_cast<Deriving*>(this), Bit, val);
	}
	STDMETHODIMP get_ParallelWidth(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_ParallelWidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ParallelWidth(long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_ParallelWidth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SPIFraming(Tkdpo2k3k4kBusSPIFramingEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_SPIFraming(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SPIFraming(Tkdpo2k3k4kBusSPIFramingEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_SPIFraming(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SPIIdleTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_get_SPIIdleTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SPIIdleTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kBus_put_SPIIdleTime(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kBus<Tkdpo2k3k4kBus> _ITkdpo2k3k4kBus;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMath
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMath : public ITkdpo2k3k4kMath
{
	STDMETHODIMP Configure(BSTR Expression, double VerticalPosition, double VerticalScale, double HorizontalPosition, double HorizontalScale, VARIANT_BOOL DisplayState, Tkdpo2k3k4kMathTypeEnum Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_Configure(static_cast<Deriving*>(this), Expression, VerticalPosition, VerticalScale, HorizontalPosition, HorizontalScale, DisplayState, Type);
	}
	STDMETHODIMP Read(BSTR* Expression, double* VerticalPosition, double* VerticalScale, BSTR* VerticalUnits, double* HorizontalPosition, double* HorizontalScale, BSTR* HorizontalUnits, VARIANT_BOOL* DisplayState, Tkdpo2k3k4kMathTypeEnum* Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_Read(static_cast<Deriving*>(this), Expression, VerticalPosition, VerticalScale, VerticalUnits, HorizontalPosition, HorizontalScale, HorizontalUnits, DisplayState, Type);
	}
	STDMETHODIMP get_DisplayState(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayState(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_DisplayState(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Expression(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_Expression(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Expression(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_Expression(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Label(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Label(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MathVariable(long Variable, double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_MathVariable(static_cast<Deriving*>(this), Variable, val);
	}
	STDMETHODIMP put_MathVariable(long Variable, double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_MathVariable(static_cast<Deriving*>(this), Variable, val);
	}
	STDMETHODIMP get_HorizontalPosition(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_HorizontalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HorizontalPosition(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_HorizontalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_HorizontalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HorizontalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_HorizontalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_HorizontalUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalPosition(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_VerticalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalPosition(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_VerticalPosition(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalUnits(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_VerticalUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kMathTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kMathTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Spectral(ITkdpo2k3k4kMathSpectral** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMath_get_Spectral(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMath<Tkdpo2k3k4kMath> _ITkdpo2k3k4kMath;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMathSpectral
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMathSpectral : public ITkdpo2k3k4kMathSpectral
{
	STDMETHODIMP GetEndPointGatingIndicator(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_GetEndPointGatingIndicator(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP GetStartPointGatingIndicator(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_GetStartPointGatingIndicator(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP GetNyquistFrequency(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_GetNyquistFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DisplayGatingIndicators(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_get_DisplayGatingIndicators(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DisplayGatingIndicators(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_put_DisplayGatingIndicators(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Window(Tkdpo2k3k4kSpectralWindowEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_get_Window(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Window(Tkdpo2k3k4kSpectralWindowEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_put_Window(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_MagnitudeUnits(Tkdpo2k3k4kSpectralMagUnitEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_get_MagnitudeUnits(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_MagnitudeUnits(Tkdpo2k3k4kSpectralMagUnitEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMathSpectral_put_MagnitudeUnits(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMathSpectral<Tkdpo2k3k4kMath> _ITkdpo2k3k4kMathSpectral;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kMeasurementSlot
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kMeasurementSlot : public ITkdpo2k3k4kMeasurementSlot
{
	STDMETHODIMP Configure(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_Configure(static_cast<Deriving*>(this), Source, Type);
	}
	STDMETHODIMP ConfigureDelay(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_ConfigureDelay(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2);
	}
	STDMETHODIMP ConfigurePhase(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_ConfigurePhase(static_cast<Deriving*>(this), Source1, Source2);
	}
	STDMETHODIMP Read(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_Read(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2, Type);
	}
	STDMETHODIMP ReadValue(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_ReadValue(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2, Type, Val, Unit);
	}
	STDMETHODIMP ReadDelay(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_ReadDelay(static_cast<Deriving*>(this), Source1, Source2, Direction, Edge1, Edge2);
	}
	STDMETHODIMP get_Count(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_DelayDirection(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_DelayDirection(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_DelayEdge1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_DelayEdge1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_DelayEdge2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_DelayEdge2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Maximum(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Maximum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mean(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Mean(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Minimum(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Minimum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source1(Tkdpo2k3k4kSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Source1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source1(Tkdpo2k3k4kSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_Source1(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source2(Tkdpo2k3k4kSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Source2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source2(Tkdpo2k3k4kSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_Source2(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StandardDeviation(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_StandardDeviation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Type(Tkdpo2k3k4kMeasurementTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Type(Tkdpo2k3k4kMeasurementTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_put_Type(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Units(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Units(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Value(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kMeasurementSlot_get_Value(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kMeasurementSlot<Tkdpo2k3k4kMeasurementSlot> _ITkdpo2k3k4kMeasurementSlot;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearch
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearch : public ITkdpo2k3k4kSearch
{
	STDMETHODIMP Copy(Tkdpo2k3k4kSearchCopyEnum Type)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_Copy(static_cast<Deriving*>(this), Type);
	}
	STDMETHODIMP ConfigureEdge(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum Slope)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureEdge(static_cast<Deriving*>(this), Level, Source, Slope);
	}
	STDMETHODIMP ConfigureRunt(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerRuntConditionEnum When, Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity, double Width)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureRunt(static_cast<Deriving*>(this), Source, When, Polarity, Width);
	}
	STDMETHODIMP ConfigureSetupHold(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum ClockEdge, Tkdpo2k3k4kSearchSource3Enum ClockSource, double HoldTime, double SetTime, double ClockLevel)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureSetupHold(static_cast<Deriving*>(this), Level, Source, ClockEdge, ClockSource, HoldTime, SetTime, ClockLevel);
	}
	STDMETHODIMP ConfigureTransition(Tkdpo2k3k4kSearchSource2Enum Source, double DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum When, Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureTransition(static_cast<Deriving*>(this), Source, DeltaTime, When, Polarity);
	}
	STDMETHODIMP ConfigurePulseWidth(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity, double HighLimit, double LowLimit)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigurePulseWidth(static_cast<Deriving*>(this), Level, Source, Condition, Polarity, HighLimit, LowLimit);
	}
	STDMETHODIMP ReadEdge(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* Slope)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadEdge(static_cast<Deriving*>(this), Level, Source, Slope);
	}
	STDMETHODIMP ReadRunt(Tkdpo2k3k4kSearchSource2Enum* Source, Tkdpo2k3k4kTriggerRuntConditionEnum* When, Tkdpo2k3k4kTriggerRuntPolarityEnum* Polarity, double* Width)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadRunt(static_cast<Deriving*>(this), Source, When, Polarity, Width);
	}
	STDMETHODIMP ReadSetupHold(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* ClockEdge, Tkdpo2k3k4kSearchSource3Enum* Clocksource, double* HoldTime, double* SetTime, double* ClockLevel)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadSetupHold(static_cast<Deriving*>(this), Level, Source, ClockEdge, Clocksource, HoldTime, SetTime, ClockLevel);
	}
	STDMETHODIMP ReadPulseWidth(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum* Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum* Polarity)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadPulseWidth(static_cast<Deriving*>(this), Level, Source, Condition, Polarity);
	}
	STDMETHODIMP ReadTransition(Tkdpo2k3k4kSearchSource2Enum* Source, double* DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum* When, Tkdpo2k3k4kTriggerPulsePolarityEnum* Polarity)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadTransition(static_cast<Deriving*>(this), Source, DeltaTime, When, Polarity);
	}
	STDMETHODIMP ConfigureLogicSearchSource(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureLogicSearchSource(static_cast<Deriving*>(this), Source, Input, Threshold, PatternInput);
	}
	STDMETHODIMP ReadLogicSearchSource(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum* PatternInput)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadLogicSearchSource(static_cast<Deriving*>(this), Source, Input, Threshold, PatternInput);
	}
	STDMETHODIMP ConfigureLogicPattern(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum PatternType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureLogicPattern(static_cast<Deriving*>(this), Condition, LessLimit, MoreLimit, PatternType);
	}
	STDMETHODIMP ReadLogicPattern(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum* PatternType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadLogicPattern(static_cast<Deriving*>(this), Condition, LessLimit, MoreLimit, PatternType);
	}
	STDMETHODIMP ConfigureLogicClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureLogicClock(static_cast<Deriving*>(this), Source, EdgeType);
	}
	STDMETHODIMP ReadLogicClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadLogicClock(static_cast<Deriving*>(this), Source, EdgeType);
	}
	STDMETHODIMP ReadSetupHoldSearchSource(Tkdpo2k3k4kSearchSource3Enum* Clocksource, Tkdpo2k3k4kSearchSource3Enum* DataSource)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadSetupHoldSearchSource(static_cast<Deriving*>(this), Clocksource, DataSource);
	}
	STDMETHODIMP ConfigureAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureAIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ReadAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadAIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ConfigureARFIndependentParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double Level, double UpperThreshold, double LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ConfigureARFIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP ReadARFIndependentParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_ReadARFIndependentParameters(static_cast<Deriving*>(this), Source, Level, UpperThreshold, LowerThreshold);
	}
	STDMETHODIMP get_SearchType(Tkdpo2k3k4kSearchTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_get_SearchType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SearchType(Tkdpo2k3k4kSearchTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_put_SearchType(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(Tkdpo2k3k4kSearchStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(Tkdpo2k3k4kSearchStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Total(long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_get_Total(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Bus(ITkdpo2k3k4kSearchBus** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearch_get_Bus(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kSearch<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearch;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBus
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBus : public ITkdpo2k3k4kSearchBus
{
	STDMETHODIMP Configure(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kBusTypeEnum BusType)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_Configure(static_cast<Deriving*>(this), BusSource, BusType);
	}
	STDMETHODIMP get_BusSource(Tkdpo2k3k4kTrigABusSourceEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_BusSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_BusSource(Tkdpo2k3k4kTrigABusSourceEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_put_BusSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_ParallelData(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_put_ParallelData(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Audio(ITkdpo2k3k4kSearchBusAudio** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_Audio(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_USB(ITkdpo2k3k4kSearchBusUSB** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_USB(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SPI(ITkdpo2k3k4kSearchBusSPI** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_SPI(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RS232(ITkdpo2k3k4kSearchBusRS232** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_RS232(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LIN(ITkdpo2k3k4kSearchBusLIN** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_LIN(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_I2C(ITkdpo2k3k4kSearchBusI2C** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_I2C(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Flexray(ITkdpo2k3k4kSearchBusFlexray** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_Flexray(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CAN(ITkdpo2k3k4kSearchBusCAN** val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBus_get_CAN(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kSearchBus<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBus;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusAudio
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusAudio : public ITkdpo2k3k4kSearchBusAudio
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_get_DataWord(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusAudio_put_DataWord(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusAudio<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusAudio;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusUSB
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusUSB : public ITkdpo2k3k4kSearchBusUSB
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_DataOffset(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_Qualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_Qualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_DataType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_DataType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_AddressHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_AddressHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_EndPointValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_EndPointValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_HandshakeType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_HandshakeType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_SOFFrameNumber(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_SOFFrameNumber(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_SpecialType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_SpecialType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_get_TokenType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusUSB_put_TokenType(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusUSB<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusUSB;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusSPI
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusSPI : public ITkdpo2k3k4kSearchBusSPI
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_get_DataINValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_put_DataINValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_get_DataOUTValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusSPI_put_DataOUTValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusSPI<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusSPI;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusRS232
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusRS232 : public ITkdpo2k3k4kSearchBusRS232
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_get_RXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_put_RXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_get_RXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_put_RXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_get_TXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_put_TXDataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_get_TXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusRS232_put_TXDataValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusRS232<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusRS232;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusLIN
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusLIN : public ITkdpo2k3k4kSearchBusLIN
{
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_DataHighValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_get_IdentifierValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusLIN_put_IdentifierValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusLIN<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusLIN;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusI2C
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusI2C : public ITkdpo2k3k4kSearchBusI2C
{
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_get_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusI2C_put_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusI2C<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusI2C;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusFlexray
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusFlexray : public ITkdpo2k3k4kSearchBusFlexray
{
	STDMETHODIMP ConfigureCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ConfigureCycleCount(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ReadCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ReadCycleCount(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ConfigureData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ConfigureData(static_cast<Deriving*>(this), BusSource, HighValue, Offset, Qualifier, Size, Value);
	}
	STDMETHODIMP ReadData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ReadData(static_cast<Deriving*>(this), BusSource, HighValue, Offset, Qualifier, Size, Value);
	}
	STDMETHODIMP ConfigureFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ConfigureFrameID(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ReadFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ReadFrameID(static_cast<Deriving*>(this), BusSource, HighValue, Qualifier, Value);
	}
	STDMETHODIMP ConfigureHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ConfigureHeader(static_cast<Deriving*>(this), BusSource, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);
	}
	STDMETHODIMP ReadHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_ReadHeader(static_cast<Deriving*>(this), BusSource, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);
	}
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_get_EOFType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_put_EOFType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_get_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_put_ErrorType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_get_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusFlexray_put_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusFlexray<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusFlexray;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kSearchBusCAN
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kSearchBusCAN : public ITkdpo2k3k4kSearchBusCAN
{
	STDMETHODIMP get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_Condition(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_DataQualifier(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_DataValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_DataDirection(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_DataSize(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_FrameType(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_AddressMode(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_get_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
	STDMETHODIMP put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kSearchBusCAN_put_AddressValue(static_cast<Deriving*>(this), BusSource, val);
	}
};

typedef __ITkdpo2k3k4kSearchBusCAN<Tkdpo2k3k4kSearch> _ITkdpo2k3k4kSearchBusCAN;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kReference
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kReference : public ITkdpo2k3k4kReference
{
	STDMETHODIMP Configure(double Position, double VerticalScale, double HorizontalScale, VARIANT_BOOL DisplayState, double HorizontalDelayTime)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_Configure(static_cast<Deriving*>(this), Position, VerticalScale, HorizontalScale, DisplayState, HorizontalDelayTime);
	}
	STDMETHODIMP Read(double* Position, double* VerticalScale, double* HorizontalScale, VARIANT_BOOL* DisplayState, double* HorizontalDelayTime)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_Read(static_cast<Deriving*>(this), Position, VerticalScale, HorizontalScale, DisplayState, HorizontalDelayTime);
	}
	STDMETHODIMP GetDateTime(BSTR* Date, BSTR* Time)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_GetDateTime(static_cast<Deriving*>(this), Date, Time);
	}
	STDMETHODIMP get_HorizontalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_get_HorizontalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HorizontalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_put_HorizontalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_VerticalScale(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_get_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_VerticalScale(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_put_VerticalScale(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_HorizontalDelayTime(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_get_HorizontalDelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_HorizontalDelayTime(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_put_HorizontalDelayTime(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Label(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_get_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Label(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kReference_put_Label(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kReference<Tkdpo2k3k4kReference> _ITkdpo2k3k4kReference;

///////////////////////////////////////////////////////////////////////////////
//
//	ITkdpo2k3k4kDigitalChannel
//

template <typename Deriving> struct ATL_NO_VTABLE __ITkdpo2k3k4kDigitalChannel : public ITkdpo2k3k4kDigitalChannel
{
	STDMETHODIMP get_Label(BSTR* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_get_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Label(BSTR val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_put_Label(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Position(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_get_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Position(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_put_Position(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_State(Tkdpo2k3k4kDigitalChannelStateEnum* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_get_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_State(Tkdpo2k3k4kDigitalChannelStateEnum val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_put_State(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Threshold(double* val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_get_Threshold(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Threshold(double val)
	{
		return ForwardingShimImpl::ITkdpo2k3k4kDigitalChannel_put_Threshold(static_cast<Deriving*>(this), val);
	}
};

typedef __ITkdpo2k3k4kDigitalChannel<Tkdpo2k3k4kDigitalChannel> _ITkdpo2k3k4kDigitalChannel;

