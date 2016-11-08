#include "stdafx.h"
#include "CoTkdpo2k3k4kMeasurementSlot.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kMeasurementSlot::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kMeasurementSlot::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_Configure(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_ConfigureDelay(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_ConfigurePhase(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_Read(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type)
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

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_ReadValue(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit)
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
	hr = InstrQueryResponse(CUR_TIMEOUT, Val, Unit);

	return hr;
}


HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Count(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_DelayDirection(Tkdpo2k3k4kMeasurementDelayDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_DelayEdge1(Tkdpo2k3k4kMeasurementEdgeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_DelayEdge2(Tkdpo2k3k4kMeasurementEdgeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Maximum(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Mean(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Minimum(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}


HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Source1(Tkdpo2k3k4kSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_Source1(Tkdpo2k3k4kSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Source2(Tkdpo2k3k4kSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_Source2(Tkdpo2k3k4kSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_StandardDeviation(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_State(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_State(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Type(Tkdpo2k3k4kMeasurementTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_put_Type(Tkdpo2k3k4kMeasurementTypeEnum val)
{
	HRESULT hr = S_OK;
	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) && (val==Tkdpo2k3k4kMeasurementTypeWaveforms))
	hr =  err.ValueNotSupported(_T("Tkdpo2k3k4kMeasurementTypeWaveforms"), _T("val"));
	else
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Units(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_get_Value(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMeasurementSlot::ITkdpo2k3k4kMeasurementSlot_ReadDelay(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source1 = Tkdpo2k3k4kSourceCH1;
		*Source2 = Tkdpo2k3k4kSourceCH2;
		*Direction = Tkdpo2k3k4kMeasurementDelayDirectionForward;
		*Edge1 = Tkdpo2k3k4kMeasurementEdgeRise;
		*Edge2 = Tkdpo2k3k4kMeasurementEdgeRise;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source1, Source2, Direction, Edge1, Edge2);

	return hr;
}
