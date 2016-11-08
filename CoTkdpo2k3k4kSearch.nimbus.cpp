/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoTkdpo2k3k4kSearch.h"
#include "CoTkdpo2k3k4k.h"

const CString& Tkdpo2k3k4kSearch::GetClassName() const
{
	return Tkdpo2k3k4kSearch::ClassName();
}

const CString& Tkdpo2k3k4kSearch::ClassName()
{
	static CString strClassName = _T("Tkdpo2k3k4kSearch");

	return strClassName;
}

const CString& Tkdpo2k3k4kSearch::RepCapName()
{
	static CString strRepCapName = _T("Search");

	return strRepCapName;
}

const CRepCapDescriptor** Tkdpo2k3k4kSearch::GetRepCapDescriptors() const
{
	static CRepCapDescriptor* _descriptors[] = {
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

Tkdpo2k3k4k* Tkdpo2k3k4kSearch::GetRoot() const
{
	return CNode::GetRoot<Tkdpo2k3k4k>();
}

Tkdpo2k3k4k* Tkdpo2k3k4kSearch::GetParent() const
{
	return CNode::GetParent<Tkdpo2k3k4k>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP Tkdpo2k3k4kSearch::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(ITkdpo2k3k4kSearch),
		&__uuidof(ITkdpo2k3k4kSearchBus),
		&__uuidof(ITkdpo2k3k4kSearchBusAudio),
		&__uuidof(ITkdpo2k3k4kSearchBusUSB),
		&__uuidof(ITkdpo2k3k4kSearchBusSPI),
		&__uuidof(ITkdpo2k3k4kSearchBusRS232),
		&__uuidof(ITkdpo2k3k4kSearchBusLIN),
		&__uuidof(ITkdpo2k3k4kSearchBusI2C),
		&__uuidof(ITkdpo2k3k4kSearchBusFlexray),
		&__uuidof(ITkdpo2k3k4kSearchBusCAN),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
