#include "stdafx.h"
#include "CoTkdpo2k3k4kReference.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kReference::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kReference::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kReference::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_Configure(double Position, double VerticalScale, double HorizontalScale, VARIANT_BOOL DisplayState, double HorizontalDelayTime)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_Read(double* Position, double* VerticalScale, double* HorizontalScale, VARIANT_BOOL* DisplayState, double* HorizontalDelayTime)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Position = 0;
		*VerticalScale = 100.0000E-3;
		*HorizontalScale = 4.0000E-6;
		*DisplayState = VARIANT_FALSE;
		*HorizontalDelayTime = 16.0000E-6;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, HorizontalScale, Position, VerticalScale, DisplayState, HorizontalDelayTime);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_get_HorizontalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_put_HorizontalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_get_VerticalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_put_VerticalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_get_HorizontalDelayTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_put_HorizontalDelayTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_get_Label(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_put_Label(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kReference::ITkdpo2k3k4kReference_GetDateTime(BSTR* Date, BSTR* Time)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Date = ::SysAllocString(L"XX-XX-XXXX");
		*Time = ::SysAllocString(L"XX:XX:XX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,Date,Time );

	return hr;
}
