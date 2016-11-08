#include "stdafx.h"
#include "CoTkdpo2k3k4kDigitalChannel.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kDigitalChannel::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kDigitalChannel::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_get_Label(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_put_Label(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_get_State(Tkdpo2k3k4kDigitalChannelStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_put_State(Tkdpo2k3k4kDigitalChannelStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_get_Threshold(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kDigitalChannel::ITkdpo2k3k4kDigitalChannel_put_Threshold(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
