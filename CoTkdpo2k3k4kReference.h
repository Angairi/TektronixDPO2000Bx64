#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kReference.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kReference :
	public _RepCap<Tkdpo2k3k4kReference>,
	public _ITkdpo2k3k4kReference
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KREFERENCE()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:

	STDMETHOD(ITkdpo2k3k4kReference_Configure)(double Position, double VerticalScale, double HorizontalScale, VARIANT_BOOL DisplayState, double HorizontalDelayTime);
	STDMETHOD(ITkdpo2k3k4kReference_Read)(double* Position, double* VerticalScale, double* HorizontalScale, VARIANT_BOOL* DisplayState, double* HorizontalDelayTime);
	STDMETHOD(ITkdpo2k3k4kReference_get_HorizontalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kReference_put_HorizontalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kReference_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kReference_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kReference_get_VerticalScale)(double* val);
	STDMETHOD(ITkdpo2k3k4kReference_put_VerticalScale)(double val);
	STDMETHOD(ITkdpo2k3k4kReference_get_HorizontalDelayTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kReference_put_HorizontalDelayTime)(double val);
	STDMETHOD(ITkdpo2k3k4kReference_get_Label)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kReference_put_Label)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kReference_GetDateTime)(BSTR* Date, BSTR* Time);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kReference)
