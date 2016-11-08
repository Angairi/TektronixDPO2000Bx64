#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kMath.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kMath :
	public _RepCap<Tkdpo2k3k4kMath>,
	public _ITkdpo2k3k4kMath,
	public _ITkdpo2k3k4kMathSpectral
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KMATH()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:

	STDMETHOD(ITkdpo2k3k4kMath_Configure)(BSTR Expression, double VerticalPosition, double VerticalScale, double HorizontalPosition, double HorizontalScale, VARIANT_BOOL DisplayState, Tkdpo2k3k4kMathTypeEnum Type);
	STDMETHOD(ITkdpo2k3k4kMath_Read)(BSTR* Expression, double* VerticalPosition, double* VerticalScale, BSTR* VerticalUnits, double* HorizontalPosition, double* HorizontalScale, BSTR* HorizontalUnits, VARIANT_BOOL* DisplayState, Tkdpo2k3k4kMathTypeEnum* Type);
	STDMETHOD(ITkdpo2k3k4kMath_get_DisplayState)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_DisplayState)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kMath_get_Expression)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_Expression)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kMath_get_Label)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_Label)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kMath_get_MathVariable)(long Variable, double* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_MathVariable)(long Variable, double val);
	STDMETHOD(ITkdpo2k3k4kMath_get_HorizontalPosition)(double* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_HorizontalPosition)(double val);
	STDMETHOD(ITkdpo2k3k4kMath_get_HorizontalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_HorizontalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kMath_get_HorizontalUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMath_get_VerticalPosition)(double* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_VerticalPosition)(double val);
	STDMETHOD(ITkdpo2k3k4kMath_get_VerticalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_VerticalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kMath_get_VerticalUnits)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMath_get_Type)(Tkdpo2k3k4kMathTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMath_put_Type)(Tkdpo2k3k4kMathTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kMath_get_Spectral)(ITkdpo2k3k4kMathSpectral** val);

	STDMETHOD(ITkdpo2k3k4kMathSpectral_get_DisplayGatingIndicators)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_put_DisplayGatingIndicators)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_get_Window)(Tkdpo2k3k4kSpectralWindowEnum* val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_put_Window)(Tkdpo2k3k4kSpectralWindowEnum val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_get_MagnitudeUnits)(Tkdpo2k3k4kSpectralMagUnitEnum* val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_put_MagnitudeUnits)(Tkdpo2k3k4kSpectralMagUnitEnum val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_GetNyquistFrequency)(double* val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_GetStartPointGatingIndicator)(double* val);
	STDMETHOD(ITkdpo2k3k4kMathSpectral_GetEndPointGatingIndicator)(double* val);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kMath)
