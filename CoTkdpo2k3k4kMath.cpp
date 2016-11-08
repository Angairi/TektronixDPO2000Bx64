#include "stdafx.h"
#include "CoTkdpo2k3k4kMath.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kMath::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kMath::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kMath::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_Configure(BSTR Expression, double VerticalPosition, double VerticalScale, double HorizontalPosition, double HorizontalScale, VARIANT_BOOL DisplayState, Tkdpo2k3k4kMathTypeEnum Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_Read(BSTR* Expression, double* VerticalPosition, double* VerticalScale, BSTR* VerticalUnits, double* HorizontalPosition, double* HorizontalScale, BSTR* HorizontalUnits, VARIANT_BOOL* DisplayState, Tkdpo2k3k4kMathTypeEnum* Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Expression = ::SysAllocString(L"CH1+CH2");
		*VerticalPosition = 0.0E+0;
		*VerticalScale = 100.0000E-3;
		*VerticalUnits = ::SysAllocString(L"V");
		*HorizontalPosition = 50.0000;
		*HorizontalScale = 4.0000E-6;
		*HorizontalUnits = ::SysAllocString(L"s");
		*DisplayState = VARIANT_FALSE;
		*Type = Tkdpo2k3k4kMathTypeDual;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Expression, VerticalPosition, VerticalScale, VerticalUnits, HorizontalPosition, HorizontalScale, HorizontalUnits, DisplayState, Type);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_DisplayState(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_DisplayState(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_Expression(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_Expression(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_Label(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_Label(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_MathVariable(long Variable, double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_MathVariable(long Variable, double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_HorizontalPosition(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_HorizontalPosition(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_HorizontalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_HorizontalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_HorizontalUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_VerticalPosition(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_VerticalPosition(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_VerticalScale(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_VerticalScale(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_VerticalUnits(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_Type(Tkdpo2k3k4kMathTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_put_Type(Tkdpo2k3k4kMathTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMath_get_Spectral(ITkdpo2k3k4kMathSpectral** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_get_DisplayGatingIndicators(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_put_DisplayGatingIndicators(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_get_Window(Tkdpo2k3k4kSpectralWindowEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_put_Window(Tkdpo2k3k4kSpectralWindowEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_get_MagnitudeUnits(Tkdpo2k3k4kSpectralMagUnitEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_put_MagnitudeUnits(Tkdpo2k3k4kSpectralMagUnitEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_GetNyquistFrequency(double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_GetStartPointGatingIndicator(double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kMath::ITkdpo2k3k4kMathSpectral_GetEndPointGatingIndicator(double* val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*val = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}
