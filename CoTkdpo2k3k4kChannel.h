#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kChannel.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kChannel :
	public _RepCap<Tkdpo2k3k4kChannel>,
	public _ITkdpo2k3k4kChannel,
	public _IIviScopeMeasurement,
	public _IIviScopeChannel
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KCHANNEL()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:


	STDMETHOD(IIviScopeMeasurement_FetchWaveform)(SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(IIviScopeMeasurement_FetchWaveformMeasurement)(IviScopeMeasurementEnum MeasFunction, double* Measurement);
	STDMETHOD(IIviScopeMeasurement_FetchWaveformMinMax)(SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);
	STDMETHOD(IIviScopeMeasurement_ReadWaveform)(long MaxTimeMilliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement);
	STDMETHOD(IIviScopeMeasurement_ReadWaveformMeasurement)(IviScopeMeasurementEnum MeasFunction, long MaxTimeMilliseconds, double* Measurement);
	STDMETHOD(IIviScopeMeasurement_ReadWaveformMinMax)(long MaxTimeMilliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement);

	STDMETHOD(IIviScopeChannel_Configure)(double Range, double Offset, IviScopeVerticalCouplingEnum Coupling, double ProbeAttenuation, VARIANT_BOOL Enabled);
	STDMETHOD(IIviScopeChannel_ConfigureCharacteristics)(double InputImpedance, double InputFrequencyMax);
	STDMETHOD(IIviScopeChannel_get_ProbeSense)(double* val);
	STDMETHOD(IIviScopeChannel_get_Coupling)(IviScopeVerticalCouplingEnum* val);
	STDMETHOD(IIviScopeChannel_put_Coupling)(IviScopeVerticalCouplingEnum val);
	STDMETHOD(IIviScopeChannel_get_Enabled)(VARIANT_BOOL* val);
	STDMETHOD(IIviScopeChannel_put_Enabled)(VARIANT_BOOL val);
	STDMETHOD(IIviScopeChannel_get_InputFrequencyMax)(double* val);
	STDMETHOD(IIviScopeChannel_put_InputFrequencyMax)(double val);
	STDMETHOD(IIviScopeChannel_get_InputImpedance)(double* val);
	STDMETHOD(IIviScopeChannel_put_InputImpedance)(double val);
	STDMETHOD(IIviScopeChannel_get_Offset)(double* val);
	STDMETHOD(IIviScopeChannel_put_Offset)(double val);
	STDMETHOD(IIviScopeChannel_get_ProbeAttenuation)(double* val);
	STDMETHOD(IIviScopeChannel_put_ProbeAttenuation)(double val);
	STDMETHOD(IIviScopeChannel_get_Range)(double* val);
	STDMETHOD(IIviScopeChannel_put_Range)(double val);

	STDMETHOD(ITkdpo2k3k4kChannel_Configure)(double Position, double Scale, double Offset, double Deskew, Tkdpo2k3k4kChannelCouplingEnum Coupling, Tkdpo2k3k4kChannelTerminationEnum Termination, Tkdpo2k3k4kChannelBandwidthEnum Bandwidth, VARIANT_BOOL DisplayState);
	STDMETHOD(ITkdpo2k3k4kChannel_Read)(double* Position, double* Scale, double* Offset, double* Deskew, Tkdpo2k3k4kChannelCouplingEnum* Coupling, Tkdpo2k3k4kChannelTerminationEnum* Termination, double* Bandwidth, VARIANT_BOOL* DisplayState);
	STDMETHOD(ITkdpo2k3k4kChannel_ReadProbeDetails)(BSTR* Type, double* Resistance, double* Gain, BSTR* SerialNumber, BSTR* Unit, double* ExternalAttenuation, double* ExternalAttenuationDB, Tkdpo2k3k4kChannelCalibrationEnum* Calibration);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Bandwidth)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Bandwidth)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_BandwidthEnum)(Tkdpo2k3k4kChannelBandwidthEnum val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Coupling)(Tkdpo2k3k4kChannelCouplingEnum* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Coupling)(Tkdpo2k3k4kChannelCouplingEnum val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Deskew)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Deskew)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_DisplayState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_DisplayState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_LabelName)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_LabelName)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Offset)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Offset)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeGain)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeResistance)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeSerialNumber)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeType)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_VerticalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_VerticalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_TerminationEnum)(Tkdpo2k3k4kChannelTerminationEnum val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_ProbeSignal)(Tkdpo2k3k4kChannelProbeSignalEnum* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_ProbeSignal)(Tkdpo2k3k4kChannelProbeSignalEnum val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_AmpsViaVoltsState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_AmpsViaVoltsState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_AmpsViaVoltsFactor)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_AmpsViaVoltsFactor)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Impedance)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Impedance)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_VerticalSensitivity)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_VerticalSensitivity)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Yunits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_Yunits)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_TekVPIProbeDegaussState)(Tkdpo2k3k4kProbeDegaussStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_TekVPIProbeRange)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_TekVPIProbeRange)(double val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_Termination)(double* val);
	STDMETHOD(ITkdpo2k3k4kChannel_get_InvertState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kChannel_put_InvertState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kChannel_SetTekVPIProbeDegauss)();
	STDMETHOD(ITkdpo2k3k4kChannel_SetTekVPIProbeCommand)(BSTR Command, BSTR State);
	STDMETHOD(ITkdpo2k3k4kChannel_SetTekVPIProbeAutoZero)();
	STDMETHOD(ITkdpo2k3k4kChannel_InvertWaveform)();
	STDMETHOD(ITkdpo2k3k4kChannel_SetAllDeskewsToRecommendedValues)();
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kChannel)
