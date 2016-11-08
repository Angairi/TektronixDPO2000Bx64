#include "stdafx.h"
#include "CoTkdpo2k3k4kChannel.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kChannel::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kChannel::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kChannel::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}


HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_FetchWaveform(SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = GetRoot()->_ITkdpo2k3k4kWaveformTransfer::FetchWaveform((Tkdpo2k3k4kSourceEnum)GetInstanceIndex(), WaveformArray, InitialX, XIncrement);
	}

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_FetchWaveformMeasurement(IviScopeMeasurementEnum MeasFunction, double* Measurement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::put_Source1((Tkdpo2k3k4kSourceEnum)GetInstanceIndex());
		if (SUCCEEDED(hr))
		{
			hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::put_Type((Tkdpo2k3k4kMeasurementTypeEnum)MeasFunction);
			if (SUCCEEDED(hr))
			{
				hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::get_Value(Measurement);
			}
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_FetchWaveformMinMax(SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = GetRoot()->_ITkdpo2k3k4kWaveformTransfer::FetchWaveformMinMax((Tkdpo2k3k4kSourceEnum)GetInstanceIndex(), MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_ReadWaveform(long MaxTimeMilliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = GetRoot()->_ITkdpo2k3k4kWaveformTransfer::ReadWaveform((Tkdpo2k3k4kSourceEnum)GetInstanceIndex(), MaxTimeMilliseconds, WaveformArray, InitialX, XIncrement);
	}
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_ReadWaveformMeasurement(IviScopeMeasurementEnum MeasFunction, long MaxTimeMilliseconds, double* Measurement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		VARIANT_BOOL _bSingleSequence = VARIANT_FALSE; //To know the scope StopAfter mode
		ViSession	viSession;
		ViEventType		viEventType;
		ViEvent			viEvent;
		ViUInt16	viStb;
		ViStatus status;
		CString strFormat;
	   
		//get visa session

		if(SUCCEEDED(hr))
		{	
			hr = GetRoot()->_ITkdpo2k3k4kInstrumentIO::get_IOSession((long *)&viSession);	
		}

		status = viEnableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE, VI_NULL);

		//Initiate the acquisition and wait for acq complete logic
		hr = GetRoot()->_ITkdpo2k3k4kAcquisition::get_SingleSequence(&_bSingleSequence);
		if(SUCCEEDED(hr))
		if(_bSingleSequence == VARIANT_TRUE)
		{
			//hr = GetRoot()->InstrWrite(OLESTR("ACQUIRE:REPET 0;STATE 0"));
			strFormat = _T("ACQUIRE:REPET 0;STATE 0");
			hr = io.WriteString(strFormat);
			// Setup the instrument's GPIB registers to enable OPC to generate SRQ
			if(SUCCEEDED(hr)) 
			{
				strFormat = _T("DESE 1;*ESE 1;*SRE 32;*CLS");
				hr = io.WriteString(strFormat);
			}
			// Do an acquisition and wait for it to generate SRQ
			// Clear the status first //DESE 1;*ESE 1;*SRE 32;*CLS
			
			if(SUCCEEDED(hr)) 
			{
				strFormat = _T("ACQUIRE:STATE 1");
				hr = io.WriteString(strFormat);
			}
			if(SUCCEEDED(hr)) 
			{
				strFormat = _T("*OPC");
				hr = io.WriteString(strFormat);
			}

			// wait for SRQ
			if (viWaitOnEvent(viSession,VI_EVENT_SERVICE_REQ,MaxTimeMilliseconds,&viEventType,&viEvent)>=VI_SUCCESS)
			{
				viClose(viEvent);
				viReadSTB(viSession, &viStb);
			} else {
				// Timeout
				
				return 	ReportErrorEx(IDS_E_IVISCOPE_MAX_TIME_EXCEEDED,_T("Maximum Acquisition timeout exceeded."));
			}
		}
		else
		{
				strFormat =_T("ACQUIRE:STATE 1");
				hr = io.WriteString(strFormat);
				::Sleep(3000);
		}


		hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::put_Source1((Tkdpo2k3k4kSourceEnum)GetInstanceIndex());
		if (SUCCEEDED(hr))
		{
			hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::put_Type((Tkdpo2k3k4kMeasurementTypeEnum)MeasFunction);
			if (SUCCEEDED(hr))
			{
				hr = GetRoot()->_ITkdpo2k3k4kMeasurementImmediate::get_Value(Measurement);
			}
		}
	}
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeMeasurement_ReadWaveformMinMax(long MaxTimeMilliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = GetRoot()->_ITkdpo2k3k4kWaveformTransfer::ReadWaveformMinMax((Tkdpo2k3k4kSourceEnum)GetInstanceIndex(), MaxTimeMilliseconds, MinWaveform, MaxWaveform, InitialX, XIncrement);
	}
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_Configure(double Range, double Offset, IviScopeVerticalCouplingEnum Coupling, double ProbeAttenuation, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = _IIviScopeChannel::put_Enabled(Enabled);

		hr = InstrPrintCommand();

		hr = _IIviScopeChannel::put_Range(Range);

		if(ProbeAttenuation == 0) return err.InvalidValue(_T("ProbeAttenuation"),_T("0"));
		else 
		{
			double Gain =1/ProbeAttenuation;
			CString strcmd;
			strcmd.Format(_T("CH%d:PROBE:GAIN %f"),GetInstanceIndex()+1,Gain);
			hr=io.WriteString(strcmd);
		}
	}
	
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_ConfigureCharacteristics(double InputImpedance, double InputFrequencyMax)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = GetRoot()->_IIviDriverOperation::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_ProbeSense(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::get_ProbeGain(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_Coupling(IviScopeVerticalCouplingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_Coupling(IviScopeVerticalCouplingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_Enabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::get_DisplayState(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_Enabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::put_DisplayState(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_InputFrequencyMax(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::get_Bandwidth(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_InputFrequencyMax(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::put_Bandwidth(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_InputImpedance(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_InputImpedance(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_Offset(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::get_Offset(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_Offset(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::put_Offset(val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_ProbeAttenuation(double* val)
{
	HRESULT hr = S_OK;

	double retval = 0;
	hr = _ITkdpo2k3k4kChannel::get_ProbeGain(&retval);
	if(retval !=0)
		*val = 1/retval;
	else hr = err.UnexpectedResponse();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_ProbeAttenuation(double val)
{
	HRESULT hr = S_OK;

	if(val == 0) return err.InvalidValue(_T("ProbeAttenuation"),_T("0"));
	else 
	{
		double Gain =1/val;
		CString strcmd;
		strcmd.Format(_T("CH%d:PROBE:GAIN %f"),GetInstanceIndex()+1,Gain);
		hr=io.WriteString(strcmd);
	}

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_get_Range(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::get_VerticalScale(val);
	if (SUCCEEDED(hr))
	{
		*val *= 10;
	}

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::IIviScopeChannel_put_Range(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kChannel::put_VerticalScale(val / 10);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_Configure(double Position, double Scale, double Offset, double Deskew, Tkdpo2k3k4kChannelCouplingEnum Coupling, Tkdpo2k3k4kChannelTerminationEnum Termination, Tkdpo2k3k4kChannelBandwidthEnum Bandwidth, VARIANT_BOOL DisplayState)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_Read(double* Position, double* Scale, double* Offset, double* Deskew, Tkdpo2k3k4kChannelCouplingEnum* Coupling, Tkdpo2k3k4kChannelTerminationEnum* Termination, double* Bandwidth, VARIANT_BOOL* DisplayState)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Position = 0;
		Scale = 0;
		Offset = 0;
		Deskew = 0;
		*Coupling = Tkdpo2k3k4kChannelCouplingAC;
		*Termination = Tkdpo2k3k4kChannelTerminationFifty;
		Bandwidth = 0;
		DisplayState = VARIANT_FALSE;

		return hr;
	}
	int nChan = GetInstanceIndex() + 1;
	hr = io.Queryf(_T("CH%d:POSITION?;SCALE?;OFFSET?;DESKEW?;COUPLING?;TERMINATION?;BANDWIDTH?;"), _T("%le;%le;%le;%le;%{ChannelCoupling}[^;];%{ChannelTermination}[^;];%le;%{VARIANT_BOOL}[^;]"), 
		nChan, Position, Scale, Offset, Deskew, Coupling, Termination, Bandwidth );
	hr = io.Queryf(_T(":SELECT:CH%d?"),_T("%{VARIANT_BOOL}[^;]"),nChan,DisplayState);
	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_ReadProbeDetails(BSTR* Type, double* Resistance, double* Gain, BSTR* SerialNumber, BSTR* Unit, double* ExternalAttenuation, double* ExternalAttenuationDB, Tkdpo2k3k4kChannelCalibrationEnum* Calibration)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Type = SysAllocString(L"Type");
		Resistance = 0;
		Gain = 0;
		*SerialNumber = SysAllocString(L"SerialNumber"); 
		*Unit = SysAllocString(L"Unit");
		ExternalAttenuation = 0;
		ExternalAttenuationDB = 0;
		*Calibration = Tkdpo2k3k4kChannelCalibrationPass;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Gain, Resistance, Unit, Type, SerialNumber, ExternalAttenuation, ExternalAttenuationDB, Calibration);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Bandwidth(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Bandwidth(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_BandwidthEnum(Tkdpo2k3k4kChannelBandwidthEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Coupling(Tkdpo2k3k4kChannelCouplingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Coupling(Tkdpo2k3k4kChannelCouplingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Deskew(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Deskew(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_DisplayState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_DisplayState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_LabelName(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_LabelName(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Offset(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Offset(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeGain(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeResistance(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeSerialNumber(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeType(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_VerticalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_VerticalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_TerminationEnum(Tkdpo2k3k4kChannelTerminationEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_ProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_ProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_AmpsViaVoltsState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_AmpsViaVoltsState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_AmpsViaVoltsFactor(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_AmpsViaVoltsFactor(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Impedance(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Impedance(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_VerticalSensitivity(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_VerticalSensitivity(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Yunits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_Yunits(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_TekVPIProbeDegaussState(Tkdpo2k3k4kProbeDegaussStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_TekVPIProbeRange(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_TekVPIProbeRange(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_Termination(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_get_InvertState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_put_InvertState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_SetTekVPIProbeDegauss()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_SetTekVPIProbeCommand(BSTR Command, BSTR State)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_SetTekVPIProbeAutoZero()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_InvertWaveform()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kChannel::ITkdpo2k3k4kChannel_SetAllDeskewsToRecommendedValues()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}
