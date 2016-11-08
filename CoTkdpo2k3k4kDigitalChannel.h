#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kDigitalChannel.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kDigitalChannel :
	public _RepCap<Tkdpo2k3k4kDigitalChannel>,
	public _ITkdpo2k3k4kDigitalChannel
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KDIGITALCHANNEL()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:

	STDMETHOD(ITkdpo2k3k4kDigitalChannel_get_Label)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_put_Label)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_get_State)(Tkdpo2k3k4kDigitalChannelStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_put_State)(Tkdpo2k3k4kDigitalChannelStateEnum val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_get_Threshold)(double* val);
	STDMETHOD(ITkdpo2k3k4kDigitalChannel_put_Threshold)(double val);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kDigitalChannel)
