/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoTkdpo2k3k4kMeasurementSlot.h"
#include "CoTkdpo2k3k4k.h"

const CString& Tkdpo2k3k4kMeasurementSlot::GetClassName() const
{
	return Tkdpo2k3k4kMeasurementSlot::ClassName();
}

const CString& Tkdpo2k3k4kMeasurementSlot::ClassName()
{
	static CString strClassName = _T("Tkdpo2k3k4kMeasurementSlot");

	return strClassName;
}

const CString& Tkdpo2k3k4kMeasurementSlot::RepCapName()
{
	static CString strRepCapName = _T("MeasurementSlot");

	return strRepCapName;
}

const CRepCapDescriptor** Tkdpo2k3k4kMeasurementSlot::GetRepCapDescriptors() const
{
	static CRepCapDescriptor* _descriptors[] = {
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

Tkdpo2k3k4k* Tkdpo2k3k4kMeasurementSlot::GetRoot() const
{
	return CNode::GetRoot<Tkdpo2k3k4k>();
}

Tkdpo2k3k4k* Tkdpo2k3k4kMeasurementSlot::GetParent() const
{
	return CNode::GetParent<Tkdpo2k3k4k>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP Tkdpo2k3k4kMeasurementSlot::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(ITkdpo2k3k4kMeasurementSlot),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
