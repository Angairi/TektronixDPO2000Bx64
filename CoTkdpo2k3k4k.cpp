#include "stdafx.h"
#include "CoTkdpo2k3k4k.h"
#include "CoTkdpo2k3k4kChannel.h"
#include "CoTkdpo2k3k4kBus.h"
#include "CoTkdpo2k3k4kMath.h"
#include "CoTkdpo2k3k4kMeasurementSlot.h"
#include "CoTkdpo2k3k4kSearch.h"
#include "CoTkdpo2k3k4kReference.h"
#include "CoTkdpo2k3k4kDigitalChannel.h"


void Tkdpo2k3k4k::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4k::OnFinalConstruct()
{
	// Use this function to perform any driver-specific initialization just AFTER object construction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.

	HRESULT hr = S_OK;

    return hr;
}

void Tkdpo2k3k4k::OnFinalRelease()
{
	// Use this function to perform any driver-specific clean-up just BEFORE object destruction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.
}

HRESULT Tkdpo2k3k4k::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4k::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Channels(ITkdpo2k3k4kChannels** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Acquisition(ITkdpo2k3k4kAcquisition** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Trigger(ITkdpo2k3k4kTrigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Buses(ITkdpo2k3k4kBuses** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Cursor(ITkdpo2k3k4kCursor** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Display(ITkdpo2k3k4kDisplay** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_HardCopy(ITkdpo2k3k4kHardCopy** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Histogram(ITkdpo2k3k4kHistogram** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Horizontal(ITkdpo2k3k4kHorizontal** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Mark(ITkdpo2k3k4kMark** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Maths(ITkdpo2k3k4kMaths** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_MeasurementImmediate(ITkdpo2k3k4kMeasurementImmediate** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Measurements(ITkdpo2k3k4kMeasurements** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_SaveRecall(ITkdpo2k3k4kSaveRecall** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Searches(ITkdpo2k3k4kSearches** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_References(ITkdpo2k3k4kReferences** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_DigitalChannels(ITkdpo2k3k4kDigitalChannels** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Zoom(ITkdpo2k3k4kZoom** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_WaveformTransfer(ITkdpo2k3k4kWaveformTransfer** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_UtilityEx(ITkdpo2k3k4kUtilityEx** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_InstrumentIO(ITkdpo2k3k4kInstrumentIO** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_PowerAnalysis(ITkdpo2k3k4kPowerAnalysis** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4k_get_Frequency(ITkdpo2k3k4kFrequency** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}
HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_GetOPC(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = VARIANT_TRUE;
		return hr;
	}
	CString strFormat;
	LONG opc;
	strFormat.Format(_T("*OPC?"));
	hr = io.QueryNumber(strFormat, &opc);

	if(hr!=VI_SUCCESS)
	{
		hr=VI_SUCCESS;
		*val = VARIANT_FALSE;
	}
	else *val=VARIANT_TRUE;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_Query(BSTR Command, BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = ::SysAllocString(L"");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_ReadPartialString(long Length, BSTR* val)
{
	HRESULT hr = S_OK;
	
	if (GetSimulate())
	{
		*val = ::SysAllocString(L"");
		return hr;
	}

	CString str2;
	hr=io.ReadString(str2);
	str2.Truncate(Length);
	*val = str2.AllocSysString();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_ReadString(BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = ::SysAllocString(L"");
		return hr;
	}

	hr = io.ReadString(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_WriteString(BSTR Command)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kInstrumentIO_get_IOSession(long* val)
{
	HRESULT hr = S_OK;
	ViSession vi;
	hr = io.DirectIo.GetSession(&vi);
	*val = vi;
	return hr;
}
HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_Configure(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSourceCH3 ) ||  ( Source == Tkdpo2k3k4kSourceCH4 ) || ( Source == Tkdpo2k3k4kSourceREF3  ) ||  ( Source == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_ConfigureDelay(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source1 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source1 == Tkdpo2k3k4kSourceCH4 ) || ( Source1  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source1 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	if ( ( Is2Channel())  &&  ( ( Source2 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source2 == Tkdpo2k3k4kSourceCH4 ) || ( Source2  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source2 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_ConfigurePhase(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source1 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source1 == Tkdpo2k3k4kSourceCH4 ) || ( Source1  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source1 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	if ( ( Is2Channel())  &&  ( ( Source2 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source2 == Tkdpo2k3k4kSourceCH4 ) || ( Source2  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source2 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_ConfigureReferenceLevel(Tkdpo2k3k4kMeasurementMethodEnum Method, Tkdpo2k3k4kMeasurementUnitEnum Unit, double High, double Low, double Mid, double Mid2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_Read(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source1 = Tkdpo2k3k4kSourceCH1;
		*Source2 = Tkdpo2k3k4kSourceCH2;
		*Direction = Tkdpo2k3k4kMeasurementDelayDirectionForward;
		*Edge1 = Tkdpo2k3k4kMeasurementEdgeRise;
		*Edge2 = Tkdpo2k3k4kMeasurementEdgeRise;
		*Type = Tkdpo2k3k4kMeasurementTypePeriod;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source1, Source2, Type, Direction, Edge1, Edge2);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_ReadReferenceLevel(Tkdpo2k3k4kMeasurementMethodEnum* Method, Tkdpo2k3k4kMeasurementUnitEnum* Unit, double* High, double* Low, double* Mid, double* Mid2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Method = Tkdpo2k3k4kMeasurementMethodAuto;
		*Unit = Tkdpo2k3k4kMeasurementUnitPercent;
		*High = 90.0000;
		*Low = 10.0000;
		*Mid = 50.0000;
		*Mid2 = 50.0000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Method, Unit, High, Low, Mid, Mid2);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_ReadValue(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source1 = Tkdpo2k3k4kSourceCH1;
		Source2 = Tkdpo2k3k4kSourceCH2;
		Direction = Tkdpo2k3k4kMeasurementDelayDirectionForward;
		Edge1 = Tkdpo2k3k4kMeasurementEdgeRise;
		Edge2 = Tkdpo2k3k4kMeasurementEdgeRise;
		Type = Tkdpo2k3k4kMeasurementTypePeriod;
		*Val = 0;
		*Unit = ::SysAllocString(L"");
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source1 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source1 == Tkdpo2k3k4kSourceCH4 ) || ( Source1  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source1 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	if ( ( Is2Channel())  &&  ( ( Source2 == Tkdpo2k3k4kSourceCH3 ) ||  ( Source2 == Tkdpo2k3k4kSourceCH4 ) || ( Source2  == Tkdpo2k3k4kSourceREF3  ) ||  ( Source2 == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrQueryResponse(CUR_TIMEOUT, Val, Unit);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteHigh(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteHigh(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteLow(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteLow(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelAbsoluteMid2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelAbsoluteMid2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelMethod(Tkdpo2k3k4kMeasurementMethodEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelMethod(Tkdpo2k3k4kMeasurementMethodEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentHigh(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentHigh(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentLow(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentLow(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelUnit(Tkdpo2k3k4kMeasurementUnitEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelUnit(Tkdpo2k3k4kMeasurementUnitEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_ReferenceLevelPercentMid(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_ReferenceLevelPercentMid(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_Source1(Tkdpo2k3k4kSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_Source1(Tkdpo2k3k4kSourceEnum val)
{
	HRESULT hr = S_OK;
if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kSourceCH3 ) ||  ( val == Tkdpo2k3k4kSourceCH4 ) || ( val  == Tkdpo2k3k4kSourceREF3  ) ||  ( val == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_Source2(Tkdpo2k3k4kSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_Source2(Tkdpo2k3k4kSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kSourceCH3 ) ||  ( val == Tkdpo2k3k4kSourceCH4 ) || ( val  == Tkdpo2k3k4kSourceREF3  ) ||  ( val == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_Type(Tkdpo2k3k4kMeasurementTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_put_Type(Tkdpo2k3k4kMeasurementTypeEnum val)
{
	HRESULT hr = S_OK;

	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) && (val==Tkdpo2k3k4kMeasurementTypeWaveforms))
	hr =  err.ValueNotSupported(_T("Tkdpo2k3k4kMeasurementTypeWaveforms"), _T("val"));
	else
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_Units(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementImmediate_get_Value(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_MoveZoomToMark(Tkdpo2k3k4kMarkMoveZoomToMarkEnum Mark)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_CreateMark(Tkdpo2k3k4kMarkEnum Mark)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_DeleteMark(Tkdpo2k3k4kMarkEnum Mark)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_FreeMarks(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_TotalMarks(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedEnd(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedFocus(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedMarksInColumn(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedOwner(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedSource(Tkdpo2k3k4kSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedStart(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedPosition(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMark_get_SelectedLabel(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::IIviDriver_Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	HRESULT hr = S_OK;

	hr = DriverBase::Initialize(ResourceName, IdQuery, Reset, OptionString);

	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		CString cmd;
		cmd.Format(_T("HEAD OFF;:VERBOSE 1"));
		io.WriteString(cmd);
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriver_Close()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Close();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriver_get_DriverOperation(IIviDriverOperation** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriver_get_Identity(IIviDriverIdentity** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriver_get_Utility(IIviDriverUtility** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriver_get_Initialized(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Initialized(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_InvalidateAllAttributes()
{
	HRESULT hr = S_OK;

	hr = DriverBase::InvalidateAllAttributes();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_ClearInterchangeWarnings()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ClearInterchangeWarnings();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_GetNextInterchangeWarning(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::GetNextInterchangeWarning(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_ResetInterchangeCheck()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ResetInterchangeCheck();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_GetNextCoercionRecord(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::GetNextCoercionRecord(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_LogicalName(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_LogicalName(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_IoResourceDescriptor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_IoResourceDescriptor(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_Cache(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Cache(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_Cache(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Cache(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_InterchangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InterchangeCheck(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_InterchangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_InterchangeCheck(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_QueryInstrumentStatus(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_QueryInstrumentStatus(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_QueryInstrumentStatus(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_QueryInstrumentStatus(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_RangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RangeCheck(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_RangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_RangeCheck(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_RecordCoercions(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RecordCoercions(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_RecordCoercions(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_RecordCoercions(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_Simulate(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Simulate(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_put_Simulate(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Simulate(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverOperation_get_DriverSetup(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_DriverSetup(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_InstrumentManufacturer(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentManufacturer(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_InstrumentModel(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentModel(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_InstrumentFirmwareRevision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentFirmwareRevision(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_Identifier(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Identifier(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_SupportedInstrumentModels(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SupportedInstrumentModels(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_SpecificationMajorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMajorVersion(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_SpecificationMinorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMinorVersion(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverIdentity_get_GroupCapabilities(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_GroupCapabilities(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviComponentIdentity_get_Description(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Description(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviComponentIdentity_get_Revision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Revision(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviComponentIdentity_get_Vendor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Vendor(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_Reset()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Reset();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_ResetWithDefaults()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ResetWithDefaults();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_Disable()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Disable();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_SelfTest(long* TestResult, BSTR* TestMessage)
{
	HRESULT hr = S_OK;

	hr = DriverBase::SelfTest(TestResult, TestMessage);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
{
	HRESULT hr = S_OK;

	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = io.Queryf(_T("EVMSG?"), _T("%d,\"%$B[^'\"']\""), ErrorCode, ErrorMessage);
	}
	else
	{
		*ErrorCode = 0;
		*ErrorMessage = (BSTR)"";
		hr = S_OK;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_LockObject()
{
	HRESULT hr = S_OK;

	hr = DriverBase::LockObject();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviDriverUtility_UnlockObject()
{
	HRESULT hr = S_OK;

	hr = DriverBase::UnlockObject();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kChannel>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_Item(BSTR Name, ITkdpo2k3k4kChannel** val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( CComBSTR(Name) == CComBSTR(_T("CH3"))   ) ||  ( CComBSTR(Name) == CComBSTR(_T("CH4")) )))
	{
		return err.ChannelNotSupported();		
	}

	else
	{
	hr = GetRepCapItem<Tkdpo2k3k4kChannel>(Name, val);

	return hr;
	}
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kChannel>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_put_AUXInProbeSignal(Tkdpo2k3k4kChannelProbeSignalEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeGain(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeResistance(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeSerialNumber(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeType(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInProbeUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeDegaussState(Tkdpo2k3k4kProbeDegaussStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_get_AUXInTekVPIProbeRange(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_put_AUXInTekVPIProbeRange(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeDegauss()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeCommand(BSTR Command, BSTR State)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kChannels_SetAUXInTekVPIProbeAutoZero()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}






HRESULT Tkdpo2k3k4k::IIviScope_get_Acquisition(IIviScopeAcquisition** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScope_get_Channels(IIviScopeChannels** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScope_get_Measurements(IIviScopeMeasurements** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScope_get_ReferenceLevel(IIviScopeReferenceLevel** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScope_get_Trigger(IIviScopeTrigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_ConfigureRecord(double TimePerRecord, long MinNumPts, double AcquisitionStartTime)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::ConfigureRecord(TimePerRecord,MinNumPts,AcquisitionStartTime);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_NumberOfAverages(long* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::get_NumberAverages(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_NumberOfAverages(long val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::put_NumberAverages(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_NumberOfEnvelopes(long* val)
{
	HRESULT hr = S_OK;

	CString str;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = io.QueryString(_T("ACQUIRE:NUMENV?"),str);
		if((str=="INFI") || (str == "INFINITE"))
			*val = LONG_MAX;
	}
	//else *val =0;

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_NumberOfEnvelopes(long val)
{
	HRESULT hr = S_OK;

	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		CString strcmd;
		strcmd.Format(_T("ACQUIRE:NUMENV %ld"),val);

		hr=io.WriteString(strcmd);
	}
	
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_Interpolation(IviScopeInterpolationEnum* val)
{
	HRESULT hr = S_OK;

	return err.MethodNotSupported();

}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_Interpolation(IviScopeInterpolationEnum val)
{
	HRESULT hr = S_OK;

	return err.MethodNotSupported();
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_RecordLength(long* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::get_RecordLength(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_SampleMode(IviScopeSampleModeEnum* val)
{
	HRESULT hr = S_OK;

	Tkdpo2k3k4kAcquisitionSamplingModeEnum eMode;
	hr = _ITkdpo2k3k4kAcquisition::get_SamplingMode(&eMode);
	if (SUCCEEDED(hr))
	{
		switch (eMode)
		{
			case Tkdpo2k3k4kAcquisitionSamplingModeRT:
			case Tkdpo2k3k4kAcquisitionSamplingModeET:
				*val = (IviScopeSampleModeEnum)eMode;
				break;
			case Tkdpo2k3k4kAcquisitionSamplingModeIT:
				hr = err.UnexpectedResponse();
				break;
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_SampleRate(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kHorizontal::get_SampleRate(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_Type(IviScopeAcquisitionTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::get_Mode((Tkdpo2k3k4kAcquisitionModeEnum*)val);
	if (SUCCEEDED(hr))
	{
		switch (*val)
		{
			case IviScopeAcquisitionTypeNormal:
			case IviScopeAcquisitionTypePeakDetect:
			case IviScopeAcquisitionTypeHiRes:
			case IviScopeAcquisitionTypeAverage:
			case IviScopeAcquisitionTypeEnvelope:
				break;
			default:
				hr = err.UnexpectedResponse();
				break;
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_Type(IviScopeAcquisitionTypeEnum val)
{
	HRESULT hr = S_OK;
	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) &&  ((val==IviScopeAcquisitionTypeEnvelope) ||(val == IviScopeAcquisitionTypeHiRes) || (val==IviScopeAcquisitionTypePeakDetect)))
	hr =  err.ValueNotSupported(_T("IviScopeAcquisitionType"), _T("val"));
	else 
		hr = _ITkdpo2k3k4kAcquisition::put_Mode((Tkdpo2k3k4kAcquisitionModeEnum)val);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_NumberOfPointsMin(long* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kHorizontal::get_RecordLength(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_NumberOfPointsMin(long val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kHorizontal::put_RecordLength(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_StartTime(double* val)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		double horzTime,senTime;
		senTime = 0.0;
		hr = _ITkdpo2k3k4kAcquisition::get_TimePerRecord(&horzTime);
		
		hr = io.QueryNumber(_T(":HOR:DEL:TIM?"),&senTime);

		*val = senTime - horzTime*(50)/100.0;
	}
	else
	{
		*val = 0.5;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_StartTime(double val)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		double horzTime,senTime;
		
		hr = _ITkdpo2k3k4kAcquisition::get_TimePerRecord(&horzTime);
		
		senTime = val + horzTime*(50)/100.0;

		hr = io.Printf(_T(":HOR:DEL:TIM %g"), senTime);
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_get_TimePerRecord(double* val)
{
	HRESULT hr = S_OK;

	hr = io.QueryNumber(_T("HORIZONTAL:SCALE?"), val);
	if (SUCCEEDED(hr))
	{
		*val = *val * 10;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeAcquisition_put_TimePerRecord(double val)
{
	HRESULT hr = S_OK;

	hr = io.Printf(_T("HORIZONTAL:SCALE %g"), val / 10);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_Initiate()
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::put_SingleSequence(TRUE);

	hr = _ITkdpo2k3k4kAcquisition::Start();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_Abort()
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::Stop();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_AutoSetup()
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::AutoSet();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_Status(IviScopeAcquisitionStatusEnum* val)
{
	HRESULT hr = S_OK;
	//VARIANT_BOOL sim;
	//hr = DriverBase::get_Simulate(&sim);
	//if(sim == VARIANT_FALSE)
	//{
	//	CString cmd;
	//	short prevu = 0;
	//	VARIANT_BOOL runstop = TRUE;
	//	hr = _ITkdpo2k3k4kAcquisition::get_RunStop(&runstop);
	//	if(runstop == -1) *val = IviScopeAcqStatusUnknown;
	//	else
	//	{
	//	hr = io.QueryNumber(_T("HORizontal:PREViewstate?"),&prevu);
	//	if(prevu == 1) *val = IviScopeAcqStatusUnknown;
	//	else
	//	{
	//		short busy = 0;
	//		hr = io.QueryNumber(_T("BUSY?"),&busy);
	//		if(busy == 1) *val = IviScopeAcqInProgress;
	//		else *val = IviScopeAcqComplete;
	//	}
	//	}
	//}
	//else *val = IviScopeAcqComplete; 

	if(GetSimulate())
		return S_OK;

	VARIANT_BOOL acqState = VARIANT_TRUE;
	hr = _ITkdpo2k3k4kAcquisition::get_State(&acqState);
	if(acqState == VARIANT_TRUE)
		 *val = IviScopeAcqInProgress;
	else
	{
		short prevu = 0;
		hr = io.QueryNumberNoPoll(_T("HORizontal:PREViewstate?"),&prevu);

		long numAcq = 0;
		hr = _ITkdpo2k3k4kAcquisition::get_NumberAcquisitions(&numAcq);

		if(prevu == 0 && numAcq > 0) *val = IviScopeAcqComplete;

		else *val = IviScopeAcqStatusUnknown;

	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_IsWaveformElementInvalid(double Element, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kWaveformTransfer::IsWaveformElementInvalid(Element, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_get_Item(BSTR Name, IIviScopeMeasurement** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kChannel>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kChannel>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeMeasurements_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kChannel>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeChannels_get_Item(BSTR Name, IIviScopeChannel** val)
{
	HRESULT hr = S_OK;
	
	if ( ( Is2Channel())  &&  ( ( CComBSTR(Name) == CComBSTR(_T("CH3"))   ) ||  ( CComBSTR(Name) == CComBSTR(_T("CH4")) )))
	{
		return err.ChannelNotSupported();		
	}

	hr = GetRepCapItem<Tkdpo2k3k4kChannel>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeChannels_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kChannel>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeChannels_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kChannel>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_Configure(double Low, double Mid, double High)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_get_High(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kMeasurementImmediate::get_ReferenceLevelAbsoluteHigh(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_put_High(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kMeasurementImmediate::put_ReferenceLevelAbsoluteHigh(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_get_Low(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kMeasurementImmediate::get_ReferenceLevelAbsoluteLow(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_put_Low(double val)
{
	HRESULT hr = S_OK;

	hr =_ITkdpo2k3k4kMeasurementImmediate::put_ReferenceLevelAbsoluteLow(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_get_Mid(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kMeasurementImmediate::get_ReferenceLevelAbsoluteMid(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeReferenceLevel_put_Mid(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kMeasurementImmediate::put_ReferenceLevelAbsoluteMid(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_Configure(IviScopeTriggerTypeEnum Type, double Holdoff)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		switch(Type)
		{
			case IviScopeTriggerTV:
			{
				hr = io.Printf(_T("TRIGGER:A:TYPE VIDEO;HOLDOFF:TIME %g;"), Holdoff);
				break;
			};
			case IviScopeTriggerImmediate:
			case IviScopeTriggerACLine:
			{
				CString strType;
				EnumToName(Type, strType);
				hr = err.ValueNotSupported(strType, _T("Type"));
				break;
			};
			case IviScopeTriggerEdge:
			{
				hr = io.Printf(_T("TRIGGER:A:TYPE EDGE;HOLDOFF:TIME %g;"), Holdoff);
				break;
			};
			case IviScopeTriggerWidth:
			case IviScopeTriggerRunt:
			case IviScopeTriggerGlitch:
			{
				hr = io.Printf(_T("TRIGGER:A:TYPE PULSE;PULSE:CLASS %{TriggerType}s;:TRIGGER:A:HOLDOFF:TIME %g;"), Type, Holdoff);
				break;
			}
		}
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Continuous(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::get_RunStop(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Continuous(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kAcquisition::put_RunStop(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Coupling(IviScopeTriggerCouplingEnum* val)
{
	HRESULT hr = S_OK;
	
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Coupling(IviScopeTriggerCouplingEnum val)
{
	HRESULT hr = S_OK;
	/*if(val == IviScopeTriggerCouplingAC)
	{
		hr=err.ValueNotSupported(_T("IviScopeTriggerCouplingAC"), _T("val"));
		return hr;
	}
	else
	{*/
	
		hr = InstrPrintCommand();
		return hr;
	//}
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Level(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAEdge::get_Level(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Level(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAEdge::put_Level(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Modifier(IviScopeTriggerModifierEnum* val)
{
	HRESULT hr = S_OK;

	Tkdpo2k3k4kTriggerModeEnum eMode;
	hr = _ITkdpo2k3k4kTrigger::get_Mode(&eMode);
	if (SUCCEEDED(hr))
	{
		*val = eMode == Tkdpo2k3k4kTriggerModeNORMal ? IviScopeTriggerModifierNone : IviScopeTriggerModifierAuto;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Modifier(IviScopeTriggerModifierEnum val)
{
	HRESULT hr = S_OK;

	switch (val)
	{
	case IviScopeTriggerModifierAuto:
			hr = _ITkdpo2k3k4kTrigger::put_Mode(Tkdpo2k3k4kTriggerModeAUTO);
			break;
		case IviScopeTriggerModifierAutoLevel:
			hr = _ITkdpo2k3k4kTriggerAEdge::ConfigureLevelTo50Percent();
			break;
		default:
			hr = _ITkdpo2k3k4kTrigger::put_Mode(Tkdpo2k3k4kTriggerModeNORMal);
			break;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Source(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Source(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Holdoff(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTrigger::get_AHoldoffTime(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Holdoff(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTrigger::put_AHoldoffTime(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Type(IviScopeTriggerTypeEnum* val)
{
	HRESULT hr = S_OK;

	Tkdpo2k3k4kTriggerTypeEnum eType;
	hr = _ITkdpo2k3k4kTrigger::get_Type(&eType);
	if (SUCCEEDED(hr))
	{
		switch (eType)
		{
		case Tkdpo2k3k4kTriggerEdge:
				*val = IviScopeTriggerEdge;
				break;
		case Tkdpo2k3k4kTriggerPulseWidth:
				*val = IviScopeTriggerWidth;
				break;
		case Tkdpo2k3k4kTriggerRunt:
				*val = IviScopeTriggerRunt;
				break;
			/*case Tkdpo2k3k4kTriggerGlitch:
				*val = IviScopeTriggerGlitch;
				break;*/
			case Tkdpo2k3k4kTriggerVideo:
				*val = IviScopeTriggerTV;
				break;
			case Tkdpo2k3k4kTriggerRiseFallTime:
				*val = IviScopeTriggerACLine;
				break;
			default:
				hr = err.UnexpectedResponse();
				break;
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_put_Type(IviScopeTriggerTypeEnum val)
{
	HRESULT hr = S_OK;

	switch (val)
	{
		case IviScopeTriggerTV:
			hr = _ITkdpo2k3k4kTrigger::put_Type(Tkdpo2k3k4kTriggerVideo);
			break;
		case IviScopeTriggerImmediate:
			hr = err.ValueNotSupported(_T("IviScopeTriggerImmediate"), _T("val"));
			break;
		case IviScopeTriggerACLine:
			hr = _ITkdpo2k3k4kTrigger::put_Type(Tkdpo2k3k4kTriggerRiseFallTime);
			break;
		case IviScopeTriggerEdge:
		case IviScopeTriggerWidth:
		case IviScopeTriggerRunt:
					hr = _ITkdpo2k3k4kTrigger::put_Type((Tkdpo2k3k4kTriggerTypeEnum)val);
					break;
		case IviScopeTriggerGlitch:		
			hr = err.ValueNotSupported(_T("IviScopeTriggerGlitch"), _T("val"));
			break;
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_AcLine(IIviScopeTriggerAcLine** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Edge(IIviScopeTriggerEdge** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Glitch(IIviScopeTriggerGlitch** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Runt(IIviScopeTriggerRunt** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_TV(IIviScopeTriggerTv** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTrigger_get_Width(IIviScopeTriggerWidth** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerAcLine_get_Slope(IviScopeACLineSlopeEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerAcLine_put_Slope(IviScopeACLineSlopeEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerEdge_Configure(BSTR Source, double Level, IviScopeTriggerSlopeEnum Slope)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerEdge_get_Slope(IviScopeTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAEdge::get_Slope((Tkdpo2k3k4kTriggerSlopeEnum*)val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerEdge_put_Slope(IviScopeTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAEdge::put_Slope((Tkdpo2k3k4kTriggerSlopeEnum)val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_Configure(BSTR Source, double Level, double Width, IviScopeGlitchPolarityEnum polarity, IviScopeGlitchConditionEnum condition)
{
	HRESULT hr = S_OK;

	hr = err.MethodNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_get_condition(IviScopeGlitchConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_put_condition(IviScopeGlitchConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_get_polarity(IviScopeGlitchPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_put_polarity(IviScopeGlitchPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_get_Width(double* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerGlitch_put_Width(double val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_Configure(BSTR Source, double ThresholdLow, double ThresholdHigh, IviScopeRuntPolarityEnum polarity)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_get_polarity(IviScopeRuntPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_put_polarity(IviScopeRuntPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_get_ThresholdHigh(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerARunt::get_UpperLevel(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_put_ThresholdHigh(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerARunt::put_UpperLevel(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_get_ThresholdLow(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerARunt::get_LowerLevel(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerRunt_put_ThresholdLow(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerARunt::put_LowerLevel(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_Configure(BSTR Source, IviScopeTVSignalFormatEnum SignalFormat, IviScopeTVTriggerEventEnum Event, IviScopeTVTriggerPolarityEnum polarity)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
		if (SUCCEEDED(hr))
		{
			hr = _ITkdpo2k3k4kTriggerAVideo::put_TriggerOn((Tkdpo2k3k4kTriggerVideoFieldsEnum)(Event-1));
			if (SUCCEEDED(hr))
			{
				hr = _ITkdpo2k3k4kTriggerAVideo::put_Standard((Tkdpo2k3k4kTriggerVideoStandardEnum)(SignalFormat-1));
				if (SUCCEEDED(hr))
				{
					hr = _ITkdpo2k3k4kTriggerAVideo::put_Polarity((Tkdpo2k3k4kTriggerVideoPolarityEnum)(polarity-1));
				}
			}
		}
	}
	return hr; 
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_get_LineNumber(long* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_put_LineNumber(long val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_get_Event(IviScopeTVTriggerEventEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_put_Event(IviScopeTVTriggerEventEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_get_polarity(IviScopeTVTriggerPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_put_polarity(IviScopeTVTriggerPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_get_SignalFormat(IviScopeTVSignalFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerTv_put_SignalFormat(IviScopeTVSignalFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = err.PropertyNotSupported();

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_Configure(BSTR Source, double Level, double ThresholdLow, double ThresholdHigh, IviScopeWidthPolarityEnum polarity, IviScopeWidthConditionEnum condition)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_get_condition(IviScopeWidthConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::get_Condition((Tkdpo2k3k4kTriggerPulseWidthConditionEnum*)val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_put_condition(IviScopeWidthConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::put_Condition((Tkdpo2k3k4kTriggerPulseWidthConditionEnum)val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_get_polarity(IviScopeWidthPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_put_polarity(IviScopeWidthPolarityEnum val)
{
	HRESULT hr = S_OK;
	if(val == IviScopeWidthPolarityEither)
	{
		hr=err.ValueNotSupported(_T("IviScopeWidthPolarityEither"), _T("val"));
		return hr;
	}
	else
	{
		hr = InstrPrintCommand();
		return hr;
	}
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_get_ThresholdLow(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::get_LowerLimit(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_put_ThresholdLow(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::put_LowerLimit(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_get_ThresholdHigh(double* val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::get_UpperLimit(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::IIviScopeTriggerWidth_put_ThresholdHigh(double val)
{
	HRESULT hr = S_OK;

	hr = _ITkdpo2k3k4kTriggerAWidth::put_UpperLimit(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_ConfigureRecord(double TimePerRecord, long MinNumPts, double AcquisitionStartTime)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = io.Printf(_T("HORIZONTAL:SCALE %f;RECORDLENGTH %d"), TimePerRecord / 10, MinNumPts);
		if (SUCCEEDED(hr))
		{
			hr = _ITkdpo2k3k4kAcquisition::put_StartTime(AcquisitionStartTime);
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_NumberAverages(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_NumberAverages(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}



HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_RecordLength(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_SampleRate(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_NumberOfPointsMin(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_NumberOfPointsMin(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_StartTime(double* val)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		double horzTime,senTime;
		senTime = 0.0;
		hr = _ITkdpo2k3k4kAcquisition::get_TimePerRecord(&horzTime);
		
		hr = io.QueryNumber(_T(":HOR:DEL:TIM?"),&senTime);

		*val = senTime - horzTime*(50)/100.0;
	}
	else *val = 0.5;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_StartTime(double val)
{
	HRESULT hr = S_OK;

	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		double horzTime,senTime;
		
		hr = _ITkdpo2k3k4kAcquisition::get_TimePerRecord(&horzTime);
		
		senTime = val + horzTime*(50)/100.0;

		hr = io.Printf(_T(":HOR:DEL:TIM %g"), senTime);
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_TimePerRecord(double* val)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = io.QueryNumber(_T("HORIZONTAL:SCALE?"), val);
		if (SUCCEEDED(hr))
		{
			*val = *val * 10;
		}
	}
	else *val = 4e-5;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_TimePerRecord(double val)
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
	hr = io.Printf(_T("HORIZONTAL:SCALE %g"), val / 10);
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_State(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_State(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_Mode(Tkdpo2k3k4kAcquisitionModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_Mode(Tkdpo2k3k4kAcquisitionModeEnum val)
{
	HRESULT hr = S_OK;

	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) &&  ((val==Tkdpo2k3k4kAcquisitionModeEnvelope) ||(val == Tkdpo2k3k4kAcquisitionModeHiRes ) || (val==Tkdpo2k3k4kAcquisitionModePeakDetect)))
	hr = err.ValueNotSupported(_T("Tkdpo2k3k4kAcquisitionMode"), _T("val"));
	else
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_NumberAcquisitions(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_RunStop(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_RunStop(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_SingleSequence(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_SingleSequence(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_MagniVuState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_put_MagniVuState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_MaxSampleRate(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_get_SamplingMode(Tkdpo2k3k4kAcquisitionSamplingModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}




HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_Stop()
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_Start()
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_SetAverageMode(long NumberAverages)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kAcquisition_AutoSet()
{
	HRESULT hr = S_OK;
	VARIANT_BOOL sim;
	hr = DriverBase::get_Simulate(&sim);
	if(sim == VARIANT_FALSE)
	{
		hr = InstrPrintCommand();
	}
	return hr;
}






HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_AHoldoffTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_AHoldoffTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_Type(Tkdpo2k3k4kTriggerTypeEnum* val)
{
	HRESULT hr = S_OK;
	CString strType,strClass;
	
	

	
	hr = io.QueryString(_T("TRIGGER:A:TYPE?"),strType);
	
	if((strType == "PULSE")||(strType == "PULS"))
	{
		hr = io.QueryString(_T("TRIGGER:A:PULSE:CLASS?"), strClass);
		EnumFromString(strClass,*val);
	}
	else
	if((strType == "LOGIC") || (strType == "LOG"))
	{
		hr = io.QueryString(_T("TRIGGER:A:LOGIC:CLASS?"), strClass);
		EnumFromString(strClass,*val);
	}
	else
	if((strType == "EDGE") || (strType == "EDG"))
	{
		CString bstate;
		if(!(InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))))
		{hr = io.QueryString(_T("TRIGGER:B:STATE?"),bstate);
		if((bstate == "1")||(bstate == "ON"))
			*val = Tkdpo2k3k4kTriggerSequence;
		else *val = Tkdpo2k3k4kTriggerEdge;
		}
		else *val = Tkdpo2k3k4kTriggerEdge;
	}
	else
	{
		EnumFromString(strType,*val);
	}
	

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_Type(Tkdpo2k3k4kTriggerTypeEnum val)
{
	HRESULT hr = S_OK;
	CString strCmd;

	if((val == Tkdpo2k3k4kTriggerSequence) && ((InstrumentInFamily(_T("DPO2000 Series")))|| (InstrumentInFamily(_T("MSO2000 Series")))))
		return err.InvalidValue(_T("Type"),_T("Tkdpo2k3k4kTriggerSequence"));

	if(SUCCEEDED(hr))
	{
	switch(val)
		{
			case Tkdpo2k3k4kTriggerEdge:
						strCmd.Format(_T("TRIGGER:A:TYPE %s"),EnumToString(val));
						io.WriteString(strCmd);
						if(!(InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))))
						io.WriteString(_T("TRIGger:B:STATE 0"));
				break;

			case Tkdpo2k3k4kTriggerBus:
			case Tkdpo2k3k4kTriggerVideo:
				strCmd.Format(_T("TRIGGER:A:TYPE %s"),EnumToString(val));
				io.WriteString(strCmd);
				break;
			
			case Tkdpo2k3k4kTriggerPulseWidth:
			case Tkdpo2k3k4kTriggerRunt:
			case Tkdpo2k3k4kTriggerRiseFallTime:
				io.WriteString(_T("TRIGGER:A:TYPE PULSE"));				
				strCmd.Format(_T("TRIGGER:A:PULSE:CLASS %s"),EnumToString(val));
				io.WriteString(strCmd);				
				break;
			
			case Tkdpo2k3k4kTriggerLogic:
			case Tkdpo2k3k4kTriggerSetupHold:
				io.WriteString(_T("TRIGGER:A:TYPE LOGIC"));				
				strCmd.Format(_T("TRIGGER:A:LOGIC:CLASS %s"),EnumToString(val));
				io.WriteString(strCmd);				
				break;	

			case Tkdpo2k3k4kTriggerSequence:
						strCmd.Format(_T("TRIGGER:A:TYPE %s"),EnumToString(val));
						io.WriteString(strCmd);
				io.WriteString(_T("TRIGger:B:STATE 1"));
				break;
	}
	}

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_AEdge(ITkdpo2k3k4kTriggerAEdge** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_BState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_BState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_BDelayTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_BDelayTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_CurrentState(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_EventCount(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_EventCount(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_BLevel(Tkdpo2k3k4kChannelEnum Source, double* val)
{
	HRESULT hr = S_OK;
	
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_BLevel(Tkdpo2k3k4kChannelEnum Source, double val)
{
	HRESULT hr = S_OK;
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_TriggerBBy(Tkdpo2k3k4kTriggerBByEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_TriggerBBy(Tkdpo2k3k4kTriggerBByEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_Frequency(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ProbeAttenuation(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_ProbeAttenuation(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_VerticalUnitValue(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ABus(ITkdpo2k3k4kTriggerABus** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ALogic(ITkdpo2k3k4kTriggerALogic** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_AWidth(ITkdpo2k3k4kTriggerAWidth** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ARunt(ITkdpo2k3k4kTriggerARunt** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ASetupHold(ITkdpo2k3k4kTriggerASetupHold** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_ATransition(ITkdpo2k3k4kTriggerATransition** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_AVideo(ITkdpo2k3k4kTriggerAVideo** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_BEdge(ITkdpo2k3k4kTriggerBEdge** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_get_Mode(Tkdpo2k3k4kTriggerModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_put_Mode(Tkdpo2k3k4kTriggerModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ReadARFIndependentParameters(double* UpperThreshold, double* LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*UpperThreshold = 0;
		*LowerThreshold = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, UpperThreshold, LowerThreshold);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureARFIndependentParameters(double UpperThreshold, double LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ReadBIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kChannel1;
		*Level = 0;
		*UpperThreshold = 0;
		*LowerThreshold = 0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, Level, UpperThreshold, LowerThreshold);;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureBIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ReadAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kChannel1;
		*Level = 0;
		*UpperThreshold = 800.0000E-3;
		*LowerThreshold = 0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrQueryResponse(CUR_TIMEOUT, Level, UpperThreshold, LowerThreshold);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureAOnlyTrigger(double HoldoffTime)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureAThenBAfterEventsTrigger(double HoldoffTime, long Events)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTrigger_ConfigureAThenBAfterTimeTrigger(double HoldoffTime, double DelayTime)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}






HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_Configure(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( Source == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_get_Slope(Tkdpo2k3k4kTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_put_Slope(Tkdpo2k3k4kTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_get_Source(Tkdpo2k3k4kTriggerSource2Enum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_put_Source(Tkdpo2k3k4kTriggerSource2Enum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( val == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_get_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_put_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_get_Level(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_put_Level(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_put_LevelEnum(Tkdpo2k3k4kTriggerLevelEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_ConfigureLevelTo50Percent()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAEdge_Read(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kTriggerSource2CH1;
		*Level = 0;
		*Slope = Tkdpo2k3k4kTriggerSlopeRise;
		*Coupling = Tkdpo2k3k4kTriggerEdgeCouplingDC;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Slope, Source, Level, Coupling);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kBuses_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kBus>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kBuses_get_Item(BSTR Name, ITkdpo2k3k4kBus** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kBus>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kBuses_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kBus>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_DDT(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_TrackMode(Tkdpo2k3k4kCursorTrackModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_put_TrackMode(Tkdpo2k3k4kCursorTrackModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_Type(Tkdpo2k3k4kCursorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_put_Type(Tkdpo2k3k4kCursorTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_HBars(ITkdpo2k3k4kCursorHBars** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_VBars(ITkdpo2k3k4kCursorVBars** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_XY(ITkdpo2k3k4kCursorXY** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_get_Source(Tkdpo2k3k4kCursorSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursor_put_Source(Tkdpo2k3k4kCursorSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_SetMeasurementScale(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_get_Units(Tkdpo2k3k4kCursorHBarsUnitsEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_put_Units(Tkdpo2k3k4kCursorHBarsUnitsEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_get_Delta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_get_Position1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_put_Position1(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_get_Position2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorHBars_put_Position2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_SetMeasurementScale(Tkdpo2k3k4kCursorMeasurementScaleEnum MeasurementScale)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_Delta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_Position1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_put_Position1(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_Position2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_put_Position2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_Units(Tkdpo2k3k4kCursorVBarsUnitsEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_put_Units(Tkdpo2k3k4kCursorVBarsUnitsEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_HorizontalPosition1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_HorizontalPosition2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_VDelta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_AlternativeReadout1(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorVBars_get_AlternativeReadout2(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_get_Readout(Tkdpo2k3k4kCursorXYReadoutEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_put_Readout(Tkdpo2k3k4kCursorXYReadoutEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_get_Rectangle(ITkdpo2k3k4kCursorXYRectangle** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_get_Ratio(ITkdpo2k3k4kCursorXYRatio** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_get_Product(ITkdpo2k3k4kCursorXYProduct** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXY_get_PolarCoordinates(ITkdpo2k3k4kCursorXYPolarCoordinates** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_XDelta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_XPosition1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_put_XPosition1(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_XPosition2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_put_XPosition2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_XUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_YDelta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_YPosition1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_put_YPosition1(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_YPosition2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_put_YPosition2(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRectangle_get_YUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRatio_get_Delta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRatio_get_Position1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRatio_get_Position2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYRatio_get_Units(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYProduct_get_Delta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYProduct_get_Position1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYProduct_get_Position2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYProduct_get_Units(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaDelta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaPosition2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_ThetaUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Delta(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position1(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Position2(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kCursorXYPolarCoordinates_get_Units(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_ClockState(Tkdpo2k3k4kDisplayClockStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_ClockState(Tkdpo2k3k4kDisplayClockStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_BackLightIntensity(Tkdpo2k3k4kDisplayBackLightIntensityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_BackLightIntensity(Tkdpo2k3k4kDisplayBackLightIntensityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_Format(Tkdpo2k3k4kDisplayDisplayFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_Format(Tkdpo2k3k4kDisplayDisplayFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_GraticuleStyle(Tkdpo2k3k4kDisplayGraticuleEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_GraticuleStyle(Tkdpo2k3k4kDisplayGraticuleEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_Persistence(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_Persistence(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_PersistenceEnum(Tkdpo2k3k4kDisplayPersistenceEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_WaveformIntensity(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_WaveformIntensity(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_GraticuleIntensity(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_GraticuleIntensity(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_DotsOnly(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_DotsOnly(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_DisplayMessageBox(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_DisplayMessageBox(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_GlitchCaptureState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_GlitchCaptureState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_get_GlitchIntensity(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_put_GlitchIntensity(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_GetDisplayMessage(BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = SysAllocString(L"");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_ClearMessage()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_ShowMessage(BSTR Message)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_GetMessageBoxCoordinates(long* X1, long* Y1, long* X2, long* Y2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		X1 = 0;
		Y1 = 0;
		X2 = 0;
		Y2 = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, X1, Y1, X2, Y2);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDisplay_SetMessageBoxCoordinates(long X1, long Y1, long X2, long Y2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHardCopy_Print()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHardCopy_get_Layout(Tkdpo2k3k4kPrintLayoutEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHardCopy_put_Layout(Tkdpo2k3k4kPrintLayoutEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHardCopy_get_InkSaver(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHardCopy_put_InkSaver(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_Configure(Tkdpo2k3k4kSource1Enum Source, Tkdpo2k3k4kHistogramModeEnum Mode)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSourceCH3 ) ||  ( Source == Tkdpo2k3k4kSourceCH4 ) || ( Source == Tkdpo2k3k4kSourceREF3  ) ||  ( Source == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_Read(Tkdpo2k3k4kSource1Enum* Source, Tkdpo2k3k4kHistogramModeEnum* Mode)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kSource1CH1;
		*Mode = Tkdpo2k3k4kHistogramModeOff;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Mode, Source);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_ConfigureBoxCoordinates(double Top, double Left, double Right, double Bottom)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_ReadBoxCoordinates(double* Top, double* Left, double* Right, double* Bottom)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Top = 1.0000E-09;
		*Left = 0.2500;
		*Right = 2.0000E-09;
		*Bottom = 0.5000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Top, Left, Right, Bottom);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_ConfigureBoxCoordinatesPercent(double Top, double Left, double Right, double Bottom)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_ReadBoxCoordinatesPercent(double* Top, double* Left, double* Right, double* Bottom)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Top = 20.0000;
		*Left = 20.0000;
		*Right = 80.0000;
		*Bottom = 80.0000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Top, Left, Right, Bottom);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_Reset()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_get_Data(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_get_Display(Tkdpo2k3k4kHistogramDisplayEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_put_Display(Tkdpo2k3k4kHistogramDisplayEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_get_Mode(Tkdpo2k3k4kHistogramModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_put_Mode(Tkdpo2k3k4kHistogramModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_get_Source(Tkdpo2k3k4kSource1Enum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHistogram_put_Source(Tkdpo2k3k4kSource1Enum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kSourceCH3 ) ||  ( val == Tkdpo2k3k4kSourceCH4 ) || ( val == Tkdpo2k3k4kSourceREF3  ) ||  ( val == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_Configure(double Position, double Scale, long RecordLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_ConfigureDelay(VARIANT_BOOL Mode, double Time)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_Read(double* Position, double* Scale, long* RecordLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Position = 50;
		*Scale = 4.0000E-6;
		*RecordLength = 10000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Position, Scale, RecordLength);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_ReadDelay(VARIANT_BOOL* Mode, double* Time)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Mode = VARIANT_TRUE;
		*Time = 0.0E+0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Mode, Time);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DelayMode(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_DelayMode(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DelayTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_DelayTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DigitalMainRecordLength(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DigitalMagniVuRecordLength(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DigitalMainSampleRate(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_DigitalMagniVuSampleRate(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_Scale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_Scale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_Resolution(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_Resolution(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_RecordLength(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_RecordLength(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_SampleRate(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_SampleRate(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_get_TriggerPosition(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kHorizontal_put_TriggerPosition(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMaths_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kMath>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMaths_get_Item(BSTR Name, ITkdpo2k3k4kMath** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kMath>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMaths_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kMath>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kMeasurementSlot>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Item(BSTR Name, ITkdpo2k3k4kMeasurementSlot** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kMeasurementSlot>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Gating(Tkdpo2k3k4kMeasurementGatingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_put_Gating(Tkdpo2k3k4kMeasurementGatingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_StatisticsMode(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_put_StatisticsMode(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_StatisticsWeighting(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_put_StatisticsWeighting(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Indicators(ITkdpo2k3k4kMeasurementsIndicators** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Frequency(ITkdpo2k3k4kMeasurementsFrequency** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_ClearStatistics()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurements_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kMeasurementSlot>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_get_State(Tkdpo2k3k4kMeasurementIndicatorStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_put_State(Tkdpo2k3k4kMeasurementIndicatorStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalIndicators(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_get_HorizontalValue(long Indicator, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_get_VerticalIndicators(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsIndicators_get_VerticalValue(long Indicator, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_DefaultSetup()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_RecallSetupFromFile(BSTR FileName)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_RecallSetupFromMemory(Tkdpo2k3k4kMemoryLocationEnum Location)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_RecallWaveformFromFile(Tkdpo2k3k4kReferenceEnum RefMemory, BSTR FileName)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveAllDigitalChannels(BSTR FileName)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveSetupToFile(BSTR FileName)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveSetupToMemory(Tkdpo2k3k4kMemoryLocationEnum Location)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveWaveformToFile(Tkdpo2k3k4kDataSourceEnum Source, BSTR FileName)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSourceCH3 ) ||  ( Source == Tkdpo2k3k4kSourceCH4 ) || ( Source == Tkdpo2k3k4kSourceREF3  ) ||  ( Source == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveWaveformToReference(Tkdpo2k3k4kDataSourceEnum Source, Tkdpo2k3k4kReferenceEnum RefMemory)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSourceCH3 ) ||  ( Source == Tkdpo2k3k4kSourceCH4 ) || ( Source == Tkdpo2k3k4kSourceREF3  ) ||  ( Source == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_SaveWaveFormFileFormat(Tkdpo2k3k4kSaveWaveformFileFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_SaveWaveFormFileFormat(Tkdpo2k3k4kSaveWaveformFileFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_SaveButtonType(Tkdpo2k3k4kSaveButtonTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_SaveButtonType(Tkdpo2k3k4kSaveButtonTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_ImageFormat(Tkdpo2k3k4kImageFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_ImageFormat(Tkdpo2k3k4kImageFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_ImageLayout(Tkdpo2k3k4kImageLayoutEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_ImageLayout(Tkdpo2k3k4kImageLayoutEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_InkSaverPalette(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_InkSaverPalette(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_get_WaveformGating(Tkdpo2k3k4kMeasurementGatingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_put_WaveformGating(Tkdpo2k3k4kMeasurementGatingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveAllWaveformsToFile(BSTR FileName, Tkdpo2k3k4kSaveWaveformFileFormatEnum FileFormat)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveImage(BSTR Filename, Tkdpo2k3k4kImageFormatEnum ImageFormat, Tkdpo2k3k4kImageLayoutEnum ImageLayout)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSaveRecall_SaveEventTableBusData(long Bus, BSTR Filename)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSearches_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kSearch>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSearches_get_Item(BSTR Name, ITkdpo2k3k4kSearch** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kSearch>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kSearches_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kSearch>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_BusSource(Tkdpo2k3k4kTrigABusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_put_BusSource(Tkdpo2k3k4kTrigABusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_put_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_BusType(Tkdpo2k3k4kTriggerBusTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_put_BusType(Tkdpo2k3k4kTriggerBusTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_Audio(ITkdpo2k3k4kTriggerABusAudio** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_CAN(ITkdpo2k3k4kTriggerABusCAN** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_Flexray(ITkdpo2k3k4kTriggerABusFlexray** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_I2C(ITkdpo2k3k4kTriggerABusI2C** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_LIN(ITkdpo2k3k4kTriggerABusLIN** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_RS232(ITkdpo2k3k4kTriggerABusRS232** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_SPI(ITkdpo2k3k4kTriggerABusSPI** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_get_USB(ITkdpo2k3k4kTriggerABusUSB** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABus_Configure(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTriggerBusTypeEnum BusType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_get_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusAudio_put_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusCAN_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_get_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_put_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ReadHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*CRC = ::SysAllocString(L"XXXXXXXXXXX");
		*CycleCount = ::SysAllocString(L"XXXXXX");
		*FrameID = ::SysAllocString(L"XXXXXXXXXXX");
		*IndicatorBits = ::SysAllocString(L"XXXXX");
		*PayloadLength = ::SysAllocString(L"XXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ConfigureHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ReadFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXXXXXXX");
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Value = ::SysAllocString(L"XXXXXXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,HighValue,Qualifier,Value );

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ConfigureFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ReadData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXXXX");
		*Offset = -1;
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Size = 1;
		*Value = ::SysAllocString(L"XXXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, HighValue, Offset, Qualifier, Size, Value);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ConfigureData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ReadCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXX");
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Value = ::SysAllocString(L"XXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, HighValue, Qualifier, Value);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusFlexray_ConfigureCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusI2C_put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}



HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val)
{
	HRESULT hr = S_OK;

	if((val == Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime ) || (val == Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime) || (val == Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime))
		hr =  err.ValueNotSupported(_T("Tkdpo2k3k4kTrigABusLINErrorType"), _T("val"));
	
	else  hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_get_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusLIN_put_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_get_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_put_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_get_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_put_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_get_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_put_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_get_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusRS232_put_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_get_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_put_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_get_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusSPI_put_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_get_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerABusUSB_put_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_Configure()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ConfigureSource(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerSourceCH3 ) ||  ( Source == Tkdpo2k3k4kTriggerSourceCH4)))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ReadSource(Tkdpo2k3k4kTriggerSourceEnum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kTriggerSourceCH1;
		*Input = Tkdpo2k3k4kTriggerLogicInputChannelX;
		*Threshold = 0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerSourceCH3 ) ||  ( Source == Tkdpo2k3k4kTriggerSourceCH4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrQueryResponse(CUR_TIMEOUT, Input, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ConfigurePattern(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum LogicOperatorType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ReadPattern(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* LogicOperatorType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Condition = Tkdpo2k3k4kTriggerPatternConditionTrue;
		*LessLimit = 8.0000E-9;
		*MoreLimit = 8.0000E-9;
		*LogicOperatorType = Tkdpo2k3k4kTriggerLogicOperatorTypeAND;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Condition, LessLimit, MoreLimit, LogicOperatorType);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ConfigureClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerLogicClockSourceCH3  ) ||  ( Source == Tkdpo2k3k4kTriggerLogicClockSourceCH4 ) || ( Source == Tkdpo2k3k4kTriggerLogicClockSourceREF3  ) ||  ( Source == Tkdpo2k3k4kTriggerLogicClockSourceREF4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ReadClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kTriggerLogicClockSourceNone;
		*EdgeType = Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, EdgeType);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_get_Condition(Tkdpo2k3k4kTriggerPatternConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_put_Condition(Tkdpo2k3k4kTriggerPatternConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_get_LessLimit(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_put_LessLimit(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_get_MoreLimit(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_put_MoreLimit(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_get_Function(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_put_Function(Tkdpo2k3k4kTriggerLogicOperatorTypeEnum val)
{
	HRESULT hr = S_OK;
	
	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) && (val==Tkdpo2k3k4kTriggerLogicOperatorTypeNOR) ||(val == Tkdpo2k3k4kTriggerLogicOperatorTypeOR))
	hr =  err.ValueNotSupported(_T("Tkdpo2k3k4kTriggerLogicOperatorType"), _T("val"));
	else
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ReadRF(Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Input = Tkdpo2k3k4kTriggerLogicInputChannelX;
		*Threshold = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,Input,Threshold );

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerALogic_ConfigureRF(Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_Configure()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_Source(Tkdpo2k3k4kTiggerPulseSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_Source(Tkdpo2k3k4kTiggerPulseSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTiggerPulseSourceCH3 ) ||  ( val == Tkdpo2k3k4kTiggerPulseSourceCH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_Condition(Tkdpo2k3k4kTriggerPulseWidthConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_Condition(Tkdpo2k3k4kTriggerPulseWidthConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_Polarity(Tkdpo2k3k4kTriggerPulsePolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_Polarity(Tkdpo2k3k4kTriggerPulsePolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_Width(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_Width(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_LowerLimit(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_LowerLimit(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_get_UpperLimit(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAWidth_put_UpperLimit(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_Configure()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_Source(Tkdpo2k3k4kChannelChannelEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_Source(Tkdpo2k3k4kChannelChannelEnum val)
{
	HRESULT hr = S_OK;
	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kChannel3 ) ||  ( val == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_Condition(Tkdpo2k3k4kTriggerRuntConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_Condition(Tkdpo2k3k4kTriggerRuntConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_Width(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_Width(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_LowerLevel(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_LowerLevel(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_get_UpperLevel(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerARunt_put_UpperLevel(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_Configure()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_DataSource(Tkdpo2k3k4kTriggerSource2Enum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_DataSource(Tkdpo2k3k4kTriggerSource2Enum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( val == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_DataLevel(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_DataLevel(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_ClockSource(Tkdpo2k3k4kTriggerSource2Enum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_ClockSource(Tkdpo2k3k4kTriggerSource2Enum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( val == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_ClockEdge(Tkdpo2k3k4kTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_ClockEdge(Tkdpo2k3k4kTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_ClockLevel(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_ClockLevel(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_HoldTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_HoldTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_get_SetTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerASetupHold_put_SetTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_Configure()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_get_Source(Tkdpo2k3k4kChannelEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_put_Source(Tkdpo2k3k4kChannelEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kChannel3 ) ||  ( val == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_get_DeltaTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_put_DeltaTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_get_Condition(Tkdpo2k3k4kTriggerTransitionConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_put_Condition(Tkdpo2k3k4kTriggerTransitionConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_get_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerATransition_put_Polarity(Tkdpo2k3k4kTriggerRuntPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_FieldHoldoff(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_FieldHoldoff(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_Polarity(Tkdpo2k3k4kTriggerVideoPolarityEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_Polarity(Tkdpo2k3k4kTriggerVideoPolarityEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_Source(Tkdpo2k3k4kTriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_Source(Tkdpo2k3k4kTriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTriggerSourceCH3 ) ||  ( val == Tkdpo2k3k4kTriggerSourceCH4)))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_Standard(Tkdpo2k3k4kTriggerVideoStandardEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_Standard(Tkdpo2k3k4kTriggerVideoStandardEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_TriggerOn(Tkdpo2k3k4kTriggerVideoFieldsEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_TriggerOn(Tkdpo2k3k4kTriggerVideoFieldsEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_CustomLinePeriod(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_CustomLinePeriod(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_CustomScan(Tkdpo2k3k4kTriggerVideoCustomScanEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_CustomScan(Tkdpo2k3k4kTriggerVideoCustomScanEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_CustomSyncInterval(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_CustomSyncInterval(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_CustomFormat(Tkdpo2k3k4kTriggerVideoCustomFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_CustomFormat(Tkdpo2k3k4kTriggerVideoCustomFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_get_HDTvFormat(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerAVideo_put_HDTvFormat(Tkdpo2k3k4kTriggerVideoHDTvFormatEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_Configure(Tkdpo2k3k4kTriggerSource2Enum Source, double Level, Tkdpo2k3k4kTriggerSlopeEnum Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum Coupling)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( Source == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_Read(Tkdpo2k3k4kTriggerSource2Enum* Source, double* Level, Tkdpo2k3k4kTriggerSlopeEnum* Slope, Tkdpo2k3k4kTriggerEdgeCouplingEnum* Coupling)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kTriggerSource2CH1;
		*Level = 0;
		*Slope = Tkdpo2k3k4kTriggerSlopeRise;
		*Coupling = Tkdpo2k3k4kTriggerEdgeCouplingDC;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,Slope, Source,Level,Coupling);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_get_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_put_Coupling(Tkdpo2k3k4kTriggerEdgeCouplingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_get_Level(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_put_Level(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_put_LevelEnum(Tkdpo2k3k4kTriggerLevelEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_get_Slope(Tkdpo2k3k4kTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_put_Slope(Tkdpo2k3k4kTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_get_Source(Tkdpo2k3k4kTriggerSource2Enum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kTriggerBEdge_put_Source(Tkdpo2k3k4kTriggerSource2Enum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kTriggerSource2CH3   ) ||  ( val == Tkdpo2k3k4kTriggerSource2CH4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kReferences_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kReference>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kReferences_get_Item(BSTR Name, ITkdpo2k3k4kReference** val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( CComBSTR(Name) == CComBSTR(_T("REF3"))   ) ||  ( CComBSTR(Name) == CComBSTR(_T("REF4")) )))
	{
		return err.ReferenceNotSupported();		
	}

	hr = GetRepCapItem<Tkdpo2k3k4kReference>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kReferences_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kReference>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDigitalChannels_get_Count(long* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemCount<Tkdpo2k3k4kDigitalChannel>(val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDigitalChannels_get_Item(BSTR Name, ITkdpo2k3k4kDigitalChannel** val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItem<Tkdpo2k3k4kDigitalChannel>(Name, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kDigitalChannels_get_Name(long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = GetRepCapItemName<Tkdpo2k3k4kDigitalChannel>(Index, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_get_Mode(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_put_Mode(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_get_Scale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_put_Scale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_get_State(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_put_State(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kZoom_get_Factor(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_WriteWaveformToReference(Tkdpo2k3k4kReferenceEnum WaveformReference, SAFEARRAY** WaveformArray, double InitialX, double XIncrement)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	/**************************************************************************
	Requirement Details:
	1.The function will write an waveform to one of the specified reference memory.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	1.Will use the CURVE command and write the data to scope in binary mode.
	2.Will always write the data as 4 byte float with YMult = 1.0
	3.So input SAFEARRAY is required in volt.		
	4.So the waveform in preambles to be set before transfering the data are:
		WFMINPRE:ENCD BIN;BN_FMT FP;BYT_OR LSB;YMULT 1.0
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strDestination = NULL;		//To get destination wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataDestination;		//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmInPreBinFmt;		//To store current binary format
	CString _strWfmInPreBytOr;			//To store current byte order
	CString _strWfmInPreBytNr;			//To store current bytes count
	CString _strWfmInPreEncd;			//To store current Encd format.
	CString _strWfmInPreYMult;			//To store current Y multiplying factor
	CString _strWfmInPrePtOff;			//To store current Trigger offset
	CString _strWfmInPreNrPt;			//To store current total ponits
	CString _strWfmInPreXIncr;			//To store current X Incr
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	char _WriteBuffer[256];					//for reading part of CURVE? data
	LONG _nTotalByteCount,_nRetVal;			//total byte count of curve data
	float _fTempVal;						// temp float var
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	double *pArrayElements;					// For reading data from SAFEARRAY
	char 	*_CurveData,*tempStr;			// to build the curve data
	//function in parameters

	//Validate the input SAFEARRAY
	if ( (*WaveformArray)->cDims != 1 ) return(E_INVALIDARG);

	// checking if it is an array of double
	if ( (*WaveformArray)->cbElements != 8 ) return(E_INVALIDARG);

	// how many waveform points are there in the array
	_nRecLen = (*WaveformArray)->rgsabound[0].cElements;
	if(_nRecLen <500) return(E_INVALIDARG);
	
	//save the current header setting
	
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//Get the destination waveform string
	if (Is2Channel() && ((WaveformReference == Tkdpo2k3k4kReference3)||(WaveformReference == Tkdpo2k3k4kReference4)))
	{
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return S_FALSE;//Undeclared - ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	
	//The above translation will validate the Enum value also.
	//Store all WFMINPRE parameters b4 modifying them for CURVE
	if (SUCCEEDED(hr))
	{
		hr = io.QueryString(_T("DATA:DESTINATION?"),_strDataDestination);
	}
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("DATA:START?"),_strDataStart);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:BN_FMT?"),_strWfmInPreBinFmt);
	if (SUCCEEDED(hr))hr = io.QueryString(_T("WFMINPRE:BYT_OR?"),_strWfmInPreBytOr);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:ENCD?"),_strWfmInPreEncd);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:BYT_NR?"),_strWfmInPreBytNr);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:YMULT?"),_strWfmInPreYMult);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:PT_OFF?"),_strWfmInPrePtOff);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:NR_PT?"),_strWfmInPreNrPt);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("WFMINPRE:XINCR?"),_strWfmInPreXIncr);
	if (SUCCEEDED(hr)) hr = io.QueryString(_T("ACQUIRE:STATE?"),_strRunStop);

	//Set the Data Destination
	if (SUCCEEDED(hr))
	{
		strFormat.Format (_T("DATA:DESTINATION %s"),EnumToString(WaveformReference));
		hr = io.WriteString(strFormat);
	}
	//Now set the data destination and data start
	//set Pt offset and Nr_Pt
	_nPtOffset = (LONG)((0-InitialX)/XIncrement);
	if (SUCCEEDED(hr))
	{
		strFormat.Format (_T("WFMINPRE:NR_PT %d;PT_OFF %d"),_nRecLen,_nPtOffset);
		hr = io.WriteString(strFormat);
	//set thr sample interval
	}
	if (SUCCEEDED(hr))
	{
		strFormat.Format (_T("WFMINPRE:XINCR %g"),XIncrement);
		hr = io.WriteString(strFormat);
	}
	//Set Wfminpre parameters
	if(SUCCEEDED(hr))
	{
		strFormat = _T("WFMINPRE:ENCDG BIN;BN_FMT FP;BYT_NR 4;YMULT 1.0");
		hr = io.WriteString(strFormat);

		if(SUCCEEDED(hr))
		{
			strFormat = _T(":WFMINPRE:BYT_OR LSB");
			hr = io.WriteString(strFormat);
		}
	}
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Build the CURVE command in the format of:
	//"CURVE #<x><yy><data><\n>"
	// locking the array before using its elements
	hr = SafeArrayLock(*WaveformArray);
	if(SUCCEEDED(hr))
	{
		char	temp[256];
		sprintf(temp,"%d",4*_nRecLen);
		sprintf(_WriteBuffer,"CURVE #%d%d",strlen(temp),4*_nRecLen);
		
		_nTotalByteCount = 4*_nRecLen+strlen(_WriteBuffer)+1;//1 byte extra for '\n'
		_CurveData =(char*) malloc(_nTotalByteCount);
		if(_CurveData)
		{
			tempStr=_CurveData;
			pArrayElements=(double*) (*WaveformArray)->pvData;
			memcpy(tempStr,_WriteBuffer,strlen(_WriteBuffer));
			tempStr+=strlen(_WriteBuffer);

			for (int iCount=0; iCount < _nRecLen; iCount++)
			{
				_fTempVal = (float) pArrayElements[iCount];
				memcpy(tempStr,&_fTempVal,4);
				tempStr+=4;
			}
			//Write the curve data to scope
			io.Write((BYTE*)_CurveData,_nTotalByteCount,&_nRetVal);
			// We are done with CURVE,Unlock the VISA session now					
			if(_bVISALockState == TRUE)
					io.Unlock();

			free(_CurveData);
		}			

		// releasing the array
		hr = SafeArrayUnlock(*WaveformArray);
	}
	else
	{
		//Restoring the scope settings and return error
		strFormat.Format (_T("DATA:SOURCE %s;START %s"),_strDataDestination,_strDataStart);
		hr = io.WriteString(strFormat);
		if (SUCCEEDED(hr))
		{
			strFormat.Format (_T("WFMINPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s;YMULT %s;PT_OFF %s;NR_PT %s;XINCR %s"),_strWfmInPreBinFmt,_strWfmInPreBytOr,_strWfmInPreEncd,_strWfmInPreBytNr,_strWfmInPreYMult,_strWfmInPrePtOff,_strWfmInPreNrPt,_strWfmInPreXIncr);
			hr = io.WriteString(strFormat);
		}
		if (SUCCEEDED(hr))
		{
			strFormat.Format(_T("HEADER %s"),_strHeader);
			hr = io.WriteString(strFormat);
		}

		return E_INVALIDARG;
	}

	//Restoring the scope settings
	if (SUCCEEDED(hr))
	{
		strFormat.Format (_T("DATA:SOURCE %s;START %s"),_strDataDestination,_strDataStart);
		hr = io.WriteString(strFormat);
	}
	if (SUCCEEDED(hr))
	{
		strFormat.Format (_T("WFMINPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s;YMULT %s;PT_OFF %s;NR_PT %s;XINCR %s"),_strWfmInPreBinFmt,_strWfmInPreBytOr,_strWfmInPreEncd,_strWfmInPreBytNr,_strWfmInPreYMult,_strWfmInPrePtOff,_strWfmInPreNrPt,_strWfmInPreXIncr);
		hr = io.WriteString(strFormat);
	}
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_SaveWaveformToFile(Tkdpo2k3k4kSourceEnum WaveformSource, BSTR FileName, Tkdpo2k3k4kWaveformFileFormatEnum FileFormat)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Specific driver requirement Details:
		Volt data to be saved to a file(In CSV format).
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	Same as FetchWaveform()
	**************************************************************************/

	//Some temp local variables:
	CString	  strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	double _fXIncr,_fInitialX;				// for calculating initialx and x increment

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);
	
	//Check for the Source display status.
	if ( Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return S_FALSE;//Undeclared - ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".
	//The above translation will validate the Enum value also.
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);

		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		//hr = GetRoot()->InstrPrintf(OLESTR("DATA:SOURCE %s"),_strSource);
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	//Findout the Record Length
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}

	//Findout the Record Length
	if (SUCCEEDED(hr))
	{
		hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	}
	
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		io.WriteString(strFormat);
		
	}
			
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
	strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI;BYT_NR 2");
	io.WriteString(strFormat);
	if(SUCCEEDED(hr))
	{
		strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
		io.WriteString(strFormat);
	}
			
		
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;


	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	

	//if(SUCCEEDED(hr)) hr = GetRoot()->InstrRead(_ReadBuffer,_nByteCountVal);
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		
		if(_CurveData != NULL )
		{
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), &_fXIncr);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);

				//Calculate InitialX
				//Get the Trigger sample point: this is always relative to Data::start
				hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
				if(SUCCEEDED(hr))
					_fInitialX = -1*_nPtOffset*(_fXIncr)+_fXZero;							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();
				
				//Create the file
				char *strFileName = new char[SysStringLen(FileName)*2+1];
				wcstombs(strFileName,FileName,SysStringLen(FileName)+1);
				FILE *fp;
				char strFmtLine[256];
				if( (fp = fopen(strFileName, "w+" )) != NULL )
				{
					if(_nBytNr == 1) 
					{
						_charPtr= (char*)_CurveData;
						//format the first six rows
						_fTempVal = (float) _charPtr[0];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Record Length\",%d,\"Points\",%12.9g,%12.7g\n",_nRecLen,(_fInitialX),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _charPtr[1];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Sample Interval\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXIncr,(_fInitialX+_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _charPtr[2];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Point\",%d,\"Points\",%12.9g,%12.7g\n",_nPtOffset,(_fInitialX+2*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _charPtr[3];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Time\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+3*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _charPtr[4];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, ",,,%12.9g,%12.7g\n",(_fInitialX+4*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _charPtr[5];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Horizontial Offset\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+5*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						for(int i=6;i<_nRecLen;i++)
						{
							_fTempVal = (float) _charPtr[i];
							if( FileFormat == Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
								sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							else
								sprintf(strFmtLine,",,,%12.9g,%12.7g\n",(_fInitialX+i*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						}	
					}
					
					else if(_nBytNr == 2) 
					{
						_shortPtr= (short*)_CurveData;
						_fTempVal = (float) _shortPtr[0];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Record Length\",%d,\"Points\",%12.9g,%12.7g\n",_nRecLen,(_fInitialX),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _shortPtr[1];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Sample Interval\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXIncr,(_fInitialX+_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _shortPtr[2];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Point\",%d,\"Points\",%12.9g,%12.7g\n",_nPtOffset,(_fInitialX+2*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _shortPtr[3];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Time\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+3*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _shortPtr[4];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, ",,,%12.9g,%12.7g\n",(_fInitialX+4*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _shortPtr[5];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Horizontial Offset\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+5*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						for(int i=6;i<_nRecLen;i++)
						{
							_fTempVal = (float) _shortPtr[i];
							if( FileFormat == Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
								sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							else
								sprintf(strFmtLine,",,,%12.9g,%12.7g\n",(_fInitialX+i*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						}	
					}
					else if(_nBytNr == 4) 
					{
						_floatPtr= (float*)_CurveData;
						_fTempVal = (float) _floatPtr[0];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Record Length\",%d,\"Points\",%12.9g,%12.7g\n",_nRecLen,(_fInitialX),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _floatPtr[1];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Sample Interval\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXIncr,(_fInitialX+_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _floatPtr[2];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Point\",%d,\"Points\",%12.9g,%12.7g\n",_nPtOffset,(_fInitialX+2*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _floatPtr[3];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Trigger Time\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+3*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						
						_fTempVal = (float) _floatPtr[4];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, ",,,%12.9g,%12.7g\n",(_fInitialX+4*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						_fTempVal = (float) _floatPtr[5];
						if( FileFormat != Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
							sprintf(strFmtLine, "\"Horizontial Offset\",%12.9g,\"s\",%12.9g,%12.7g\n",_fXZero,(_fInitialX+5*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						else
							sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
						fwrite(strFmtLine,1,strlen(strFmtLine),fp);

						for(int i=6;i<_nRecLen;i++)
						{
							_fTempVal = (float) _floatPtr[i];
							if( FileFormat == Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor)
								sprintf(strFmtLine,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							else
								sprintf(strFmtLine,",,,%12.9g,%12.7g\n",(_fInitialX+i*_fXIncr),(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							fwrite(strFmtLine,1,strlen(strFmtLine),fp);
						}	
					}
					
					fclose(fp);
				}
			}
			free(_CurveData);
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_ReadWaveformMinMax(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
{
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> MinWfmArray;
		hr  = MinWfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		CComSafeArray<float> MaxWfmArray;
		hr  = MaxWfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*MinWaveform = MinWfmArray.Detach();
		*MaxWaveform = MaxWfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;

		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Pk-Detect, Envelope: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it. The Min and Max
		values are returned in different arrays.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	
	VARIANT_BOOL _bSingleSequence = VARIANT_FALSE; //To know the scope StopAfter mode

	ViSession	viSession;
	ViEventType		viEventType;
	ViEvent			viEvent;
	ViUInt16	viStb;
	ViStatus status;

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	if(SUCCEEDED(hr))
	{	
		ITkdpo2k3k4kInstrumentIO_get_IOSession((long *)&viSession);	
	}
	status = viEnableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE, VI_NULL);

	//Check for the Source display status.
	//IS2CHANNEL();
	if ( Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return S_FALSE;//ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	else
	{
		//Check the source type
		if(WaveformSource <= 3) _nSourceType = 0;//Channel
		else if(WaveformSource>3) _nSourceType = 1;//rest
		
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp !=Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}

	else
	{
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModePeakDetect || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeEnvelope ))
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}
	}

	//Initiate the acquisition and wait for acq complete logic
	hr = _ITkdpo2k3k4kAcquisition::get_SingleSequence(&_bSingleSequence);
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
		
		//get time stamp
		//DWORD	curTimeInMS = GetTickCount();
		if(SUCCEEDED(hr)) 
		{
			hr = _ITkdpo2k3k4kAcquisition::put_State(VARIANT_TRUE);
			//hr = io.WriteString(strFormat);
		}
		if(SUCCEEDED(hr)) 
		{
			strFormat = _T("*OPC");
			hr = io.WriteString(strFormat);
		}
	
		// wait for SRQ
		if (viWaitOnEvent(viSession,VI_EVENT_SERVICE_REQ,MaxTimeMiliseconds,&viEventType,&viEvent)>=VI_SUCCESS)
		{
			viClose(viEvent);
			viReadSTB(viSession, &viStb);
		} else {
			// Timeout
			//restore the header and return error
			strFormat.Format (_T("HEADER %s"),_strHeader);
			hr = io.WriteString(strFormat);
			return 	ReportErrorEx(IDS_E_IVISCOPE_MAX_TIME_EXCEEDED,_T("Maximum Acquisition timeout exceeded."));
		}
	}
	else
	{
		hr = _ITkdpo2k3k4kAcquisition::put_State(VARIANT_TRUE);
		//hr = io.WriteString(strFormat);
	}

	//Acq complete ends here
	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	//Findout the Record Length
	}
	if (SUCCEEDED(hr))
	{
		if(_nSourceType == 0)
		{
			hr = io.QueryNumber(_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
		}
		else
		{
			hr = io.QueryNumber(_T("DATA:STOP 800000000;:WFMOUTPRE:NR_PT?"), &_nRecLen);
		}
		//Maximum record length allowed is 32M for 4M option installed.
	}
	//set data start now
	if (SUCCEEDED(hr)) 
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		hr = io.WriteString(strFormat);
	}
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;


	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{
		//hr = GetRoot()->InstrWrite(OLESTR("CURVE?"));
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);


	//if(SUCCEEDED(hr)) hr = GetRoot()->InstrRead(_ReadBuffer,_nByteCountVal);
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen/2;
		SAFEARRAY *pSAMin = SafeArrayCreate(VT_R8,1,sabOneDim);
		SAFEARRAY *pSAMax = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAMin != NULL && pSAMax != NULL)
		{
			double *pOUTMin = (double*)(pSAMin->pvData);
			double *pOUTMax = (double*)(pSAMax->pvData);

			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 
	
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen/2;i++)
					{
						_fTempVal = (float) _charPtr[2*i];
						pOUTMin[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
						_fTempVal = (float) _charPtr[2*i+1];
						pOUTMax[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
			
			}
			*MinWaveform = pSAMin;
			*MaxWaveform = pSAMax;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber (_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}

	status = viDisableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE);
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_ReadWaveform(Tkdpo2k3k4kSourceEnum WaveformSource, long MaxTimeMiliseconds, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	*InitialX = 0.0;
	*XIncrement = 0.0;

	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;

		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it.
	4.This function will return absoulte values(ex:voltages).
	5.This function initiates an acquisition on the channel. It then waits for the
	  acquisition to complete, and returns the waveform. If the oscilloscope did not
	  complete the acquisition within the time period the user specified with the 
	  MaxTimeMilliseconds parameter, the function returns the Max Time Exceeded error.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	1.Will use the CURVE? command and read the data from scope in binary mode.
	2.Will always set the data start to 1 and data stop to the record length of
		 that source. GPIB commands to be used to get this value are:
		 for (CH1-CH4):- HORIZONTAL:RECORDLENGTH? 
		 for (Math1-Math4) and (Ref1 toRef4):-
			DATA:SOURCE,WFMOUTPRE:NR_PT?
	3.The formula to be used for converting digitized points to absolute values:
		absValue=yZero+yMult(digitizedValue-(yOffset))		
	4.For source type Ch and Ref(stored from Ch), the binary data format is set
		to Integer,WFMOUTPRE:ENCD BIN;BN_FMT RI;BYT_NR 1.
	5.For source type Math and Ref(stored from Math), the binary data format is set
		to float,WFMOUTPRE:ENCD BIN;BN_FMT FP;BYT_OR LSB;
	6.To check the source of a ref WFMOUTPRE:BYT_NR 1;set and then queried immediately.
		if value is 1 then source is Ch,else if val is 4 then source is Math.
	7.Handling some of the unexpected issues by scope:
		In some scopes,we its observed that:setting the byte order to LSB,does not
		work. In this case after setting it to LSB then query for it. If still the
		value is MSB then read thye CURVE? data in MSB and swap it to LSB in function.
	8.Currently IVI spec does not say anything abt VISA session lock. But this function
		will lock the VISA session b4 curve? and then read the data.
	9.RunStop state: to stop state (yet to be decided).
	10.At the end of CURVE? data reading all these temporary settings are resumed
		to their old states.
	11. For single sequence acquisition function will initiate the acquiaition,
		then use *OPC to wait for acq to complete. For contineous acquisition mode
		function will get the current_acqs_count,then initiate acq and wait for
		the acq nums changes > cur_acs_count. 
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.

	VARIANT_BOOL _bSingleSequence = VARIANT_FALSE; //To know the scope StopAfter mode
	ViSession	viSession;
	ViEventType		viEventType;
	ViEvent			viEvent;
	ViUInt16	viStb;
	ViStatus status;
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//get visa session

	if(SUCCEEDED(hr))
	{	
		ITkdpo2k3k4kInstrumentIO_get_IOSession((long *)&viSession);	
	}

	status = viEnableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE, VI_NULL);

	//Check for the Source display status.
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		strFormat.Format (_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return S_FALSE;//Undeclared - ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".
	//The above translation will validate the Enum value also.
	
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);

		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	//Initiate the acquisition and wait for acq complete logic
	hr = _ITkdpo2k3k4kAcquisition::get_SingleSequence(&_bSingleSequence);
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
		
		//get time stamp
		//DWORD	curTimeInMS = GetTickCount();
		if(SUCCEEDED(hr)) 
		{
			hr = _ITkdpo2k3k4kAcquisition::put_State(VARIANT_TRUE);
			//hr = io.WriteString(strFormat);
		}
		if(SUCCEEDED(hr)) 
		{
			strFormat = _T("*OPC");
			hr = io.WriteString(strFormat);
		}
	
		// wait for SRQ
		if (viWaitOnEvent(viSession,VI_EVENT_SERVICE_REQ,MaxTimeMiliseconds,&viEventType,&viEvent)>=VI_SUCCESS)
		{
			viClose(viEvent);
			viReadSTB(viSession, &viStb);
		} else {
			// Timeout
			//restore the header and return error
			strFormat.Format (_T("HEADER %s"),_strHeader);
			hr = io.WriteString(strFormat);
			return 	ReportErrorEx(IDS_E_IVISCOPE_MAX_TIME_EXCEEDED,_T("Maximum Acquisition timeout exceeded."));
		}
	}
	else
	{
			hr = _ITkdpo2k3k4kAcquisition::put_State(VARIANT_TRUE);
			//hr = io.WriteString(strFormat);
	}

	//Acq complete ends here
	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);


	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	}

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}


	//Findout the Record Length
	if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	//set data start now
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		hr = io.WriteString(strFormat);
	}
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		//if acq mode is non AVERAGE mode
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		//For acq mode AVERAGE
		else 
		{
			strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

//	#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command	
	if(SUCCEEDED(hr)) 
	{		
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	

	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);

			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
				
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 2) 
				{
					_shortPtr= (short*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _shortPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 4) 
				{
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 8) 
				{
					_doublePtr= (double*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_dTempVal = (double) _doublePtr[i];
						pOUT[i] = _fYZero+_fYMult*(_dTempVal-_fYOffset);
					}	
				}

			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	status = viDisableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE);

	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_IsWaveformElementInvalid(double Element, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = VARIANT_FALSE;
		return hr;
	}
	*val = _isnan(Element) ? VARIANT_FALSE : VARIANT_TRUE;

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_InitiateAcquisition()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}


__int64 ReverseEvenBytes(__int64 x)
{
	char 	ch,temp[8];

	memcpy(temp,&x,8);
	int i,length=8;
	
	for (i=0;i < length/2;i++)
	{
		ch			 =temp[i];
		temp[i]  		 =temp[length -i -1];
		temp[length -i -1]=ch;
	}
	memcpy(&x,temp,8);
	return x;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinZoom(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	//for IVI driver call logging 
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return the waveform data, that is within the cursor area.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details: Same as FetchWaveform()
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	LONG _nDataStart,_nDataStop;			// To calculate the data start and stop of zoom
	LONG _nSubDataPoints;					// number of data points within data start and stop
	double _fCursorPos1,_fCursorPos2;		// Cursor positions
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//Check for the Source display status.
	if ( Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return S_FALSE; //Undeclared - ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,"Waveform source not supported error.");
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".	
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}

	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);
	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	
	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
	hr = io.WriteString(strFormat);

	//Now set the data source 
	strFormat.Format (_T("DATA:SOURCE %s"),EnumToString(WaveformSource));
	io.WriteString(strFormat);

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		hr = _ITkdpo2k3k4kWaveformTransfer::put_DataResolution(Tkdpo2k3k4kDataResolutionFull);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}
	
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		hr = io.QueryNumber (_T("WFMOutpre:RECOrdlength?"), &_nRecLen);
	}
	else
	{	//Findout the Record Length
		if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	}
	
	//Calculate the data start and stop from Zoom state,scale,position,factor.
	LONG Zmode;
	io.QueryNumber(_T("ZOOM:MODE?"), &Zmode);//state
	if(Zmode==1)
	{
		DOUBLE Zpos;
		io.QueryNumber(_T("ZOOm:ZOOM1:POSition?"), &Zpos);//position
		LONG Zcen;
		//Find centre of the zoom exact positions
		Zcen = (LONG)(_nRecLen * (Zpos/100));//centre
		LONG Zfac;
		io.QueryNumber(_T("ZOOm:ZOOM1:FACtor?"), &Zfac);//factor
		LONG Zrec;
		Zrec = (_nRecLen / Zfac) / 2;
			
		_nDataStart = Zcen - Zrec;
		_nDataStop = Zcen + Zrec;

		if(_nDataStart > _nDataStop)
		{
			LONG tmp = _nDataStart;
			_nDataStart =  _nDataStop;
			_nDataStop =  tmp;
		}
		
		if (SUCCEEDED(hr)) 
		{
			strFormat.Format(_T("DATA:START %d;STOP %d"),_nDataStart,_nDataStop);
			hr = io.WriteString(strFormat);
		}
	}
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		
		else 
		{	strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	memset(_ReadBuffer,0,256);
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	
	
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		_nSubDataPoints =(LONG) _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nSubDataPoints;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 2) 
				{
					_shortPtr= (short*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _shortPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 4) 
				{
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 8) 
				{
					_doublePtr= (double*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_dTempVal = (double) _doublePtr[i];
						pOUT[i] = _fYZero+_fYMult*(_dTempVal-_fYOffset);
					}	
				}

			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformWithinCursor(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	//for IVI driver call logging 
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return the waveform data, that is within the cursor area.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details: Same as FetchWaveform()
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	LONG _nDataStart,_nDataStop;			// To calculate the data start and stop of zoom
	LONG _nSubDataPoints;					// number of data points within data start and stop
	double _fCursorPos1,_fCursorPos2;		// Cursor positions
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//Check for the Source display status.
	if ( Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return S_FALSE; //Undeclared - ReportErrorEx(IDS_E_Tkdpo2k3k4k_WFM_SRC_NOTSUPPORTED,"Waveform source not supported error.");
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".	
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);
	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
	hr = io.WriteString(strFormat);

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		hr = _ITkdpo2k3k4kWaveformTransfer::put_DataResolution(Tkdpo2k3k4kDataResolutionFull);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}
	
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		hr = io.QueryNumber (_T("WFMOutpre:RECOrdlength?"), &_nRecLen);
	}
	else
	{	//Findout the Record Length
		if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	}
	

	//Calculate the data start and stop from current Cursor horizontal pos1 and pos2
	//First make the waveform as the source of cursor
	
	strFormat.Format(_T("CURSOR:SOURCE %s"),_strSource);
	hr = io.WriteString(strFormat);

	io.QueryNumber(_T("CURSOR:VBARS:POSITION1?"), &_fCursorPos1);
	io.QueryNumber(_T("CURSOR:VBARS:POSITION2?"), &_fCursorPos2);
	
	strFormat.Format(_T("DATA:START %d;STOP %d"),1,_nRecLen);
	hr = io.WriteString(strFormat);
	io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
	io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"), &_nPtOffset);
	io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);

		
	_nDataStart = (LONG)((_fCursorPos1 - _fXZero)/(*XIncrement));
	_nDataStop = (LONG)((_fCursorPos2 -_fXZero)/(*XIncrement));

	if(_nDataStart > _nDataStop)
	{
		LONG tmp = _nDataStart;
		_nDataStart =  _nDataStop;
		_nDataStop =  tmp;
	}
	if (SUCCEEDED(hr)) 
	{
		strFormat.Format(_T("DATA:START %d;STOP %d"),_nDataStart,_nDataStop);
		hr = io.WriteString(strFormat);
	}
	if(SUCCEEDED(hr))
	{
		
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		
		else 
		{
			strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	memset(_ReadBuffer,0,256);
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		_nSubDataPoints =(LONG) _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nSubDataPoints;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 2) 
				{
					_shortPtr= (short*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _shortPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 4) 
				{
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 8) 
				{
					_doublePtr= (double*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_dTempVal = (double) _doublePtr[i];
						pOUT[i] = _fYZero+_fYMult*(_dTempVal-_fYOffset);
					}	
				}

			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformStartStop(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{

		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(Stop-Start,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;

		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return the waveform data, that is within the cursor area.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details: Same as FetchWaveform()
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float _fTempVal;						// temp float var
	float *_floatPtr;						// A float pointer for reading 1-byte wfm data
	double *_doublePtr;						// A double pointer for reading 2-byte wfm data
	double _dTempVal;						// temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	LONG _nSubDataPoints;					// number of data points within data start and stop
	
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);
	
	//Check for the Source display status.	
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		//GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".

	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);

		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
	    hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?	

	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
	hr = io.WriteString(strFormat);

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		hr = _ITkdpo2k3k4kWaveformTransfer::put_DataResolution(Tkdpo2k3k4kDataResolutionFull);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}

	//Findout the Record Length
	if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START %d;STOP %d"),Start,Stop);
		hr = io.WriteString(strFormat);
	}
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		
		else 
		{
			strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);

	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		_nSubDataPoints =(LONG) _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nSubDataPoints;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero				
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);

							
				// We are done with CURVE?,Unlock the VISA session now			
				if(_bVISALockState == TRUE)
					io.Unlock();

				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 2) 
				{
					_shortPtr= (short*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _shortPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 4) 
				{
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 8) 
				{
					_doublePtr= (double*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_dTempVal = (double) _doublePtr[i];
						pOUT[i] = _fYZero+_fYMult*(_dTempVal-_fYOffset);
					}	
				}

			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformMinMax(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** MinWaveform, SAFEARRAY** MaxWaveform, double* InitialX, double* XIncrement)
{
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> MinWfmArray;
		hr  = MinWfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		CComSafeArray<float> MaxWfmArray;
		hr  = MaxWfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*MinWaveform = MinWfmArray.Detach();
		*MaxWaveform = MaxWfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;

		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Pk-Detect, Envelope: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it. The Min and Max
		values are returned in different arrays.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	float *_floatPtr;						// A float pointer for reading 4-byte wfm data
	float _fTempVal;						// temp float var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);
	
	//Check for the Source display status.
	//IS2CHANNEL();
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".	
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);

	//The above translation will validate the Enum value also.
	//if (SUCCEEDED(hr)) hr = GetRoot()->InstrQueryf(OLESTR("SELECT:%s?"),&_nSourceDisplay,_strSource);
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);

		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	else
	{
		//Check the source type
		if(WaveformSource <= 3) _nSourceType = 0;//Channel
		else if(WaveformSource>3) _nSourceType = 1;//rest
		
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp !=Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}

	else
	{
		//Check for Acquisition mode.
		//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
		hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

		if(SUCCEEDED(hr))
		if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModePeakDetect || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeEnvelope ))
		{
			//restore the header and return error
			strFormat.Format(_T("HEADER %s"),_strHeader);
			hr = io.WriteString(strFormat);

			return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
		}
	}

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);
	

	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	}

	//Findout the Record Length
	if (SUCCEEDED(hr))
	{
		if(_nSourceType == 0)
		{
			hr = io.QueryNumber(_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
		}
		else
		{
			hr = io.QueryNumber(_T("DATA:STOP 800000000;:WFMOUTPRE:NR_PT?"), &_nRecLen);
		}
		//Maximum record length allowed is 32M for 4M option installed.
	}
	//set data start now
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		hr = io.WriteString(strFormat);
	}
	
	if(SUCCEEDED(hr))
	{
		strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);


	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);	

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen/2;
		SAFEARRAY *pSAMin = SafeArrayCreate(VT_R8,1,sabOneDim);
		SAFEARRAY *pSAMax = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAMin != NULL && pSAMax != NULL)
		{
			double *pOUTMin = (double*)(pSAMin->pvData);
			double *pOUTMax = (double*)(pSAMax->pvData);

			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 				

				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);

				// We are done with CURVE?,Unlock the VISA session now				
				if(_bVISALockState == TRUE)
					io.Unlock();

					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen/2;i++)
					{
						_fTempVal = (float) _charPtr[2*i];
						pOUTMin[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
						_fTempVal = (float) _charPtr[2*i+1];
						pOUTMax[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				
			}
			*MinWaveform = pSAMin;
			*MaxWaveform = pSAMax;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformHighResolution(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{
	//for IVI driver call logging 
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}

	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	1.Will use the CURVE? command and read the data from scope in binary mode.
	2.Will always set the data start to 1 and data stop to the record length of
		 that source. GPIB commands to be used to get this value are:
		 for (CH1-CH4):- HORIZONTAL:RECORDLENGTH? 
		 for (Math1-Math4) and (Ref1 toRef4):-
			DATA:SOURCE,WFMOUTPRE:NR_PT?
	3.The formula to be used for converting digitized points to absolute values:
		absValue=yZero+yMult(digitizedValue-(yOffset))		
	4.For source type Ch and Ref(stored from Ch), the binary data format is set
		to Integer,WFMOUTPRE:ENCD BIN;BN_FMT RI;BYT_NR 1.
	5.For source type Math and Ref(stored from Math), the binary data format is set
		to float,WFMOUTPRE:ENCD BIN;BN_FMT FP;BYT_OR LSB;
	6.To check the source of a ref WFMOUTPRE:BYT_NR 1;set and then queried immediately.
		if value is 1 then source is Ch,else if val is 4 then source is Math.
	7.Handling some of the unexpected issues by scope:
		In some scopes,we its observed that:setting the byte order to LSB,does not
		work. In this case after setting it to LSB then query for it. If still the
		value is MSB then read thye CURVE? data in MSB and swap it to LSB in function.
	8.Currently IVI spec does not say anything abt VISA session lock. But this function
		will lock the VISA session b4 curve? and then read the data.
	9.RunStop state: to stop state (yet to be decided).
	10.At the end of CURVE? data reading all these temporary settings are resumed
		to their old states.
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shPtr;							// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						// A float pointer for reading 4-byte wfm data
	double *_doublePtr;						// A double pointer for reading 8-byte wfm data
	double _fTempVal;						// temp float var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	if ( Is2Channel()&& ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)
		||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		strFormat.Format(_T("HEADER %s"), _strHeader);
		hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Waveform source not supported error."));
	}
	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".

	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);


	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format(_T("HEADER %s"), _strHeader);
		hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	_ITkdpo2k3k4kAcquisition::get_Mode (&_CurAcqMode);
	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	
	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
	hr = io.WriteString(strFormat);

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}

	//Findout the Record Length
	if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		io.WriteString(strFormat);
		
	}
			
	if (SUCCEEDED(hr))
	{
	//Set Wfmoutpre parameters

		hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
		if(_nBytNr <2)
		{
			strFormat = _T("WFMOUTPRE:BYT_NR 2");
			io.WriteString(strFormat);
		}

	strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
	io.WriteString(strFormat);

	
	}
	if(SUCCEEDED(hr))
	{
		strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
		io.WriteString(strFormat);
	}
			
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr =io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	

	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		
		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 

				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);

							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();
	
				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}

				else if(_nBytNr == 2)
					{
						_shPtr= (short*)_CurveData;
						for(int i=0;i<_nRecLen;i++)
						{
							_fTempVal = (double) _shPtr[i];
							pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
						}
					}
				else if(_nBytNr == 4)
				{
					_floatPtr = (float *)_CurveData;
					for(int i=0;i<_nRecLen;i++)
						{
							_fTempVal = (double) _floatPtr[i];
							pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
						}
				}
				else if(_nBytNr == 8)
				{
					_doublePtr = (double *)_CurveData;
					for(int i=0;i<_nRecLen;i++)
						{
							_fTempVal = (double) _doublePtr[i];
							pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
						}
				}
				
			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			//hr = GetRoot()->InstrQuery(OLESTR("WFMOUTPRE:PT_OFF?"), &_nPtOffset);
			
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveformDigitizedLevel(Tkdpo2k3k4kChannelEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement, double* YZero, double* YMult, double* YOffset)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0.0;
		*XIncrement = 0.01;
		*YZero = 0.0;
		*YMult = 0.001;
		*YOffset = 0.0;	

		return hr;
	}
	*InitialX = 0.0;
	*XIncrement = 0.0;
	*YZero = 0.0;
	*YMult = 0.0;
	*YOffset = 0.0;	

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);
	
	//Check for the Source display status.
	//IS2CHANNEL();
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Invalid Channel"));
	}

	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".	
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(WaveformSource);
	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error		
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}

	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";	
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);
	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error		
		strFormat.Format(_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);

		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	}
	//Findout the Record Length
	if (SUCCEEDED(hr))
	{
		hr = io.QueryNumber(_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	}
	
	//set data start now
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		hr = io.WriteString(strFormat);
	}
	
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		strFormat = _T("WFMOUTPRE:BYT_NR 1");io.WriteString(strFormat);strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
		hr = io.WriteString(strFormat);
	}
	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command
	if(SUCCEEDED(hr)) 
	{

		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);


	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);
	
	// Fix for CR00293186 
	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_I4,1,sabOneDim);
		if(_CurveData != NULL && pSAO != NULL)
		{
			LONG *pOUT = (LONG*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),YMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),YZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),YOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				_charPtr= (char*)_CurveData;
				for(int i=0;i<_nRecLen;i++)
				{
					
					pOUT[i] = (LONG) _charPtr[i];
				}	
			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_FetchWaveform(Tkdpo2k3k4kSourceEnum WaveformSource, SAFEARRAY** WaveformArray, double* InitialX, double* XIncrement)
{	
	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;
	HRESULT hr = S_OK;
	
	if (GetSimulate())
	{
		CComSafeArray<float> wfmArray;
		hr  = wfmArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*WaveformArray = wfmArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}
	/**************************************************************************
	IVI Requirement Details:
	1.The function will first check for the source display status. If the source
		is not enabled,then function returns an error "Channel Not Enabled error".
	2.Next the function checks for Aqcuisition type.If Acquisition mode is not 
		Normal(Sample), Hi Res, or Average: Return "Invalid Acquisition Type error".
	3.The function will return all waveform data,not a part of it.
	4.This function will return absoulte values(ex:voltages).
	5.IVI says,this function willl not initiate any new acquisition. It will 
		return the previously acquired waveform data.
	**************************************************************************/
	/**************************************************************************
	Implementation Details:
	1.Will use the CURVE? command and read the data from scope in binary mode.
	2.Will always set the data start to 1 and data stop to the record length of
		 that source. GPIB commands to be used to get this value are:
		 for (CH1-CH4):- HORIZONTAL:RECORDLENGTH? 
		 for (Math1-Math4) and (Ref1 toRef4):-
			DATA:SOURCE,WFMOUTPRE:NR_PT?
	3.The formula to be used for converting digitized points to absolute values:
		absValue=yZero+yMult(digitizedValue-(yOffset))		
	4.For source type Ch and Ref(stored from Ch), the binary data format is set
		to Integer,WFMOUTPRE:ENCD BIN;BN_FMT RI;BYT_NR 1.
	5.For source type Math and Ref(stored from Math), the binary data format is set
		to float,WFMOUTPRE:ENCD BIN;BN_FMT FP;BYT_OR LSB;
	6.To check the source of a ref WFMOUTPRE:BYT_NR 1;set and then queried immediately.
		if value is 1 then source is Ch,else if val is 4 then source is Math.
	7.Handling some of the unexpected issues by scope:
		In some scopes,we its observed that:setting the byte order to LSB,does not
		work. In this case after setting it to LSB then query for it. If still the
		value is MSB then read thye CURVE? data in MSB and swap it to LSB in function.
	8.Currently IVI spec does not say anything abt VISA session lock. But this function
		will lock the VISA session b4 curve? and then read the data.
	9.RunStop state: to stop state (yet to be decided).
	10.At the end of CURVE? data reading all these temporary settings are resumed
		to their old states.
	**************************************************************************/

	//Some temp local variables:
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;	
	CString tempstr;
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	CString strFormat;
	

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);	

	//IS2CHANNEL();
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Invalid Channel"));
	}

	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	//The above translation will validate the Enum value also.
	
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error		
		strFormat.Format (_T("HEADER %s"),_strHeader);
		io.WriteString(strFormat);		
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}

	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}

	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);	
	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);
	
	//Now set the data source 
	strFormat.Format (_T("DATA:SOURCE %s"),EnumToString(WaveformSource));
	io.WriteString(strFormat);

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}

	//Findout the Record Length
	if (SUCCEEDED(hr))	hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	
	//Set the Max recordlength as the data stop value
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		io.WriteString(strFormat);
		
	}
			
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		
		else 
		{
			strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	
	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) >= VI_SUCCESS)
		_bVISALockState = TRUE;

	memset(_ReadBuffer,0,256);
	//Write CURVE? command	
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr =io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data	
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	

	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);	

		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);

		_nRecLen = (LONG)  _nTotalByteCount/_nBytNr;
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 				
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				if(_nBytNr == 1) 
				{
					_charPtr= (char*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _charPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 2) 
				{
					_shortPtr= (short*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _shortPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 4) 
				{
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+_fYMult*(_fTempVal-_fYOffset);
					}	
				}
				else if(_nBytNr == 8) 
				{
					_doublePtr= (double*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_dTempVal = (double) _doublePtr[i];
						pOUT[i] = _fYZero+_fYMult*(_dTempVal-_fYOffset);
					}	
				}

			}
			*WaveformArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_CopyWaveformToClipboard(Tkdpo2k3k4kSourceEnum WaveformSource, long Start, long Stop, long* PointsCopied)
{
	*PointsCopied = 0;

	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	/**************************************************************************
	IVI Requirement Details:
	1.Same as FetchWaveform()
	**************************************************************************/
	/**************************************************************************
	Specific Requirement Details:
	1.Data to be copied to clip board in a format same as Scope.
	2.Function will also return the total number data points copied to clip board.
	**************************************************************************/
	/**************************************************************************
	Implementation Details: Same as FetchWaveform()
	**************************************************************************/

	//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	bool _bRefSourceMath = FALSE;			//for determining the source of Ref wfm.
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	UINT32 _nTotalByteCount;					//total byte count of curve data
	char *_charPtr;							// A char pointer for reading 1-byte wfm data
	short *_shortPtr;						// A short pointer for reading 2-byte wfm data
	float *_floatPtr;						//A float pointer for reading 4-byte wfm data
	double *_doublePtr;						//A double pointer for reading 8-byte wfm data
	float _fTempVal;						// temp float var
	double _dTempVal;						//temp double var
	Tkdpo2k3k4kAcquisitionModeEnum _CurAcqMode;// To get the current acq mode.
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	LONG _nSubDataPoints;					// number of data points within data start and stop
	double	_fInitialX;						// InitialX value calculation
	double	_fXIncr;						// sample interval value calculation
	HGLOBAL _clipBuffer;					// For global allocation of clip boards data
	char *_clipData;						// For clip data
	char *_clipDataCopy;					// For building the dynamic clip data
	char _formatVolt[256];					// formating clip data 
	LONG _nClipDataByteCount = 0;			// Clip data byte count	
	
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//Check for the Source display status.

	//IS2CHANNEL();
	if (Is2Channel() && ((WaveformSource == Tkdpo2k3k4kSourceCH3)||(WaveformSource == Tkdpo2k3k4kSourceCH4)||(WaveformSource == Tkdpo2k3k4kSourceREF3)||(WaveformSource == Tkdpo2k3k4kSourceREF4)))
	{
		GetRoot()->InstrPrintf(OLESTR("HEADER %s"),_strHeader);
		return ReportErrorEx(IDS_E_TKDPO2K3K4K_WFM_SRC_NOTSUPPORTED,_T("Invalid Channel"));
	}

	//If source is not enabled, then return IVI defined Error:"Channel Not Enabled error".
	strFormat.Format(_T("SELECT:%s?"),EnumToString(WaveformSource));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	//The above translation will validate the Enum value also.
	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		io.WriteString(strFormat);
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	//else
	//{
	//	//Check the source type
	//	if(WaveformSource <= 3) _nSourceType = 0;//Channel
	//	else if(WaveformSource==4) _nSourceType = 1;//Math
	//	else if(WaveformSource>4 && WaveformSource <= 8) _nSourceType = 2;//Ref
	//	else if(WaveformSource>8) _nSourceType = 3//Digital
	//}
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionCompositeEnvelope))
			{
				//restore the header and return error
				strFormat.Format (_T("HEADER %s"),_strHeader);
				io.WriteString(strFormat);
				return ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
			}
		}
	}
	
	//Check for Acquisition mode.
	//If Acquisition mode is not Normal, Hi Res, or Average: Return "Invalid Acquisition Type error";
	hr = _ITkdpo2k3k4kAcquisition::get_Mode(&_CurAcqMode);

	if(SUCCEEDED(hr))
	if(!(_CurAcqMode == Tkdpo2k3k4kAcquisitionModeSample || _CurAcqMode == Tkdpo2k3k4kAcquisitionModeHiRes
		|| _CurAcqMode == Tkdpo2k3k4kAcquisitionModeAverage))
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		io.WriteString(strFormat);
		return 	ReportErrorEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE,_T("Invalid Acquisition Type error"));
	}

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);

	//Now set the data source 
	strFormat.Format (_T("DATA:SOURCE %s"),EnumToString(WaveformSource));
	io.WriteString(strFormat);

	//There are 2 types of sources ,sources whoes data point width is 1 byte and sources with data point width 2 byte and above.
	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);
	if(_nBytNr >= 2)
		_nSourceType =2;
	else _nSourceType =1;
	
	//2k changes
	if (InstrumentInFamily(_T("DPO2000 Series"))||InstrumentInFamily(_T("MSO2000 Series")))
	{
		Tkdpo2k3k4kDataCompositionEnum datacomp;
		hr = _ITkdpo2k3k4kWaveformTransfer::get_DataComposition(&datacomp);
		if(SUCCEEDED(hr))
		{
			if((datacomp ==Tkdpo2k3k4kDataCompositionSingularYT)&&(WaveformSource<9))
				_nSourceType =2;
			else _nSourceType =1;
		}
	}


	//Findout the Record Length
	if (SUCCEEDED(hr))	 hr = io.QueryNumber (_T("HORIZONTAL:RECORDLENGTH?"), &_nRecLen);
	
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:START 1;STOP 100000000"));
		io.WriteString(strFormat);
		
	}
			
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
		if(_nSourceType == 1) 
		{
			strFormat = _T("WFMOUTPRE:ENCD BIN;BN_FMT RI");
			io.WriteString(strFormat);
			
		}
		
		else 
		{
			strFormat = _T("WFMOUTPRE:ENCDG BIN;BN_FMT RI");
			io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				io.WriteString(strFormat);
			}
			
		}
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;


	//Write CURVE? command	
		
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr =io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data	
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf_s((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = (unsigned) atoi((char*)_ReadBuffer);
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		_nSubDataPoints =(LONG) _nTotalByteCount/_nBytNr;
		
		//Clip board copy is limited to 250K
		if(_nSubDataPoints > 250000) _nSubDataPoints = 250000;
	
		if(_CurveData != NULL)
		{
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), &_fXIncr);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);

							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();
				
				if(OpenClipboard(NULL))
				{
					EmptyClipboard();
					_clipData = (char*)malloc(2);
					strcpy(_clipData," ");//A dummy space
					if(_nBytNr == 1) 
					{
						_charPtr= (char*)_CurveData;
						for(int i=0;i<_nSubDataPoints;i++)
						{
							_fTempVal = (float) _charPtr[i];
							sprintf_s(_formatVolt,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							_nClipDataByteCount = strlen(_clipData);
							_clipDataCopy=(char*)malloc(_nClipDataByteCount+1);
							strcpy(_clipDataCopy,_clipData);
							free(_clipData);
							_clipData = (char*)malloc(_nClipDataByteCount + strlen(_formatVolt)+1);
							char * ptr= _clipData;
							strcpy(_clipData,_clipDataCopy);
							ptr +=	(_nClipDataByteCount);
							strcpy(ptr,_formatVolt);
							_nClipDataByteCount+=strlen(_formatVolt);
							free(_clipDataCopy);
						}
					}
					
					else if(_nBytNr == 2)
					{
						_shortPtr= (short*)_CurveData;
						for(int i=0;i<_nSubDataPoints;i++)
						{
							_fTempVal = (float) _shortPtr[i];
							sprintf_s(_formatVolt,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							_nClipDataByteCount = strlen(_clipData);
							_clipDataCopy=(char*)malloc(_nClipDataByteCount+1);
							strcpy(_clipDataCopy,_clipData);
							free(_clipData);
							_clipData = (char*)malloc(_nClipDataByteCount + strlen(_formatVolt)+1);
							char * ptr= _clipData;
							strcpy(_clipData,_clipDataCopy);
							ptr +=	(_nClipDataByteCount);
							strcpy(ptr,_formatVolt);
							_nClipDataByteCount+=strlen(_formatVolt);
							free(_clipDataCopy);
						}
					}
					else if(_nBytNr == 4)
					{
						_floatPtr= (float*)_CurveData;
						for(int i=0;i<_nSubDataPoints;i++)
						{
							_fTempVal = (float) _floatPtr[i];
							sprintf_s(_formatVolt,"%12.7g\n",(_fYZero+_fYMult*(_fTempVal-_fYOffset)));
							_nClipDataByteCount = strlen(_clipData);
							_clipDataCopy=(char*)malloc(_nClipDataByteCount+1);
							strcpy(_clipDataCopy,_clipData);
							free(_clipData);
							_clipData = (char*)malloc(_nClipDataByteCount + strlen(_formatVolt)+1);
							char * ptr= _clipData;
							strcpy(_clipData,_clipDataCopy);
							ptr +=	(_nClipDataByteCount);
							strcpy(ptr,_formatVolt);
							_nClipDataByteCount+=strlen(_formatVolt);
							free(_clipDataCopy);
						}
					}
					else if(_nBytNr == 8)
					{
						_doublePtr= (double*)_CurveData;
						for(int i=0;i<_nSubDataPoints;i++)
						{
							_dTempVal = (double) _doublePtr[i];
							sprintf_s(_formatVolt,"%12.7g\n",(_fYZero+_fYMult*(_dTempVal-_fYOffset)));
							_nClipDataByteCount = strlen(_clipData);
							_clipDataCopy=(char*)malloc(_nClipDataByteCount+1);
							strcpy(_clipDataCopy,_clipData);
							free(_clipData);
							_clipData = (char*)malloc(_nClipDataByteCount + strlen(_formatVolt)+1);
							char * ptr= _clipData;
							strcpy(_clipData,_clipDataCopy);
							ptr +=	(_nClipDataByteCount);
							strcpy(ptr,_formatVolt);
							_nClipDataByteCount+=strlen(_formatVolt);
							free(_clipDataCopy);
						}
					}
					_clipBuffer = GlobalAlloc(GMEM_DDESHARE, _nClipDataByteCount+1);
					_clipDataCopy = (char*)GlobalLock(_clipBuffer);
					_clipData[strlen(_clipData)-1] = '\0';
					strcpy(_clipDataCopy, _clipData);
					GlobalUnlock(_clipBuffer);
					SetClipboardData(CF_TEXT,_clipBuffer);
					CloseClipboard();
					free(_clipData);
				}
			}
			free(_CurveData);
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start	
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"), &_nPtOffset);
			if(SUCCEEDED(hr))
				_fInitialX = -1*_nPtOffset*(_fXIncr)+_fXZero;
			*PointsCopied = _nSubDataPoints;
		}

	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataWidth(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataWidth(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataStop(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataStop(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataStart(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataStart(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataSource(Tkdpo2k3k4kDataSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataSource(Tkdpo2k3k4kDataSourceEnum val)
{
	HRESULT hr = S_OK;
	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kSourceCH3 ) ||  ( val == Tkdpo2k3k4kSourceCH4 ) || ( val == Tkdpo2k3k4kSourceREF3  ) ||  ( val == Tkdpo2k3k4kSourceREF4)))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_WaveformRecordLength(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataComposition(Tkdpo2k3k4kDataCompositionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataComposition(Tkdpo2k3k4kDataCompositionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_DataResolution(Tkdpo2k3k4kDataResolutionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_DataResolution(Tkdpo2k3k4kDataResolutionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_get_FillterVuFrequency(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_put_FillterVuFrequency(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_GetAvailableFilterVuFrequencies(BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = ::SysAllocString(L"XXXXXXXXX,XXXXXXXXX, XXXXXXXXX, XXXXXXXX, XXXXXXXX");
		return hr;
	}

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kWaveformTransfer_GetAvailableDataCompositions(BSTR* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = ::SysAllocString(L"SINGULAR_YT");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kUtilityEx_Calibrate(Tkdpo2k3k4kUtilityExCalibrationStatusEnum* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	CString strFormat;
	
	//if(InstrumentInFamily(_T("DPO Series")) || InstrumentInFamily(_T("DSA Series")) || InstrumentInFamily(_T("5000 Series")) || InstrumentInFamily(_T("MSO Series")))
	{
		strFormat = _T("CALibrate:INTERNal:STARt");
		io.WriteString(strFormat);
		if(!SUCCEEDED(hr))
		{ 
			return hr;
		}

		CString strFunc;
		for(int k = 0 ; k<TKDPO2K3K4K_QUERY_COUNTLIMIT;k++)
		{
			hr = io.QueryString(_T("CALibrate:INTERNal:STATus?"), strFunc);

			if(SUCCEEDED(hr)) // Success means calibration Complete else Timeout is observed.
				break;

			Sleep(TKDPO2K3K4K_QUERY_INTERVAL);
		}
		//hr = GetRoot()->InstrQuery(OLESTR("CALibrate:INTERNal:STATus?"), strFunc, 100);
		hr = io.QueryString(_T("CALibrate:INTERNal:STATus?"), strFunc);

		EnumFromString(strFunc,*val);
	}
	//else
	//{
	//	CString strFunc;
	//	hr = io.QueryString(_T("*CAL?"), strFunc);
	//	
	//	for(int k = 0 ; k<Tkdpo2k3k4k_QUERY_COUNTLIMIT;k++)
	//	{
	//		hr = io.QueryString(_T("CALibrate:RESults?"), strFunc);
	//		if(SUCCEEDED(hr)) // Success means calibration Complete else Timeout is observed.
	//			break;

	//		Sleep(Tkdpo2k3k4k_QUERY_INTERVAL);
	//	}

	//	EnumFromString(strFunc,*val);
	//}
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kUtilityEx_SelfTest(long* TestResult, BSTR* TestMessage)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;
		
	hr = io.QueryNumber(_T("*TST?"), TestResult);
	
	if (SUCCEEDED(hr))
	{
		if (*TestResult == 0)
		{
			*TestMessage = ::SysAllocString(OLESTR("Selftest passed"));
		}
		else
		{
			*TestMessage = ::SysAllocString(OLESTR("Selftest failed"));
		}
	}
	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kUtilityEx_get_FrontPanelLock(Tkdpo2k3k4kUtilityExFrontPanelLockEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kUtilityEx_put_FrontPanelLock(Tkdpo2k3k4kUtilityExFrontPanelLockEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Type(Tkdpo2k3k4kPowerTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_Type(Tkdpo2k3k4kPowerTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_VoltageSource(Tkdpo2k3k4kPowerSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_VoltageSource(Tkdpo2k3k4kPowerSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kPowerSourceCH3 ) ||  ( val == Tkdpo2k3k4kPowerSourceCH4 ) ||  ( val == Tkdpo2k3k4kPowerSourceREF3 ) ||  ( val == Tkdpo2k3k4kPowerSourceREF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_CurrentSource(Tkdpo2k3k4kPowerSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_CurrentSource(Tkdpo2k3k4kPowerSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kPowerSourceCH3 ) ||  ( val == Tkdpo2k3k4kPowerSourceCH4 ) ||  ( val == Tkdpo2k3k4kPowerSourceREF3 ) ||  ( val == Tkdpo2k3k4kPowerSourceREF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_DisplayState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_DisplayState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Indicator(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_Indicator(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_GateSource(Tkdpo2k3k4kPowerGateSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_GateSource(Tkdpo2k3k4kPowerGateSourceEnum val)
{
	HRESULT hr = S_OK;

	if ( ( Is2Channel())  &&  ( ( val == Tkdpo2k3k4kPowerGateSourceCH3 ) ||  ( val == Tkdpo2k3k4kPowerGateSourceCH4 ) ||  ( val == Tkdpo2k3k4kPowerGateSourceREF3 ) ||  ( val == Tkdpo2k3k4kPowerGateSourceREF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Gating(Tkdpo2k3k4kPowerGatingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_Gating(Tkdpo2k3k4kPowerGatingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_RefLevelHigh(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_RefLevelHigh(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_RefLevelLow(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_RefLevelLow(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_RefLevelMid(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		if(ReferenceLevelType == Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute)
			*val = 0;
		if(ReferenceLevelType == Tkdpo2k3k4kPowerReferenceLevelTypePercent)
			*val = 50;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_RefLevelMid(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, long Number, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_StatisticsMode(Tkdpo2k3k4kPowerStatisticsModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_StatisticsMode(Tkdpo2k3k4kPowerStatisticsModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_StatisticsSamples(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_put_StatisticsSamples(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Quality(ITkdpo2k3k4kPowerAnalysisQuality** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_SwitchingLoss(ITkdpo2k3k4kPowerAnalysisSwitchingLoss** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Harmonics(ITkdpo2k3k4kPowerAnalysisHarmonics** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Ripple(ITkdpo2k3k4kPowerAnalysisRipple** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_Modulation(ITkdpo2k3k4kPowerAnalysisModulation** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_get_SafeOperatingArea(ITkdpo2k3k4kPowerAnalysisSafeOperatingArea** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_ResetStatistics()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_SetDefaultRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_ReadRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum* ReferenceLevelType, double* ReferenceLevelHysteresis, double* Mid)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*ReferenceLevelType = Tkdpo2k3k4kPowerReferenceLevelTypePercent;
		*ReferenceLevelHysteresis = 10.0000;
		*Mid = 0 ;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, ReferenceLevelType, ReferenceLevelHysteresis);

	hr = get_RefLevelMid(*ReferenceLevelType,1,Mid);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysis_ConfigureRefLevel(Tkdpo2k3k4kPowerReferenceLevelTypeEnum ReferenceLevelType, double ReferenceLevelHysteresis, double Mid)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_FrequencyReference(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_put_FrequencyReference(Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_put_AllMeasDisplayState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_MeasDisplayState(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_put_MeasDisplayState(Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum DisplayMeasurement, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_ApparentPower(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_Frequency(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_ICrestFactor(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_PhaseAngle(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_PowerFactor(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_ReactivePower(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_TruePower(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_VRMS(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_IRMS(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisQuality_get_VCrestFactor(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowVoltage(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowVoltage(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RefLevelLowCurrent(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		if(Type == Tkdpo2k3k4kPowerReferenceLevelTypePercent)
			*val = 5.0000;
		else
			*val = 1.0000;
		
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RefLevelLowCurrent(Tkdpo2k3k4kPowerReferenceLevelTypeEnum Type, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_ConductionCalculation(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_ConductionCalculation(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_RDSOnValue(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_RDSOnValue(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_VCESatValue(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_VCESatValue(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_MeasDisplayType(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_put_MeasDisplayType(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_get_NumberOfCycles(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadConductionLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Type = Tkdpo2k3k4kPowerSwitchingLossTypeEnergy;
		Mean = 1;
		Min = 1;
		Max = 1;
		return hr;
	}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTotalLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Type = Tkdpo2k3k4kPowerSwitchingLossTypeEnergy;
		Mean = 1;
		Min = 1;
		Max = 1;
		return hr;
	}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOnLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Type = Tkdpo2k3k4kPowerSwitchingLossTypeEnergy;
		Mean = 1;
		Min = 1;
		Max = 1;
		return hr;
	}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadTOffLosses(Tkdpo2k3k4kPowerSwitchingLossTypeEnum Type, double Mean, double Min, double Max)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Type = Tkdpo2k3k4kPowerSwitchingLossTypeEnergy;
		Mean = 1;
		Min = 1;
		Max = 1;
		return hr;
	}
	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ReadGating(Tkdpo2k3k4kPowerGatingPolarityEnum* Polarity, double* TurnOn)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Polarity = Tkdpo2k3k4kPowerGatingPolarityRise;
		*TurnOn = 1.5000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Polarity, TurnOn);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSwitchingLoss_ConfigureGating(Tkdpo2k3k4kPowerGatingPolarityEnum Polarity, double TurnOn)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_Standard(Tkdpo2k3k4kPowerHarmonicsStandardEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_put_Standard(Tkdpo2k3k4kPowerHarmonicsStandardEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplaySet(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplaySet(Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_DisplayType(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_put_DisplayType(Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_OverallResults(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_RMSResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDFResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_THDRResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicFrequencyResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPhaseResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicAbsoluteMagnitudeResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicPercentageMagnitudeResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HamronicIECMaxResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicLimitResult(long Harmonic, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECClassALimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECNormalLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicIECHigherLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_HarmonicMILNormalLimitResult(long Harmonic, Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECFundamentalCurrentResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic3Result(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECHarmonic5Result(Tkdpo2k3k4kPowerHamronicsPassFailEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHCResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPOHLResult(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECInputPower(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_get_IECPowerFactor(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}





HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_SaveResultsToFile(BSTR Filename)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_ReadMIL(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum* FundamentalCurrentCalculating, double* UserCurrent, double* LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum* PowerLevel)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*FundamentalCurrentCalculating = Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS;
		*UserCurrent = 1.0000;
		*LineFrequency = 400;
		*PowerLevel = Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, LineFrequency, PowerLevel, FundamentalCurrentCalculating, UserCurrent);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureMIL(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum FundamentalCurrentCalculating, double UserCurrent, double LineFrequency, Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum PowerLevel)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_ReadIEC(Tkdpo2k3k4kPowerHarmonicsIECClassEnum* Class, VARIANT_BOOL* Filter, double* FundamentalCurrent, VARIANT_BOOL* Grouping, double* InputPower, double* LineFrequency, double* ObservationPeriod, double* PowerFactor)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Class = Tkdpo2k3k4kPowerHarmonicsIECClassA;
		*Filter = VARIANT_TRUE;
		*FundamentalCurrent = 16.0000;
		*Grouping = VARIANT_TRUE;
		*InputPower = 100;
		*LineFrequency = 60;
		*ObservationPeriod = 10.0000;
		*PowerFactor = 900.0000E-3;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Class,Filter,FundamentalCurrent,Grouping,InputPower,LineFrequency,ObservationPeriod,PowerFactor);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_ConfigureIEC(Tkdpo2k3k4kPowerHarmonicsIECClassEnum Class, VARIANT_BOOL Filter, double FundamentalCurrent, VARIANT_BOOL Grouping, double InputPower, double LineFrequency, double ObservationPeriod, double PowerFactor)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_GetParameters(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum* FrequencyReference, double* FixedReference, long* NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum* HarmonicsSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*FrequencyReference = Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce;
		*FixedReference = 60.0000;
		*NumberOfHarmonics = 40;
		*HarmonicsSource = Tkdpo2k3k4kPowerHarmonicsSourceCurrent;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, FrequencyReference, FixedReference, NumberOfHarmonics, HarmonicsSource);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisHarmonics_SetParameters(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum FrequencyReference, double FixedReference, long NumberOfHarmonics, Tkdpo2k3k4kPowerHarmonicsSourceEnum HarmonicsSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_Source(Tkdpo2k3k4kPowerRippleSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_put_Source(Tkdpo2k3k4kPowerRippleSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_Value(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_Max(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_Mean(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_Min(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_get_StandardDeviation(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}






HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_SetOffsetToZero()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisRipple_DoVerticalAutoSet()
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisModulation_get_Source(Tkdpo2k3k4kPowerModulationSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisModulation_put_Source(Tkdpo2k3k4kPowerModulationSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisModulation_get_Type(Tkdpo2k3k4kPowerModulationTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisModulation_put_Type(Tkdpo2k3k4kPowerModulationTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureAxes(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double YaxesMax, double YaxesMin, double XaxesMax, double XaxesMin)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_NumberOfPoints(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_PlotType(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_PlotType(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ActionOnViolation(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_ActionOnViolation(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_MaskState(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_put_MaskState(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultFailureSamples(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultWaveformsAcquired(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_get_ResultTestState(Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_GetMaskPoints(SAFEARRAY** Volts, SAFEARRAY** Amps)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> volts;
		hr  = volts.Create(10,0);
		if (FAILED(hr))
			return hr;
		
		CComSafeArray<float> amps;
		hr  = amps.Create(10,0);
		if (FAILED(hr))
			return hr;
		
		*Volts = volts.Detach();
		*Amps = amps.Detach();

		return hr;
	}

	SAFEARRAY* psa = NULL;
	hr = io.Queryf(_T("POWer:SOA:MASK:DEFine?"), _T("%,$Sle"), &psa);
	if (SUCCEEDED(hr))
	{
		CComSafeArray<double> sa;
		hr = sa.Attach(psa);
		if (SUCCEEDED(hr))
		{
			CComSafeArray<double> saVolts;
			CComSafeArray<double> saAmps;
			for (int i = 0; i < (int)sa.GetCount()/2; i++)
			{
				saVolts.Add(sa[i*2]);
				saAmps.Add(sa[i*2+1]);
			}

			*Volts = saVolts.Detach();
			*Amps = saAmps.Detach();
		}
	}

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_SetMaskPoints(SAFEARRAY** Volts, SAFEARRAY** Amps)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	CComSafeArray<double> saVolts;
	CComSafeArray<double> saAmps;
	hr = saVolts.Attach(*Volts);
	if (SUCCEEDED(hr))
	{
		hr = saAmps.Attach(*Amps);
		if (SUCCEEDED(hr))
		{
			if (saVolts.GetCount() != saAmps.GetCount())
				return err.InvalidValue(_T("Volts"), _T("<array>"), _T("Volts and Amps arrays must be the same size."));

			if ((saVolts.GetCount() < 2) || (saVolts.GetCount() > 10 ))
				return err.InvalidValue(_T("Volts"), _T("<array>"), _T("Array must have at least 2 elements and should have less than 10 elements."));
			
			if ((saVolts.GetCount() < 2) || (saVolts.GetCount() > 10 ))
				return err.InvalidValue(_T("Amps"), _T("<array>"), _T("Array must have at least 2 elements and should have less than 10 elements."));

			CString strCmd;
			strCmd.Format(_T("POWer:SOA:MASK:DEFine "));

			// Consider only the first 10 points
			int nPoints = min(10, (int)saVolts.GetCount());

			for (int i = 0; i < nPoints-1; i++)
			{
				strCmd.AppendFormat(_T("%lg,%lg,"), saVolts[i], saAmps[i]);
			}
			strCmd.AppendFormat(_T("%lg,%lg"), saVolts[nPoints-1], saAmps[nPoints-1]);

			hr = io.WriteString(strCmd);
		}
	}

	return hr;
}


HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadMaskLimits(double* MaxVoltage, double* MaxCurrent, double* MaxPower)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*MaxVoltage = 300.0000;
		*MaxCurrent = 30.0000;
		*MaxPower = 750.0000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,MaxVoltage,  MaxCurrent,MaxPower );

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ConfigureMaskLimits(double MaxVoltage, double MaxCurrent, double MaxPower)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kPowerAnalysisSafeOperatingArea_ReadAxes(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum Type, double* YaxesMax, double* YaxesMin, double* XaxesMax, double* XaxesMin)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		if(Type == Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear)
		{
			*YaxesMax = 50.0000;
			*YaxesMin = 0.0E+0;
			*XaxesMax = 500.0000;
			*XaxesMin = 0.0E+0;
		}
		if(Type == Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG)
		{
			*YaxesMax = 100.0000;
			*YaxesMin = 100.0000E-3;
			*XaxesMax = 1.0000E+3;
			*XaxesMin = 100.0000E-3;
		}
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,YaxesMax, YaxesMin, XaxesMax, XaxesMin);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_SpectrumTraceDisplayState(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_put_SpectrumTraceDisplayState(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_RFVsTimeTraceDisplayState(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_put_RFVsTimeTraceDisplayState(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Type, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_SquelchState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_put_SquelchState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_SquelchThreshold(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_put_SquelchThreshold(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_RF(ITkdpo2k3k4kFrequencyRF** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_NumberOfAverages(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_put_NumberOfAverages(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_AverageCount(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_Marker(ITkdpo2k3k4kFrequencyMarker** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequency_get_Trace(ITkdpo2k3k4kFrequencyTrace** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_ConfigureVerticalParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double Scale, double Position)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_ReadVerticalParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum RFTraceType, double* Scale, double* Position)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		RFTraceType = Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude;
		*Scale = 50;
		*Position = 0;
		return hr;
	}

	hr = InstrQueryResponse(CUR_TIMEOUT, Scale, Position);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_SpectogramState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_put_SpectogramState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_SpectogramNumberOfSlices(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_SpectogramSelectSlice(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_put_SpectogramSelectSlice(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_DetectionMode(Tkdpo2k3k4kFrequencyRFDetectionModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_put_DetectionMode(Tkdpo2k3k4kFrequencyRFDetectionModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_SpectrumMode(Tkdpo2k3k4kFrequencySpectrumModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_put_SpectrumMode(Tkdpo2k3k4kFrequencySpectrumModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_FrequencyAndSpan(ITkdpo2k3k4kFrequencyRFFrequencyAndSpan** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_Amplitude(ITkdpo2k3k4kFrequencyRFAmplitude** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_get_Bandwidth(ITkdpo2k3k4kFrequencyRFBandwidth** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_ReadManualDetectionMethod(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum* Method)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Type = Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage;
		*Method = Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Method);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRF_ConfigureManualDetectionMethod(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Type, Tkdpo2k3k4kFrequencyRFDetectionMethodEnum Method)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_CenterFrequency(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_CenterFrequency(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Span(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Span(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Start(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Start(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_get_Stop(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFFrequencyAndSpan_put_Stop(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_get_ReferenceLevel(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_put_ReferenceLevel(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalPosition(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalPosition(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_get_VerticalUnits(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_put_VerticalUnits(Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFAmplitude_SetAutoRefLevel()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_get_RBWMode(Tkdpo2k3k4kFrequencyRBWModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_put_RBWMode(Tkdpo2k3k4kFrequencyRBWModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_get_RBW(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_put_RBW(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_get_SpanRBWRatio(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_put_SpanRBWRatio(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_get_Window(Tkdpo2k3k4kFrequencyRFWindowEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyRFBandwidth_put_Window(Tkdpo2k3k4kFrequencyRFWindowEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_get_Type(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_put_Type(Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ReadOBW(double* AnalysisBandwidth, double* PercentageDown, double* LowerFrequency, double* UpperFrequency, double* Power)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*AnalysisBandwidth = 10.0000E+6;
		*PercentageDown = 99.0000;
		*LowerFrequency = 0;
		*UpperFrequency = 0;
		*Power = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,AnalysisBandwidth,PercentageDown, LowerFrequency,UpperFrequency,Power);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ConfigureOBW(double AnalysisBandwidth, double PercentageDown)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ReadACPR(long* AdjacentChannels, double* ChannelBandwidth, double* ChannelSpacing, double* Power, double* LowerArea1Ratio, double* LowerArea2Ratio, double* LowerArea3Ratio, double* UpperArea1Ratio, double* UpperArea2Ratio, double* UpperArea3Ratio)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*AdjacentChannels = 1;
		*ChannelBandwidth = 4.0000E+6;
		*ChannelSpacing = 5.0000E+6;
		*Power = 0;
		*LowerArea1Ratio = 0;
		*LowerArea2Ratio = 0;
		*LowerArea3Ratio = 0;
		*UpperArea1Ratio = 0;
		*UpperArea2Ratio = 0;
		*UpperArea3Ratio = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,AdjacentChannels,ChannelBandwidth,ChannelSpacing,Power,LowerArea1Ratio,LowerArea2Ratio, LowerArea3Ratio,UpperArea1Ratio,UpperArea2Ratio,UpperArea3Ratio);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ConfigureACPR(long AdjacentChannels, double ChannelBandwidth, double ChannelSpacing)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ReadChannelPower(double* Bandwidth, double* Power)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Bandwidth = 10.0000E+6;
		*Power = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Bandwidth, Power);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kMeasurementsFrequency_ConfigureChannelPower(double Bandwidth)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_get_ManualState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_put_ManualState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_get_Type(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_put_Type(Tkdpo2k3k4kFrequencyRFMarkerTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_ReadPeak(VARIANT_BOOL* State, long* MaximumMarkers, double* Threshold, double* Excursion)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*State = VARIANT_TRUE;
		*MaximumMarkers = 5;
		*Threshold = -50.0000;
		*Excursion = 30.0000;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,State,MaximumMarkers, Threshold,Excursion);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_ConfigurePeak(long MaximumMarkers, double Threshold, double Excursion)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_ConfigureManual(long Marker, double HorizontalValue)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_ReadManual(long Marker, double* HorizontalValue, double* HorizontalDelta, double* VerticalValue, double* VerticalDelta)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Marker = (long)0.0E+0;
		*HorizontalValue = 0;
		*HorizontalDelta = 0;
		*VerticalValue = 0;
		*VerticalDelta = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,HorizontalValue,HorizontalDelta,VerticalValue ,VerticalDelta);

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_ReadReference(double* Frequency, double* Amplitude)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Frequency = 0;
		*Amplitude = 0;
		return hr;
	}

	hr = InstrQueryResponse(CUR_TIMEOUT,Frequency,Amplitude );

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyMarker_MoveRefToCentre()
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyTrace_FetchY(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement)
{
	HRESULT hr = S_OK;

	//default return values
	*InitialX = 0.0;
	*XIncrement = 0.0;

	if (GetSimulate())
	{
		CComSafeArray<float> traceArray;
		hr  = traceArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*TraceArray = traceArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}

	//Some temp local variables:
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;	
	CString tempstr;
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	float *_floatPtr;						// A float pointer for reading 4-byte wfm data
	float _fTempVal;						// temp float var
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.
	CString strFormat;

	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);			

	strFormat.Format(_T("SELECT:%s?"),EnumToString(Source));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	//The above translation will validate the Enum value also.
	
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error		
		strFormat.Format (_T("HEADER %s"),_strHeader);
		io.WriteString(strFormat);		
		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	

	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);
	
	//Now set the data source 
	strFormat.Format (_T("DATA:SOURCE %s"),EnumToString(Source));
	io.WriteString(strFormat);

	
	
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
		
			strFormat = _T("WFMOUTPRE:ENCDG BIN");
		    hr = io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
		        hr = io.WriteString(strFormat);		
			}
		
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

	//#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	memset(_ReadBuffer,0,256);
	//Write CURVE? command	
	if(SUCCEEDED(hr)) 
	{
		strFormat = _T("CURVE?");
		hr =io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data	
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);
	
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);	

		LONG _nRecLen = _nTotalByteCount/_nBytNr;
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);
			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 				
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+(_fTempVal-_fYOffset);
					}	
				
			}
			*TraceArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}
	}
	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);	
	return hr;
}

HRESULT Tkdpo2k3k4k::ITkdpo2k3k4kFrequencyTrace_ReadY(Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum Source, SAFEARRAY** TraceArray, double* InitialX, double* XIncrement)
{
	*InitialX = 0.0;
	*XIncrement = 0.0;

	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		CComSafeArray<float> traceArray;
		hr  = traceArray.Create(10,0);
		if (FAILED(hr))
			return hr;

		*TraceArray = traceArray.Detach();

		*InitialX = 0;
		*XIncrement = 0.01;
		return hr;
	}


//Some temp local variables:
	CString strFormat;
	CString _strSource = NULL;				//To get source wfm String from Enum
	CString _strHeader;				//To store current header state
	CString _strDataStart;				//To store current data start
	CString _strDataStop;				//To store current data stop
	CString _strDataSource;			//To store current data source
	CString _strRunStop;				//To store current acq state
	CString _strWfmOutPreBinFmt;		//To store current binary format
	CString _strWfmOutPreBytOr;		//To store current byte order
	CString _strWfmOutPreBytNr;		//To store current bytes count
	CString _strWfmOutPreEncd;			//To store current Encd format.
	LONG _nSourceDisplay;					//To check source display status?
	LONG _nSourceType;						//=0 for Ch1-Ch4,=1 for Math1-Math4, =2 for Ref1-Ref4
	LONG _nRecLen;							//for getting rec-len of source
	LONG _nPtOffset;						//for getting trigger sample point
	double _fXZero;							//for getting XZero
	double _fYMult;							//for getting YMult
	double _fYZero;							//for getting YZero
	double _fYOffset;						//for getting YOffset
	LONG _nBytNr;							//for getting the byte count for data
	BYTE _ReadBuffer[256];					//for reading part of CURVE? data
	BYTE *_CurveData;						//for reading CURVE? data
	LONG _nByteCountVal;					//for getting number of chars for byte count
	__int64 _nTotalByteCount;					//total byte count of curve data
	float *_floatPtr;						// A float pointer for reading 4-byte wfm data
	float _fTempVal;						// temp float var
	bool _bVISALockState = FALSE;			// for storing the VISA lock states.

	VARIANT_BOOL _bSingleSequence = VARIANT_FALSE; //To know the scope StopAfter mode
	ViSession	viSession;
	ViEventType		viEventType;
	ViEvent			viEvent;
	ViUInt16	viStb;
ViStatus status;
	//save the current header setting
	hr = io.QueryString(_T("HEADER?"), _strHeader);
	strFormat = _T("HEADER OFF");
	hr = io.WriteString(strFormat);

	//get visa session

	if(SUCCEEDED(hr))
	{	
		ITkdpo2k3k4kInstrumentIO_get_IOSession((long *)&viSession);	
	}

	status = viEnableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE, VI_NULL);

		
	strFormat.Format(_T("SELECT:%s?"),EnumToString(Source));
	hr = io.QueryNumber(strFormat, &_nSourceDisplay);

	_strSource = EnumToString(Source);

	if (SUCCEEDED(hr))
	if (_nSourceDisplay !=1)
	{
		//restore the header and return error
		strFormat.Format (_T("HEADER %s"),_strHeader);
		hr = io.WriteString(strFormat);

		return ReportErrorEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED,_T("Channel Not Enabled error"));
	}
	
	//Initiate the acquisition and wait for acq complete logic
	hr = _ITkdpo2k3k4kAcquisition::get_SingleSequence(&_bSingleSequence);
	if(SUCCEEDED(hr))
	if(_bSingleSequence == VARIANT_TRUE)
	{
	//	//hr = GetRoot()->InstrWrite(OLESTR("ACQUIRE:REPET 0;STATE 0"));
	//	strFormat = _T("ACQUIRE:REPET 0;STATE 0");
	//	hr = io.WriteString(strFormat);
	//	// Setup the instrument's GPIB registers to enable OPC to generate SRQ
	//	if(SUCCEEDED(hr)) 
	//	{
	//		strFormat = _T("DESE 1;*ESE 1;*SRE 32;*CLS");
	//		hr = io.WriteString(strFormat);
	//	}
	//	// Do an acquisition and wait for it to generate SRQ
	//	// Clear the status first //DESE 1;*ESE 1;*SRE 32;*CLS
	//	
	//	//get time stamp
	//	//DWORD	curTimeInMS = GetTickCount();
	//	if(SUCCEEDED(hr)) 
	//	{
	//		strFormat = _T("ACQUIRE:STATE 1");
	//		hr = io.WriteString(strFormat);
	//	}
	//	if(SUCCEEDED(hr)) 
	//	{
	//		strFormat = _T("*OPC");
	//		hr = io.WriteString(strFormat);
	//	}
	//
	//	// wait for SRQ
	//	if (viWaitOnEvent(viSession,VI_EVENT_SERVICE_REQ,MaxTimeMiliseconds,&viEventType,&viEvent)==VI_SUCCESS)
	//	{
	//		viClose(viEvent);
	//		viReadSTB(viSession, &viStb);
	//	} else {
	//		// Timeout
	//		//restore the header and return error
	//		strFormat.Format (_T("HEADER %s"),_strHeader);
	//		hr = io.WriteString(strFormat);
	//		return 	ReportErrorEx(IDS_E_IVISCOPE_MAX_TIME_EXCEEDED,_T("Maximum Acquisition timeout exceeded."));
	//	}
	//}
	//else
	//{
			strFormat =_T("ACQUIRE:STATE 1");
			hr = io.WriteString(strFormat);
	}
	//Acq complete ends here
	//Store all WFMOUTPRE parameters b4 modifying them for CURVE?
	hr = io.QueryString(_T("DATA:SOURCE?"), _strDataSource);
	hr = io.QueryString(_T("DATA:START?"), _strDataStart);
	hr = io.QueryString(_T("DATA:STOP?"), _strDataStop);
	hr = io.QueryString(_T("WFMOUTPRE:BN_FMT?"), _strWfmOutPreBinFmt);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_OR?"), _strWfmOutPreBytOr);
	hr = io.QueryString(_T("WFMOUTPRE:ENCD?"), _strWfmOutPreEncd);
	hr = io.QueryString(_T("WFMOUTPRE:BYT_NR?"), _strWfmOutPreBytNr);
	hr = io.QueryString(_T("ACQUIRE:STATE?"), _strRunStop);


	//Now set the data source 
	if (SUCCEEDED(hr))
	{
		strFormat.Format(_T("DATA:SOURCE %s"),_strSource);
		hr = io.WriteString(strFormat);
	}
	
	//Set Wfmoutpre parameters
	if(SUCCEEDED(hr))
	{
			strFormat = _T("WFMOUTPRE:ENCDG BIN");
			hr = io.WriteString(strFormat);
			if(SUCCEEDED(hr))
			{
				strFormat = _T(":WFMOUTPRE:BYT_OR LSB");
				hr = io.WriteString(strFormat);
			}
		
	}

	hr = io.QueryNumber(_T("WFMOUTPRE:BYT_NR?"), &_nBytNr);

//	#pragma reminder(Acquisition Stop 2 be implemented here for contineous mode)
	
	//Lock the VISA session here
	CString strAccessKey;
	if(io.Lock(IoLockExclusive, 1000, _T(""), strAccessKey) == VI_SUCCESS)
		_bVISALockState = TRUE;

	//Write CURVE? command	
	if(SUCCEEDED(hr)) 
	{		
		strFormat = _T("CURVE?");
		hr = io.WriteStringNoPoll(strFormat);
	}
	//CURVE? returns the data in "#<x><yy><data><\n>" format if header is off
	//Check for first charater '#' for validating the curve data
	long act;
	if(SUCCEEDED(hr)) hr = io.ReadNoPoll((BYTE *)_ReadBuffer,2,&act,false);

	// Fix for CR00293186 
	sscanf((char *)_ReadBuffer + 1,"%x",&_nByteCountVal);

	if(SUCCEEDED(hr)) hr = io.ReadNoPoll(_ReadBuffer,_nByteCountVal,&act,false);

	if(SUCCEEDED(hr))
	{
		_ReadBuffer[_nByteCountVal] = '\0';
		_nTotalByteCount = _atoi64((char*)_ReadBuffer);

		LONG _nRecLen = _nTotalByteCount/_nBytNr;
		//allocate the memory here
		_CurveData = (BYTE*)malloc(_nTotalByteCount+1);
		//Create a new dimension here
		SAFEARRAYBOUND sabOneDim[1];
		sabOneDim[0].lLbound= 0;
		sabOneDim[0].cElements = _nRecLen;
		SAFEARRAY *pSAO = SafeArrayCreate(VT_R8,1,sabOneDim);
		
		if(_CurveData != NULL && pSAO != NULL)
		{
			double *pOUT = (double*)(pSAO->pvData);

			hr = io.ReadNoPoll(_CurveData,_nTotalByteCount+1,&act,false);
			if(SUCCEEDED(hr))
			{
				//Read YMult, YZero, YOffset,XZero and XIncr, 
				hr = io.QueryNumber(_T("WFMOUTPRE:XINCR?"), XIncrement);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:XZERO?"), &_fXZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YMULT?"),&_fYMult);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YZERO?"),&_fYZero);
				if(SUCCEEDED(hr)) 
					hr = io.QueryNumber(_T("WFMOUTPRE:YOFF?"),&_fYOffset);
				
							
				// We are done with CURVE?,Unlock the VISA session now
				if(_bVISALockState == TRUE)
					io.Unlock();

				
					_floatPtr= (float*)_CurveData;
					for(int i=0;i<_nRecLen;i++)
					{
						_fTempVal = (float) _floatPtr[i];
						pOUT[i] = _fYZero+(_fTempVal-_fYOffset);
					}	
			}
			*TraceArray= pSAO;
			free(_CurveData);
			
			//Calculate & Return InitialX
			//Get the Trigger sample point: this is always relative to Data::start
			hr = io.QueryNumber(_T("WFMOUTPRE:PT_OFF?"),&_nPtOffset);
			if(SUCCEEDED(hr))
				*InitialX = -1*_nPtOffset*(*XIncrement)+_fXZero;
		}

	}
	status = viDisableEvent(viSession, VI_EVENT_SERVICE_REQ, VI_QUEUE);

	//Restoring the scope settings
	strFormat.Format (_T("DATA:SOURCE %s;START %s;STOP %s"),_strDataSource,_strDataStart,_strDataStop);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("WFMOUTPRE:BN_FMT %s;BYT_OR %s;ENCD %s;BYT_NR %s"),_strWfmOutPreBinFmt,_strWfmOutPreBytOr,_strWfmOutPreEncd,_strWfmOutPreBytNr);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	strFormat.Format (_T("HEADER %s"),_strHeader);
	if(SUCCEEDED(hr)) hr =io.WriteString(strFormat);
	
	return hr;
}
