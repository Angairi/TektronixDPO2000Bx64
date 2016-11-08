/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoTkdpo2k3k4k.h"
#include "CoTkdpo2k3k4kChannel.h"
#include "CoTkdpo2k3k4kBus.h"
#include "CoTkdpo2k3k4kMath.h"
#include "CoTkdpo2k3k4kMeasurementSlot.h"
#include "CoTkdpo2k3k4kSearch.h"
#include "CoTkdpo2k3k4kReference.h"
#include "CoTkdpo2k3k4kDigitalChannel.h"

CLSID GetDriverCLSID()
{
	return __uuidof(Tkdpo2k3k4k);
}

HRESULT Tkdpo2k3k4k::FinalConstruct()
{
	HRESULT hr = S_OK;

	GetDriverInfo().m_strSoftwareModuleName = _T("Tkdpo2k3k4k");
	GetDriverInfo().m_strDriverIdentifier = _T("Tkdpo2k3k4k");
	GetDriverInfo().m_strDriverVendor = _T("Tektronix");
	GetDriverInfo().m_strDriverDescription = _T("IVI Driver for Tkdpo2k3k4k");
	GetDriverInfo().m_strDriverRevision = _T("1.4.0.0");
	GetDriverInfo().m_strGroupCapabilities = _T("IviScopeBase,IviScopeRuntTrigger,IviScopeWidthTrigger,IviScopeWaveformMeas,IviScopeMinMaxWaveform,IviScopeProbeAutoSense,IviScopeContinuousAcquisition,IviScopeAverageAcquisition,IviScopeSampleMode,IviScopeTriggerModifier,IviScopeAutoSetup");
	GetDriverInfo().m_strSupportedModels = _T("DPO2024,DPO2014,DPO2012,DPO2002B,DPO2004B,DPO2012B,DPO2014B,DPO2022B,DPO2024B,MSO2024,MSO2014,MSO2012,MSO2002B,MSO2004B,MSO2012B,MSO2014B,MSO2022B,MSO2024B,DPO3054,DPO3052,DPO3034,DPO3032,DPO3014,DPO3012,DPO4104,DPO4054,DPO4034,DPO4032,DPO4104B,DPO4054B,DPO4034B,DPO4104B-L,DPO4102B,DPO4102B-L,MSO3054,MSO3034,MSO3032,MSO3014,MSO3012,MSO4104,MSO4054,MSO4034,MSO4032,MSO4104B,MSO4054B,MSO4034B,MSO4104B-L,MSO4102B,MSO4102B-L,MDO4104-6,MDO4104-3,MDO4054-6,MDO4054-3,MDO4014B-3,MDO4034B-3,MDO4054B-3,MDO4054B-6,MDO4104B-3,MDO4104B-6,MDO4024C,MDO4034C,MDO4054C,MDO4104C,MDO3104,MDO3102,MDO3054,MDO3052,MDO3034,MDO3032,MDO3024,MDO3022,MDO3014,MDO3012");
	GetDriverInfo().m_strDefaultSimulatedModel = _T("DPO2024");
	GetDriverInfo().m_lSpecificationMajorVersion = 3;
	GetDriverInfo().m_lSpecificationMinorVersion = 0;
	GetDriverInfo().m_bInterchangeCheckSupported = false;
	GetDriverInfo().m_bResetSupported = true;
	GetDriverInfo().m_bSelfTestSupported = true;
	GetDriverInfo().m_bRevisionQuerySupported = true;
	GetDriverInfo().m_bIdQuerySupported = true;
	GetDriverInfo().m_lSelfTestTimeout = 2000;
	GetDriverInfo().m_lDisableTimeout = 2000;
	GetDriverInfo().m_lResetTimeout = 2000;
	GetDriverInfo().m_lCoercionLogSize = 1000;

	m_pErrorReporter = new CTkdpo2k3k4kErrorReporter(this);

	hr = InternalFinalConstruct();

	return hr;
}

void Tkdpo2k3k4k::FinalRelease()
{
	InternalFinalRelease();

	if (m_pErrorReporter != NULL)
	{
		delete m_pErrorReporter;
	}
}

const CString& Tkdpo2k3k4k::GetClassName() const
{
	return Tkdpo2k3k4k::ClassName();
}

const CString& Tkdpo2k3k4k::ClassName()
{
	static CString strClassName = _T("Tkdpo2k3k4k");

	return strClassName;
}

const CRepCapDescriptor** Tkdpo2k3k4k::GetRepCapDescriptors() const
{
	static CRepCapDescriptor _desc_Tkdpo2k3k4kChannel(_T("Tkdpo2k3k4kChannel"), Tkdpo2k3k4kChannel::Create, Tkdpo2k3k4kChannel::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kBus(_T("Tkdpo2k3k4kBus"), Tkdpo2k3k4kBus::Create, Tkdpo2k3k4kBus::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kMath(_T("Tkdpo2k3k4kMath"), Tkdpo2k3k4kMath::Create, Tkdpo2k3k4kMath::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kMeasurementSlot(_T("Tkdpo2k3k4kMeasurementSlot"), Tkdpo2k3k4kMeasurementSlot::Create, Tkdpo2k3k4kMeasurementSlot::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kSearch(_T("Tkdpo2k3k4kSearch"), Tkdpo2k3k4kSearch::Create, Tkdpo2k3k4kSearch::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kReference(_T("Tkdpo2k3k4kReference"), Tkdpo2k3k4kReference::Create, Tkdpo2k3k4kReference::GetStaticRepCapNames);
	static CRepCapDescriptor _desc_Tkdpo2k3k4kDigitalChannel(_T("Tkdpo2k3k4kDigitalChannel"), Tkdpo2k3k4kDigitalChannel::Create, Tkdpo2k3k4kDigitalChannel::GetStaticRepCapNames);

	static CRepCapDescriptor* _descriptors[] = {
		&_desc_Tkdpo2k3k4kChannel,
		&_desc_Tkdpo2k3k4kBus,
		&_desc_Tkdpo2k3k4kMath,
		&_desc_Tkdpo2k3k4kMeasurementSlot,
		&_desc_Tkdpo2k3k4kSearch,
		&_desc_Tkdpo2k3k4kReference,
		&_desc_Tkdpo2k3k4kDigitalChannel,
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

Tkdpo2k3k4k* Tkdpo2k3k4k::GetRoot() const
{
	return CNode::GetRoot<Tkdpo2k3k4k>();
}

Tkdpo2k3k4k* Tkdpo2k3k4k::GetParent() const
{
	return CNode::GetParent<Tkdpo2k3k4k>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	Instrument models support
//

const CInstrumentModelMap* CInstrumentModelManager::GetInstrumentModelMap()
{
	static CInstrumentModelMap _instrModelMap(
		new CInstrumentModel(_T("DPO2024"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2014"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2012"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2002B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2004B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2012B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2014B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2022B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("DPO2024B"), _T("DPO2000 Series")),
		new CInstrumentModel(_T("MSO2024"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2014"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2012"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2002B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2004B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2012B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2014B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2022B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("MSO2024B"), _T("MSO2000 Series")),
		new CInstrumentModel(_T("DPO3054"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO3052"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO3034"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO3032"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO3014"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO3012"), _T("DPO3000 Series")),
		new CInstrumentModel(_T("DPO4104"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4054"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4034"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4032"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4104B"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4054B"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4034B"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4104B-L"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4102B"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("DPO4102B-L"), _T("DPO4000 Series")),
		new CInstrumentModel(_T("MSO3054"), _T("MSO3000 Series")),
		new CInstrumentModel(_T("MSO3034"), _T("MSO3000 Series")),
		new CInstrumentModel(_T("MSO3032"), _T("MSO3000 Series")),
		new CInstrumentModel(_T("MSO3014"), _T("MSO3000 Series")),
		new CInstrumentModel(_T("MSO3012"), _T("MSO3000 Series")),
		new CInstrumentModel(_T("MSO4104"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4054"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4034"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4032"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4104B"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4054B"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4034B"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4104B-L"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4102B"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MSO4102B-L"), _T("MSO4000 Series")),
		new CInstrumentModel(_T("MDO4104-6"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4104-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4054-6"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4054-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4014B-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4034B-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4054B-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4054B-6"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4104B-3"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4104B-6"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4024C"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4034C"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4054C"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO4104C"), _T("MDO4000 Series")),
		new CInstrumentModel(_T("MDO3104"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3102"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3054"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3052"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3034"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3032"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3024"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3022"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3014"), _T("MDO3000 Series")),
		new CInstrumentModel(_T("MDO3012"), _T("MDO3000 Series")),
		NULL);

	return &_instrModelMap;
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP Tkdpo2k3k4k::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(IProvideClassInfo),
		&__uuidof(IProvideClassInfo2),
		&__uuidof(ITkdpo2k3k4k),
		&__uuidof(IIviDriver),
		&__uuidof(IIviDriverOperation),
		&__uuidof(IIviDriverIdentity),
		&__uuidof(IIviComponentIdentity),
		&__uuidof(IIviDriverUtility),
		&__uuidof(ITkdpo2k3k4kChannels),
		&__uuidof(IIviScope),
		&__uuidof(IIviScopeAcquisition),
		&__uuidof(IIviScopeMeasurements),
		&__uuidof(IIviScopeChannels),
		&__uuidof(IIviScopeReferenceLevel),
		&__uuidof(IIviScopeTrigger),
		&__uuidof(IIviScopeTriggerAcLine),
		&__uuidof(IIviScopeTriggerEdge),
		&__uuidof(IIviScopeTriggerGlitch),
		&__uuidof(IIviScopeTriggerRunt),
		&__uuidof(IIviScopeTriggerTv),
		&__uuidof(IIviScopeTriggerWidth),
		&__uuidof(ITkdpo2k3k4kAcquisition),
		&__uuidof(ITkdpo2k3k4kTrigger),
		&__uuidof(ITkdpo2k3k4kTriggerAEdge),
		&__uuidof(ITkdpo2k3k4kBuses),
		&__uuidof(ITkdpo2k3k4kCursor),
		&__uuidof(ITkdpo2k3k4kCursorHBars),
		&__uuidof(ITkdpo2k3k4kCursorVBars),
		&__uuidof(ITkdpo2k3k4kCursorXY),
		&__uuidof(ITkdpo2k3k4kCursorXYRectangle),
		&__uuidof(ITkdpo2k3k4kCursorXYRatio),
		&__uuidof(ITkdpo2k3k4kCursorXYProduct),
		&__uuidof(ITkdpo2k3k4kCursorXYPolarCoordinates),
		&__uuidof(ITkdpo2k3k4kDisplay),
		&__uuidof(ITkdpo2k3k4kHardCopy),
		&__uuidof(ITkdpo2k3k4kHistogram),
		&__uuidof(ITkdpo2k3k4kHorizontal),
		&__uuidof(ITkdpo2k3k4kMark),
		&__uuidof(ITkdpo2k3k4kMaths),
		&__uuidof(ITkdpo2k3k4kMeasurementImmediate),
		&__uuidof(ITkdpo2k3k4kMeasurements),
		&__uuidof(ITkdpo2k3k4kMeasurementsIndicators),
		&__uuidof(ITkdpo2k3k4kSaveRecall),
		&__uuidof(ITkdpo2k3k4kSearches),
		&__uuidof(ITkdpo2k3k4kTriggerABus),
		&__uuidof(ITkdpo2k3k4kTriggerABusAudio),
		&__uuidof(ITkdpo2k3k4kTriggerABusCAN),
		&__uuidof(ITkdpo2k3k4kTriggerABusFlexray),
		&__uuidof(ITkdpo2k3k4kTriggerABusI2C),
		&__uuidof(ITkdpo2k3k4kTriggerABusLIN),
		&__uuidof(ITkdpo2k3k4kTriggerABusRS232),
		&__uuidof(ITkdpo2k3k4kTriggerABusSPI),
		&__uuidof(ITkdpo2k3k4kTriggerABusUSB),
		&__uuidof(ITkdpo2k3k4kTriggerALogic),
		&__uuidof(ITkdpo2k3k4kTriggerAWidth),
		&__uuidof(ITkdpo2k3k4kTriggerARunt),
		&__uuidof(ITkdpo2k3k4kTriggerASetupHold),
		&__uuidof(ITkdpo2k3k4kTriggerATransition),
		&__uuidof(ITkdpo2k3k4kTriggerAVideo),
		&__uuidof(ITkdpo2k3k4kTriggerBEdge),
		&__uuidof(ITkdpo2k3k4kReferences),
		&__uuidof(ITkdpo2k3k4kDigitalChannels),
		&__uuidof(ITkdpo2k3k4kZoom),
		&__uuidof(ITkdpo2k3k4kWaveformTransfer),
		&__uuidof(ITkdpo2k3k4kUtilityEx),
		&__uuidof(ITkdpo2k3k4kInstrumentIO),
		&__uuidof(ITkdpo2k3k4kPowerAnalysis),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisQuality),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisSwitchingLoss),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisHarmonics),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisRipple),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisModulation),
		&__uuidof(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea),
		&__uuidof(ITkdpo2k3k4kFrequency),
		&__uuidof(ITkdpo2k3k4kFrequencyRF),
		&__uuidof(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan),
		&__uuidof(ITkdpo2k3k4kFrequencyRFAmplitude),
		&__uuidof(ITkdpo2k3k4kFrequencyRFBandwidth),
		&__uuidof(ITkdpo2k3k4kMeasurementsFrequency),
		&__uuidof(ITkdpo2k3k4kFrequencyMarker),
		&__uuidof(ITkdpo2k3k4kFrequencyTrace),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
