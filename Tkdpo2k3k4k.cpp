#include "StdAfx.h"
#include "Tkdpo2k3k4k.h"
#include "Tkdpo2k3k4k.nimbus.h"

ViStatus TranslateUnknownHRESULT(ViSession session, HRESULT hr)
{
	ViStatus error = 0x80000000; // _VI_ERROR
	
	NTL_UNUSED(hr);

	return ReportErrorUsingComErrorInfoDescription(session, error);
}


