/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#define DECLARE_NIMBUS_CLASS_TKDPO2K3K4K()	\
public:	\
	DECLARE_REGISTRY_RESOURCEID(IDR_COTKDPO2K3K4K)	\
	DECLARE_PROTECT_FINAL_CONSTRUCT()	\
	\
	BEGIN_COM_MAP(Tkdpo2k3k4k)	\
		COM_INTERFACE_ENTRY(ISupportErrorInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo2)	\
		COM_INTERFACE_ENTRY(IPersonalityHost)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4k)	\
		COM_INTERFACE_ENTRY2(IIviDriver, ITkdpo2k3k4k)	\
		COM_INTERFACE_ENTRY(IIviDriverOperation)	\
		COM_INTERFACE_ENTRY(IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY2(IIviComponentIdentity, IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY(IIviDriverUtility)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kChannels)	\
		COM_INTERFACE_ENTRY(IIviScope)	\
		COM_INTERFACE_ENTRY(IIviScopeAcquisition)	\
		COM_INTERFACE_ENTRY(IIviScopeMeasurements)	\
		COM_INTERFACE_ENTRY(IIviScopeChannels)	\
		COM_INTERFACE_ENTRY(IIviScopeReferenceLevel)	\
		COM_INTERFACE_ENTRY(IIviScopeTrigger)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerAcLine)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerEdge)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerGlitch)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerRunt)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerTv)	\
		COM_INTERFACE_ENTRY(IIviScopeTriggerWidth)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kAcquisition)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTrigger)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerAEdge)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kBuses)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursor)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorHBars)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorVBars)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorXY)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorXYRectangle)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorXYRatio)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorXYProduct)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kCursorXYPolarCoordinates)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kDisplay)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kHardCopy)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kHistogram)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kHorizontal)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMark)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMaths)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMeasurementImmediate)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMeasurements)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMeasurementsIndicators)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSaveRecall)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearches)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABus)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusAudio)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusCAN)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusFlexray)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusI2C)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusLIN)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusRS232)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusSPI)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerABusUSB)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerALogic)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerAWidth)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerARunt)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerASetupHold)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerATransition)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerAVideo)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kTriggerBEdge)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kReferences)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kDigitalChannels)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kZoom)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kWaveformTransfer)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kUtilityEx)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kInstrumentIO)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysis)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisQuality)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisSwitchingLoss)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisHarmonics)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisRipple)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisModulation)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequency)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyRF)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyRFAmplitude)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyRFBandwidth)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMeasurementsFrequency)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyMarker)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kFrequencyTrace)	\
	END_COM_MAP()	\
	\
	HRESULT FinalConstruct();	\
	void FinalRelease();	\
	\
	virtual const CString& GetClassName() const;	\
	static const CString& ClassName();	\
	\
	virtual const CRepCapDescriptor** GetRepCapDescriptors() const;	\
	\
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);	\
	\
	Tkdpo2k3k4k* GetRoot() const;	\
	Tkdpo2k3k4k* GetParent() const;	\
	\
public:	\
	virtual CTkdpo2k3k4kErrorReporter& GetErrorReporter() { return *m_pErrorReporter; }	\
	virtual IVisaCSession& GetIoSession() { return m_ioSession; }	\
	virtual IIoSession& GetIo() { return m_ioSession; }	\
	\
protected:	\
	CVisaCSession m_ioSession;	\
	CTkdpo2k3k4kErrorReporter* m_pErrorReporter;
