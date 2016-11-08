/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoTkdpo2k3k4kChannel.h"
#include "CoTkdpo2k3k4k.h"

const CString& Tkdpo2k3k4kChannel::GetClassName() const
{
	return Tkdpo2k3k4kChannel::ClassName();
}

const CString& Tkdpo2k3k4kChannel::ClassName()
{
	static CString strClassName = _T("Tkdpo2k3k4kChannel");

	return strClassName;
}

const CString& Tkdpo2k3k4kChannel::RepCapName()
{
	static CString strRepCapName = _T("Channel");

	return strRepCapName;
}

const CRepCapDescriptor** Tkdpo2k3k4kChannel::GetRepCapDescriptors() const
{
	static CRepCapDescriptor* _descriptors[] = {
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

Tkdpo2k3k4k* Tkdpo2k3k4kChannel::GetRoot() const
{
	return CNode::GetRoot<Tkdpo2k3k4k>();
}

Tkdpo2k3k4k* Tkdpo2k3k4kChannel::GetParent() const
{
	return CNode::GetParent<Tkdpo2k3k4k>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP Tkdpo2k3k4kChannel::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(ITkdpo2k3k4kChannel),
		&__uuidof(IIviScopeMeasurement),
		&__uuidof(IIviScopeChannel),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
