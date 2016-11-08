#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kMeasurementSlot.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kMeasurementSlot :
	public _RepCap<Tkdpo2k3k4kMeasurementSlot>,
	public _ITkdpo2k3k4kMeasurementSlot
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KMEASUREMENTSLOT()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:

	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_Configure)(Tkdpo2k3k4kSourceEnum Source, Tkdpo2k3k4kMeasurementTypeEnum Type);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_ConfigureDelay)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_ConfigurePhase)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_Read)(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2, Tkdpo2k3k4kMeasurementTypeEnum* Type);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_ReadValue)(Tkdpo2k3k4kSourceEnum Source1, Tkdpo2k3k4kSourceEnum Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum Direction, Tkdpo2k3k4kMeasurementEdgeEnum Edge1, Tkdpo2k3k4kMeasurementEdgeEnum Edge2, Tkdpo2k3k4kMeasurementTypeEnum Type, double* Val, BSTR* Unit);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Count)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_DelayDirection)(Tkdpo2k3k4kMeasurementDelayDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_DelayDirection)(Tkdpo2k3k4kMeasurementDelayDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_DelayEdge1)(Tkdpo2k3k4kMeasurementEdgeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_DelayEdge1)(Tkdpo2k3k4kMeasurementEdgeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_DelayEdge2)(Tkdpo2k3k4kMeasurementEdgeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_DelayEdge2)(Tkdpo2k3k4kMeasurementEdgeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Maximum)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Mean)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Minimum)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Source1)(Tkdpo2k3k4kSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_Source1)(Tkdpo2k3k4kSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Source2)(Tkdpo2k3k4kSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_Source2)(Tkdpo2k3k4kSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_StandardDeviation)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_State)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_State)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Type)(Tkdpo2k3k4kMeasurementTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_put_Type)(Tkdpo2k3k4kMeasurementTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Units)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_get_Value)(double* val);
	STDMETHOD(ITkdpo2k3k4kMeasurementSlot_ReadDelay)(Tkdpo2k3k4kSourceEnum* Source1, Tkdpo2k3k4kSourceEnum* Source2, Tkdpo2k3k4kMeasurementDelayDirectionEnum* Direction, Tkdpo2k3k4kMeasurementEdgeEnum* Edge1, Tkdpo2k3k4kMeasurementEdgeEnum* Edge2);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kMeasurementSlot)
