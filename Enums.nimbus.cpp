/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#include "stdafx.h"
#include "CoTkdpo2k3k4k.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Functions for converting between enum values and instrument commands
//


template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerEdge, _T("EDG"), _T("EDGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerPulseWidth, _T("WID"), _T("WIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerRunt, _T("RUN"), _T("RUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerLogic, _T("LOGIC"), _T("LOG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerSetupHold, _T("SETH"), _T("SETHOLD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerRiseFallTime, _T("TRAN"), _T("TRANSITION"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerVideo, _T("VID"), _T("VIDEO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerBus, _T("BUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTypeEnum>(Tkdpo2k3k4kTriggerSequence, _T("EDG"), _T("EDGE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Slope")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureSetupHold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadSetupHold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RISE"), _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerASetupHold.ClockEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Slope")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeRise, _T("RIS"), _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSlopeEnum>(Tkdpo2k3k4kTriggerSlopeFall, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kAcquisitionModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kAcquisitionModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.Mode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAcquisitionModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAcquisitionModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionModeEnum>(Tkdpo2k3k4kAcquisitionModeSample, _T("SAM"), _T("SAMPLE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionModeEnum>(Tkdpo2k3k4kAcquisitionModePeakDetect, _T("PEAK"), _T("PEAKDETECT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionModeEnum>(Tkdpo2k3k4kAcquisitionModeHiRes, _T("HIR"), _T("HIRES"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionModeEnum>(Tkdpo2k3k4kAcquisitionModeAverage, _T("AVE"), _T("AVERAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionModeEnum>(Tkdpo2k3k4kAcquisitionModeEnvelope, _T("ENV"), _T("ENVELOPE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureI2C")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadI2C")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudioInputs")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudioInputs")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureCAN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadCAN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ParallelBusClockSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.RS232TXSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.RS232RXSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ParallelBitSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSourceEnum>(Tkdpo2k3k4kBusSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureI2C")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(Tkdpo2k3k4kBusI2CRWInAddressYES, _T("ON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(Tkdpo2k3k4kBusI2CRWInAddressNO, _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadI2C")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(Tkdpo2k3k4kBusI2CRWInAddressYES, _T("ON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusI2CRWInAddressEnum>(Tkdpo2k3k4kBusI2CRWInAddressNO, _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(Tkdpo2k3k4kBusSPIClockPolarityRISE, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(Tkdpo2k3k4kBusSPIClockPolarityFALL, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(Tkdpo2k3k4kBusSPIClockPolarityRISE, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIClockPolarityEnum>(Tkdpo2k3k4kBusSPIClockPolarityFALL, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusBitOrderEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusBitOrderEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusBitOrderEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusBitOrderEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusBitOrderEnum>(Tkdpo2k3k4kBusBitOrderLSB, _T("LSB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusBitOrderEnum>(Tkdpo2k3k4kBusBitOrderMSB, _T("MSB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusBitOrderEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusBitOrderEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusBitOrderEnum>(Tkdpo2k3k4kBusBitOrderLSB, _T("LSB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusBitOrderEnum>(Tkdpo2k3k4kBusBitOrderMSB, _T("MSB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(Tkdpo2k3k4kBusSPISlaveSelectPolarityHIGH, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(Tkdpo2k3k4kBusSPISlaveSelectPolarityHIGH, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(Tkdpo2k3k4kBusSPIDataPolarityLOW, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(Tkdpo2k3k4kBusSPIDataPolarityHIGH, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(Tkdpo2k3k4kBusSPIDataPolarityLOW, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIDataPolarityEnum>(Tkdpo2k3k4kBusSPIDataPolarityHIGH, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusRS232PolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusRS232PolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232PolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(Tkdpo2k3k4kBusRS232PolarityNormal, _T("NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(Tkdpo2k3k4kBusRS232PolarityInverted, _T("INVERTED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232PolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(Tkdpo2k3k4kBusRS232PolarityNormal, _T("NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232PolarityEnum>(Tkdpo2k3k4kBusRS232PolarityInverted, _T("INVERTED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusRS232ParityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusRS232ParityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232ParityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232ParityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityNone, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityOdd, _T("ODD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityEven, _T("EVEN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadRS232")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232ParityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232ParityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityNone, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityOdd, _T("ODD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232ParityEnum>(Tkdpo2k3k4kBusRS232ParityEven, _T("EVEN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusUSBProbeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusUSBProbeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusUSBProbeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusUSBProbeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBProbeEnum>(Tkdpo2k3k4kBusUSBProbeSingleEnded, _T("SINGLEENDED"), _T("SINGLE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBProbeEnum>(Tkdpo2k3k4kBusUSBProbeDifferential, _T("DIFFERENTIAL"), _T("DIFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusUSBProbeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusUSBProbeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBProbeEnum>(Tkdpo2k3k4kBusUSBProbeSingleEnded, _T("SINGLEENDED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBProbeEnum>(Tkdpo2k3k4kBusUSBProbeDifferential, _T("DIFFERENTIAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusUSBBitrateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusUSBBitrateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusUSBBitrateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateFull, _T("FULL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureUSB")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusUSBBitrateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusUSBBitrateEnum>(Tkdpo2k3k4kBusUSBBitrateFull, _T("FULL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.ConfigureAIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.ReadAIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.ConfigureBIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.ReadBIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.BLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.GetLowThresholdChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.GetThresholdChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.SetLowThreshholdChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.SetThresholdChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.SetUpperThreshhold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.GetUpperThreshhold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureAIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadAIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerATransition.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformDigitizedLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelEnum>(Tkdpo2k3k4kChannel4, _T("CH4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypePARALLEL, _T("PARALLEL"), _T("PAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeI2C, _T("I2C"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeSPI, _T("SPI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeRS232, _T("RS232C"), _T("RS232"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeUSB, _T("USB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeAudio, _T("AUDIO"), _T("AUD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeCAN, _T("CAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeLIN, _T("LIN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBus.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypePARALLEL, _T("PARALLEL"), _T("PAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeI2C, _T("I2C"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeSPI, _T("SPI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeRS232, _T("RS232C"), _T("RS232"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeUSB, _T("USB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeAudio, _T("AUDIO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeCAN, _T("CAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusTypeEnum>(Tkdpo2k3k4kBusTypeLIN, _T("LIN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.State")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusStateEnum>(Tkdpo2k3k4kBusStateOFF, _T("OFF"), _T("0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusStateEnum>(Tkdpo2k3k4kBusStateON, _T("ON"), _T("1"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusDisplayTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusDisplayTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.DisplayType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusDisplayTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusDisplayTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayTypeEnum>(Tkdpo2k3k4kBusDisplayTypeBUS, _T("BUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayTypeEnum>(Tkdpo2k3k4kBusDisplayTypeBOTH, _T("BOTH"), _T("BOT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusDisplayFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusDisplayFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.DisplayFormat")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusDisplayFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(Tkdpo2k3k4kBusDisplayFormatBinary, _T("BIN"), _T("BINARY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(Tkdpo2k3k4kBusDisplayFormatHexadecimal, _T("HEX"), _T("HEXADECIMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(Tkdpo2k3k4kBusDisplayFormatASCII, _T("ASCII"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(Tkdpo2k3k4kBusDisplayFormatMixed, _T("MIX"), _T("MIXED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusDisplayFormatEnum>(Tkdpo2k3k4kBusDisplayFormatMixed2, _T("MIXED2"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ParallelBusClockEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(Tkdpo2k3k4kBusParallelBusClockEdgeEither, _T("EIT"), _T("EITHER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(Tkdpo2k3k4kBusParallelBusClockEdgeRising, _T("RIS"), _T("RISING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(Tkdpo2k3k4kBusParallelBusClockEdgeFalling, _T("FAL"), _T("FALLING"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusRS232DelimiterEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusRS232DelimiterEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.RS232Delimiter")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232DelimiterEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(Tkdpo2k3k4kBusRS232DelimiterCR, _T("CR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(Tkdpo2k3k4kBusRS232DelimiterXFF, _T("XFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(Tkdpo2k3k4kBusRS232DelimiterLF, _T("LF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(Tkdpo2k3k4kBusRS232DelimiterNull, _T("NUL"), _T("NULL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DelimiterEnum>(Tkdpo2k3k4kBusRS232DelimiterSpace, _T("SP"), _T("SPACE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.RS232DisplayMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusRS232DisplayModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DisplayModeEnum>(Tkdpo2k3k4kBusRS232DisplayModeFrame, _T("FRA"), _T("FRAME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusRS232DisplayModeEnum>(Tkdpo2k3k4kBusRS232DisplayModePacket, _T("PACKET"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSPIFramingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSPIFramingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.SPIFraming")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIFramingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIFramingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIFramingEnum>(Tkdpo2k3k4kBusSPIFramingSS, _T("SS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIFramingEnum>(Tkdpo2k3k4kBusSPIFramingIdletime, _T("IDLE"), _T("IDLETIME"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kAudioBusTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kAudioBusTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudioInputs")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeI2S, _T("I2S"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeLJ, _T("LJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeRJ, _T("RJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeTDM, _T("TDM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudioInputs")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeI2S, _T("I2S"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeLJ, _T("LJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeRJ, _T("RJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioBusTypeEnum>(Tkdpo2k3k4kAudioBusTypeTDM, _T("TDM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kAudioPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kAudioPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioPolarityEnum>(Tkdpo2k3k4kAudioPolarityFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioPolarityEnum>(Tkdpo2k3k4kAudioPolarityRise, _T("RISE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioPolarityEnum>(Tkdpo2k3k4kAudioPolarityFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioPolarityEnum>(Tkdpo2k3k4kAudioPolarityRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kAudioDataPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kAudioDataPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioDataPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(Tkdpo2k3k4kAudioDataPolarityNormal, _T("NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(Tkdpo2k3k4kAudioDataPolarityInverted, _T("INVERT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAudioDataPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(Tkdpo2k3k4kAudioDataPolarityNormal, _T("NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAudioDataPolarityEnum>(Tkdpo2k3k4kAudioDataPolarityInverted, _T("INVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatBinary, _T("BIN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatHexadecimal, _T("HEX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatSignedDecimal, _T("SIGNEDDEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadAudio")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatBinary, _T("BIN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatHexadecimal, _T("HEX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayFormatEnum>(Tkdpo2k3k4kDisplayFormatSignedDecimal, _T("SIGNEDDEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCANProbeTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCANProbeTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureCAN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCANProbeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCANProbeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeCANH, _T("CANH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeCANL, _T("CANL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeRX, _T("RX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeTX, _T("TX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeDifferential, _T("DIFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadCAN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCANProbeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCANProbeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeCANH, _T("CANH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeCANL, _T("CANL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeRX, _T("RX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeTX, _T("TX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANProbeTypeEnum>(Tkdpo2k3k4kCANProbeTypeDifferential, _T("DIFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCANBitRateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCANBitRateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.CANBitRateEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCANBitRateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCANBitRateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE10K, _T("RATE10K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE20K, _T("RATE20K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE33K, _T("RATE33K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE37K, _T("RATE37K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE50K, _T("RATE50K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE62K, _T("RATE64K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE83K, _T("RATE83K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE92K, _T("RATE92K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE100K, _T("RATE100K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE125K, _T("RATE125K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE250K, _T("RATE250K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE500K, _T("RATE500K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE800K, _T("RATE800K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCANBitRateEnum>(Tkdpo2k3k4kCANBitRateRATE1M, _T("RATE1M"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFlexraySignalEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFlexraySignalEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFlexraySignalEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFlexraySignalEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalBDIFFBP, _T("BDIFFBP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalBM, _T("BM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalTXRX, _T("TXRX"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFlexraySignalEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFlexraySignalEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalBDIFFBP, _T("BDIFFBP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalBM, _T("BM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexraySignalEnum>(Tkdpo2k3k4kFlexraySignalTXRX, _T("TXRX"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFlexrayChannelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFlexrayChannelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFlexrayChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFlexrayChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexrayChannelEnum>(Tkdpo2k3k4kFlexrayChannelA, _T("A"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexrayChannelEnum>(Tkdpo2k3k4kFlexrayChannelB, _T("B"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadFlexray")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFlexrayChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFlexrayChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexrayChannelEnum>(Tkdpo2k3k4kFlexrayChannelA, _T("A"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFlexrayChannelEnum>(Tkdpo2k3k4kFlexrayChannelB, _T("B"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kLINIDFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kLINIDFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINIDFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINIDFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINIDFormatEnum>(Tkdpo2k3k4kLINIDFormatNoParity, _T("NOPAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINIDFormatEnum>(Tkdpo2k3k4kLINIDFormatParity, _T("PAR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINIDFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINIDFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINIDFormatEnum>(Tkdpo2k3k4kLINIDFormatNoParity, _T("NOPAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINIDFormatEnum>(Tkdpo2k3k4kLINIDFormatParity, _T("PAR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kLINPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kLINPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINPolarityEnum>(Tkdpo2k3k4kLINPolarityNormal, _T("NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINPolarityEnum>(Tkdpo2k3k4kLINPolarityInverted, _T("INV"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINPolarityEnum>(Tkdpo2k3k4kLINPolarityNormal, _T("NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINPolarityEnum>(Tkdpo2k3k4kLINPolarityInverted, _T("INV"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kLINStandardEnum>* GetEnumCommandConverter<Tkdpo2k3k4kLINStandardEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINStandardEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINStandardEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardV1X, _T("V1X"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardV2X, _T("V2X"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardMixed, _T("MIX"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadLIN")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kLINStandardEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kLINStandardEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardV1X, _T("V1X"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardV2X, _T("V2X"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kLINStandardEnum>(Tkdpo2k3k4kLINStandardMixed, _T("MIX"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kBusSPIBitOrderEnum>* GetEnumCommandConverter<Tkdpo2k3k4kBusSPIBitOrderEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ConfigureSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIBitOrderEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(Tkdpo2k3k4kBusSPIBitOrderLSB, _T("LSB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(Tkdpo2k3k4kBusSPIBitOrderMSB, _T("MSB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.ReadSPI")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kBusSPIBitOrderEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(Tkdpo2k3k4kBusSPIBitOrderLSB, _T("LSB"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kBusSPIBitOrderEnum>(Tkdpo2k3k4kBusSPIBitOrderMSB, _T("MSB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDigitalChannelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDigitalChannelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.SetThresholdDigitalChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDigitalChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDigitalChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD0, _T("0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD4, _T("4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD5, _T("5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD6, _T("6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD7, _T("7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD8, _T("8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD9, _T("9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD10, _T("10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD11, _T("11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD12, _T("12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD13, _T("13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD14, _T("14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD15, _T("15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.GetThresholdDigitalChannel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDigitalChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDigitalChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD0, _T("0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD4, _T("4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD5, _T("5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD6, _T("6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD7, _T("7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD8, _T("8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD9, _T("9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD10, _T("10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD11, _T("11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD12, _T("12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD13, _T("13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD14, _T("14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelEnum>(Tkdpo2k3k4kDigitalChannelD15, _T("15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorTrackModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorTrackModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursor.TrackMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorTrackModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorTrackModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorTrackModeEnum>(Tkdpo2k3k4kCursorTrackModeIndependent, _T("IND"), _T("INDEPENDENT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorTrackModeEnum>(Tkdpo2k3k4kCursorTrackModeTrack, _T("TRAC"), _T("TRACK"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursor.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorTypeEnum>(Tkdpo2k3k4kCursorTypeOFF, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorTypeEnum>(Tkdpo2k3k4kCursorTypeScreen, _T("SCREEN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorTypeEnum>(Tkdpo2k3k4kCursorTypeWaveform, _T("WAVE"), _T("WAVEFORM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursorHBars.SetMeasurementScale")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleCurrent, _T("CURRENT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleHalfGraticule, _T("HALFGRAT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleFiveDivisions, _T("FIVEDIVS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursorVBars.SetMeasurementScale")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleCurrent, _T("CURRENT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleHalfGraticule, _T("HALFGRAT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorMeasurementScaleEnum>(Tkdpo2k3k4kCursorMeasurementScaleFiveDivisions, _T("FIVEDIVS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursorHBars.Units")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorHBarsUnitsEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorHBarsUnitsEnum>(Tkdpo2k3k4kCursorHBarsUnitsBase, _T("BASE"), _T("BAS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorHBarsUnitsEnum>(Tkdpo2k3k4kCursorHBarsUnitsPercent, _T("PER"), _T("PERCENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursorVBars.Units")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorVBarsUnitsEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorVBarsUnitsEnum>(Tkdpo2k3k4kCursorVBarsUnitsSeconds, _T("SEC"), _T("SECONDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorVBarsUnitsEnum>(Tkdpo2k3k4kCursorVBarsUnitsHertz, _T("HER"), _T("HERTZ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorVBarsUnitsEnum>(Tkdpo2k3k4kCursorVBarsUnitsDegrees, _T("DEG"), _T("DEGREES"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorVBarsUnitsEnum>(Tkdpo2k3k4kCursorVBarsUnitsPercent, _T("PER"), _T("PERCENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorXYReadoutEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorXYReadoutEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursorXY.Readout")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorXYReadoutEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorXYReadoutEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorXYReadoutEnum>(Tkdpo2k3k4kCursorXYReadoutRectangular, _T("RECT"), _T("RECTANGULAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorXYReadoutEnum>(Tkdpo2k3k4kCursorXYReadoutPolarCoordinates, _T("POLARC"), _T("POLARCOORD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorXYReadoutEnum>(Tkdpo2k3k4kCursorXYReadoutProduct, _T("PROD"), _T("PRODUCT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorXYReadoutEnum>(Tkdpo2k3k4kCursorXYReadoutRatio, _T("RAT"), _T("RATIO"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayClockStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayClockStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.ClockState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayClockStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayClockStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayClockStateEnum>(Tkdpo2k3k4kDisplayClockStateDataOnly, _T("DATEO"), _T("DATEONLY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayClockStateEnum>(Tkdpo2k3k4kDisplayClockStateTimeOnly, _T("TIMEO"), _T("TIMEONLY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayClockStateEnum>(Tkdpo2k3k4kDisplayClockStateOn, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayClockStateEnum>(Tkdpo2k3k4kDisplayClockStateOff, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.BackLightIntensity")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(Tkdpo2k3k4kDisplayBackLightIntensityLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(Tkdpo2k3k4kDisplayBackLightIntensityMedium, _T("MED"), _T("MEDIUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(Tkdpo2k3k4kDisplayBackLightIntensityHigh, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayGraticuleEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayGraticuleEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.GraticuleStyle")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayGraticuleEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayGraticuleEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayGraticuleEnum>(Tkdpo2k3k4kDisplayGraticuleCrossHair, _T("CROSSH"), _T("CROSSHAIR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayGraticuleEnum>(Tkdpo2k3k4kDisplayGraticuleFrame, _T("FRA"), _T("FRAME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayGraticuleEnum>(Tkdpo2k3k4kDisplayGraticuleFull, _T("FUL"), _T("FULL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayGraticuleEnum>(Tkdpo2k3k4kDisplayGraticuleGrid, _T("GRI"), _T("GRID"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.Format")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayDisplayFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayDisplayFormatEnum>(Tkdpo2k3k4kDisplayDisplayFormatYT, _T("YT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayDisplayFormatEnum>(Tkdpo2k3k4kDisplayDisplayFormatXY, _T("XY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDisplayPersistenceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDisplayPersistenceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.PersistenceEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDisplayPersistenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDisplayPersistenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayPersistenceEnum>(Tkdpo2k3k4kDisplayPersistenceClear, _T("CLEAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayPersistenceEnum>(Tkdpo2k3k4kDisplayPersistenceAuto, _T("AUTO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayPersistenceEnum>(Tkdpo2k3k4kDisplayPersistenceMinimum, _T("MINI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDisplayPersistenceEnum>(Tkdpo2k3k4kDisplayPersistenceInfinite, _T("INFI"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPrintLayoutEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPrintLayoutEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHardCopy.Layout")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPrintLayoutEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPrintLayoutEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPrintLayoutEnum>(Tkdpo2k3k4kPrintLayoutPortrait, _T("PORTR"), _T("PORTRAIT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPrintLayoutEnum>(Tkdpo2k3k4kPrintLayoutLandscape, _T("LAN"), _T("LANDSCAPE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kHistogramModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeOff, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeHorizontal, _T("HOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeVertical, _T("VERT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kHistogramModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeOff, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeHorizontal, _T("HOR"), _T("HORIZONTAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeVertical, _T("VERT"), _T("VERTICAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Mode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kHistogramModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeOff, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeHorizontal, _T("HOR"), _T("HORIZONTAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramModeEnum>(Tkdpo2k3k4kHistogramModeVertical, _T("VERT"), _T("VERTICAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMark.SelectedSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigurePhase")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Source1")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Source2")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ConfigurePhase")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Source1")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Source2")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.SaveWaveformToFile")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.ReadWaveformMinMax")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.ReadWaveform")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformWithinZoom")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformWithinCursor")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformStartStop")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformMinMax")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveformHighResolution")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.FetchWaveform")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.CopyWaveformToClipboard")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSourceEnum>(Tkdpo2k3k4kSourceRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kHistogramDisplayEnum>* GetEnumCommandConverter<Tkdpo2k3k4kHistogramDisplayEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Display")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kHistogramDisplayEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kHistogramDisplayEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramDisplayEnum>(Tkdpo2k3k4kHistogramDisplayLog, _T("LOG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kHistogramDisplayEnum>(Tkdpo2k3k4kHistogramDisplayLinear, _T("LINEA"), _T("LINEAR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMarkEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMarkEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMark.CreateMark")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMarkEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMarkEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB4, _T("B4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkDigital, _T("DIGITAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkColumn, _T("COLUMN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMark.DeleteMark")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMarkEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMarkEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkMATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkB4, _T("B4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkDigital, _T("DIGITAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkColumn, _T("COLUMN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkEnum>(Tkdpo2k3k4kMarkRFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMathTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeDual, _T("DUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeFFT, _T("FFT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeAdvanced, _T("ADV"), _T("ADVANCED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeSpectrum, _T("SPECTRUM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMathTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeDual, _T("DUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeFFT, _T("FFT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeAdvanced, _T("ADV"), _T("ADVANCED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeSpectrum, _T("SPECTRUM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMathTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeDual, _T("DUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeFFT, _T("FFT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeAdvanced, _T("ADV"), _T("ADVANCED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMathTypeEnum>(Tkdpo2k3k4kMathTypeSpectrum, _T("SPECTRUM"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMark.MoveZoomToMark")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>(Tkdpo2k3k4kMarkMoveZoomToMarkNEXT, _T("NEXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>(Tkdpo2k3k4kMarkMoveZoomToMarkPREVIOUS, _T("PREVIOUS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSpectralWindowEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSpectralWindowEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMathSpectral.Window")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSpectralWindowEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSpectralWindowEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralWindowEnum>(Tkdpo2k3k4kSpectralWindowRectangular, _T("RECT"), _T("RECTANGULAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralWindowEnum>(Tkdpo2k3k4kSpectralWindowHamming, _T("HAM"), _T("HAMMING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralWindowEnum>(Tkdpo2k3k4kSpectralWindowHanning, _T("HAN"), _T("HANNING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralWindowEnum>(Tkdpo2k3k4kSpectralWindowBlackmanharris, _T("BLA"), _T("BLACKMANHARRIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSpectralMagUnitEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSpectralMagUnitEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMathSpectral.MagnitudeUnits")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSpectralMagUnitEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSpectralMagUnitEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralMagUnitEnum>(Tkdpo2k3k4kSpectralMagUnitLinear, _T("LINEA"), _T("LINEAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSpectralMagUnitEnum>(Tkdpo2k3k4kSpectralMagUnitDB, _T("DB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"), _T("BACKW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"), _T("FORW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.DelayDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"), _T("BACKW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"), _T("FORW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"), _T("BACKW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"), _T("FORW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"), _T("BACKW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"), _T("FORW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.DelayDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("BACKWARDS"), _T("BACKW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("FORWARDS"), _T("FORW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.DelayEdge1")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.DelayEdge2")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadDelay")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.DelayEdge1")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.DelayEdge2")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementEdgeEnum>(Tkdpo2k3k4kMeasurementEdgeRise, _T("RISE"), _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigureReferenceLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementMethodEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodHistogram, _T("HISTOGRAM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodMinMax, _T("MINMAX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodAuto, _T("MEAN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadReferenceLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementMethodEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodHistogram, _T("HISTOGRAM"), _T("HIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodMinMax, _T("MINMAX"), _T("MINM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodAuto, _T("AUTO"), _T("A"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReferenceLevelMethod")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementMethodEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodHistogram, _T("HISTOGRAM"), _T("HIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodMinMax, _T("MINMAX"), _T("MINM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementMethodEnum>(Tkdpo2k3k4kMeasurementMethodAuto, _T("AUTO"), _T("A"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ConfigureReferenceLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementUnitEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitAbsolute, _T("ABSOLUTE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitPercent, _T("PERCENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadReferenceLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementUnitEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitAbsolute, _T("ABSOLUTE"), _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitPercent, _T("PERCENT"), _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReferenceLevelUnit")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementUnitEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitAbsolute, _T("ABSOLUTE"), _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementUnitEnum>(Tkdpo2k3k4kMeasurementUnitPercent, _T("PERCENT"), _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"), _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"), _T("FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"), _T("PERI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"), _T("PK2P"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"), _T("MAX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"), _T("MINI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"), _T("NWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"), _T("PWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"), _T("NDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"), _T("PDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"), _T("AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"), _T("CRM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"), _T("CME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"), _T("POV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"), _T("NOV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"), _T("ARE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"), _T("BUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"), _T("CAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"), _T("DEL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"), _T("PHA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"), _T("PEAKH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"), _T("MED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"), _T("STD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"), _T("NEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"), _T("NPULSECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"), _T("PEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"), _T("PPULSECOUNT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementImmediate.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"), _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"), _T("FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"), _T("PERI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"), _T("PK2P"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"), _T("MAX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"), _T("MINI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"), _T("NWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"), _T("PWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"), _T("NDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"), _T("PDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"), _T("AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"), _T("CRM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"), _T("CME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"), _T("POV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"), _T("NOV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"), _T("ARE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"), _T("BUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"), _T("CAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"), _T("DEL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"), _T("PHA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"), _T("PEAKH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"), _T("MED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"), _T("STD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"), _T("NEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"), _T("NPULSECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"), _T("PEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"), _T("PPULSECOUNT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"), _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"), _T("FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"), _T("PERI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"), _T("PK2P"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"), _T("MAX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"), _T("MINI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"), _T("NWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"), _T("PWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"), _T("NDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"), _T("PDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"), _T("AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"), _T("CRM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"), _T("CME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"), _T("POV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"), _T("NOV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"), _T("ARE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"), _T("BUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"), _T("CAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"), _T("DEL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"), _T("PHA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"), _T("PEAKH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"), _T("MED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"), _T("STD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"), _T("NEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"), _T("NPULSECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"), _T("PEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"), _T("PPULSECOUNT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.ReadValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRise, _T("RISE"), _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeFrequency, _T("FREQUENCY"), _T("FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeriod, _T("PERIOD"), _T("PERI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeRMS, _T("RMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePk2Pk, _T("PK2PK"), _T("PK2P"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMaximum, _T("MAXIMUM"), _T("MAX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMinimum, _T("MINIMUM"), _T("MINI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMean, _T("MEAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNWidth, _T("NWIDTH"), _T("NWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePWidth, _T("PWIDTH"), _T("PWI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNDuty, _T("NDUTY"), _T("NDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePDuty, _T("PDUTY"), _T("PDU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeAmplitude, _T("AMPLITUDE"), _T("AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCRMS, _T("CRMS"), _T("CRM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCMean, _T("CMEAN"), _T("CME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePOverShoot, _T("POVERSHOOT"), _T("POV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("NOVERSHOOT"), _T("NOV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeArea, _T("AREA"), _T("ARE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeBurst, _T("BURST"), _T("BUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeCArea, _T("CAREA"), _T("CAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeDelay, _T("DELAY"), _T("DEL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePhase, _T("PHASE"), _T("PHA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeWaveforms, _T("WAVEFORMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeHits, _T("HITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePeakHits, _T("PEAKHITS"), _T("PEAKH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeMedian, _T("MEDIAN"), _T("MED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeStdDev, _T("STDDEV"), _T("STD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma1, _T("SIGMA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma2, _T("SIGMA2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeSigma3, _T("SIGMA3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("NEDGEC"), _T("NEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("NPULSEC"), _T("NPULSECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("PEDGEC"), _T("PEDGECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementTypeEnum>(Tkdpo2k3k4kMeasurementTypePPulseCount, _T("PPULSEC"), _T("PPULSECOUNT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementGatingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementGatingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurements.Gating")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementGatingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementGatingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingOff, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingScreen, _T("SCREEN"), _T("SCRE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingCursor, _T("CURSOR"), _T("CURS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.WaveformGating")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementGatingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementGatingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingOff, _T("NON"), _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingScreen, _T("SCREEN"), _T("SCRE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementGatingEnum>(Tkdpo2k3k4kMeasurementGatingCursor, _T("CURSOR"), _T("CURS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementsIndicators.State")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateOFF, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas1, _T("MEAS1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas2, _T("MEAS2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas3, _T("MEAS3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas4, _T("MEAS4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas5, _T("MEAS5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas6, _T("MEAS6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas7, _T("MEAS7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(Tkdpo2k3k4kMeasurementIndicatorStateMeas8, _T("MEAS8"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kMemoryLocationEnum>* GetEnumCommandConverter<Tkdpo2k3k4kMemoryLocationEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.RecallSetupFromMemory")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMemoryLocationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMemoryLocationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation4, _T("4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation5, _T("5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation6, _T("6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation7, _T("7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation8, _T("8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation9, _T("9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation10, _T("10"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveSetupToMemory")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kMemoryLocationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kMemoryLocationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation1, _T("1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation2, _T("2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation3, _T("3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation4, _T("4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation5, _T("5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation6, _T("6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation7, _T("7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation8, _T("8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation9, _T("9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kMemoryLocationEnum>(Tkdpo2k3k4kMemoryLocation10, _T("10"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kReferenceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kReferenceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.RecallWaveformFromFile")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveWaveformToReference")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.WriteWaveformToReference")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kReferenceEnum>(Tkdpo2k3k4kReference4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveAllWaveformsToFile")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(Tkdpo2k3k4kSaveWaveformFileFormatInternal, _T("INTERNAL"), _T("INTERN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(Tkdpo2k3k4kSaveWaveformFileFormatSpreadSheet, _T("SPREADSHEET"), _T("SPREADS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveWaveFormFileFormat")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(Tkdpo2k3k4kSaveWaveformFileFormatInternal, _T("INTERNAL"), _T("INTERN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(Tkdpo2k3k4kSaveWaveformFileFormatSpreadSheet, _T("SPREADSHEET"), _T("SPREADS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSaveButtonTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSaveButtonTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveButtonType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSaveButtonTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSaveButtonTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveButtonTypeEnum>(Tkdpo2k3k4kSaveButtonTypeImage, _T("IMAG"), _T("IMAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveButtonTypeEnum>(Tkdpo2k3k4kSaveButtonTypeWaveform, _T("WAVE"), _T("WAVEFORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSaveButtonTypeEnum>(Tkdpo2k3k4kSaveButtonTypeSetup, _T("SETU"), _T("SETUP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kImageFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kImageFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveImage")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kImageFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kImageFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatPNG, _T("PNG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatBMP, _T("BMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatTIFF, _T("TIF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.ImageFormat")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kImageFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kImageFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatPNG, _T("PNG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatBMP, _T("BMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageFormatEnum>(Tkdpo2k3k4kImageFormatTIFF, _T("TIF"), _T("TIFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kImageLayoutEnum>* GetEnumCommandConverter<Tkdpo2k3k4kImageLayoutEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveImage")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kImageLayoutEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kImageLayoutEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kImageLayoutEnum>(Tkdpo2k3k4kImageLayoutLandscape, _T("LAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageLayoutEnum>(Tkdpo2k3k4kImageLayoutPortrait, _T("PORTR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.ImageLayout")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kImageLayoutEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kImageLayoutEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kImageLayoutEnum>(Tkdpo2k3k4kImageLayoutLandscape, _T("LAN"), _T("LANDSCAPE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kImageLayoutEnum>(Tkdpo2k3k4kImageLayoutPortrait, _T("PORTR"), _T("PORTRAIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchCopyEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchCopyEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.Copy")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchCopyEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchCopyEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchCopyEnum>(Tkdpo2k3k4kSearchCopySearchTriggerToSearch, _T("TRIG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchCopyEnum>(Tkdpo2k3k4kSearchCopySearchSearchToTrigger, _T("SEARCH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchSourceEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionLessthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionMorethan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionEqual, _T("EQUAL"), _T("EQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionUnequal, _T("UNEQUAL"), _T("UNEQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionOccurs, _T("OCCURS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionLessthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionMorethan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionEqual, _T("EQUAL"), _T("EQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionUnequal, _T("UNEQUAL"), _T("UNEQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionOccurs, _T("OCCURS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerARunt.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionLessthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionMorethan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionEqual, _T("EQUAL"), _T("EQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionUnequal, _T("UNEQUAL"), _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntConditionEnum>(Tkdpo2k3k4kTriggerRuntConditionOccurs, _T("OCCURS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityNegative, _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityPositive, _T("POSITIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityNegative, _T("NEGATIVE"), _T("NEG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityPositive, _T("POSITIVE"), _T("POS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAWidth.Polarity")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityNegative, _T("NEGATIVE"), _T("NEG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulsePolarityEnum>(Tkdpo2k3k4kTriggerPulsePolarityPositive, _T("POSITIVE"), _T("POS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionSlower, _T("SLOW"), _T("SLOWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionFaster, _T("FAST"), _T("FASTER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionEqual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionSlower, _T("SLOW"), _T("SLOWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionFaster, _T("FAST"), _T("FASTER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionEqual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerATransition.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionSlower, _T("SLOW"), _T("SLOWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionFaster, _T("FAST"), _T("FASTER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionEqual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerTransitionConditionEnum>(Tkdpo2k3k4kTriggerTransitionConditionUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicSearchSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicSearchSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigureSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigureRF")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadRF")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("HIGH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(Tkdpo2k3k4kTriggerLogicInputChannelX, _T("X"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionTrue, _T("TRUE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionFalse, _T("FALSE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("LESS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("MORE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionEqual, _T("EQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("UNEQU"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionTrue, _T("TRUE"), _T("TRU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionFalse, _T("FALSE"), _T("FALS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("LESSTHAN"), _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("MORETHAN"), _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionEqual, _T("EQUAL"), _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("UNEQUAL"), _T("UNEQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigurePattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionTrue, _T("TRUE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionFalse, _T("FALSE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionEqual, _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionTrue, _T("TRUE"), _T("TRU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionFalse, _T("FALSE"), _T("FALS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("LESSTHAN"), _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("MORETHAN"), _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionEqual, _T("EQUAL"), _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("UNEQUAL"), _T("UNEQU"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionTrue, _T("TRUE"), _T("TRU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionFalse, _T("FALSE"), _T("FALS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("LESSTHAN"), _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("MORETHAN"), _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionEqual, _T("EQUAL"), _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternConditionEnum>(Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("UNEQUAL"), _T("UNEQU"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadTransition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicSearchSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicSearchSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource2Enum>(Tkdpo2k3k4kSearchSource2RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigurePattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeAND, _T("AND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNAND, _T("NAND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNOR, _T("NOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeOR, _T("OR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeAND, _T("AND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNAND, _T("NAND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNOR, _T("NOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeOR, _T("OR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.Function")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeAND, _T("AND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNAND, _T("NAND"), _T("NAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeNOR, _T("NOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(Tkdpo2k3k4kTriggerLogicOperatorTypeOR, _T("OR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureSetupHold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigurePulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadEdge")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadSetupHold")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadPulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadSetupHoldSearchSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchSource3Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3Math, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3REF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3NONE, _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchSource3Enum>(Tkdpo2k3k4kSearchSource3RFPhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither, _T("EIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither, _T("EIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigureClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither, _T("EIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise, _T("RIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither, _T("EIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceNone, _T("NON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceNone, _T("NON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigureClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceNone, _T("NON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadClock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceNone, _T("NON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(Tkdpo2k3k4kTriggerLogicClockSourceRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.SearchType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeEdge, _T("EDG"), _T("EDGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeSethold, _T("SETH"), _T("SETHOLD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypePulsewidth, _T("PULSEW"), _T("PULSEWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeRunt, _T("RUN"), _T("RUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeTransition, _T("TRAN"), _T("TRANSITION"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeLogic, _T("LOGIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchTypeEnum>(Tkdpo2k3k4kSearchTypeBus, _T("BUS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABus.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABus.BusSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABus.ParallelData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataOffset")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataWord")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureHeader")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadHeader")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.EOFType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.IdentifierValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.RXDataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.RXDataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.TXDataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.TXDataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusSPI.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusSPI.DataINValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusSPI.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusSPI.DataOUTValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataOffset")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.Qualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.AddressHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.EndPointValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.HandshakeType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.SOFFrameNumber")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.SpecialType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.TokenType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBus.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBus.BusSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBus.ParallelData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataOffset")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataWord")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataOffset")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.Qualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.AddressHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.EndPointValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.HandshakeType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.SOFFrameNumber")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.SpecialType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.TokenType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusSPI.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusSPI.DataINValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusSPI.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusSPI.DataOUTValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.RXDataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.RXDataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.TXDataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.TXDataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.DataHighValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.IdentifierValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureHeader")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadHeader")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.EOFType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataSize")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.AddressValue")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB1, _T("B1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB2, _T("B2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB3, _T("B3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSourceEnum>(Tkdpo2k3k4kTrigABusSourceB4, _T("B4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(Tkdpo2k3k4kTrigABusAudioConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(Tkdpo2k3k4kTrigABusAudioConditionData, _T("DATA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(Tkdpo2k3k4kTrigABusAudioConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioConditionEnum>(Tkdpo2k3k4kTrigABusAudioConditionData, _T("DATA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierLessthan, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierMorethan, _T("MORET"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierEqual, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierLessEqual, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierMoreEqual, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierInrange, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierOutrange, _T("OUT"), _T("OUTRANGE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierLessthan, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierMorethan, _T("MORET"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierEqual, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierLessEqual, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierMoreEqual, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierInrange, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(Tkdpo2k3k4kTrigABusAudioDataQualifierOutrange, _T("OUT"), _T("OUTRANGE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusAudio.DataWord")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentEither, _T("EITHER"), _T("EIT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentLeft, _T("LEFT"), _T("LEF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentRight, _T("RIGHT"), _T("RIG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusAudio.DataWord")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentEither, _T("EITHER"), _T("EIT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentLeft, _T("LEFT"), _T("LEF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(Tkdpo2k3k4kTrigABusAudioDataAlignmentRight, _T("RIGHT"), _T("RIG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionFrameType, _T("FRAME"), _T("FRAMETYPE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionIdentifier, _T("ID"), _T("IDENTIFIER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionIdentifierData, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionEOF, _T("EOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionACKMiss, _T("ACKMISS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionFrameType, _T("FRAME"), _T("FRAMETYPE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionIdentifier, _T("ID"), _T("IDENTIFIER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionIdentifierData, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionEOF, _T("EOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANConditionEnum>(Tkdpo2k3k4kTrigABusCANConditionACKMiss, _T("ACKMISS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionREAD, _T("READ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionWRITE, _T("WRITE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionNOCARE, _T("NOCARE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionREAD, _T("READ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionWRITE, _T("WRITE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(Tkdpo2k3k4kTrigABusCANDataDirectionNOCARE, _T("NOCARE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierLessthan, _T("LESSTHAN"), _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierMorethan, _T("MORETHAN"), _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierEqual, _T("EQUAL"), _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierUnequal, _T("UNEQUAL"), _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierLessEqual, _T("LESSEQUAL"), _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierMoreEqual, _T("MOREEQUAL"), _T("MOREEQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierLessthan, _T("LESSTHAN"), _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierMorethan, _T("MORETHAN"), _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierEqual, _T("EQUAL"), _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierUnequal, _T("UNEQUAL"), _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierLessEqual, _T("LESSEQUAL"), _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANQualifierEnum>(Tkdpo2k3k4kTrigABusCANQualifierMoreEqual, _T("MOREEQUAL"), _T("MOREEQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeRemote, _T("REM"), _T("REMOTE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeError, _T("ERR"), _T("ERROR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeOverload, _T("OVERL"), _T("OVERLOAD"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeRemote, _T("REM"), _T("REMOTE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeError, _T("ERR"), _T("ERROR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(Tkdpo2k3k4kTrigABusCANFrameTypeOverload, _T("OVERL"), _T("OVERLOAD"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusCAN.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(Tkdpo2k3k4kTrigABusCANAddressModeStandard, _T("ST"), _T("STANDARD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(Tkdpo2k3k4kTrigABusCANAddressModeExtended, _T("EXTEND"), _T("EXTENDED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusCAN.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(Tkdpo2k3k4kTrigABusCANAddressModeStandard, _T("ST"), _T("STANDARD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(Tkdpo2k3k4kTrigABusCANAddressModeExtended, _T("EXT"), _T("EXTENDED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionFrameType, _T("FRAMET"), _T("FRAMETYPE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionIdentifierData, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionEOF, _T("EOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionCyclecount, _T("CYCLE"), _T("CYCLECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionHeader, _T("HEAD"), _T("HEADER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionError, _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionFrameType, _T("FRAMET"), _T("FRAMETYPE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionData, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionIdentifierData, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionEOF, _T("EOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionCyclecount, _T("CYCLE"), _T("CYCLECOUNT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionHeader, _T("HEAD"), _T("HEADER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(Tkdpo2k3k4kTrigABusFlexrayConditionError, _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ConfigureFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ReadFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadCycleCount")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadData")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ConfigureFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ReadFrameID")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("LESST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("MORET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("EQU"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("UNEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("LESSEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("MOREEQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("OUT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.EOFType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeStatic, _T("STAT"), _T("STATIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeDynamic, _T("DYNAM"), _T("DYNAMIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeAny, _T("ANY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.EOFType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeStatic, _T("STAT"), _T("STATIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeDynamic, _T("DYNAM"), _T("DYNAMIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayEOFTypeAny, _T("ANY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeNormal, _T("NORM"), _T("NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypePayload, _T("PAYL"), _T("PAYLOAD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeNull, _T("NULL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeSync, _T("SYNC"), _T("SYN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeStartup, _T("START"), _T("STARTUP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.FrameType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeNormal, _T("NORM"), _T("NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypePayload, _T("PAYL"), _T("PAYLOAD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeNull, _T("NULL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeSync, _T("SYNC"), _T("SYN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayFrameTypeStartup, _T("START"), _T("STARTUP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusFlexray.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCHeader, _T("CRCH"), _T("CRCHEADER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCTrailer, _T("CRCT"), _T("CRCTRAILER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeSYNCFrame, _T("SYNCF"), _T("SYNCFRAME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeSTARTupnosync, _T("START"), _T("STARTUPNOSYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRStatic, _T("NULLFRS"), _T("NULLFRSTATIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRDynamic, _T("NULLFRD"), _T("NULLFRDYNAMIC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusFlexray.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCHeader, _T("CRCH"), _T("CRCHEADER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCTrailer, _T("CRCT"), _T("CRCTRAILER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeSYNCFrame, _T("SYNCF"), _T("SYNCFRAME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeSTARTupnosync, _T("START"), _T("STARTUPNOSYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRStatic, _T("NULLFRS"), _T("NULLFRSTATIC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRDynamic, _T("NULLFRD"), _T("NULLFRDYNAMIC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionREAD, _T("READ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionWRITE, _T("WRITE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionNOCARE, _T("NOCARE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.DataDirection")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionREAD, _T("READ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionWRITE, _T("WRITE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(Tkdpo2k3k4kTrigABusI2CDataDirectionNOCARE, _T("NOCARE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionSTART, _T("STAR"), _T("START"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionSTOP, _T("STOP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionREPEATSTART, _T("REPEAT"), _T("REPEATSTART"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionACKMISS, _T("ACKMISS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionADDRESS, _T("ADDR"), _T("ADDRESS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionDATA, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionADDRANDDATA, _T("ADDRANDDATA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionSTART, _T("STAR"), _T("START"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionSTOP, _T("STOP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionREPEATSTART, _T("REPEAT"), _T("REPEATSTART"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionACKMISS, _T("ACKMISS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionADDRESS, _T("ADDR"), _T("ADDRESS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionDATA, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(Tkdpo2k3k4kTrigABusI2CTrigConditionADDRANDDATA, _T("ADDRANDDATA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusI2C.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(Tkdpo2k3k4kTrigABusI2CAddrModeADDR7, _T("ADDR7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(Tkdpo2k3k4kTrigABusI2CAddrModeADDR10, _T("ADDR10"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusI2C.AddressMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(Tkdpo2k3k4kTrigABusI2CAddrModeADDR7, _T("ADDR7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(Tkdpo2k3k4kTrigABusI2CAddrModeADDR10, _T("ADDR10"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionSYNCField, _T("SYNCF"), _T("SYNCFIELD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionIDentifier, _T("ID"), _T("IDENTIFIER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionDATA, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionIDANDDATA, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionWAKEup, _T("WAKE"), _T("WAKEUP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionSLEEP, _T("SLEEP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionERROR, _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionSYNCField, _T("SYNCF"), _T("SYNCFIELD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionIDentifier, _T("ID"), _T("IDENTIFIER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionDATA, _T("DATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionIDANDDATA, _T("IDANDDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionWAKEup, _T("WAKE"), _T("WAKEUP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionSLEEP, _T("SLEEP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINConditionEnum>(Tkdpo2k3k4kTrigABusLINConditionERROR, _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierLessthan, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierMorethan, _T("MORET"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierEqual, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierLessEqual, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierMoreEqual, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierInrange, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierOutrange, _T("OUT"), _T("OUTRANGE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.DataQualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierLessthan, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierMorethan, _T("MORET"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierEqual, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierUnequal, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierLessEqual, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierMoreEqual, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierInrange, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINQualifierEnum>(Tkdpo2k3k4kTrigABusLINQualifierOutrange, _T("OUT"), _T("OUTRANGE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusLIN.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeSYNC, _T("SYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypePARity, _T("PAR"), _T("PARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeCHecksum, _T("CH"), _T("CHECKSUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime, _T("HEAD"), _T("HEADERTIME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime, _T("RESP"), _T("RESPTIME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime, _T("FRAM"), _T("FRAMETIME"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusLIN.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeSYNC, _T("SYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypePARity, _T("PAR"), _T("PARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeCHecksum, _T("CH"), _T("CHECKSUM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime, _T("HEAD"), _T("HEADER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime, _T("RESP"), _T("RESPTIME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime, _T("FRAM"), _T("FRAMETIME"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusRS232.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXData, _T("RXDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXEOP, _T("RXENDP"), _T("RXENDPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXParityError, _T("RXPAR"), _T("RXPARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXStart, _T("RXSTA"), _T("RXSTART"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXData, _T("TXDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXEOP, _T("TXENDP"), _T("TXENDPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXParityError, _T("TXPAR"), _T("TXPARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXStart, _T("TXSTA"), _T("TXSTART"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusRS232.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXData, _T("RXDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXEOP, _T("RXENDP"), _T("RXENDPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXParityError, _T("RXPAR"), _T("RXPARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionRXStart, _T("RXSTA"), _T("RXSTART"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXData, _T("TXDATA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXEOP, _T("TXENDP"), _T("TXENDPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXParityError, _T("TXPAR"), _T("TXPARITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(Tkdpo2k3k4kTrigABusRS232ConditionTXStart, _T("TXSTA"), _T("TXSTART"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusSPI.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionSS, _T("SS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMISO, _T("MISO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMOSI, _T("MOSI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMISOMOSI, _T("MISOMOSI"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusSPI.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionSS, _T("SS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMISO, _T("MISO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMOSI, _T("MOSI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusSPIConditionEnum>(Tkdpo2k3k4kTrigABusSPIConditionMISOMOSI, _T("MISOMOSI"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.SpecialType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialPreamble, _T("PRE"), _T("PREAMBLE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialTypeRESERVED, _T("RESERV"), _T("RESERVED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.SpecialType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialPreamble, _T("PRE"), _T("PREAMBLE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(Tkdpo2k3k4kTrigABusUSBSpecialTypeRESERVED, _T("RESERV"), _T("RESERVED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.Qualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierEQUAL, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierINRANGE, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierLESSEQUAL, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierMOREEQUAL, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierOUTRANGE, _T("OUT"), _T("OUTRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierUNEQUAL, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierLESSTHAN, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierMORETHAN, _T("MORET"), _T("MORETHAN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.Qualifier")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierEQUAL, _T("EQU"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierINRANGE, _T("IN"), _T("INRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierLESSEQUAL, _T("LESSEQ"), _T("LESSEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierMOREEQUAL, _T("MOREEQ"), _T("MOREEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierOUTRANGE, _T("OUT"), _T("OUTRANGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierUNEQUAL, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierLESSTHAN, _T("LESST"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(Tkdpo2k3k4kTrigABusUSBQualifierMORETHAN, _T("MORET"), _T("MORETHAN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.HandshakeType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeACK, _T("ACK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeNAK, _T("NAK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeSTALL, _T("STALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.HandshakeType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeACK, _T("ACK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeNAK, _T("NAK"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(Tkdpo2k3k4kTrigABusUSBHandshakeTypeSTALL, _T("STALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeBitStuffing, _T("BITSTUFF"), _T("BITSTUFFING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeCRC16, _T("CRC16"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeCRC5, _T("CRC5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypePID, _T("PID"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.ErrorType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeBitStuffing, _T("BITSTUFF"), _T("BITSTUFFING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeCRC16, _T("CRC16"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypeCRC5, _T("CRC5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(Tkdpo2k3k4kTrigABusUSBERRTypePID, _T("PID"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.DataType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeDATA0, _T("DATA0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeDATA1, _T("DATA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeAny, _T("ANY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.DataType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeDATA0, _T("DATA0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeDATA1, _T("DATA1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(Tkdpo2k3k4kTrigABusUSBDATATypeAny, _T("ANY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSYNC, _T("SYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionRESET, _T("RESET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSUSPEND, _T("SUSPEND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionRESUME, _T("RESUME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionEOP, _T("EOP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionTOKENPacket, _T("TOKENP"), _T("TOKENPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionDATAPacket, _T("DATAP"), _T("DATAPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionHANDSHAKEPacket, _T("HANDSHAKEP"), _T("HANDSHAKEPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSPECIALPacket, _T("SPECIALP"), _T("SPECIALPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionERRor, _T("ERR"), _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSYNC, _T("SYNC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionRESET, _T("RESET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSUSPEND, _T("SUSPEND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionRESUME, _T("RESUME"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionEOP, _T("EOP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionTOKENPacket, _T("TOKENP"), _T("TOKENPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionDATAPacket, _T("DATAP"), _T("DATAPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionHANDSHAKEPacket, _T("HANDSHAKEP"), _T("HANDSHAKEPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionSPECIALPacket, _T("SPECIALP"), _T("SPECIALPACKET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBConditionEnum>(Tkdpo2k3k4kTrigABusUSBConditionERRor, _T("ERR"), _T("ERROR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABusUSB.TokenType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeOUT, _T("OUT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeIN, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeSETUP, _T("SETUP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearchBusUSB.TokenType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeANY, _T("ANY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeSOF, _T("SOF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeOUT, _T("OUT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeIN, _T("IN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(Tkdpo2k3k4kTrigABusUSBTokenTypeSETUP, _T("SETUP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerASetupHold.DataSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerASetupHold.ClockSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSource2Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2D15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2EXT, _T("EXT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2Line, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2AUX, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSource2Enum>(Tkdpo2k3k4kTriggerSource2RF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"), _T("HFREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"), _T("LFREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"), _T("NOISEREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.Coupling")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"), _T("HFREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"), _T("LFREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"), _T("NOISEREJ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.Coupling")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("HFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("LFR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("NOISE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("AC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerLevelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerLevelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAEdge.LevelEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLevelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLevelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLevelEnum>(Tkdpo2k3k4kTriggerLevelECL, _T("ECL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLevelEnum>(Tkdpo2k3k4kTriggerLevelTTL, _T("TTL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerBEdge.LevelEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerLevelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerLevelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLevelEnum>(Tkdpo2k3k4kTriggerLevelECL, _T("ECL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerLevelEnum>(Tkdpo2k3k4kTriggerLevelTTL, _T("TTL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ConfigureSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerALogic.ReadSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerSourceEnum>(Tkdpo2k3k4kTriggerSourceD15, _T("D15"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.Polarity")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoPolarityEnum>(Tkdpo2k3k4kTriggerVideoPolarityNegative, _T("NEGATIVE"), _T("NEG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoPolarityEnum>(Tkdpo2k3k4kTriggerVideoPolarityPositive, _T("POSITIVE"), _T("POS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoStandardEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoStandardEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.Standard")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoStandardEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(Tkdpo2k3k4kTriggerVideoStandardNTSc, _T("NTS"), _T("NTSC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(Tkdpo2k3k4kTriggerVideoStandardPAL, _T("PAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(Tkdpo2k3k4kTriggerVideoStandardSECAM, _T("SECAM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(Tkdpo2k3k4kTriggerVideoStandardCUSTom, _T("CUST"), _T("CUSTOM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoStandardEnum>(Tkdpo2k3k4kTriggerVideoStandardHDtv, _T("HD"), _T("HDTV"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.TriggerOn")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(Tkdpo2k3k4kTriggerVideoFieldsODD, _T("ODD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(Tkdpo2k3k4kTriggerVideoFieldsEVEN, _T("EVEN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(Tkdpo2k3k4kTriggerVideoFieldsALLFields, _T("ALLF"), _T("ALLFIELDS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(Tkdpo2k3k4kTriggerVideoFieldsALLLines, _T("ALLL"), _T("ALLLINES"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoFieldsEnum>(Tkdpo2k3k4kTriggerVideoFieldsNUMERic, _T("NUMER"), _T("NUMERIC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.CustomFormat")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>(Tkdpo2k3k4kTriggerVideoCustomFormatINTERLAced, _T("INTERLA"), _T("INTERLACED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>(Tkdpo2k3k4kTriggerVideoCustomFormatPROGressive, _T("PROG"), _T("PROGRESSIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.CustomScan")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(Tkdpo2k3k4kTriggerVideoCustomScanRATE15K, _T("RATE15K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(Tkdpo2k3k4kTriggerVideoCustomScanRATE20K, _T("RATE20K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(Tkdpo2k3k4kTriggerVideoCustomScanRATE25K, _T("RATE25K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(Tkdpo2k3k4kTriggerVideoCustomScanRATE35K, _T("RATE35K"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(Tkdpo2k3k4kTriggerVideoCustomScanRATE50K, _T("RATE50K"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAVideo.HDTvFormat")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P24, _T("HD1080P24"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD720P60, _T("HD720P60"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD480P60, _T("HD480P60"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I50, _T("HD1080I50"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P25, _T("HD1080P25"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I60, _T("HD1080I60"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080PSF24, _T("HD1080PSF24"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerBusTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerBusTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABus.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeI2C, _T("I2C"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeSPI, _T("SPI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeCAN, _T("CAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeRS232C, _T("RS232C"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypePARallel, _T("PAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeUSB, _T("USB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerABus.BusType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerBusTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeI2C, _T("I2C"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeSPI, _T("SPI"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeCAN, _T("CAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeRS232C, _T("RS232C"), _T("RS232"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypePARallel, _T("PAR"), _T("PARALLEL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBusTypeEnum>(Tkdpo2k3k4kTriggerBusTypeUSB, _T("USB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.Mode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerModeEnum>(Tkdpo2k3k4kTriggerModeAUTO, _T("AUTO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerModeEnum>(Tkdpo2k3k4kTriggerModeNORMal, _T("NORM"), _T("NORMAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerBByEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerBByEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.TriggerBBy")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerBByEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerBByEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBByEnum>(Tkdpo2k3k4kTriggerBByEvents, _T("EVENTS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerBByEnum>(Tkdpo2k3k4kTriggerBByTime, _T("TIM"), _T("TIME"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelProbeSignalEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelProbeSignalEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.ProbeSignal")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelProbeSignalEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(Tkdpo2k3k4kChannelProbeSignalPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(Tkdpo2k3k4kChannelProbeSignalBYPASS, _T("BYPASS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannels.AUXInProbeSignal")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelProbeSignalEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(Tkdpo2k3k4kChannelProbeSignalPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelProbeSignalEnum>(Tkdpo2k3k4kChannelProbeSignalBYPASS, _T("BYPASS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingGND, _T("GND"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingGND, _T("GND"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Coupling")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelCouplingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCouplingEnum>(Tkdpo2k3k4kChannelCouplingGND, _T("GND"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelTerminationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationFifty, _T("FIFTY"), _T("FIF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationMega, _T("MEGA"), _T("MEG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelTerminationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationFifty, _T("FIFTY"), _T("FIF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationMega, _T("MEGA"), _T("MEG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.TerminationEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelTerminationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationFifty, _T("FIFTY"), _T("FIF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelTerminationEnum>(Tkdpo2k3k4kChannelTerminationMega, _T("MEGA"), _T("MEG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelBandwidthEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelBandwidthEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelBandwidthEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelBandwidthEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelBandwidthEnum>(Tkdpo2k3k4kChannelBandwidthTwenty, _T("TWENTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelBandwidthEnum>(Tkdpo2k3k4kChannelBandwidthFull, _T("FULL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.BandwidthEnum")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelBandwidthEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelBandwidthEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelBandwidthEnum>(Tkdpo2k3k4kChannelBandwidthTwenty, _T("TWENTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelBandwidthEnum>(Tkdpo2k3k4kChannelBandwidthTwoFifty, _T("TWO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelBandwidthEnum>(Tkdpo2k3k4kChannelBandwidthFull, _T("FULL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kProbeDegaussStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kProbeDegaussStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.TekVPIProbeDegaussState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kProbeDegaussStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateNEEDED, _T("NEEDED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateRECOMMENDED, _T("RECOMMENDED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStatePASSED, _T("PASSED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateFAILED, _T("FAILED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateRUNNING, _T("RUNNING"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannels.AUXInTekVPIProbeDegaussState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kProbeDegaussStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateNEEDED, _T("NEEDED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateRECOMMENDED, _T("RECOMMENDED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStatePASSED, _T("PASSED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateFAILED, _T("FAILED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kProbeDegaussStateEnum>(Tkdpo2k3k4kProbeDegaussStateRUNNING, _T("RUNNING"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveWaveformToFile")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDataSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceDigital, _T("DIG"), _T("DIGITAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AMPlitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_FREQuency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_PHASe, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_NORMal, _T("RF_NORM"), _T("RF_NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AVErage, _T("RF_AVE"), _T("RF_AVERAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MAXHold, _T("RF_MAXH"), _T("RF_MAXHOLD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MINHold, _T("RF_MINH"), _T("RF_MINHOLD"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.SaveWaveformToReference")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDataSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceDigital, _T("DIG"), _T("DIGITAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AMPlitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_FREQuency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_PHASe, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_NORMal, _T("RF_NORM"), _T("RF_NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AVErage, _T("RF_AVE"), _T("RF_AVERAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MAXHold, _T("RF_MAXH"), _T("RF_MAXHOLD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MINHold, _T("RF_MINH"), _T("RF_MINHOLD"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.DataSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDataSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceDigital, _T("DIG"), _T("DIGITAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AMPlitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_FREQuency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_PHASe, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_NORMal, _T("RF_NORM"), _T("RF_NORMAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_AVErage, _T("RF_AVE"), _T("RF_AVERAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MAXHold, _T("RF_MAXH"), _T("RF_MAXHOLD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataSourceEnum>(Tkdpo2k3k4kDataSourceRF_MINHold, _T("RF_MINH"), _T("RF_MINHOLD"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kWaveformFileFormatEnum>* GetEnumCommandConverter<Tkdpo2k3k4kWaveformFileFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.SaveWaveformToFile")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kWaveformFileFormatEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kWaveformFileFormatEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kWaveformFileFormatEnum>(Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor, _T("0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kWaveformFileFormatEnum>(Tkdpo2k3k4kWaveformFileFormatWithScaleFactor, _T("1"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTiggerPulseSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTiggerPulseSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAWidth.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTiggerPulseSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceLINE, _T("LINE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceEXT, _T("AUX"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTiggerPulseSourceEnum>(Tkdpo2k3k4kTiggerPulseSourceRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigurePulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionEQual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadPulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionEQual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerAWidth.Condition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan, _T("LESS"), _T("LESSTHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan, _T("MORE"), _T("MORETHAN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionEQual, _T("EQ"), _T("EQUAL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual, _T("UNEQ"), _T("UNEQUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityEITher, _T("EIT"), _T("EITHER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityNEGative, _T("NEG"), _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityPOSitive, _T("POS"), _T("POSITIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadRunt")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityEITher, _T("EIT"), _T("EITHER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityNEGative, _T("NEG"), _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityPOSitive, _T("POS"), _T("POSITIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerARunt.Polarity")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityEITher, _T("EIT"), _T("EITHER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityNEGative, _T("NEG"), _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityPOSitive, _T("POS"), _T("POSITIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerATransition.Polarity")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityEITher, _T("EIT"), _T("EITHER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityNEGative, _T("NEG"), _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerRuntPolarityEnum>(Tkdpo2k3k4kTriggerRuntPolarityPOSitive, _T("POS"), _T("POSITIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigurePulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(Tkdpo2k3k4kTriggerWidthPolarityPositive, _T("POSITIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(Tkdpo2k3k4kTriggerWidthPolarityNegative, _T("NEGATIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadPulseWidth")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(Tkdpo2k3k4kTriggerWidthPolarityPositive, _T("POSITIVE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerWidthPolarityEnum>(Tkdpo2k3k4kTriggerWidthPolarityNegative, _T("NEGATIVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSearchStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kSearchStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.State")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSearchStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSearchStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchStateEnum>(Tkdpo2k3k4kSearchStateON, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSearchStateEnum>(Tkdpo2k3k4kSearchStateOFF, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kTriggerPatternTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureLogicPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeAND, _T("AND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeNAND, _T("NAND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeNOR, _T("NOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeOR, _T("OR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadLogicPattern")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kTriggerPatternTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeAND, _T("AND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeNAND, _T("NAND"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeNOR, _T("NOR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kTriggerPatternTypeEnum>(Tkdpo2k3k4kTriggerPatternTypeOR, _T("OR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelCalibrationEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelCalibrationEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.ReadProbeDetails")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelCalibrationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelCalibrationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCalibrationEnum>(Tkdpo2k3k4kChannelCalibrationPass, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCalibrationEnum>(Tkdpo2k3k4kChannelCalibrationInitialized, _T("INIT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCalibrationEnum>(Tkdpo2k3k4kChannelCalibrationRunning, _T("RUNNING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelCalibrationEnum>(Tkdpo2k3k4kChannelCalibrationFail, _T("FAIL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDigitalChannelStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDigitalChannelStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDigitalChannel.State")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDigitalChannelStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDigitalChannelStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelStateEnum>(Tkdpo2k3k4kDigitalChannelStateON, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDigitalChannelStateEnum>(Tkdpo2k3k4kDigitalChannelStateOFF, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>* GetEnumCommandConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kUtilityEx.Calibrate")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(Tkdpo2k3k4kUtilityExCalibrationStatusInit, _T("INIT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(Tkdpo2k3k4kUtilityExCalibrationStatusPass, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(Tkdpo2k3k4kUtilityExCalibrationStatusFail, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(Tkdpo2k3k4kUtilityExCalibrationStatusRunning, _T("RUNNING"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>* GetEnumCommandConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kUtilityEx.FrontPanelLock")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>(Tkdpo2k3k4kUtilityExFrontPanelLockAll, _T("ALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>(Tkdpo2k3k4kUtilityExFrontPanelLockNone, _T("NONE"), _T("NON"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.SamplingMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(Tkdpo2k3k4kAcquisitionSamplingModeRT, _T("RT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(Tkdpo2k3k4kAcquisitionSamplingModeET, _T("ET"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(Tkdpo2k3k4kAcquisitionSamplingModeIT, _T("IT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeNONe, _T("NON"), _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeQUALity, _T("QUAL"), _T("QUALITY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeSWITCHingloss, _T("SWITCH"), _T("SWITCHINGLOSS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeSOA, _T("SOA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeHARMonics, _T("HARM"), _T("HARMONICS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeRIPPle, _T("RIPP"), _T("RIPPLE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeMODULationanalysis, _T("MODUL"), _T("MODULATIONANALYSIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerTypeEnum>(Tkdpo2k3k4kPowerTypeDESKew, _T("DESK"), _T("DESKEW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.VoltageSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.CurrentSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSourceEnum>(Tkdpo2k3k4kPowerSourceREF4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerGateSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerGateSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.GateSource")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerGateSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerGateSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGateSourceEnum>(Tkdpo2k3k4kPowerGateSourceNone, _T("NON"), _T("NONE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerGatingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerGatingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.Gating")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerGatingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerGatingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingEnum>(Tkdpo2k3k4kPowerGatingOFF, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingEnum>(Tkdpo2k3k4kPowerGatingSCREen, _T("SCRE"), _T("SCREEN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingEnum>(Tkdpo2k3k4kPowerGatingCURSor, _T("CURS"), _T("CURSOR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.ConfigureRefLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.ReadRefLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"), _T("ABSOLUTE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"), _T("PERCENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.SetDefaultRefLevel")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.RefLevelHigh")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.RefLevelLow")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.RefLevelMid")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.RefLevelLowVoltage")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.RefLevelLowCurrent")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("ABS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("PERC"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerStatisticsModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerStatisticsModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.StatisticsMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerStatisticsModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerStatisticsModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerStatisticsModeEnum>(Tkdpo2k3k4kPowerStatisticsModeOFF, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerStatisticsModeEnum>(Tkdpo2k3k4kPowerStatisticsModeALL, _T("ALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisQuality.MeasDisplayState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementAPPpwr, _T("APP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementFREQuency, _T("FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementICRESTfactor, _T("ICREST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementIRMS, _T("IRMS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementPHASEangle, _T("PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementPOWERFACtor, _T("POWERFAC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementREACTpwr, _T("REACT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementTRUEpwr, _T("TRUE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementVCRESTfactor, _T("VCREST"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(Tkdpo2k3k4kPowerQualityDisplayMeasurementVRMS, _T("VRMS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisQuality.FrequencyReference")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>(Tkdpo2k3k4kPowerQualityFrequencyReferenceVoltage, _T("VOLT"), _T("VOLTAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>(Tkdpo2k3k4kPowerQualityFrequencyReferenceCurrent, _T("CURR"), _T("CURRENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.MeasDisplayType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayALL, _T("ALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayENERGYLoss, _T("ENERGYL"), _T("ENERGYLOSS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayPOWERLoss, _T("POWERL"), _T("POWERLOSS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerGatingPolarityEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerGatingPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ConfigureGating")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerGatingPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(Tkdpo2k3k4kPowerGatingPolarityFALL, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(Tkdpo2k3k4kPowerGatingPolarityRise, _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ReadGating")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerGatingPolarityEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(Tkdpo2k3k4kPowerGatingPolarityFALL, _T("FALL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerGatingPolarityEnum>(Tkdpo2k3k4kPowerGatingPolarityRise, _T("RIS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ReadTOffLosses")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypePower, _T("POWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypeEnergy, _T("ENERGY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ReadTOnLosses")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypePower, _T("POWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypeEnergy, _T("ENERGY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ReadTotalLosses")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypePower, _T("POWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypeEnergy, _T("ENERGY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ReadConductionLosses")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypePower, _T("POWER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(Tkdpo2k3k4kPowerSwitchingLossTypeEnergy, _T("ENERGY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.Standard")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(Tkdpo2k3k4kPowerHarmonicsStandardNone, _T("NON"), _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(Tkdpo2k3k4kPowerHarmonicsStandardIEC, _T("IEC"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(Tkdpo2k3k4kPowerHarmonicsStandardMIL, _T("MIL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.DisplaySet")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(Tkdpo2k3k4kPowerHarmonicsDisplaySetOdd, _T("ODD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(Tkdpo2k3k4kPowerHarmonicsDisplaySetEven, _T("EVEN"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(Tkdpo2k3k4kPowerHarmonicsDisplaySetAll, _T("ALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.DisplayType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>(Tkdpo2k3k4kPowerHarmonicsDisplayTypeGraph, _T("GRAPH"), _T("GRA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>(Tkdpo2k3k4kPowerHarmonicsDisplayTypeTable, _T("TABLE"), _T("TAB"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ConfigureIEC")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassA, _T("A"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassB, _T("B"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC1, _T("C1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC2, _T("C2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC3, _T("C3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassD, _T("D"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ReadIEC")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassA, _T("A"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassB, _T("B"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC1, _T("C1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC2, _T("C2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassC3, _T("C3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(Tkdpo2k3k4kPowerHarmonicsIECClassD, _T("D"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.SetParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(Tkdpo2k3k4kPowerHarmonicsSourceVoltage, _T("VOLT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(Tkdpo2k3k4kPowerHarmonicsSourceCurrent, _T("CURR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.GetParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(Tkdpo2k3k4kPowerHarmonicsSourceVoltage, _T("VOLT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(Tkdpo2k3k4kPowerHarmonicsSourceCurrent, _T("CURR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.SetParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceVOLTage, _T("VOLT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceCURRent, _T("CURR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce, _T("HARMSOUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceFIXEDFREQuency, _T("FIXEDFREQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.GetParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceVOLTage, _T("VOLT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceCURRent, _T("CURR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce, _T("HARMSOUR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceFIXEDFREQuency, _T("FIXEDFREQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ConfigureMIL")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS, _T("MEAS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingUSER, _T("USER"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ReadMIL")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS, _T("MEAS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingUSER, _T("USER"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ConfigureMIL")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(Tkdpo2k3k4kPowerHamronicsMILPowerLevelHigh, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ReadMIL")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow, _T("LOW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(Tkdpo2k3k4kPowerHamronicsMILPowerLevelHigh, _T("HIGH"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.OverallResults")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.HarmonicIECClassALimitResult")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.HarmonicIECNormalLimitResult")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.HarmonicIECHigherLimitResult")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.HarmonicMILNormalLimitResult")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.IECHarmonic3Result")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.IECHarmonic5Result")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("FAIL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("NA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerRippleSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerRippleSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisRipple.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerRippleSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerRippleSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerRippleSourceEnum>(Tkdpo2k3k4kPowerRippleSourceVoltage, _T("VOLT"), _T("VOLTAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerRippleSourceEnum>(Tkdpo2k3k4kPowerRippleSourceCurrent, _T("CURR"), _T("CURRENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerModulationSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerModulationSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisModulation.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerModulationSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerModulationSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationSourceEnum>(Tkdpo2k3k4kPowerModulationSourceVoltage, _T("VOLT"), _T("VOLTAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationSourceEnum>(Tkdpo2k3k4kPowerModulationSourceCurrent, _T("CURR"), _T("CURRENT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerModulationTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerModulationTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisModulation.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerModulationTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypePWIdth, _T("PWI"), _T("PWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypeNWIdth, _T("NWI"), _T("NWIDTH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypePERIod, _T("PERI"), _T("PERIOD"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypePDUty, _T("PDU"), _T("PDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypeNDUty, _T("NDU"), _T("NDUTY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerModulationTypeEnum>(Tkdpo2k3k4kPowerModulationTypeFREQuency, _T("FREQ"), _T("FREQUENCY"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.ConfigureAxes")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG, _T("LOG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear, _T("LIN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.ReadAxes")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG, _T("LOG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear, _T("LIN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.PlotType")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG, _T("LOG"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear, _T("LIN"), _T("LINEAR"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.MaskState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateOFF, _T("OFF"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateLIMITS, _T("LIMITS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaMaskStatePOINTS, _T("POINTS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.ResultTestState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaResultStatePASS, _T("PASS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>(Tkdpo2k3k4kPowerSafeOperatingAreaResultStateFAIL, _T("FAIL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>* GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSwitchingLoss.ConductionCalculation")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVoltage, _T("VOLT"), _T("VOLTAGE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationRDSOn, _T("RDS"), _T("RDSON"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVCESat, _T("VCE"), _T("VCESAT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequency.SpectrumTraceDisplayState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("RF_NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("RF_MINH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("RF_MAXH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("RF_AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ConfigureManualDetectionMethod")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("RF_NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("RF_MINH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("RF_MAXH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("RF_AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ReadManualDetectionMethod")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("RF_NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("RF_MINH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("RF_MAXH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("RF_AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyTrace.FetchY")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("RF_NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("RF_MINH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("RF_MAXH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("RF_AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyTrace.ReadY")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("RF_NORM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("RF_MINH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("RF_MAXH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("RF_AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ConfigureARFIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSearch.ReadARFIndependentParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequency.RFVsTimeTraceDisplayState")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ConfigureVerticalParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ReadVerticalParameters")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("RF_AMP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("RF_FREQ"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("RF_PHAS"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.DetectionMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>(Tkdpo2k3k4kFrequencyRFDetectionModeAuto, _T("AUTO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>(Tkdpo2k3k4kFrequencyRFDetectionModeManual, _T("MAN"), _T("MANUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ConfigureManualDetectionMethod")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodMINUSpeak, _T("MINUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodSAMple, _T("SAM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak, _T("PLUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodAVErage, _T("AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.ReadManualDetectionMethod")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodMINUSpeak, _T("MINUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodSAMple, _T("SAM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak, _T("PLUS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(Tkdpo2k3k4kFrequencyRFDetectionMethodAVErage, _T("AVE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.SpectrumMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencySpectrumModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumModeEnum>(Tkdpo2k3k4kFrequencySpectrumModeTRIGgered, _T("TRIG"), _T("TRIGGERED"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencySpectrumModeEnum>(Tkdpo2k3k4kFrequencySpectrumModeFREErun, _T("FREE"), _T("FREERUN"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRFAmplitude.VerticalUnits")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDBM, _T("DBM"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUW, _T("DBUW"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMV, _T("DBMV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDMUV, _T("DMUV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMA, _T("DBMA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUA, _T("DBUA"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFWindowEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFWindowEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRFBandwidth.Window")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFWindowEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowRECTangular, _T("RECT"), _T("RECTANGULAR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowHAMming, _T("HAM"), _T("HAMMING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowHANning, _T("HAN"), _T("HANNING"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowBLAckmanharris, _T("BLA"), _T("BLACKMANHARRIS"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowKAIser, _T("KAI"), _T("KAISER"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFWindowEnum>(Tkdpo2k3k4kFrequencyRFWindowFLATtop, _T("FLAT"), _T("FLATTOP"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementsFrequency.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(Tkdpo2k3k4kFrequencyRFMeasurementTypeNONe, _T("NON"), _T("NONE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(Tkdpo2k3k4kFrequencyRFMeasurementTypeCP, _T("CP"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(Tkdpo2k3k4kFrequencyRFMeasurementTypeACPR, _T("ACPR"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(Tkdpo2k3k4kFrequencyRFMeasurementTypeOBW, _T("OBW"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRBWModeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRBWModeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRFBandwidth.RBWMode")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRBWModeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRBWModeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRBWModeEnum>(Tkdpo2k3k4kFrequencyRBWModeAuto, _T("AUTO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRBWModeEnum>(Tkdpo2k3k4kFrequencyRBWModeManual, _T("MAN"), _T("MANUAL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>* GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyMarker.Type")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>(Tkdpo2k3k4kFrequencyRFMarkerTypeDelta, _T("DELT"), _T("DELTA"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>(Tkdpo2k3k4kFrequencyRFMarkerTypeAbsolute, _T("ABS"), _T("ABSOLUTE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kCursorSourceEnum>* GetEnumCommandConverter<Tkdpo2k3k4kCursorSourceEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kCursor.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kCursorSourceEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kCursorSourceEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceCH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceCH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceCH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceCH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceMath, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceREF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceREF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceREF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceREF4, _T("REF4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD0, _T("D0"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD1, _T("D1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD2, _T("D2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD3, _T("D3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD4, _T("D4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD5, _T("D5"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD6, _T("D6"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD7, _T("D7"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD8, _T("D8"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD9, _T("D9"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD10, _T("D10"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD11, _T("D11"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD12, _T("D12"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD13, _T("D13"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD14, _T("D14"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceD15, _T("D15"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceAUTO, _T("AUTO"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceRFAmplitude, _T("RF_AMP"), _T("RF_AMPLITUDE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceRFFrequency, _T("RF_FREQ"), _T("RF_FREQUENCY"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceRFPhase, _T("RF_PHAS"), _T("RF_PHASE"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceBUS1, _T("BUS1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kCursorSourceEnum>(Tkdpo2k3k4kCursorSourceBUS2, _T("BUS2"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kChannelChannelEnum>* GetEnumCommandConverter<Tkdpo2k3k4kChannelChannelEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTriggerARunt.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kChannelChannelEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kChannelChannelEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelChannelEnum>(Tkdpo2k3k4kChannelChannel1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelChannelEnum>(Tkdpo2k3k4kChannelChannel2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelChannelEnum>(Tkdpo2k3k4kChannelChannel3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelChannelEnum>(Tkdpo2k3k4kChannelChannel4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kChannelChannelEnum>(Tkdpo2k3k4kChannelChannelRF, _T("RF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kSource1Enum>* GetEnumCommandConverter<Tkdpo2k3k4kSource1Enum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Configure")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSource1Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSource1Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1MATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Read")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSource1Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSource1Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1MATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHistogram.Source")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kSource1Enum> _converter(
			new CEnumCommand<Tkdpo2k3k4kSource1Enum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH1, _T("CH1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH2, _T("CH2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH3, _T("CH3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1CH4, _T("CH4"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1MATH, _T("MATH"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF1, _T("REF1"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF2, _T("REF2"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF3, _T("REF3"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kSource1Enum>(Tkdpo2k3k4kSource1REF4, _T("REF4"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDataCompositionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDataCompositionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.DataComposition")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDataCompositionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDataCompositionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDataCompositionEnum>(Tkdpo2k3k4kDataCompositionCompositeYT, _T("COMPOSITE_YT"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataCompositionEnum>(Tkdpo2k3k4kDataCompositionCompositeEnvelope, _T("COMPOSITE_ENV"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataCompositionEnum>(Tkdpo2k3k4kDataCompositionSingularYT, _T("SINGULAR_YT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<Tkdpo2k3k4kDataResolutionEnum>* GetEnumCommandConverter<Tkdpo2k3k4kDataResolutionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kWaveformTransfer.DataResolution")) == 0)
	{
		static CEnumCommandConverter<Tkdpo2k3k4kDataResolutionEnum> _converter(
			new CEnumCommand<Tkdpo2k3k4kDataResolutionEnum>(_T(""),
				new CEnumMemberCommand<Tkdpo2k3k4kDataResolutionEnum>(Tkdpo2k3k4kDataResolutionFull, _T("FULL"),  NULL),
				new CEnumMemberCommand<Tkdpo2k3k4kDataResolutionEnum>(Tkdpo2k3k4kDataResolutionReduced, _T("REDU"), _T("REDUCED"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeInterpolationEnum>* GetEnumCommandConverter<IviScopeInterpolationEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeSampleModeEnum>* GetEnumCommandConverter<IviScopeSampleModeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeAcquisitionTypeEnum>* GetEnumCommandConverter<IviScopeAcquisitionTypeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeVerticalCouplingEnum>* GetEnumCommandConverter<IviScopeVerticalCouplingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeVerticalCouplingEnum> _converter(
			new CEnumCommand<IviScopeVerticalCouplingEnum>(_T(""),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingGnd, _T("GND"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IIviScopeChannel.Coupling")) == 0)
	{
		static CEnumCommandConverter<IviScopeVerticalCouplingEnum> _converter(
			new CEnumCommand<IviScopeVerticalCouplingEnum>(_T(""),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<IviScopeVerticalCouplingEnum>(IviScopeVerticalCouplingGnd, _T("GND"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeMeasurementEnum>* GetEnumCommandConverter<IviScopeMeasurementEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeAcquisitionStatusEnum>* GetEnumCommandConverter<IviScopeAcquisitionStatusEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTriggerTypeEnum>* GetEnumCommandConverter<IviScopeTriggerTypeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTriggerCouplingEnum>* GetEnumCommandConverter<IviScopeTriggerCouplingEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTrigger.Coupling")) == 0)
	{
		static CEnumCommandConverter<IviScopeTriggerCouplingEnum> _converter(
			new CEnumCommand<IviScopeTriggerCouplingEnum>(_T(""),
				new CEnumMemberCommand<IviScopeTriggerCouplingEnum>(IviScopeTriggerCouplingAC, _T("AC"),  NULL),
				new CEnumMemberCommand<IviScopeTriggerCouplingEnum>(IviScopeTriggerCouplingDC, _T("DC"),  NULL),
				new CEnumMemberCommand<IviScopeTriggerCouplingEnum>(IviScopeTriggerCouplingHFReject, _T("HFR"), _T("HFREJ"),  NULL),
				new CEnumMemberCommand<IviScopeTriggerCouplingEnum>(IviScopeTriggerCouplingLFReject, _T("LFR"), _T("LFREJ"),  NULL),
				new CEnumMemberCommand<IviScopeTriggerCouplingEnum>(IviScopeTriggerCouplingNoiseReject, _T("NOISE"), _T("NOISEREJ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTriggerModifierEnum>* GetEnumCommandConverter<IviScopeTriggerModifierEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeACLineSlopeEnum>* GetEnumCommandConverter<IviScopeACLineSlopeEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTriggerSlopeEnum>* GetEnumCommandConverter<IviScopeTriggerSlopeEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerEdge.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeTriggerSlopeEnum> _converter(
			new CEnumCommand<IviScopeTriggerSlopeEnum>(_T(""),
				new CEnumMemberCommand<IviScopeTriggerSlopeEnum>(IviScopeTriggerSlopePositive, _T("RISE"),  NULL),
				new CEnumMemberCommand<IviScopeTriggerSlopeEnum>(IviScopeTriggerSlopeNegative, _T("FALL"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeGlitchPolarityEnum>* GetEnumCommandConverter<IviScopeGlitchPolarityEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeGlitchConditionEnum>* GetEnumCommandConverter<IviScopeGlitchConditionEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeRuntPolarityEnum>* GetEnumCommandConverter<IviScopeRuntPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerRunt.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeRuntPolarityEnum> _converter(
			new CEnumCommand<IviScopeRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityPositive, _T("POSITIVE"),  NULL),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityNegative, _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityEither, _T("EITHER"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerRunt.polarity")) == 0)
	{
		static CEnumCommandConverter<IviScopeRuntPolarityEnum> _converter(
			new CEnumCommand<IviScopeRuntPolarityEnum>(_T(""),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityPositive, _T("POSITIVE"), _T("POS"),  NULL),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityNegative, _T("NEGATIVE"), _T("NEG"),  NULL),
				new CEnumMemberCommand<IviScopeRuntPolarityEnum>(IviScopeRuntPolarityEither, _T("EITHER"), _T("EIT"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTVSignalFormatEnum>* GetEnumCommandConverter<IviScopeTVSignalFormatEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerTv.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeTVSignalFormatEnum> _converter(
			new CEnumCommand<IviScopeTVSignalFormatEnum>(_T(""),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTVTriggerEventEnum>* GetEnumCommandConverter<IviScopeTVTriggerEventEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerTv.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeTVTriggerEventEnum> _converter(
			new CEnumCommand<IviScopeTVTriggerEventEnum>(_T(""),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTVTriggerPolarityEnum>* GetEnumCommandConverter<IviScopeTVTriggerPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerTv.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeTVTriggerPolarityEnum> _converter(
			new CEnumCommand<IviScopeTVTriggerPolarityEnum>(_T(""),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeWidthPolarityEnum>* GetEnumCommandConverter<IviScopeWidthPolarityEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerWidth.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeWidthPolarityEnum> _converter(
			new CEnumCommand<IviScopeWidthPolarityEnum>(_T(""),
				new CEnumMemberCommand<IviScopeWidthPolarityEnum>(IviScopeWidthPolarityPositive, _T("POSITIVE"),  NULL),
				new CEnumMemberCommand<IviScopeWidthPolarityEnum>(IviScopeWidthPolarityNegative, _T("NEGATIVE"),  NULL),
				new CEnumMemberCommand<IviScopeWidthPolarityEnum>(IviScopeWidthPolarityEither, _T("EITHER"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerWidth.polarity")) == 0)
	{
		static CEnumCommandConverter<IviScopeWidthPolarityEnum> _converter(
			new CEnumCommand<IviScopeWidthPolarityEnum>(_T(""),
				new CEnumMemberCommand<IviScopeWidthPolarityEnum>(IviScopeWidthPolarityPositive, _T("POSITIVE"), _T("POS"),  NULL),
				new CEnumMemberCommand<IviScopeWidthPolarityEnum>(IviScopeWidthPolarityNegative, _T("NEGATIVE"), _T("NEG"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeWidthConditionEnum>* GetEnumCommandConverter<IviScopeWidthConditionEnum>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("IIviScopeTriggerWidth.Configure")) == 0)
	{
		static CEnumCommandConverter<IviScopeWidthConditionEnum> _converter(
			new CEnumCommand<IviScopeWidthConditionEnum>(_T(""),
				new CEnumMemberCommand<IviScopeWidthConditionEnum>(IviScopeWidthConditionWithin, _T("WITHIN"),  NULL),
				new CEnumMemberCommand<IviScopeWidthConditionEnum>(IviScopeWidthConditionOutside, _T("OUTSIDE"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<IviScopeTimeOutEnum>* GetEnumCommandConverter<IviScopeTimeOutEnum>(const CString& strMethodIdentifier)
{
	NTL_UNUSED(strMethodIdentifier);

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));

	return NULL;
}

template <>
const CEnumCommandConverter<VARIANT_BOOL>* GetEnumCommandConverter<VARIANT_BOOL>(const CString& strMethodIdentifier)
{
	if (strMethodIdentifier.IsEmpty() || strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.Read")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.DisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.AmpsViaVoltsState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kChannel.InvertState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.State")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.RunStop")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("RUNSTOP"), _T("RUNST"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("RUNSTOP"), _T("RUNST"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("SEQUENCE"), _T("SEQ"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.SingleSequence")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("SEQUENCE"), _T("SEQ"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("SEQUENCE"), _T("SEQ"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("RUNSTOP"), _T("RUNST"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kAcquisition.MagniVuState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kTrigger.BState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kBus.IsClockedParallelBus")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("YES"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("YES"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("NO"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.DotsOnly")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.DisplayMessageBox")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kDisplay.GlitchCaptureState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHardCopy.InkSaver")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHorizontal.ConfigureDelay")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHorizontal.ReadDelay")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kHorizontal.DelayMode")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMark.SelectedState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.Configure")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.Read")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMath.DisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMathSpectral.DisplayGatingIndicators")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurements.StatisticsMode")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("ALL"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("ALL"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kMeasurementSlot.State")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kSaveRecall.InkSaverPalette")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kReference.Configure")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kReference.Read")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kZoom.Mode")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kZoom.State")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T(" ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T(" ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T(" OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.DisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysis.Indicator")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisQuality.AllMeasDisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisQuality.MeasDisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ConfigureIEC")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisHarmonics.ReadIEC")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kPowerAnalysisSafeOperatingArea.ActionOnViolation")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequency.SpectrumTraceDisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequency.RFVsTimeTraceDisplayState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"), _T("1"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"), _T("0"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequency.SquelchState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyRF.SpectogramState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyMarker.ReadPeak")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("ITkdpo2k3k4kFrequencyMarker.ManualState")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1"), _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0"), _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}
	if (strMethodIdentifier.CompareNoCase(_T("IIviScopeChannel.Configure")) == 0)
	{
		static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("OFF"),  NULL),
				NULL),
			NULL);

		return &_converter;
	}

	ATLASSERT(!_T("Unexpected method identifier passed to GetEnumCommandConverter."));
#if !_T
	static CEnumCommandConverter<VARIANT_BOOL> _converter(
			new CEnumCommand<VARIANT_BOOL>(_T(""),
				new CEnumMemberCommand<VARIANT_BOOL>(true, _T("1, ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_TRUE, _T("1, ON"),  NULL),
				new CEnumMemberCommand<VARIANT_BOOL>(VARIANT_FALSE, _T("0, OFF"),  NULL),
				NULL),
			NULL);

	return &_converter;
#endif	
}


bool CNode::BoolToCommand(VARIANT_BOOL bVal, CString& strCommand) const
{
	return EnumToCommand(bVal, strCommand);
}

bool CNode::BoolFromResponse(const CString& strCommand, VARIANT_BOOL& bVal) const
{
	return EnumFromResponse(strCommand, bVal);
}

const IEnumCommandConverter* GetEnumCommandConverter(const CString& strEnumName, const CString& strMethodIdentifier)
{
	if (strEnumName.CompareNoCase(_T("VARIANT_BOOL")) == 0)
	{
		return GetEnumCommandConverter<VARIANT_BOOL>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerType")) == 0 || strEnumName.CompareNoCase(_T("TriggerTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSlopeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("TriggerSlopeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerSlopeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AcquisitionMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAcquisitionModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAcquisitionMode")) == 0 || strEnumName.CompareNoCase(_T("AcquisitionModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kAcquisitionModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSource")) == 0 || strEnumName.CompareNoCase(_T("BusSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusI2CRWInAddress")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusI2CRWInAddressEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusI2CRWInAddress")) == 0 || strEnumName.CompareNoCase(_T("BusI2CRWInAddressEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSPIClockPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIClockPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIClockPolarity")) == 0 || strEnumName.CompareNoCase(_T("BusSPIClockPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusBitOrder")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusBitOrderEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusBitOrder")) == 0 || strEnumName.CompareNoCase(_T("BusBitOrderEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusBitOrderEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSPISlaveSelectPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPISlaveSelectPolarity")) == 0 || strEnumName.CompareNoCase(_T("BusSPISlaveSelectPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSPIDataPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIDataPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIDataPolarity")) == 0 || strEnumName.CompareNoCase(_T("BusSPIDataPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusRS232Polarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232PolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232Polarity")) == 0 || strEnumName.CompareNoCase(_T("BusRS232PolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusRS232PolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusRS232Parity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232ParityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232Parity")) == 0 || strEnumName.CompareNoCase(_T("BusRS232ParityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusRS232ParityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusUSBProbe")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusUSBProbeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusUSBProbe")) == 0 || strEnumName.CompareNoCase(_T("BusUSBProbeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusUSBProbeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusUSBBitrate")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusUSBBitrateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusUSBBitrate")) == 0 || strEnumName.CompareNoCase(_T("BusUSBBitrateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusUSBBitrateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Channel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannel")) == 0 || strEnumName.CompareNoCase(_T("ChannelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusType")) == 0 || strEnumName.CompareNoCase(_T("BusTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusState")) == 0 || strEnumName.CompareNoCase(_T("BusStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusDisplayType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusDisplayTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusDisplayType")) == 0 || strEnumName.CompareNoCase(_T("BusDisplayTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusDisplayTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusDisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusDisplayFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusDisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("BusDisplayFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusDisplayFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusParallelBusClockEdge")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusParallelBusClockEdgeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusParallelBusClockEdge")) == 0 || strEnumName.CompareNoCase(_T("BusParallelBusClockEdgeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusRS232Delimiter")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232DelimiterEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232Delimiter")) == 0 || strEnumName.CompareNoCase(_T("BusRS232DelimiterEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusRS232DelimiterEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusRS232DisplayMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232DisplayModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusRS232DisplayMode")) == 0 || strEnumName.CompareNoCase(_T("BusRS232DisplayModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSPIFraming")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIFramingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIFraming")) == 0 || strEnumName.CompareNoCase(_T("BusSPIFramingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSPIFramingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AudioBusType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioBusTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioBusType")) == 0 || strEnumName.CompareNoCase(_T("AudioBusTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kAudioBusTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AudioPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioPolarity")) == 0 || strEnumName.CompareNoCase(_T("AudioPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kAudioPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AudioDataPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioDataPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAudioDataPolarity")) == 0 || strEnumName.CompareNoCase(_T("AudioDataPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kAudioDataPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("DisplayFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CANProbeType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCANProbeTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCANProbeType")) == 0 || strEnumName.CompareNoCase(_T("CANProbeTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCANProbeTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CANBitRate")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCANBitRateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCANBitRate")) == 0 || strEnumName.CompareNoCase(_T("CANBitRateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCANBitRateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FlexraySignal")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFlexraySignalEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFlexraySignal")) == 0 || strEnumName.CompareNoCase(_T("FlexraySignalEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFlexraySignalEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FlexrayChannel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFlexrayChannelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFlexrayChannel")) == 0 || strEnumName.CompareNoCase(_T("FlexrayChannelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFlexrayChannelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("LINIDFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINIDFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINIDFormat")) == 0 || strEnumName.CompareNoCase(_T("LINIDFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kLINIDFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("LINPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINPolarity")) == 0 || strEnumName.CompareNoCase(_T("LINPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kLINPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("LINStandard")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINStandardEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kLINStandard")) == 0 || strEnumName.CompareNoCase(_T("LINStandardEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kLINStandardEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("BusSPIBitOrder")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIBitOrderEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kBusSPIBitOrder")) == 0 || strEnumName.CompareNoCase(_T("BusSPIBitOrderEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kBusSPIBitOrderEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DigitalChannel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDigitalChannelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDigitalChannel")) == 0 || strEnumName.CompareNoCase(_T("DigitalChannelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDigitalChannelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorTrackMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorTrackModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorTrackMode")) == 0 || strEnumName.CompareNoCase(_T("CursorTrackModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorTrackModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorType")) == 0 || strEnumName.CompareNoCase(_T("CursorTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorMeasurementScale")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorMeasurementScaleEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorMeasurementScale")) == 0 || strEnumName.CompareNoCase(_T("CursorMeasurementScaleEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorHBarsUnits")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorHBarsUnitsEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorHBarsUnits")) == 0 || strEnumName.CompareNoCase(_T("CursorHBarsUnitsEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorVBarsUnits")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorVBarsUnitsEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorVBarsUnits")) == 0 || strEnumName.CompareNoCase(_T("CursorVBarsUnitsEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorXYReadout")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorXYReadoutEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorXYReadout")) == 0 || strEnumName.CompareNoCase(_T("CursorXYReadoutEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorXYReadoutEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayClockState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayClockStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayClockState")) == 0 || strEnumName.CompareNoCase(_T("DisplayClockStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayClockStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayBackLightIntensity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayBackLightIntensityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayBackLightIntensity")) == 0 || strEnumName.CompareNoCase(_T("DisplayBackLightIntensityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayGraticule")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayGraticuleEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayGraticule")) == 0 || strEnumName.CompareNoCase(_T("DisplayGraticuleEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayGraticuleEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayDisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayDisplayFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayDisplayFormat")) == 0 || strEnumName.CompareNoCase(_T("DisplayDisplayFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DisplayPersistence")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayPersistenceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDisplayPersistence")) == 0 || strEnumName.CompareNoCase(_T("DisplayPersistenceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDisplayPersistenceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PrintLayout")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPrintLayoutEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPrintLayout")) == 0 || strEnumName.CompareNoCase(_T("PrintLayoutEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPrintLayoutEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("HistogramMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kHistogramModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kHistogramMode")) == 0 || strEnumName.CompareNoCase(_T("HistogramModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kHistogramModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Source")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSource")) == 0 || strEnumName.CompareNoCase(_T("SourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("HistogramDisplay")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kHistogramDisplayEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kHistogramDisplay")) == 0 || strEnumName.CompareNoCase(_T("HistogramDisplayEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kHistogramDisplayEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Mark")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMarkEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMark")) == 0 || strEnumName.CompareNoCase(_T("MarkEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMarkEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MathType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMathTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMathType")) == 0 || strEnumName.CompareNoCase(_T("MathTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMathTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MarkMoveZoomToMark")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMarkMoveZoomToMarkEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMarkMoveZoomToMark")) == 0 || strEnumName.CompareNoCase(_T("MarkMoveZoomToMarkEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SpectralWindow")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSpectralWindowEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSpectralWindow")) == 0 || strEnumName.CompareNoCase(_T("SpectralWindowEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSpectralWindowEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SpectralMagUnit")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSpectralMagUnitEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSpectralMagUnit")) == 0 || strEnumName.CompareNoCase(_T("SpectralMagUnitEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSpectralMagUnitEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementDelayDirection")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementDelayDirectionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementDelayDirection")) == 0 || strEnumName.CompareNoCase(_T("MeasurementDelayDirectionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementEdge")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementEdgeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementEdge")) == 0 || strEnumName.CompareNoCase(_T("MeasurementEdgeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementEdgeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementMethod")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementMethodEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementMethod")) == 0 || strEnumName.CompareNoCase(_T("MeasurementMethodEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementMethodEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementUnit")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementUnitEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementUnit")) == 0 || strEnumName.CompareNoCase(_T("MeasurementUnitEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementUnitEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementType")) == 0 || strEnumName.CompareNoCase(_T("MeasurementTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementGating")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementGatingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementGating")) == 0 || strEnumName.CompareNoCase(_T("MeasurementGatingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementGatingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MeasurementIndicatorState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementIndicatorStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMeasurementIndicatorState")) == 0 || strEnumName.CompareNoCase(_T("MeasurementIndicatorStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("MemoryLocation")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMemoryLocationEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kMemoryLocation")) == 0 || strEnumName.CompareNoCase(_T("MemoryLocationEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kMemoryLocationEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Reference")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kReferenceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kReference")) == 0 || strEnumName.CompareNoCase(_T("ReferenceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kReferenceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SaveWaveformFileFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSaveWaveformFileFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSaveWaveformFileFormat")) == 0 || strEnumName.CompareNoCase(_T("SaveWaveformFileFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SaveButtonType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSaveButtonTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSaveButtonType")) == 0 || strEnumName.CompareNoCase(_T("SaveButtonTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSaveButtonTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ImageFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kImageFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kImageFormat")) == 0 || strEnumName.CompareNoCase(_T("ImageFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kImageFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ImageLayout")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kImageLayoutEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kImageLayout")) == 0 || strEnumName.CompareNoCase(_T("ImageLayoutEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kImageLayoutEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchCopy")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchCopyEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchCopy")) == 0 || strEnumName.CompareNoCase(_T("SearchCopyEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchCopyEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSource")) == 0 || strEnumName.CompareNoCase(_T("SearchSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerRuntCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerRuntConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerRuntCondition")) == 0 || strEnumName.CompareNoCase(_T("TriggerRuntConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerRuntConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerPulsePolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPulsePolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPulsePolarity")) == 0 || strEnumName.CompareNoCase(_T("TriggerPulsePolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerTransitionCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerTransitionConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerTransitionCondition")) == 0 || strEnumName.CompareNoCase(_T("TriggerTransitionConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLogicInputChannel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicInputChannelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicInputChannel")) == 0 || strEnumName.CompareNoCase(_T("TriggerLogicInputChannelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerPatternCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPatternConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPatternCondition")) == 0 || strEnumName.CompareNoCase(_T("TriggerPatternConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerPatternConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchSource2")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSource2Enum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSource2")) == 0 || strEnumName.CompareNoCase(_T("SearchSource2Enum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchSource2Enum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLogicOperatorType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicOperatorTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicOperatorType")) == 0 || strEnumName.CompareNoCase(_T("TriggerLogicOperatorTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchSource3")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSource3Enum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchSource3")) == 0 || strEnumName.CompareNoCase(_T("SearchSource3Enum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchSource3Enum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLogicClockEdgeType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicClockEdgeType")) == 0 || strEnumName.CompareNoCase(_T("TriggerLogicClockEdgeTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLogicClockSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicClockSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLogicClockSource")) == 0 || strEnumName.CompareNoCase(_T("TriggerLogicClockSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchType")) == 0 || strEnumName.CompareNoCase(_T("SearchTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusSource")) == 0 || strEnumName.CompareNoCase(_T("TrigABusSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusAudioCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusAudioConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusAudioDataQualifier")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioDataQualifierEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioDataQualifier")) == 0 || strEnumName.CompareNoCase(_T("TrigABusAudioDataQualifierEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusAudioDataAlignment")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusAudioDataAlignment")) == 0 || strEnumName.CompareNoCase(_T("TrigABusAudioDataAlignmentEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusCANCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusCANConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusCANDataDirection")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANDataDirectionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANDataDirection")) == 0 || strEnumName.CompareNoCase(_T("TrigABusCANDataDirectionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusCANQualifier")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANQualifierEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANQualifier")) == 0 || strEnumName.CompareNoCase(_T("TrigABusCANQualifierEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusCANFrameType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANFrameTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANFrameType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusCANFrameTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusCANAddressMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANAddressModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusCANAddressMode")) == 0 || strEnumName.CompareNoCase(_T("TrigABusCANAddressModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusFlexrayCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusFlexrayConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusFlexrayCycleCount")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayCycleCount")) == 0 || strEnumName.CompareNoCase(_T("TrigABusFlexrayCycleCountEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusFlexrayEOFType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayEOFType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusFlexrayEOFTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusFlexrayFrameType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayFrameType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusFlexrayFrameTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusFlexrayErrorType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusFlexrayErrorType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusFlexrayErrorTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusI2CDataDirection")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CDataDirectionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CDataDirection")) == 0 || strEnumName.CompareNoCase(_T("TrigABusI2CDataDirectionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusI2CTrigCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CTrigConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CTrigCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusI2CTrigConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusI2CAddrMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CAddrModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusI2CAddrMode")) == 0 || strEnumName.CompareNoCase(_T("TrigABusI2CAddrModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusLINCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusLINConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusLINQualifier")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINQualifierEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINQualifier")) == 0 || strEnumName.CompareNoCase(_T("TrigABusLINQualifierEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusLINErrorType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINErrorTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusLINErrorType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusLINErrorTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusRS232Condition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusRS232ConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusRS232Condition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusRS232ConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusSPICondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusSPIConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusSPICondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusSPIConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBSpecialType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBSpecialType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBSpecialTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBQualifier")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBQualifierEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBQualifier")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBQualifierEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBHandshakeType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBHandshakeType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBHandshakeTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBERRType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBERRTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBERRType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBERRTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBDATAType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBDATATypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBDATAType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBDATATypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBCondition")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TrigABusUSBTokenType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBTokenTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTrigABusUSBTokenType")) == 0 || strEnumName.CompareNoCase(_T("TrigABusUSBTokenTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSource2")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSource2Enum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSource2")) == 0 || strEnumName.CompareNoCase(_T("TriggerSource2Enum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerSource2Enum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerEdgeCoupling")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerEdgeCouplingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerEdgeCoupling")) == 0 || strEnumName.CompareNoCase(_T("TriggerEdgeCouplingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerLevel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLevelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerLevel")) == 0 || strEnumName.CompareNoCase(_T("TriggerLevelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerLevelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerSource")) == 0 || strEnumName.CompareNoCase(_T("TriggerSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoPolarity")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoStandard")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoStandardEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoStandard")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoStandardEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoStandardEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoFields")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoFieldsEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoFields")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoFieldsEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoCustomFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoCustomFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoCustomFormat")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoCustomFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoCustomScan")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoCustomScanEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoCustomScan")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoCustomScanEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerVideoHDTvFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoHDTvFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerVideoHDTvFormat")) == 0 || strEnumName.CompareNoCase(_T("TriggerVideoHDTvFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerBusType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerBusTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerBusType")) == 0 || strEnumName.CompareNoCase(_T("TriggerBusTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerBusTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerMode")) == 0 || strEnumName.CompareNoCase(_T("TriggerModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerBBy")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerBByEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerBBy")) == 0 || strEnumName.CompareNoCase(_T("TriggerBByEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerBByEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelProbeSignal")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelProbeSignalEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelProbeSignal")) == 0 || strEnumName.CompareNoCase(_T("ChannelProbeSignalEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelProbeSignalEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelCoupling")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelCouplingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelCoupling")) == 0 || strEnumName.CompareNoCase(_T("ChannelCouplingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelCouplingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelTermination")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelTerminationEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelTermination")) == 0 || strEnumName.CompareNoCase(_T("ChannelTerminationEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelTerminationEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelBandwidth")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelBandwidthEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelBandwidth")) == 0 || strEnumName.CompareNoCase(_T("ChannelBandwidthEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelBandwidthEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ProbeDegaussState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kProbeDegaussStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kProbeDegaussState")) == 0 || strEnumName.CompareNoCase(_T("ProbeDegaussStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kProbeDegaussStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DataSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataSource")) == 0 || strEnumName.CompareNoCase(_T("DataSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDataSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("WaveformFileFormat")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kWaveformFileFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kWaveformFileFormat")) == 0 || strEnumName.CompareNoCase(_T("WaveformFileFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kWaveformFileFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TiggerPulseSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTiggerPulseSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTiggerPulseSource")) == 0 || strEnumName.CompareNoCase(_T("TiggerPulseSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTiggerPulseSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerPulseWidthCondition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPulseWidthConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPulseWidthCondition")) == 0 || strEnumName.CompareNoCase(_T("TriggerPulseWidthConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerRuntPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerRuntPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerRuntPolarity")) == 0 || strEnumName.CompareNoCase(_T("TriggerRuntPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerWidthPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerWidthPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerWidthPolarity")) == 0 || strEnumName.CompareNoCase(_T("TriggerWidthPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SearchState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSearchState")) == 0 || strEnumName.CompareNoCase(_T("SearchStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSearchStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerPatternType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPatternTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kTriggerPatternType")) == 0 || strEnumName.CompareNoCase(_T("TriggerPatternTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kTriggerPatternTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelCalibration")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelCalibrationEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelCalibration")) == 0 || strEnumName.CompareNoCase(_T("ChannelCalibrationEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelCalibrationEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DigitalChannelState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDigitalChannelStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDigitalChannelState")) == 0 || strEnumName.CompareNoCase(_T("DigitalChannelStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDigitalChannelStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("UtilityExCalibrationStatus")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kUtilityExCalibrationStatusEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kUtilityExCalibrationStatus")) == 0 || strEnumName.CompareNoCase(_T("UtilityExCalibrationStatusEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("UtilityExFrontPanelLock")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kUtilityExFrontPanelLockEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kUtilityExFrontPanelLock")) == 0 || strEnumName.CompareNoCase(_T("UtilityExFrontPanelLockEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AcquisitionSamplingMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAcquisitionSamplingModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kAcquisitionSamplingMode")) == 0 || strEnumName.CompareNoCase(_T("AcquisitionSamplingModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerType")) == 0 || strEnumName.CompareNoCase(_T("PowerTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSource")) == 0 || strEnumName.CompareNoCase(_T("PowerSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerGateSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGateSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGateSource")) == 0 || strEnumName.CompareNoCase(_T("PowerGateSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerGateSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerGating")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGatingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGating")) == 0 || strEnumName.CompareNoCase(_T("PowerGatingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerGatingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerReferenceLevelType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerReferenceLevelTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerReferenceLevelType")) == 0 || strEnumName.CompareNoCase(_T("PowerReferenceLevelTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerStatisticsMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerStatisticsModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerStatisticsMode")) == 0 || strEnumName.CompareNoCase(_T("PowerStatisticsModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerStatisticsModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerQualityDisplayMeasurement")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerQualityDisplayMeasurement")) == 0 || strEnumName.CompareNoCase(_T("PowerQualityDisplayMeasurementEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerQualityFrequencyReference")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerQualityFrequencyReference")) == 0 || strEnumName.CompareNoCase(_T("PowerQualityFrequencyReferenceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSwitchingLossMeasurementDisplay")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplay")) == 0 || strEnumName.CompareNoCase(_T("PowerSwitchingLossMeasurementDisplayEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerGatingPolarity")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGatingPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerGatingPolarity")) == 0 || strEnumName.CompareNoCase(_T("PowerGatingPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerGatingPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSwitchingLossType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossType")) == 0 || strEnumName.CompareNoCase(_T("PowerSwitchingLossTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsStandard")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsStandardEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsStandard")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsStandardEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsDisplaySet")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsDisplaySet")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsDisplaySetEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsDisplayType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsDisplayType")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsDisplayTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsIECClass")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsIECClassEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsIECClass")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsIECClassEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsSource")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsFrequencyReference")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsFrequencyReference")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsFrequencyReferenceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHarmonicsMILCurrentCalculating")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculating")) == 0 || strEnumName.CompareNoCase(_T("PowerHarmonicsMILCurrentCalculatingEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHamronicsMILPowerLevel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHamronicsMILPowerLevel")) == 0 || strEnumName.CompareNoCase(_T("PowerHamronicsMILPowerLevelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerHamronicsPassFail")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHamronicsPassFailEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerHamronicsPassFail")) == 0 || strEnumName.CompareNoCase(_T("PowerHamronicsPassFailEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerRippleSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerRippleSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerRippleSource")) == 0 || strEnumName.CompareNoCase(_T("PowerRippleSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerRippleSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerModulationSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerModulationSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerModulationSource")) == 0 || strEnumName.CompareNoCase(_T("PowerModulationSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerModulationSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerModulationType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerModulationTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerModulationType")) == 0 || strEnumName.CompareNoCase(_T("PowerModulationTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerModulationTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaPlotType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaPlotType")) == 0 || strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaPlotTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaMaskState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaMaskState")) == 0 || strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaMaskStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaResultState")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSafeOperatingAreaResultState")) == 0 || strEnumName.CompareNoCase(_T("PowerSafeOperatingAreaResultStateEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("PowerSwitchingLossConductionCalculation")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kPowerSwitchingLossConductionCalculation")) == 0 || strEnumName.CompareNoCase(_T("PowerSwitchingLossConductionCalculationEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencySpectrumTraceType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencySpectrumTraceType")) == 0 || strEnumName.CompareNoCase(_T("FrequencySpectrumTraceTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFTraceType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFTraceTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFTraceType")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFTraceTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFDetectionMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFDetectionModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFDetectionMode")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFDetectionModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFDetectionMethod")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFDetectionMethodEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFDetectionMethod")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFDetectionMethodEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencySpectrumMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencySpectrumModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencySpectrumMode")) == 0 || strEnumName.CompareNoCase(_T("FrequencySpectrumModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFVerticalUnits")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFVerticalUnits")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFVerticalUnitsEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFWindow")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFWindowEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFWindow")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFWindowEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFWindowEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFMeasurementType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFMeasurementType")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFMeasurementTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRBWMode")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRBWModeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRBWMode")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRBWModeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRBWModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("FrequencyRFMarkerType")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFMarkerTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kFrequencyRFMarkerType")) == 0 || strEnumName.CompareNoCase(_T("FrequencyRFMarkerTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("CursorSource")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorSourceEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kCursorSource")) == 0 || strEnumName.CompareNoCase(_T("CursorSourceEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kCursorSourceEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ChannelChannel")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelChannelEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kChannelChannel")) == 0 || strEnumName.CompareNoCase(_T("ChannelChannelEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kChannelChannelEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Source1")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSource1Enum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kSource1")) == 0 || strEnumName.CompareNoCase(_T("Source1Enum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kSource1Enum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DataComposition")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataCompositionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataComposition")) == 0 || strEnumName.CompareNoCase(_T("DataCompositionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDataCompositionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("DataResolution")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataResolutionEnum")) == 0 || strEnumName.CompareNoCase(_T("Tkdpo2k3k4kDataResolution")) == 0 || strEnumName.CompareNoCase(_T("DataResolutionEnum")) == 0)
	{
		return GetEnumCommandConverter<Tkdpo2k3k4kDataResolutionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Interpolation")) == 0 || strEnumName.CompareNoCase(_T("IviScopeInterpolationEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeInterpolation")) == 0 || strEnumName.CompareNoCase(_T("InterpolationEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeInterpolationEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("SampleMode")) == 0 || strEnumName.CompareNoCase(_T("IviScopeSampleModeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeSampleMode")) == 0 || strEnumName.CompareNoCase(_T("SampleModeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeSampleModeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AcquisitionType")) == 0 || strEnumName.CompareNoCase(_T("IviScopeAcquisitionTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeAcquisitionType")) == 0 || strEnumName.CompareNoCase(_T("AcquisitionTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeAcquisitionTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("VerticalCoupling")) == 0 || strEnumName.CompareNoCase(_T("IviScopeVerticalCouplingEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeVerticalCoupling")) == 0 || strEnumName.CompareNoCase(_T("VerticalCouplingEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeVerticalCouplingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("Measurement")) == 0 || strEnumName.CompareNoCase(_T("IviScopeMeasurementEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeMeasurement")) == 0 || strEnumName.CompareNoCase(_T("MeasurementEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeMeasurementEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("AcquisitionStatus")) == 0 || strEnumName.CompareNoCase(_T("IviScopeAcquisitionStatusEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeAcquisitionStatus")) == 0 || strEnumName.CompareNoCase(_T("AcquisitionStatusEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeAcquisitionStatusEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerType")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerTypeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerType")) == 0 || strEnumName.CompareNoCase(_T("TriggerTypeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTriggerTypeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerCoupling")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerCouplingEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerCoupling")) == 0 || strEnumName.CompareNoCase(_T("TriggerCouplingEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTriggerCouplingEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerModifier")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerModifierEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerModifier")) == 0 || strEnumName.CompareNoCase(_T("TriggerModifierEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTriggerModifierEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("ACLineSlope")) == 0 || strEnumName.CompareNoCase(_T("IviScopeACLineSlopeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeACLineSlope")) == 0 || strEnumName.CompareNoCase(_T("ACLineSlopeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeACLineSlopeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerSlopeEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTriggerSlope")) == 0 || strEnumName.CompareNoCase(_T("TriggerSlopeEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTriggerSlopeEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("GlitchPolarity")) == 0 || strEnumName.CompareNoCase(_T("IviScopeGlitchPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeGlitchPolarity")) == 0 || strEnumName.CompareNoCase(_T("GlitchPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeGlitchPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("GlitchCondition")) == 0 || strEnumName.CompareNoCase(_T("IviScopeGlitchConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeGlitchCondition")) == 0 || strEnumName.CompareNoCase(_T("GlitchConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeGlitchConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("RuntPolarity")) == 0 || strEnumName.CompareNoCase(_T("IviScopeRuntPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeRuntPolarity")) == 0 || strEnumName.CompareNoCase(_T("RuntPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeRuntPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TVSignalFormat")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVSignalFormatEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVSignalFormat")) == 0 || strEnumName.CompareNoCase(_T("TVSignalFormatEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTVSignalFormatEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TVTriggerEvent")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVTriggerEventEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVTriggerEvent")) == 0 || strEnumName.CompareNoCase(_T("TVTriggerEventEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTVTriggerEventEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TVTriggerPolarity")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVTriggerPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTVTriggerPolarity")) == 0 || strEnumName.CompareNoCase(_T("TVTriggerPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTVTriggerPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("WidthPolarity")) == 0 || strEnumName.CompareNoCase(_T("IviScopeWidthPolarityEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeWidthPolarity")) == 0 || strEnumName.CompareNoCase(_T("WidthPolarityEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeWidthPolarityEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("WidthCondition")) == 0 || strEnumName.CompareNoCase(_T("IviScopeWidthConditionEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeWidthCondition")) == 0 || strEnumName.CompareNoCase(_T("WidthConditionEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeWidthConditionEnum>(strMethodIdentifier);
	}
	if (strEnumName.CompareNoCase(_T("TimeOut")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTimeOutEnum")) == 0 || strEnumName.CompareNoCase(_T("IviScopeTimeOut")) == 0 || strEnumName.CompareNoCase(_T("TimeOutEnum")) == 0)
	{
		return GetEnumCommandConverter<IviScopeTimeOutEnum>(strMethodIdentifier);
	}


	return NULL;
};

///////////////////////////////////////////////////////////////////////////////
//
//	Functions for converting between enum values and their symbolic names
//

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerTypeEnum> _converter(
		Tkdpo2k3k4kTriggerEdge, _T("Tkdpo2k3k4kTriggerEdge"),
		Tkdpo2k3k4kTriggerPulseWidth, _T("Tkdpo2k3k4kTriggerPulseWidth"),
		Tkdpo2k3k4kTriggerRunt, _T("Tkdpo2k3k4kTriggerRunt"),
		Tkdpo2k3k4kTriggerLogic, _T("Tkdpo2k3k4kTriggerLogic"),
		Tkdpo2k3k4kTriggerSetupHold, _T("Tkdpo2k3k4kTriggerSetupHold"),
		Tkdpo2k3k4kTriggerRiseFallTime, _T("Tkdpo2k3k4kTriggerRiseFallTime"),
		Tkdpo2k3k4kTriggerVideo, _T("Tkdpo2k3k4kTriggerVideo"),
		Tkdpo2k3k4kTriggerBus, _T("Tkdpo2k3k4kTriggerBus"),
		Tkdpo2k3k4kTriggerSequence, _T("Tkdpo2k3k4kTriggerSequence"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerSlopeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerSlopeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerSlopeEnum> _converter(
		Tkdpo2k3k4kTriggerSlopeRise, _T("Tkdpo2k3k4kTriggerSlopeRise"),
		Tkdpo2k3k4kTriggerSlopeFall, _T("Tkdpo2k3k4kTriggerSlopeFall"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kAcquisitionModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kAcquisitionModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kAcquisitionModeEnum> _converter(
		Tkdpo2k3k4kAcquisitionModeSample, _T("Tkdpo2k3k4kAcquisitionModeSample"),
		Tkdpo2k3k4kAcquisitionModePeakDetect, _T("Tkdpo2k3k4kAcquisitionModePeakDetect"),
		Tkdpo2k3k4kAcquisitionModeHiRes, _T("Tkdpo2k3k4kAcquisitionModeHiRes"),
		Tkdpo2k3k4kAcquisitionModeAverage, _T("Tkdpo2k3k4kAcquisitionModeAverage"),
		Tkdpo2k3k4kAcquisitionModeEnvelope, _T("Tkdpo2k3k4kAcquisitionModeEnvelope"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSourceEnum> _converter(
		Tkdpo2k3k4kBusSourceCH1, _T("Tkdpo2k3k4kBusSourceCH1"),
		Tkdpo2k3k4kBusSourceCH2, _T("Tkdpo2k3k4kBusSourceCH2"),
		Tkdpo2k3k4kBusSourceCH3, _T("Tkdpo2k3k4kBusSourceCH3"),
		Tkdpo2k3k4kBusSourceCH4, _T("Tkdpo2k3k4kBusSourceCH4"),
		Tkdpo2k3k4kBusSourceD0, _T("Tkdpo2k3k4kBusSourceD0"),
		Tkdpo2k3k4kBusSourceD1, _T("Tkdpo2k3k4kBusSourceD1"),
		Tkdpo2k3k4kBusSourceD2, _T("Tkdpo2k3k4kBusSourceD2"),
		Tkdpo2k3k4kBusSourceD3, _T("Tkdpo2k3k4kBusSourceD3"),
		Tkdpo2k3k4kBusSourceD4, _T("Tkdpo2k3k4kBusSourceD4"),
		Tkdpo2k3k4kBusSourceD5, _T("Tkdpo2k3k4kBusSourceD5"),
		Tkdpo2k3k4kBusSourceD6, _T("Tkdpo2k3k4kBusSourceD6"),
		Tkdpo2k3k4kBusSourceD7, _T("Tkdpo2k3k4kBusSourceD7"),
		Tkdpo2k3k4kBusSourceD8, _T("Tkdpo2k3k4kBusSourceD8"),
		Tkdpo2k3k4kBusSourceD9, _T("Tkdpo2k3k4kBusSourceD9"),
		Tkdpo2k3k4kBusSourceD10, _T("Tkdpo2k3k4kBusSourceD10"),
		Tkdpo2k3k4kBusSourceD11, _T("Tkdpo2k3k4kBusSourceD11"),
		Tkdpo2k3k4kBusSourceD12, _T("Tkdpo2k3k4kBusSourceD12"),
		Tkdpo2k3k4kBusSourceD13, _T("Tkdpo2k3k4kBusSourceD13"),
		Tkdpo2k3k4kBusSourceD14, _T("Tkdpo2k3k4kBusSourceD14"),
		Tkdpo2k3k4kBusSourceD15, _T("Tkdpo2k3k4kBusSourceD15"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusI2CRWInAddressEnum> _converter(
		Tkdpo2k3k4kBusI2CRWInAddressYES, _T("Tkdpo2k3k4kBusI2CRWInAddressYES"),
		Tkdpo2k3k4kBusI2CRWInAddressNO, _T("Tkdpo2k3k4kBusI2CRWInAddressNO"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSPIClockPolarityEnum> _converter(
		Tkdpo2k3k4kBusSPIClockPolarityRISE, _T("Tkdpo2k3k4kBusSPIClockPolarityRISE"),
		Tkdpo2k3k4kBusSPIClockPolarityFALL, _T("Tkdpo2k3k4kBusSPIClockPolarityFALL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusBitOrderEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusBitOrderEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusBitOrderEnum> _converter(
		Tkdpo2k3k4kBusBitOrderLSB, _T("Tkdpo2k3k4kBusBitOrderLSB"),
		Tkdpo2k3k4kBusBitOrderMSB, _T("Tkdpo2k3k4kBusBitOrderMSB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum> _converter(
		Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW, _T("Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW"),
		Tkdpo2k3k4kBusSPISlaveSelectPolarityHIGH, _T("Tkdpo2k3k4kBusSPISlaveSelectPolarityHIGH"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSPIDataPolarityEnum> _converter(
		Tkdpo2k3k4kBusSPIDataPolarityLOW, _T("Tkdpo2k3k4kBusSPIDataPolarityLOW"),
		Tkdpo2k3k4kBusSPIDataPolarityHIGH, _T("Tkdpo2k3k4kBusSPIDataPolarityHIGH"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusRS232PolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusRS232PolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusRS232PolarityEnum> _converter(
		Tkdpo2k3k4kBusRS232PolarityNormal, _T("Tkdpo2k3k4kBusRS232PolarityNormal"),
		Tkdpo2k3k4kBusRS232PolarityInverted, _T("Tkdpo2k3k4kBusRS232PolarityInverted"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusRS232ParityEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusRS232ParityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusRS232ParityEnum> _converter(
		Tkdpo2k3k4kBusRS232ParityNone, _T("Tkdpo2k3k4kBusRS232ParityNone"),
		Tkdpo2k3k4kBusRS232ParityOdd, _T("Tkdpo2k3k4kBusRS232ParityOdd"),
		Tkdpo2k3k4kBusRS232ParityEven, _T("Tkdpo2k3k4kBusRS232ParityEven"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusUSBProbeEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusUSBProbeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusUSBProbeEnum> _converter(
		Tkdpo2k3k4kBusUSBProbeSingleEnded, _T("Tkdpo2k3k4kBusUSBProbeSingleEnded"),
		Tkdpo2k3k4kBusUSBProbeDifferential, _T("Tkdpo2k3k4kBusUSBProbeDifferential"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusUSBBitrateEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusUSBBitrateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusUSBBitrateEnum> _converter(
		Tkdpo2k3k4kBusUSBBitrateLow, _T("Tkdpo2k3k4kBusUSBBitrateLow"),
		Tkdpo2k3k4kBusUSBBitrateHigh, _T("Tkdpo2k3k4kBusUSBBitrateHigh"),
		Tkdpo2k3k4kBusUSBBitrateFull, _T("Tkdpo2k3k4kBusUSBBitrateFull"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelEnum> _converter(
		Tkdpo2k3k4kChannel1, _T("Tkdpo2k3k4kChannel1"),
		Tkdpo2k3k4kChannel2, _T("Tkdpo2k3k4kChannel2"),
		Tkdpo2k3k4kChannel3, _T("Tkdpo2k3k4kChannel3"),
		Tkdpo2k3k4kChannel4, _T("Tkdpo2k3k4kChannel4"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusTypeEnum> _converter(
		Tkdpo2k3k4kBusTypePARALLEL, _T("Tkdpo2k3k4kBusTypePARALLEL"),
		Tkdpo2k3k4kBusTypeI2C, _T("Tkdpo2k3k4kBusTypeI2C"),
		Tkdpo2k3k4kBusTypeSPI, _T("Tkdpo2k3k4kBusTypeSPI"),
		Tkdpo2k3k4kBusTypeRS232, _T("Tkdpo2k3k4kBusTypeRS232"),
		Tkdpo2k3k4kBusTypeUSB, _T("Tkdpo2k3k4kBusTypeUSB"),
		Tkdpo2k3k4kBusTypeAudio, _T("Tkdpo2k3k4kBusTypeAudio"),
		Tkdpo2k3k4kBusTypeCAN, _T("Tkdpo2k3k4kBusTypeCAN"),
		Tkdpo2k3k4kBusTypeLIN, _T("Tkdpo2k3k4kBusTypeLIN"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusStateEnum> _converter(
		Tkdpo2k3k4kBusStateOFF, _T("Tkdpo2k3k4kBusStateOFF"),
		Tkdpo2k3k4kBusStateON, _T("Tkdpo2k3k4kBusStateON"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusDisplayTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusDisplayTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusDisplayTypeEnum> _converter(
		Tkdpo2k3k4kBusDisplayTypeBUS, _T("Tkdpo2k3k4kBusDisplayTypeBUS"),
		Tkdpo2k3k4kBusDisplayTypeBOTH, _T("Tkdpo2k3k4kBusDisplayTypeBOTH"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusDisplayFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusDisplayFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusDisplayFormatEnum> _converter(
		Tkdpo2k3k4kBusDisplayFormatBinary, _T("Tkdpo2k3k4kBusDisplayFormatBinary"),
		Tkdpo2k3k4kBusDisplayFormatHexadecimal, _T("Tkdpo2k3k4kBusDisplayFormatHexadecimal"),
		Tkdpo2k3k4kBusDisplayFormatASCII, _T("Tkdpo2k3k4kBusDisplayFormatASCII"),
		Tkdpo2k3k4kBusDisplayFormatMixed, _T("Tkdpo2k3k4kBusDisplayFormatMixed"),
		Tkdpo2k3k4kBusDisplayFormatMixed2, _T("Tkdpo2k3k4kBusDisplayFormatMixed2"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusParallelBusClockEdgeEnum> _converter(
		Tkdpo2k3k4kBusParallelBusClockEdgeEither, _T("Tkdpo2k3k4kBusParallelBusClockEdgeEither"),
		Tkdpo2k3k4kBusParallelBusClockEdgeRising, _T("Tkdpo2k3k4kBusParallelBusClockEdgeRising"),
		Tkdpo2k3k4kBusParallelBusClockEdgeFalling, _T("Tkdpo2k3k4kBusParallelBusClockEdgeFalling"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusRS232DelimiterEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusRS232DelimiterEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusRS232DelimiterEnum> _converter(
		Tkdpo2k3k4kBusRS232DelimiterCR, _T("Tkdpo2k3k4kBusRS232DelimiterCR"),
		Tkdpo2k3k4kBusRS232DelimiterXFF, _T("Tkdpo2k3k4kBusRS232DelimiterXFF"),
		Tkdpo2k3k4kBusRS232DelimiterLF, _T("Tkdpo2k3k4kBusRS232DelimiterLF"),
		Tkdpo2k3k4kBusRS232DelimiterNull, _T("Tkdpo2k3k4kBusRS232DelimiterNull"),
		Tkdpo2k3k4kBusRS232DelimiterSpace, _T("Tkdpo2k3k4kBusRS232DelimiterSpace"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusRS232DisplayModeEnum> _converter(
		Tkdpo2k3k4kBusRS232DisplayModeFrame, _T("Tkdpo2k3k4kBusRS232DisplayModeFrame"),
		Tkdpo2k3k4kBusRS232DisplayModePacket, _T("Tkdpo2k3k4kBusRS232DisplayModePacket"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSPIFramingEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSPIFramingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSPIFramingEnum> _converter(
		Tkdpo2k3k4kBusSPIFramingSS, _T("Tkdpo2k3k4kBusSPIFramingSS"),
		Tkdpo2k3k4kBusSPIFramingIdletime, _T("Tkdpo2k3k4kBusSPIFramingIdletime"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kAudioBusTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kAudioBusTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kAudioBusTypeEnum> _converter(
		Tkdpo2k3k4kAudioBusTypeI2S, _T("Tkdpo2k3k4kAudioBusTypeI2S"),
		Tkdpo2k3k4kAudioBusTypeLJ, _T("Tkdpo2k3k4kAudioBusTypeLJ"),
		Tkdpo2k3k4kAudioBusTypeRJ, _T("Tkdpo2k3k4kAudioBusTypeRJ"),
		Tkdpo2k3k4kAudioBusTypeTDM, _T("Tkdpo2k3k4kAudioBusTypeTDM"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kAudioPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kAudioPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kAudioPolarityEnum> _converter(
		Tkdpo2k3k4kAudioPolarityFall, _T("Tkdpo2k3k4kAudioPolarityFall"),
		Tkdpo2k3k4kAudioPolarityRise, _T("Tkdpo2k3k4kAudioPolarityRise"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kAudioDataPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kAudioDataPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kAudioDataPolarityEnum> _converter(
		Tkdpo2k3k4kAudioDataPolarityNormal, _T("Tkdpo2k3k4kAudioDataPolarityNormal"),
		Tkdpo2k3k4kAudioDataPolarityInverted, _T("Tkdpo2k3k4kAudioDataPolarityInverted"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayFormatEnum> _converter(
		Tkdpo2k3k4kDisplayFormatBinary, _T("Tkdpo2k3k4kDisplayFormatBinary"),
		Tkdpo2k3k4kDisplayFormatHexadecimal, _T("Tkdpo2k3k4kDisplayFormatHexadecimal"),
		Tkdpo2k3k4kDisplayFormatSignedDecimal, _T("Tkdpo2k3k4kDisplayFormatSignedDecimal"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCANProbeTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kCANProbeTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCANProbeTypeEnum> _converter(
		Tkdpo2k3k4kCANProbeTypeCANH, _T("Tkdpo2k3k4kCANProbeTypeCANH"),
		Tkdpo2k3k4kCANProbeTypeCANL, _T("Tkdpo2k3k4kCANProbeTypeCANL"),
		Tkdpo2k3k4kCANProbeTypeRX, _T("Tkdpo2k3k4kCANProbeTypeRX"),
		Tkdpo2k3k4kCANProbeTypeTX, _T("Tkdpo2k3k4kCANProbeTypeTX"),
		Tkdpo2k3k4kCANProbeTypeDifferential, _T("Tkdpo2k3k4kCANProbeTypeDifferential"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCANBitRateEnum>* GetEnumNameConverter<Tkdpo2k3k4kCANBitRateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCANBitRateEnum> _converter(
		Tkdpo2k3k4kCANBitRateRATE10K, _T("Tkdpo2k3k4kCANBitRateRATE10K"),
		Tkdpo2k3k4kCANBitRateRATE20K, _T("Tkdpo2k3k4kCANBitRateRATE20K"),
		Tkdpo2k3k4kCANBitRateRATE33K, _T("Tkdpo2k3k4kCANBitRateRATE33K"),
		Tkdpo2k3k4kCANBitRateRATE37K, _T("Tkdpo2k3k4kCANBitRateRATE37K"),
		Tkdpo2k3k4kCANBitRateRATE50K, _T("Tkdpo2k3k4kCANBitRateRATE50K"),
		Tkdpo2k3k4kCANBitRateRATE62K, _T("Tkdpo2k3k4kCANBitRateRATE62K"),
		Tkdpo2k3k4kCANBitRateRATE83K, _T("Tkdpo2k3k4kCANBitRateRATE83K"),
		Tkdpo2k3k4kCANBitRateRATE92K, _T("Tkdpo2k3k4kCANBitRateRATE92K"),
		Tkdpo2k3k4kCANBitRateRATE100K, _T("Tkdpo2k3k4kCANBitRateRATE100K"),
		Tkdpo2k3k4kCANBitRateRATE125K, _T("Tkdpo2k3k4kCANBitRateRATE125K"),
		Tkdpo2k3k4kCANBitRateRATE250K, _T("Tkdpo2k3k4kCANBitRateRATE250K"),
		Tkdpo2k3k4kCANBitRateRATE500K, _T("Tkdpo2k3k4kCANBitRateRATE500K"),
		Tkdpo2k3k4kCANBitRateRATE800K, _T("Tkdpo2k3k4kCANBitRateRATE800K"),
		Tkdpo2k3k4kCANBitRateRATE1M, _T("Tkdpo2k3k4kCANBitRateRATE1M"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFlexraySignalEnum>* GetEnumNameConverter<Tkdpo2k3k4kFlexraySignalEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFlexraySignalEnum> _converter(
		Tkdpo2k3k4kFlexraySignalBDIFFBP, _T("Tkdpo2k3k4kFlexraySignalBDIFFBP"),
		Tkdpo2k3k4kFlexraySignalBM, _T("Tkdpo2k3k4kFlexraySignalBM"),
		Tkdpo2k3k4kFlexraySignalTXRX, _T("Tkdpo2k3k4kFlexraySignalTXRX"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFlexrayChannelEnum>* GetEnumNameConverter<Tkdpo2k3k4kFlexrayChannelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFlexrayChannelEnum> _converter(
		Tkdpo2k3k4kFlexrayChannelA, _T("Tkdpo2k3k4kFlexrayChannelA"),
		Tkdpo2k3k4kFlexrayChannelB, _T("Tkdpo2k3k4kFlexrayChannelB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kLINIDFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kLINIDFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kLINIDFormatEnum> _converter(
		Tkdpo2k3k4kLINIDFormatNoParity, _T("Tkdpo2k3k4kLINIDFormatNoParity"),
		Tkdpo2k3k4kLINIDFormatParity, _T("Tkdpo2k3k4kLINIDFormatParity"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kLINPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kLINPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kLINPolarityEnum> _converter(
		Tkdpo2k3k4kLINPolarityNormal, _T("Tkdpo2k3k4kLINPolarityNormal"),
		Tkdpo2k3k4kLINPolarityInverted, _T("Tkdpo2k3k4kLINPolarityInverted"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kLINStandardEnum>* GetEnumNameConverter<Tkdpo2k3k4kLINStandardEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kLINStandardEnum> _converter(
		Tkdpo2k3k4kLINStandardV1X, _T("Tkdpo2k3k4kLINStandardV1X"),
		Tkdpo2k3k4kLINStandardV2X, _T("Tkdpo2k3k4kLINStandardV2X"),
		Tkdpo2k3k4kLINStandardMixed, _T("Tkdpo2k3k4kLINStandardMixed"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kBusSPIBitOrderEnum>* GetEnumNameConverter<Tkdpo2k3k4kBusSPIBitOrderEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kBusSPIBitOrderEnum> _converter(
		Tkdpo2k3k4kBusSPIBitOrderLSB, _T("Tkdpo2k3k4kBusSPIBitOrderLSB"),
		Tkdpo2k3k4kBusSPIBitOrderMSB, _T("Tkdpo2k3k4kBusSPIBitOrderMSB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDigitalChannelEnum>* GetEnumNameConverter<Tkdpo2k3k4kDigitalChannelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDigitalChannelEnum> _converter(
		Tkdpo2k3k4kDigitalChannelD0, _T("Tkdpo2k3k4kDigitalChannelD0"),
		Tkdpo2k3k4kDigitalChannelD1, _T("Tkdpo2k3k4kDigitalChannelD1"),
		Tkdpo2k3k4kDigitalChannelD2, _T("Tkdpo2k3k4kDigitalChannelD2"),
		Tkdpo2k3k4kDigitalChannelD3, _T("Tkdpo2k3k4kDigitalChannelD3"),
		Tkdpo2k3k4kDigitalChannelD4, _T("Tkdpo2k3k4kDigitalChannelD4"),
		Tkdpo2k3k4kDigitalChannelD5, _T("Tkdpo2k3k4kDigitalChannelD5"),
		Tkdpo2k3k4kDigitalChannelD6, _T("Tkdpo2k3k4kDigitalChannelD6"),
		Tkdpo2k3k4kDigitalChannelD7, _T("Tkdpo2k3k4kDigitalChannelD7"),
		Tkdpo2k3k4kDigitalChannelD8, _T("Tkdpo2k3k4kDigitalChannelD8"),
		Tkdpo2k3k4kDigitalChannelD9, _T("Tkdpo2k3k4kDigitalChannelD9"),
		Tkdpo2k3k4kDigitalChannelD10, _T("Tkdpo2k3k4kDigitalChannelD10"),
		Tkdpo2k3k4kDigitalChannelD11, _T("Tkdpo2k3k4kDigitalChannelD11"),
		Tkdpo2k3k4kDigitalChannelD12, _T("Tkdpo2k3k4kDigitalChannelD12"),
		Tkdpo2k3k4kDigitalChannelD13, _T("Tkdpo2k3k4kDigitalChannelD13"),
		Tkdpo2k3k4kDigitalChannelD14, _T("Tkdpo2k3k4kDigitalChannelD14"),
		Tkdpo2k3k4kDigitalChannelD15, _T("Tkdpo2k3k4kDigitalChannelD15"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorTrackModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorTrackModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorTrackModeEnum> _converter(
		Tkdpo2k3k4kCursorTrackModeIndependent, _T("Tkdpo2k3k4kCursorTrackModeIndependent"),
		Tkdpo2k3k4kCursorTrackModeTrack, _T("Tkdpo2k3k4kCursorTrackModeTrack"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorTypeEnum> _converter(
		Tkdpo2k3k4kCursorTypeOFF, _T("Tkdpo2k3k4kCursorTypeOFF"),
		Tkdpo2k3k4kCursorTypeScreen, _T("Tkdpo2k3k4kCursorTypeScreen"),
		Tkdpo2k3k4kCursorTypeWaveform, _T("Tkdpo2k3k4kCursorTypeWaveform"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorMeasurementScaleEnum> _converter(
		Tkdpo2k3k4kCursorMeasurementScaleCurrent, _T("Tkdpo2k3k4kCursorMeasurementScaleCurrent"),
		Tkdpo2k3k4kCursorMeasurementScaleHalfGraticule, _T("Tkdpo2k3k4kCursorMeasurementScaleHalfGraticule"),
		Tkdpo2k3k4kCursorMeasurementScaleFiveDivisions, _T("Tkdpo2k3k4kCursorMeasurementScaleFiveDivisions"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorHBarsUnitsEnum> _converter(
		Tkdpo2k3k4kCursorHBarsUnitsBase, _T("Tkdpo2k3k4kCursorHBarsUnitsBase"),
		Tkdpo2k3k4kCursorHBarsUnitsPercent, _T("Tkdpo2k3k4kCursorHBarsUnitsPercent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorVBarsUnitsEnum> _converter(
		Tkdpo2k3k4kCursorVBarsUnitsSeconds, _T("Tkdpo2k3k4kCursorVBarsUnitsSeconds"),
		Tkdpo2k3k4kCursorVBarsUnitsHertz, _T("Tkdpo2k3k4kCursorVBarsUnitsHertz"),
		Tkdpo2k3k4kCursorVBarsUnitsDegrees, _T("Tkdpo2k3k4kCursorVBarsUnitsDegrees"),
		Tkdpo2k3k4kCursorVBarsUnitsPercent, _T("Tkdpo2k3k4kCursorVBarsUnitsPercent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorXYReadoutEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorXYReadoutEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorXYReadoutEnum> _converter(
		Tkdpo2k3k4kCursorXYReadoutRectangular, _T("Tkdpo2k3k4kCursorXYReadoutRectangular"),
		Tkdpo2k3k4kCursorXYReadoutPolarCoordinates, _T("Tkdpo2k3k4kCursorXYReadoutPolarCoordinates"),
		Tkdpo2k3k4kCursorXYReadoutProduct, _T("Tkdpo2k3k4kCursorXYReadoutProduct"),
		Tkdpo2k3k4kCursorXYReadoutRatio, _T("Tkdpo2k3k4kCursorXYReadoutRatio"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayClockStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayClockStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayClockStateEnum> _converter(
		Tkdpo2k3k4kDisplayClockStateDataOnly, _T("Tkdpo2k3k4kDisplayClockStateDataOnly"),
		Tkdpo2k3k4kDisplayClockStateTimeOnly, _T("Tkdpo2k3k4kDisplayClockStateTimeOnly"),
		Tkdpo2k3k4kDisplayClockStateOn, _T("Tkdpo2k3k4kDisplayClockStateOn"),
		Tkdpo2k3k4kDisplayClockStateOff, _T("Tkdpo2k3k4kDisplayClockStateOff"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayBackLightIntensityEnum> _converter(
		Tkdpo2k3k4kDisplayBackLightIntensityLow, _T("Tkdpo2k3k4kDisplayBackLightIntensityLow"),
		Tkdpo2k3k4kDisplayBackLightIntensityMedium, _T("Tkdpo2k3k4kDisplayBackLightIntensityMedium"),
		Tkdpo2k3k4kDisplayBackLightIntensityHigh, _T("Tkdpo2k3k4kDisplayBackLightIntensityHigh"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayGraticuleEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayGraticuleEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayGraticuleEnum> _converter(
		Tkdpo2k3k4kDisplayGraticuleCrossHair, _T("Tkdpo2k3k4kDisplayGraticuleCrossHair"),
		Tkdpo2k3k4kDisplayGraticuleFrame, _T("Tkdpo2k3k4kDisplayGraticuleFrame"),
		Tkdpo2k3k4kDisplayGraticuleFull, _T("Tkdpo2k3k4kDisplayGraticuleFull"),
		Tkdpo2k3k4kDisplayGraticuleGrid, _T("Tkdpo2k3k4kDisplayGraticuleGrid"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayDisplayFormatEnum> _converter(
		Tkdpo2k3k4kDisplayDisplayFormatYT, _T("Tkdpo2k3k4kDisplayDisplayFormatYT"),
		Tkdpo2k3k4kDisplayDisplayFormatXY, _T("Tkdpo2k3k4kDisplayDisplayFormatXY"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDisplayPersistenceEnum>* GetEnumNameConverter<Tkdpo2k3k4kDisplayPersistenceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDisplayPersistenceEnum> _converter(
		Tkdpo2k3k4kDisplayPersistenceClear, _T("Tkdpo2k3k4kDisplayPersistenceClear"),
		Tkdpo2k3k4kDisplayPersistenceAuto, _T("Tkdpo2k3k4kDisplayPersistenceAuto"),
		Tkdpo2k3k4kDisplayPersistenceMinimum, _T("Tkdpo2k3k4kDisplayPersistenceMinimum"),
		Tkdpo2k3k4kDisplayPersistenceInfinite, _T("Tkdpo2k3k4kDisplayPersistenceInfinite"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPrintLayoutEnum>* GetEnumNameConverter<Tkdpo2k3k4kPrintLayoutEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPrintLayoutEnum> _converter(
		Tkdpo2k3k4kPrintLayoutPortrait, _T("Tkdpo2k3k4kPrintLayoutPortrait"),
		Tkdpo2k3k4kPrintLayoutLandscape, _T("Tkdpo2k3k4kPrintLayoutLandscape"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kHistogramModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kHistogramModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kHistogramModeEnum> _converter(
		Tkdpo2k3k4kHistogramModeOff, _T("Tkdpo2k3k4kHistogramModeOff"),
		Tkdpo2k3k4kHistogramModeHorizontal, _T("Tkdpo2k3k4kHistogramModeHorizontal"),
		Tkdpo2k3k4kHistogramModeVertical, _T("Tkdpo2k3k4kHistogramModeVertical"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSourceEnum> _converter(
		Tkdpo2k3k4kSourceCH1, _T("Tkdpo2k3k4kSourceCH1"),
		Tkdpo2k3k4kSourceCH2, _T("Tkdpo2k3k4kSourceCH2"),
		Tkdpo2k3k4kSourceCH3, _T("Tkdpo2k3k4kSourceCH3"),
		Tkdpo2k3k4kSourceCH4, _T("Tkdpo2k3k4kSourceCH4"),
		Tkdpo2k3k4kSourceMATH, _T("Tkdpo2k3k4kSourceMATH"),
		Tkdpo2k3k4kSourceREF1, _T("Tkdpo2k3k4kSourceREF1"),
		Tkdpo2k3k4kSourceREF2, _T("Tkdpo2k3k4kSourceREF2"),
		Tkdpo2k3k4kSourceREF3, _T("Tkdpo2k3k4kSourceREF3"),
		Tkdpo2k3k4kSourceREF4, _T("Tkdpo2k3k4kSourceREF4"),
		Tkdpo2k3k4kSourceD0, _T("Tkdpo2k3k4kSourceD0"),
		Tkdpo2k3k4kSourceD1, _T("Tkdpo2k3k4kSourceD1"),
		Tkdpo2k3k4kSourceD2, _T("Tkdpo2k3k4kSourceD2"),
		Tkdpo2k3k4kSourceD3, _T("Tkdpo2k3k4kSourceD3"),
		Tkdpo2k3k4kSourceD4, _T("Tkdpo2k3k4kSourceD4"),
		Tkdpo2k3k4kSourceD5, _T("Tkdpo2k3k4kSourceD5"),
		Tkdpo2k3k4kSourceD6, _T("Tkdpo2k3k4kSourceD6"),
		Tkdpo2k3k4kSourceD7, _T("Tkdpo2k3k4kSourceD7"),
		Tkdpo2k3k4kSourceD8, _T("Tkdpo2k3k4kSourceD8"),
		Tkdpo2k3k4kSourceD9, _T("Tkdpo2k3k4kSourceD9"),
		Tkdpo2k3k4kSourceD10, _T("Tkdpo2k3k4kSourceD10"),
		Tkdpo2k3k4kSourceD11, _T("Tkdpo2k3k4kSourceD11"),
		Tkdpo2k3k4kSourceD12, _T("Tkdpo2k3k4kSourceD12"),
		Tkdpo2k3k4kSourceD13, _T("Tkdpo2k3k4kSourceD13"),
		Tkdpo2k3k4kSourceD14, _T("Tkdpo2k3k4kSourceD14"),
		Tkdpo2k3k4kSourceD15, _T("Tkdpo2k3k4kSourceD15"),
		Tkdpo2k3k4kSourceRFAmplitude, _T("Tkdpo2k3k4kSourceRFAmplitude"),
		Tkdpo2k3k4kSourceRFFrequency, _T("Tkdpo2k3k4kSourceRFFrequency"),
		Tkdpo2k3k4kSourceRFPhase, _T("Tkdpo2k3k4kSourceRFPhase"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kHistogramDisplayEnum>* GetEnumNameConverter<Tkdpo2k3k4kHistogramDisplayEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kHistogramDisplayEnum> _converter(
		Tkdpo2k3k4kHistogramDisplayLog, _T("Tkdpo2k3k4kHistogramDisplayLog"),
		Tkdpo2k3k4kHistogramDisplayLinear, _T("Tkdpo2k3k4kHistogramDisplayLinear"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMarkEnum>* GetEnumNameConverter<Tkdpo2k3k4kMarkEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMarkEnum> _converter(
		Tkdpo2k3k4kMarkCH1, _T("Tkdpo2k3k4kMarkCH1"),
		Tkdpo2k3k4kMarkCH2, _T("Tkdpo2k3k4kMarkCH2"),
		Tkdpo2k3k4kMarkCH3, _T("Tkdpo2k3k4kMarkCH3"),
		Tkdpo2k3k4kMarkCH4, _T("Tkdpo2k3k4kMarkCH4"),
		Tkdpo2k3k4kMarkMATH, _T("Tkdpo2k3k4kMarkMATH"),
		Tkdpo2k3k4kMarkREF1, _T("Tkdpo2k3k4kMarkREF1"),
		Tkdpo2k3k4kMarkREF2, _T("Tkdpo2k3k4kMarkREF2"),
		Tkdpo2k3k4kMarkREF3, _T("Tkdpo2k3k4kMarkREF3"),
		Tkdpo2k3k4kMarkREF4, _T("Tkdpo2k3k4kMarkREF4"),
		Tkdpo2k3k4kMarkB1, _T("Tkdpo2k3k4kMarkB1"),
		Tkdpo2k3k4kMarkB2, _T("Tkdpo2k3k4kMarkB2"),
		Tkdpo2k3k4kMarkB3, _T("Tkdpo2k3k4kMarkB3"),
		Tkdpo2k3k4kMarkB4, _T("Tkdpo2k3k4kMarkB4"),
		Tkdpo2k3k4kMarkDigital, _T("Tkdpo2k3k4kMarkDigital"),
		Tkdpo2k3k4kMarkColumn, _T("Tkdpo2k3k4kMarkColumn"),
		Tkdpo2k3k4kMarkRFAmplitude, _T("Tkdpo2k3k4kMarkRFAmplitude"),
		Tkdpo2k3k4kMarkRFFrequency, _T("Tkdpo2k3k4kMarkRFFrequency"),
		Tkdpo2k3k4kMarkRFPhase, _T("Tkdpo2k3k4kMarkRFPhase"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMathTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kMathTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMathTypeEnum> _converter(
		Tkdpo2k3k4kMathTypeDual, _T("Tkdpo2k3k4kMathTypeDual"),
		Tkdpo2k3k4kMathTypeFFT, _T("Tkdpo2k3k4kMathTypeFFT"),
		Tkdpo2k3k4kMathTypeAdvanced, _T("Tkdpo2k3k4kMathTypeAdvanced"),
		Tkdpo2k3k4kMathTypeSpectrum, _T("Tkdpo2k3k4kMathTypeSpectrum"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>* GetEnumNameConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMarkMoveZoomToMarkEnum> _converter(
		Tkdpo2k3k4kMarkMoveZoomToMarkNEXT, _T("Tkdpo2k3k4kMarkMoveZoomToMarkNEXT"),
		Tkdpo2k3k4kMarkMoveZoomToMarkPREVIOUS, _T("Tkdpo2k3k4kMarkMoveZoomToMarkPREVIOUS"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSpectralWindowEnum>* GetEnumNameConverter<Tkdpo2k3k4kSpectralWindowEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSpectralWindowEnum> _converter(
		Tkdpo2k3k4kSpectralWindowRectangular, _T("Tkdpo2k3k4kSpectralWindowRectangular"),
		Tkdpo2k3k4kSpectralWindowHamming, _T("Tkdpo2k3k4kSpectralWindowHamming"),
		Tkdpo2k3k4kSpectralWindowHanning, _T("Tkdpo2k3k4kSpectralWindowHanning"),
		Tkdpo2k3k4kSpectralWindowBlackmanharris, _T("Tkdpo2k3k4kSpectralWindowBlackmanharris"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSpectralMagUnitEnum>* GetEnumNameConverter<Tkdpo2k3k4kSpectralMagUnitEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSpectralMagUnitEnum> _converter(
		Tkdpo2k3k4kSpectralMagUnitLinear, _T("Tkdpo2k3k4kSpectralMagUnitLinear"),
		Tkdpo2k3k4kSpectralMagUnitDB, _T("Tkdpo2k3k4kSpectralMagUnitDB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementDelayDirectionEnum> _converter(
		Tkdpo2k3k4kMeasurementDelayDirectionBackward, _T("Tkdpo2k3k4kMeasurementDelayDirectionBackward"),
		Tkdpo2k3k4kMeasurementDelayDirectionForward, _T("Tkdpo2k3k4kMeasurementDelayDirectionForward"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementEdgeEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementEdgeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementEdgeEnum> _converter(
		Tkdpo2k3k4kMeasurementEdgeFall, _T("Tkdpo2k3k4kMeasurementEdgeFall"),
		Tkdpo2k3k4kMeasurementEdgeRise, _T("Tkdpo2k3k4kMeasurementEdgeRise"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementMethodEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementMethodEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementMethodEnum> _converter(
		Tkdpo2k3k4kMeasurementMethodHistogram, _T("Tkdpo2k3k4kMeasurementMethodHistogram"),
		Tkdpo2k3k4kMeasurementMethodMinMax, _T("Tkdpo2k3k4kMeasurementMethodMinMax"),
		Tkdpo2k3k4kMeasurementMethodAuto, _T("Tkdpo2k3k4kMeasurementMethodAuto"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementUnitEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementUnitEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementUnitEnum> _converter(
		Tkdpo2k3k4kMeasurementUnitAbsolute, _T("Tkdpo2k3k4kMeasurementUnitAbsolute"),
		Tkdpo2k3k4kMeasurementUnitPercent, _T("Tkdpo2k3k4kMeasurementUnitPercent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementTypeEnum> _converter(
		Tkdpo2k3k4kMeasurementTypeRise, _T("Tkdpo2k3k4kMeasurementTypeRise"),
		Tkdpo2k3k4kMeasurementTypeFall, _T("Tkdpo2k3k4kMeasurementTypeFall"),
		Tkdpo2k3k4kMeasurementTypeFrequency, _T("Tkdpo2k3k4kMeasurementTypeFrequency"),
		Tkdpo2k3k4kMeasurementTypePeriod, _T("Tkdpo2k3k4kMeasurementTypePeriod"),
		Tkdpo2k3k4kMeasurementTypeRMS, _T("Tkdpo2k3k4kMeasurementTypeRMS"),
		Tkdpo2k3k4kMeasurementTypePk2Pk, _T("Tkdpo2k3k4kMeasurementTypePk2Pk"),
		Tkdpo2k3k4kMeasurementTypeMaximum, _T("Tkdpo2k3k4kMeasurementTypeMaximum"),
		Tkdpo2k3k4kMeasurementTypeMinimum, _T("Tkdpo2k3k4kMeasurementTypeMinimum"),
		Tkdpo2k3k4kMeasurementTypeHigh, _T("Tkdpo2k3k4kMeasurementTypeHigh"),
		Tkdpo2k3k4kMeasurementTypeLow, _T("Tkdpo2k3k4kMeasurementTypeLow"),
		Tkdpo2k3k4kMeasurementTypeMean, _T("Tkdpo2k3k4kMeasurementTypeMean"),
		Tkdpo2k3k4kMeasurementTypeNWidth, _T("Tkdpo2k3k4kMeasurementTypeNWidth"),
		Tkdpo2k3k4kMeasurementTypePWidth, _T("Tkdpo2k3k4kMeasurementTypePWidth"),
		Tkdpo2k3k4kMeasurementTypeNDuty, _T("Tkdpo2k3k4kMeasurementTypeNDuty"),
		Tkdpo2k3k4kMeasurementTypePDuty, _T("Tkdpo2k3k4kMeasurementTypePDuty"),
		Tkdpo2k3k4kMeasurementTypeAmplitude, _T("Tkdpo2k3k4kMeasurementTypeAmplitude"),
		Tkdpo2k3k4kMeasurementTypeCRMS, _T("Tkdpo2k3k4kMeasurementTypeCRMS"),
		Tkdpo2k3k4kMeasurementTypeCMean, _T("Tkdpo2k3k4kMeasurementTypeCMean"),
		Tkdpo2k3k4kMeasurementTypePOverShoot, _T("Tkdpo2k3k4kMeasurementTypePOverShoot"),
		Tkdpo2k3k4kMeasurementTypeNOverShoot, _T("Tkdpo2k3k4kMeasurementTypeNOverShoot"),
		Tkdpo2k3k4kMeasurementTypeArea, _T("Tkdpo2k3k4kMeasurementTypeArea"),
		Tkdpo2k3k4kMeasurementTypeBurst, _T("Tkdpo2k3k4kMeasurementTypeBurst"),
		Tkdpo2k3k4kMeasurementTypeCArea, _T("Tkdpo2k3k4kMeasurementTypeCArea"),
		Tkdpo2k3k4kMeasurementTypeDelay, _T("Tkdpo2k3k4kMeasurementTypeDelay"),
		Tkdpo2k3k4kMeasurementTypePhase, _T("Tkdpo2k3k4kMeasurementTypePhase"),
		Tkdpo2k3k4kMeasurementTypeWaveforms, _T("Tkdpo2k3k4kMeasurementTypeWaveforms"),
		Tkdpo2k3k4kMeasurementTypeHits, _T("Tkdpo2k3k4kMeasurementTypeHits"),
		Tkdpo2k3k4kMeasurementTypePeakHits, _T("Tkdpo2k3k4kMeasurementTypePeakHits"),
		Tkdpo2k3k4kMeasurementTypeMedian, _T("Tkdpo2k3k4kMeasurementTypeMedian"),
		Tkdpo2k3k4kMeasurementTypeStdDev, _T("Tkdpo2k3k4kMeasurementTypeStdDev"),
		Tkdpo2k3k4kMeasurementTypeSigma1, _T("Tkdpo2k3k4kMeasurementTypeSigma1"),
		Tkdpo2k3k4kMeasurementTypeSigma2, _T("Tkdpo2k3k4kMeasurementTypeSigma2"),
		Tkdpo2k3k4kMeasurementTypeSigma3, _T("Tkdpo2k3k4kMeasurementTypeSigma3"),
		Tkdpo2k3k4kMeasurementTypeNEdgeCount, _T("Tkdpo2k3k4kMeasurementTypeNEdgeCount"),
		Tkdpo2k3k4kMeasurementTypeNPulseCount, _T("Tkdpo2k3k4kMeasurementTypeNPulseCount"),
		Tkdpo2k3k4kMeasurementTypePEdgeCount, _T("Tkdpo2k3k4kMeasurementTypePEdgeCount"),
		Tkdpo2k3k4kMeasurementTypePPulseCount, _T("Tkdpo2k3k4kMeasurementTypePPulseCount"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementGatingEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementGatingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementGatingEnum> _converter(
		Tkdpo2k3k4kMeasurementGatingOff, _T("Tkdpo2k3k4kMeasurementGatingOff"),
		Tkdpo2k3k4kMeasurementGatingScreen, _T("Tkdpo2k3k4kMeasurementGatingScreen"),
		Tkdpo2k3k4kMeasurementGatingCursor, _T("Tkdpo2k3k4kMeasurementGatingCursor"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMeasurementIndicatorStateEnum> _converter(
		Tkdpo2k3k4kMeasurementIndicatorStateOFF, _T("Tkdpo2k3k4kMeasurementIndicatorStateOFF"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas1, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas1"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas2, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas2"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas3, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas3"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas4, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas4"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas5, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas5"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas6, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas6"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas7, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas7"),
		Tkdpo2k3k4kMeasurementIndicatorStateMeas8, _T("Tkdpo2k3k4kMeasurementIndicatorStateMeas8"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kMemoryLocationEnum>* GetEnumNameConverter<Tkdpo2k3k4kMemoryLocationEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kMemoryLocationEnum> _converter(
		Tkdpo2k3k4kMemoryLocation1, _T("Tkdpo2k3k4kMemoryLocation1"),
		Tkdpo2k3k4kMemoryLocation2, _T("Tkdpo2k3k4kMemoryLocation2"),
		Tkdpo2k3k4kMemoryLocation3, _T("Tkdpo2k3k4kMemoryLocation3"),
		Tkdpo2k3k4kMemoryLocation4, _T("Tkdpo2k3k4kMemoryLocation4"),
		Tkdpo2k3k4kMemoryLocation5, _T("Tkdpo2k3k4kMemoryLocation5"),
		Tkdpo2k3k4kMemoryLocation6, _T("Tkdpo2k3k4kMemoryLocation6"),
		Tkdpo2k3k4kMemoryLocation7, _T("Tkdpo2k3k4kMemoryLocation7"),
		Tkdpo2k3k4kMemoryLocation8, _T("Tkdpo2k3k4kMemoryLocation8"),
		Tkdpo2k3k4kMemoryLocation9, _T("Tkdpo2k3k4kMemoryLocation9"),
		Tkdpo2k3k4kMemoryLocation10, _T("Tkdpo2k3k4kMemoryLocation10"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kReferenceEnum>* GetEnumNameConverter<Tkdpo2k3k4kReferenceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kReferenceEnum> _converter(
		Tkdpo2k3k4kReference1, _T("Tkdpo2k3k4kReference1"),
		Tkdpo2k3k4kReference2, _T("Tkdpo2k3k4kReference2"),
		Tkdpo2k3k4kReference3, _T("Tkdpo2k3k4kReference3"),
		Tkdpo2k3k4kReference4, _T("Tkdpo2k3k4kReference4"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSaveWaveformFileFormatEnum> _converter(
		Tkdpo2k3k4kSaveWaveformFileFormatInternal, _T("Tkdpo2k3k4kSaveWaveformFileFormatInternal"),
		Tkdpo2k3k4kSaveWaveformFileFormatSpreadSheet, _T("Tkdpo2k3k4kSaveWaveformFileFormatSpreadSheet"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSaveButtonTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kSaveButtonTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSaveButtonTypeEnum> _converter(
		Tkdpo2k3k4kSaveButtonTypeImage, _T("Tkdpo2k3k4kSaveButtonTypeImage"),
		Tkdpo2k3k4kSaveButtonTypeWaveform, _T("Tkdpo2k3k4kSaveButtonTypeWaveform"),
		Tkdpo2k3k4kSaveButtonTypeSetup, _T("Tkdpo2k3k4kSaveButtonTypeSetup"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kImageFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kImageFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kImageFormatEnum> _converter(
		Tkdpo2k3k4kImageFormatPNG, _T("Tkdpo2k3k4kImageFormatPNG"),
		Tkdpo2k3k4kImageFormatBMP, _T("Tkdpo2k3k4kImageFormatBMP"),
		Tkdpo2k3k4kImageFormatTIFF, _T("Tkdpo2k3k4kImageFormatTIFF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kImageLayoutEnum>* GetEnumNameConverter<Tkdpo2k3k4kImageLayoutEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kImageLayoutEnum> _converter(
		Tkdpo2k3k4kImageLayoutLandscape, _T("Tkdpo2k3k4kImageLayoutLandscape"),
		Tkdpo2k3k4kImageLayoutPortrait, _T("Tkdpo2k3k4kImageLayoutPortrait"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchCopyEnum>* GetEnumNameConverter<Tkdpo2k3k4kSearchCopyEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchCopyEnum> _converter(
		Tkdpo2k3k4kSearchCopySearchTriggerToSearch, _T("Tkdpo2k3k4kSearchCopySearchTriggerToSearch"),
		Tkdpo2k3k4kSearchCopySearchSearchToTrigger, _T("Tkdpo2k3k4kSearchCopySearchSearchToTrigger"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kSearchSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchSourceEnum> _converter(
		Tkdpo2k3k4kSearchSourceCH1, _T("Tkdpo2k3k4kSearchSourceCH1"),
		Tkdpo2k3k4kSearchSourceCH2, _T("Tkdpo2k3k4kSearchSourceCH2"),
		Tkdpo2k3k4kSearchSourceCH3, _T("Tkdpo2k3k4kSearchSourceCH3"),
		Tkdpo2k3k4kSearchSourceCH4, _T("Tkdpo2k3k4kSearchSourceCH4"),
		Tkdpo2k3k4kSearchSourceMath, _T("Tkdpo2k3k4kSearchSourceMath"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerRuntConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerRuntConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerRuntConditionEnum> _converter(
		Tkdpo2k3k4kTriggerRuntConditionLessthan, _T("Tkdpo2k3k4kTriggerRuntConditionLessthan"),
		Tkdpo2k3k4kTriggerRuntConditionMorethan, _T("Tkdpo2k3k4kTriggerRuntConditionMorethan"),
		Tkdpo2k3k4kTriggerRuntConditionEqual, _T("Tkdpo2k3k4kTriggerRuntConditionEqual"),
		Tkdpo2k3k4kTriggerRuntConditionUnequal, _T("Tkdpo2k3k4kTriggerRuntConditionUnequal"),
		Tkdpo2k3k4kTriggerRuntConditionOccurs, _T("Tkdpo2k3k4kTriggerRuntConditionOccurs"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerPulsePolarityEnum> _converter(
		Tkdpo2k3k4kTriggerPulsePolarityNegative, _T("Tkdpo2k3k4kTriggerPulsePolarityNegative"),
		Tkdpo2k3k4kTriggerPulsePolarityPositive, _T("Tkdpo2k3k4kTriggerPulsePolarityPositive"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerTransitionConditionEnum> _converter(
		Tkdpo2k3k4kTriggerTransitionConditionSlower, _T("Tkdpo2k3k4kTriggerTransitionConditionSlower"),
		Tkdpo2k3k4kTriggerTransitionConditionFaster, _T("Tkdpo2k3k4kTriggerTransitionConditionFaster"),
		Tkdpo2k3k4kTriggerTransitionConditionEqual, _T("Tkdpo2k3k4kTriggerTransitionConditionEqual"),
		Tkdpo2k3k4kTriggerTransitionConditionUnequal, _T("Tkdpo2k3k4kTriggerTransitionConditionUnequal"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerLogicInputChannelEnum> _converter(
		Tkdpo2k3k4kTriggerLogicInputChannelHigh, _T("Tkdpo2k3k4kTriggerLogicInputChannelHigh"),
		Tkdpo2k3k4kTriggerLogicInputChannelLow, _T("Tkdpo2k3k4kTriggerLogicInputChannelLow"),
		Tkdpo2k3k4kTriggerLogicInputChannelX, _T("Tkdpo2k3k4kTriggerLogicInputChannelX"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerPatternConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerPatternConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerPatternConditionEnum> _converter(
		Tkdpo2k3k4kTriggerPatternConditionTrue, _T("Tkdpo2k3k4kTriggerPatternConditionTrue"),
		Tkdpo2k3k4kTriggerPatternConditionFalse, _T("Tkdpo2k3k4kTriggerPatternConditionFalse"),
		Tkdpo2k3k4kTriggerPatternConditionLessthan, _T("Tkdpo2k3k4kTriggerPatternConditionLessthan"),
		Tkdpo2k3k4kTriggerPatternConditionMorethan, _T("Tkdpo2k3k4kTriggerPatternConditionMorethan"),
		Tkdpo2k3k4kTriggerPatternConditionEqual, _T("Tkdpo2k3k4kTriggerPatternConditionEqual"),
		Tkdpo2k3k4kTriggerPatternConditionUnequal, _T("Tkdpo2k3k4kTriggerPatternConditionUnequal"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchSource2Enum>* GetEnumNameConverter<Tkdpo2k3k4kSearchSource2Enum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchSource2Enum> _converter(
		Tkdpo2k3k4kSearchSource2CH1, _T("Tkdpo2k3k4kSearchSource2CH1"),
		Tkdpo2k3k4kSearchSource2CH2, _T("Tkdpo2k3k4kSearchSource2CH2"),
		Tkdpo2k3k4kSearchSource2CH3, _T("Tkdpo2k3k4kSearchSource2CH3"),
		Tkdpo2k3k4kSearchSource2CH4, _T("Tkdpo2k3k4kSearchSource2CH4"),
		Tkdpo2k3k4kSearchSource2Math, _T("Tkdpo2k3k4kSearchSource2Math"),
		Tkdpo2k3k4kSearchSource2REF1, _T("Tkdpo2k3k4kSearchSource2REF1"),
		Tkdpo2k3k4kSearchSource2REF2, _T("Tkdpo2k3k4kSearchSource2REF2"),
		Tkdpo2k3k4kSearchSource2REF3, _T("Tkdpo2k3k4kSearchSource2REF3"),
		Tkdpo2k3k4kSearchSource2REF4, _T("Tkdpo2k3k4kSearchSource2REF4"),
		Tkdpo2k3k4kSearchSource2RFAmplitude, _T("Tkdpo2k3k4kSearchSource2RFAmplitude"),
		Tkdpo2k3k4kSearchSource2RFFrequency, _T("Tkdpo2k3k4kSearchSource2RFFrequency"),
		Tkdpo2k3k4kSearchSource2RFPhase, _T("Tkdpo2k3k4kSearchSource2RFPhase"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerLogicOperatorTypeEnum> _converter(
		Tkdpo2k3k4kTriggerLogicOperatorTypeAND, _T("Tkdpo2k3k4kTriggerLogicOperatorTypeAND"),
		Tkdpo2k3k4kTriggerLogicOperatorTypeNAND, _T("Tkdpo2k3k4kTriggerLogicOperatorTypeNAND"),
		Tkdpo2k3k4kTriggerLogicOperatorTypeNOR, _T("Tkdpo2k3k4kTriggerLogicOperatorTypeNOR"),
		Tkdpo2k3k4kTriggerLogicOperatorTypeOR, _T("Tkdpo2k3k4kTriggerLogicOperatorTypeOR"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchSource3Enum>* GetEnumNameConverter<Tkdpo2k3k4kSearchSource3Enum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchSource3Enum> _converter(
		Tkdpo2k3k4kSearchSource3CH1, _T("Tkdpo2k3k4kSearchSource3CH1"),
		Tkdpo2k3k4kSearchSource3CH2, _T("Tkdpo2k3k4kSearchSource3CH2"),
		Tkdpo2k3k4kSearchSource3CH3, _T("Tkdpo2k3k4kSearchSource3CH3"),
		Tkdpo2k3k4kSearchSource3CH4, _T("Tkdpo2k3k4kSearchSource3CH4"),
		Tkdpo2k3k4kSearchSource3Math, _T("Tkdpo2k3k4kSearchSource3Math"),
		Tkdpo2k3k4kSearchSource3REF1, _T("Tkdpo2k3k4kSearchSource3REF1"),
		Tkdpo2k3k4kSearchSource3REF2, _T("Tkdpo2k3k4kSearchSource3REF2"),
		Tkdpo2k3k4kSearchSource3REF3, _T("Tkdpo2k3k4kSearchSource3REF3"),
		Tkdpo2k3k4kSearchSource3REF4, _T("Tkdpo2k3k4kSearchSource3REF4"),
		Tkdpo2k3k4kSearchSource3D0, _T("Tkdpo2k3k4kSearchSource3D0"),
		Tkdpo2k3k4kSearchSource3D1, _T("Tkdpo2k3k4kSearchSource3D1"),
		Tkdpo2k3k4kSearchSource3D2, _T("Tkdpo2k3k4kSearchSource3D2"),
		Tkdpo2k3k4kSearchSource3D3, _T("Tkdpo2k3k4kSearchSource3D3"),
		Tkdpo2k3k4kSearchSource3D4, _T("Tkdpo2k3k4kSearchSource3D4"),
		Tkdpo2k3k4kSearchSource3D5, _T("Tkdpo2k3k4kSearchSource3D5"),
		Tkdpo2k3k4kSearchSource3D6, _T("Tkdpo2k3k4kSearchSource3D6"),
		Tkdpo2k3k4kSearchSource3D7, _T("Tkdpo2k3k4kSearchSource3D7"),
		Tkdpo2k3k4kSearchSource3D8, _T("Tkdpo2k3k4kSearchSource3D8"),
		Tkdpo2k3k4kSearchSource3D9, _T("Tkdpo2k3k4kSearchSource3D9"),
		Tkdpo2k3k4kSearchSource3D10, _T("Tkdpo2k3k4kSearchSource3D10"),
		Tkdpo2k3k4kSearchSource3D11, _T("Tkdpo2k3k4kSearchSource3D11"),
		Tkdpo2k3k4kSearchSource3D12, _T("Tkdpo2k3k4kSearchSource3D12"),
		Tkdpo2k3k4kSearchSource3D13, _T("Tkdpo2k3k4kSearchSource3D13"),
		Tkdpo2k3k4kSearchSource3D14, _T("Tkdpo2k3k4kSearchSource3D14"),
		Tkdpo2k3k4kSearchSource3D15, _T("Tkdpo2k3k4kSearchSource3D15"),
		Tkdpo2k3k4kSearchSource3NONE, _T("Tkdpo2k3k4kSearchSource3NONE"),
		Tkdpo2k3k4kSearchSource3RFAmplitude, _T("Tkdpo2k3k4kSearchSource3RFAmplitude"),
		Tkdpo2k3k4kSearchSource3RFFrequency, _T("Tkdpo2k3k4kSearchSource3RFFrequency"),
		Tkdpo2k3k4kSearchSource3RFPhase, _T("Tkdpo2k3k4kSearchSource3RFPhase"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum> _converter(
		Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall, _T("Tkdpo2k3k4kTriggerLogicClockEdgeTypeFall"),
		Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise, _T("Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise"),
		Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither, _T("Tkdpo2k3k4kTriggerLogicClockEdgeTypeEither"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerLogicClockSourceEnum> _converter(
		Tkdpo2k3k4kTriggerLogicClockSourceCH1, _T("Tkdpo2k3k4kTriggerLogicClockSourceCH1"),
		Tkdpo2k3k4kTriggerLogicClockSourceCH2, _T("Tkdpo2k3k4kTriggerLogicClockSourceCH2"),
		Tkdpo2k3k4kTriggerLogicClockSourceCH3, _T("Tkdpo2k3k4kTriggerLogicClockSourceCH3"),
		Tkdpo2k3k4kTriggerLogicClockSourceCH4, _T("Tkdpo2k3k4kTriggerLogicClockSourceCH4"),
		Tkdpo2k3k4kTriggerLogicClockSourceMath, _T("Tkdpo2k3k4kTriggerLogicClockSourceMath"),
		Tkdpo2k3k4kTriggerLogicClockSourceREF1, _T("Tkdpo2k3k4kTriggerLogicClockSourceREF1"),
		Tkdpo2k3k4kTriggerLogicClockSourceREF2, _T("Tkdpo2k3k4kTriggerLogicClockSourceREF2"),
		Tkdpo2k3k4kTriggerLogicClockSourceREF3, _T("Tkdpo2k3k4kTriggerLogicClockSourceREF3"),
		Tkdpo2k3k4kTriggerLogicClockSourceREF4, _T("Tkdpo2k3k4kTriggerLogicClockSourceREF4"),
		Tkdpo2k3k4kTriggerLogicClockSourceD0, _T("Tkdpo2k3k4kTriggerLogicClockSourceD0"),
		Tkdpo2k3k4kTriggerLogicClockSourceD1, _T("Tkdpo2k3k4kTriggerLogicClockSourceD1"),
		Tkdpo2k3k4kTriggerLogicClockSourceD2, _T("Tkdpo2k3k4kTriggerLogicClockSourceD2"),
		Tkdpo2k3k4kTriggerLogicClockSourceD3, _T("Tkdpo2k3k4kTriggerLogicClockSourceD3"),
		Tkdpo2k3k4kTriggerLogicClockSourceD4, _T("Tkdpo2k3k4kTriggerLogicClockSourceD4"),
		Tkdpo2k3k4kTriggerLogicClockSourceD5, _T("Tkdpo2k3k4kTriggerLogicClockSourceD5"),
		Tkdpo2k3k4kTriggerLogicClockSourceD6, _T("Tkdpo2k3k4kTriggerLogicClockSourceD6"),
		Tkdpo2k3k4kTriggerLogicClockSourceD7, _T("Tkdpo2k3k4kTriggerLogicClockSourceD7"),
		Tkdpo2k3k4kTriggerLogicClockSourceD8, _T("Tkdpo2k3k4kTriggerLogicClockSourceD8"),
		Tkdpo2k3k4kTriggerLogicClockSourceD9, _T("Tkdpo2k3k4kTriggerLogicClockSourceD9"),
		Tkdpo2k3k4kTriggerLogicClockSourceD10, _T("Tkdpo2k3k4kTriggerLogicClockSourceD10"),
		Tkdpo2k3k4kTriggerLogicClockSourceD11, _T("Tkdpo2k3k4kTriggerLogicClockSourceD11"),
		Tkdpo2k3k4kTriggerLogicClockSourceD12, _T("Tkdpo2k3k4kTriggerLogicClockSourceD12"),
		Tkdpo2k3k4kTriggerLogicClockSourceD13, _T("Tkdpo2k3k4kTriggerLogicClockSourceD13"),
		Tkdpo2k3k4kTriggerLogicClockSourceD14, _T("Tkdpo2k3k4kTriggerLogicClockSourceD14"),
		Tkdpo2k3k4kTriggerLogicClockSourceD15, _T("Tkdpo2k3k4kTriggerLogicClockSourceD15"),
		Tkdpo2k3k4kTriggerLogicClockSourceNone, _T("Tkdpo2k3k4kTriggerLogicClockSourceNone"),
		Tkdpo2k3k4kTriggerLogicClockSourceRF, _T("Tkdpo2k3k4kTriggerLogicClockSourceRF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kSearchTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchTypeEnum> _converter(
		Tkdpo2k3k4kSearchTypeEdge, _T("Tkdpo2k3k4kSearchTypeEdge"),
		Tkdpo2k3k4kSearchTypeSethold, _T("Tkdpo2k3k4kSearchTypeSethold"),
		Tkdpo2k3k4kSearchTypePulsewidth, _T("Tkdpo2k3k4kSearchTypePulsewidth"),
		Tkdpo2k3k4kSearchTypeRunt, _T("Tkdpo2k3k4kSearchTypeRunt"),
		Tkdpo2k3k4kSearchTypeTransition, _T("Tkdpo2k3k4kSearchTypeTransition"),
		Tkdpo2k3k4kSearchTypeLogic, _T("Tkdpo2k3k4kSearchTypeLogic"),
		Tkdpo2k3k4kSearchTypeBus, _T("Tkdpo2k3k4kSearchTypeBus"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusSourceEnum> _converter(
		Tkdpo2k3k4kTrigABusSourceB1, _T("Tkdpo2k3k4kTrigABusSourceB1"),
		Tkdpo2k3k4kTrigABusSourceB2, _T("Tkdpo2k3k4kTrigABusSourceB2"),
		Tkdpo2k3k4kTrigABusSourceB3, _T("Tkdpo2k3k4kTrigABusSourceB3"),
		Tkdpo2k3k4kTrigABusSourceB4, _T("Tkdpo2k3k4kTrigABusSourceB4"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusAudioConditionSOF, _T("Tkdpo2k3k4kTrigABusAudioConditionSOF"),
		Tkdpo2k3k4kTrigABusAudioConditionData, _T("Tkdpo2k3k4kTrigABusAudioConditionData"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataQualifierEnum> _converter(
		Tkdpo2k3k4kTrigABusAudioDataQualifierLessthan, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierLessthan"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierMorethan, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierMorethan"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierEqual, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierEqual"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierUnequal, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierUnequal"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierLessEqual, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierLessEqual"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierMoreEqual, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierMoreEqual"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierInrange, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierInrange"),
		Tkdpo2k3k4kTrigABusAudioDataQualifierOutrange, _T("Tkdpo2k3k4kTrigABusAudioDataQualifierOutrange"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum> _converter(
		Tkdpo2k3k4kTrigABusAudioDataAlignmentEither, _T("Tkdpo2k3k4kTrigABusAudioDataAlignmentEither"),
		Tkdpo2k3k4kTrigABusAudioDataAlignmentLeft, _T("Tkdpo2k3k4kTrigABusAudioDataAlignmentLeft"),
		Tkdpo2k3k4kTrigABusAudioDataAlignmentRight, _T("Tkdpo2k3k4kTrigABusAudioDataAlignmentRight"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusCANConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusCANConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusCANConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusCANConditionSOF, _T("Tkdpo2k3k4kTrigABusCANConditionSOF"),
		Tkdpo2k3k4kTrigABusCANConditionFrameType, _T("Tkdpo2k3k4kTrigABusCANConditionFrameType"),
		Tkdpo2k3k4kTrigABusCANConditionIdentifier, _T("Tkdpo2k3k4kTrigABusCANConditionIdentifier"),
		Tkdpo2k3k4kTrigABusCANConditionData, _T("Tkdpo2k3k4kTrigABusCANConditionData"),
		Tkdpo2k3k4kTrigABusCANConditionIdentifierData, _T("Tkdpo2k3k4kTrigABusCANConditionIdentifierData"),
		Tkdpo2k3k4kTrigABusCANConditionEOF, _T("Tkdpo2k3k4kTrigABusCANConditionEOF"),
		Tkdpo2k3k4kTrigABusCANConditionACKMiss, _T("Tkdpo2k3k4kTrigABusCANConditionACKMiss"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusCANDataDirectionEnum> _converter(
		Tkdpo2k3k4kTrigABusCANDataDirectionREAD, _T("Tkdpo2k3k4kTrigABusCANDataDirectionREAD"),
		Tkdpo2k3k4kTrigABusCANDataDirectionWRITE, _T("Tkdpo2k3k4kTrigABusCANDataDirectionWRITE"),
		Tkdpo2k3k4kTrigABusCANDataDirectionNOCARE, _T("Tkdpo2k3k4kTrigABusCANDataDirectionNOCARE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusCANQualifierEnum> _converter(
		Tkdpo2k3k4kTrigABusCANQualifierLessthan, _T("Tkdpo2k3k4kTrigABusCANQualifierLessthan"),
		Tkdpo2k3k4kTrigABusCANQualifierMorethan, _T("Tkdpo2k3k4kTrigABusCANQualifierMorethan"),
		Tkdpo2k3k4kTrigABusCANQualifierEqual, _T("Tkdpo2k3k4kTrigABusCANQualifierEqual"),
		Tkdpo2k3k4kTrigABusCANQualifierUnequal, _T("Tkdpo2k3k4kTrigABusCANQualifierUnequal"),
		Tkdpo2k3k4kTrigABusCANQualifierLessEqual, _T("Tkdpo2k3k4kTrigABusCANQualifierLessEqual"),
		Tkdpo2k3k4kTrigABusCANQualifierMoreEqual, _T("Tkdpo2k3k4kTrigABusCANQualifierMoreEqual"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusCANFrameTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusCANFrameTypeData, _T("Tkdpo2k3k4kTrigABusCANFrameTypeData"),
		Tkdpo2k3k4kTrigABusCANFrameTypeRemote, _T("Tkdpo2k3k4kTrigABusCANFrameTypeRemote"),
		Tkdpo2k3k4kTrigABusCANFrameTypeError, _T("Tkdpo2k3k4kTrigABusCANFrameTypeError"),
		Tkdpo2k3k4kTrigABusCANFrameTypeOverload, _T("Tkdpo2k3k4kTrigABusCANFrameTypeOverload"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusCANAddressModeEnum> _converter(
		Tkdpo2k3k4kTrigABusCANAddressModeStandard, _T("Tkdpo2k3k4kTrigABusCANAddressModeStandard"),
		Tkdpo2k3k4kTrigABusCANAddressModeExtended, _T("Tkdpo2k3k4kTrigABusCANAddressModeExtended"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusFlexrayConditionSOF, _T("Tkdpo2k3k4kTrigABusFlexrayConditionSOF"),
		Tkdpo2k3k4kTrigABusFlexrayConditionFrameType, _T("Tkdpo2k3k4kTrigABusFlexrayConditionFrameType"),
		Tkdpo2k3k4kTrigABusFlexrayConditionData, _T("Tkdpo2k3k4kTrigABusFlexrayConditionData"),
		Tkdpo2k3k4kTrigABusFlexrayConditionIdentifierData, _T("Tkdpo2k3k4kTrigABusFlexrayConditionIdentifierData"),
		Tkdpo2k3k4kTrigABusFlexrayConditionEOF, _T("Tkdpo2k3k4kTrigABusFlexrayConditionEOF"),
		Tkdpo2k3k4kTrigABusFlexrayConditionCyclecount, _T("Tkdpo2k3k4kTrigABusFlexrayConditionCyclecount"),
		Tkdpo2k3k4kTrigABusFlexrayConditionHeader, _T("Tkdpo2k3k4kTrigABusFlexrayConditionHeader"),
		Tkdpo2k3k4kTrigABusFlexrayConditionError, _T("Tkdpo2k3k4kTrigABusFlexrayConditionError"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum> _converter(
		Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountLessthan"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountMorethan"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountUnequal"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountLessEqual"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountMoreEqual"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountInrange"),
		Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange, _T("Tkdpo2k3k4kTrigABusFlexrayCycleCountOutrange"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusFlexrayEOFTypeStatic, _T("Tkdpo2k3k4kTrigABusFlexrayEOFTypeStatic"),
		Tkdpo2k3k4kTrigABusFlexrayEOFTypeDynamic, _T("Tkdpo2k3k4kTrigABusFlexrayEOFTypeDynamic"),
		Tkdpo2k3k4kTrigABusFlexrayEOFTypeAny, _T("Tkdpo2k3k4kTrigABusFlexrayEOFTypeAny"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusFlexrayFrameTypeNormal, _T("Tkdpo2k3k4kTrigABusFlexrayFrameTypeNormal"),
		Tkdpo2k3k4kTrigABusFlexrayFrameTypePayload, _T("Tkdpo2k3k4kTrigABusFlexrayFrameTypePayload"),
		Tkdpo2k3k4kTrigABusFlexrayFrameTypeNull, _T("Tkdpo2k3k4kTrigABusFlexrayFrameTypeNull"),
		Tkdpo2k3k4kTrigABusFlexrayFrameTypeSync, _T("Tkdpo2k3k4kTrigABusFlexrayFrameTypeSync"),
		Tkdpo2k3k4kTrigABusFlexrayFrameTypeStartup, _T("Tkdpo2k3k4kTrigABusFlexrayFrameTypeStartup"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCHeader, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCHeader"),
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCTrailer, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeCRCTrailer"),
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeSYNCFrame, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeSYNCFrame"),
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeSTARTupnosync, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeSTARTupnosync"),
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRStatic, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRStatic"),
		Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRDynamic, _T("Tkdpo2k3k4kTrigABusFlexrayErrorTypeNULLFRDynamic"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CDataDirectionEnum> _converter(
		Tkdpo2k3k4kTrigABusI2CDataDirectionREAD, _T("Tkdpo2k3k4kTrigABusI2CDataDirectionREAD"),
		Tkdpo2k3k4kTrigABusI2CDataDirectionWRITE, _T("Tkdpo2k3k4kTrigABusI2CDataDirectionWRITE"),
		Tkdpo2k3k4kTrigABusI2CDataDirectionNOCARE, _T("Tkdpo2k3k4kTrigABusI2CDataDirectionNOCARE"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CTrigConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusI2CTrigConditionSTART, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionSTART"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionSTOP, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionSTOP"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionREPEATSTART, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionREPEATSTART"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionACKMISS, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionACKMISS"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionADDRESS, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionADDRESS"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionDATA, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionDATA"),
		Tkdpo2k3k4kTrigABusI2CTrigConditionADDRANDDATA, _T("Tkdpo2k3k4kTrigABusI2CTrigConditionADDRANDDATA"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusI2CAddrModeEnum> _converter(
		Tkdpo2k3k4kTrigABusI2CAddrModeADDR7, _T("Tkdpo2k3k4kTrigABusI2CAddrModeADDR7"),
		Tkdpo2k3k4kTrigABusI2CAddrModeADDR10, _T("Tkdpo2k3k4kTrigABusI2CAddrModeADDR10"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusLINConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusLINConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusLINConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusLINConditionSYNCField, _T("Tkdpo2k3k4kTrigABusLINConditionSYNCField"),
		Tkdpo2k3k4kTrigABusLINConditionIDentifier, _T("Tkdpo2k3k4kTrigABusLINConditionIDentifier"),
		Tkdpo2k3k4kTrigABusLINConditionDATA, _T("Tkdpo2k3k4kTrigABusLINConditionDATA"),
		Tkdpo2k3k4kTrigABusLINConditionIDANDDATA, _T("Tkdpo2k3k4kTrigABusLINConditionIDANDDATA"),
		Tkdpo2k3k4kTrigABusLINConditionWAKEup, _T("Tkdpo2k3k4kTrigABusLINConditionWAKEup"),
		Tkdpo2k3k4kTrigABusLINConditionSLEEP, _T("Tkdpo2k3k4kTrigABusLINConditionSLEEP"),
		Tkdpo2k3k4kTrigABusLINConditionERROR, _T("Tkdpo2k3k4kTrigABusLINConditionERROR"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusLINQualifierEnum> _converter(
		Tkdpo2k3k4kTrigABusLINQualifierLessthan, _T("Tkdpo2k3k4kTrigABusLINQualifierLessthan"),
		Tkdpo2k3k4kTrigABusLINQualifierMorethan, _T("Tkdpo2k3k4kTrigABusLINQualifierMorethan"),
		Tkdpo2k3k4kTrigABusLINQualifierEqual, _T("Tkdpo2k3k4kTrigABusLINQualifierEqual"),
		Tkdpo2k3k4kTrigABusLINQualifierUnequal, _T("Tkdpo2k3k4kTrigABusLINQualifierUnequal"),
		Tkdpo2k3k4kTrigABusLINQualifierLessEqual, _T("Tkdpo2k3k4kTrigABusLINQualifierLessEqual"),
		Tkdpo2k3k4kTrigABusLINQualifierMoreEqual, _T("Tkdpo2k3k4kTrigABusLINQualifierMoreEqual"),
		Tkdpo2k3k4kTrigABusLINQualifierInrange, _T("Tkdpo2k3k4kTrigABusLINQualifierInrange"),
		Tkdpo2k3k4kTrigABusLINQualifierOutrange, _T("Tkdpo2k3k4kTrigABusLINQualifierOutrange"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusLINErrorTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusLINErrorTypeSYNC, _T("Tkdpo2k3k4kTrigABusLINErrorTypeSYNC"),
		Tkdpo2k3k4kTrigABusLINErrorTypePARity, _T("Tkdpo2k3k4kTrigABusLINErrorTypePARity"),
		Tkdpo2k3k4kTrigABusLINErrorTypeCHecksum, _T("Tkdpo2k3k4kTrigABusLINErrorTypeCHecksum"),
		Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime, _T("Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime"),
		Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime, _T("Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime"),
		Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime, _T("Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusRS232ConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusRS232ConditionRXData, _T("Tkdpo2k3k4kTrigABusRS232ConditionRXData"),
		Tkdpo2k3k4kTrigABusRS232ConditionRXEOP, _T("Tkdpo2k3k4kTrigABusRS232ConditionRXEOP"),
		Tkdpo2k3k4kTrigABusRS232ConditionRXParityError, _T("Tkdpo2k3k4kTrigABusRS232ConditionRXParityError"),
		Tkdpo2k3k4kTrigABusRS232ConditionRXStart, _T("Tkdpo2k3k4kTrigABusRS232ConditionRXStart"),
		Tkdpo2k3k4kTrigABusRS232ConditionTXData, _T("Tkdpo2k3k4kTrigABusRS232ConditionTXData"),
		Tkdpo2k3k4kTrigABusRS232ConditionTXEOP, _T("Tkdpo2k3k4kTrigABusRS232ConditionTXEOP"),
		Tkdpo2k3k4kTrigABusRS232ConditionTXParityError, _T("Tkdpo2k3k4kTrigABusRS232ConditionTXParityError"),
		Tkdpo2k3k4kTrigABusRS232ConditionTXStart, _T("Tkdpo2k3k4kTrigABusRS232ConditionTXStart"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusSPIConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusSPIConditionSS, _T("Tkdpo2k3k4kTrigABusSPIConditionSS"),
		Tkdpo2k3k4kTrigABusSPIConditionMISO, _T("Tkdpo2k3k4kTrigABusSPIConditionMISO"),
		Tkdpo2k3k4kTrigABusSPIConditionMOSI, _T("Tkdpo2k3k4kTrigABusSPIConditionMOSI"),
		Tkdpo2k3k4kTrigABusSPIConditionMISOMOSI, _T("Tkdpo2k3k4kTrigABusSPIConditionMISOMOSI"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBSpecialTypeANY, _T("Tkdpo2k3k4kTrigABusUSBSpecialTypeANY"),
		Tkdpo2k3k4kTrigABusUSBSpecialPreamble, _T("Tkdpo2k3k4kTrigABusUSBSpecialPreamble"),
		Tkdpo2k3k4kTrigABusUSBSpecialTypeRESERVED, _T("Tkdpo2k3k4kTrigABusUSBSpecialTypeRESERVED"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBQualifierEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBQualifierEQUAL, _T("Tkdpo2k3k4kTrigABusUSBQualifierEQUAL"),
		Tkdpo2k3k4kTrigABusUSBQualifierINRANGE, _T("Tkdpo2k3k4kTrigABusUSBQualifierINRANGE"),
		Tkdpo2k3k4kTrigABusUSBQualifierLESSEQUAL, _T("Tkdpo2k3k4kTrigABusUSBQualifierLESSEQUAL"),
		Tkdpo2k3k4kTrigABusUSBQualifierMOREEQUAL, _T("Tkdpo2k3k4kTrigABusUSBQualifierMOREEQUAL"),
		Tkdpo2k3k4kTrigABusUSBQualifierOUTRANGE, _T("Tkdpo2k3k4kTrigABusUSBQualifierOUTRANGE"),
		Tkdpo2k3k4kTrigABusUSBQualifierUNEQUAL, _T("Tkdpo2k3k4kTrigABusUSBQualifierUNEQUAL"),
		Tkdpo2k3k4kTrigABusUSBQualifierLESSTHAN, _T("Tkdpo2k3k4kTrigABusUSBQualifierLESSTHAN"),
		Tkdpo2k3k4kTrigABusUSBQualifierMORETHAN, _T("Tkdpo2k3k4kTrigABusUSBQualifierMORETHAN"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBHandshakeTypeACK, _T("Tkdpo2k3k4kTrigABusUSBHandshakeTypeACK"),
		Tkdpo2k3k4kTrigABusUSBHandshakeTypeANY, _T("Tkdpo2k3k4kTrigABusUSBHandshakeTypeANY"),
		Tkdpo2k3k4kTrigABusUSBHandshakeTypeNAK, _T("Tkdpo2k3k4kTrigABusUSBHandshakeTypeNAK"),
		Tkdpo2k3k4kTrigABusUSBHandshakeTypeSTALL, _T("Tkdpo2k3k4kTrigABusUSBHandshakeTypeSTALL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBERRTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBERRTypeBitStuffing, _T("Tkdpo2k3k4kTrigABusUSBERRTypeBitStuffing"),
		Tkdpo2k3k4kTrigABusUSBERRTypeCRC16, _T("Tkdpo2k3k4kTrigABusUSBERRTypeCRC16"),
		Tkdpo2k3k4kTrigABusUSBERRTypeCRC5, _T("Tkdpo2k3k4kTrigABusUSBERRTypeCRC5"),
		Tkdpo2k3k4kTrigABusUSBERRTypePID, _T("Tkdpo2k3k4kTrigABusUSBERRTypePID"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBDATATypeEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBDATATypeDATA0, _T("Tkdpo2k3k4kTrigABusUSBDATATypeDATA0"),
		Tkdpo2k3k4kTrigABusUSBDATATypeDATA1, _T("Tkdpo2k3k4kTrigABusUSBDATATypeDATA1"),
		Tkdpo2k3k4kTrigABusUSBDATATypeAny, _T("Tkdpo2k3k4kTrigABusUSBDATATypeAny"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBConditionEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBConditionSYNC, _T("Tkdpo2k3k4kTrigABusUSBConditionSYNC"),
		Tkdpo2k3k4kTrigABusUSBConditionRESET, _T("Tkdpo2k3k4kTrigABusUSBConditionRESET"),
		Tkdpo2k3k4kTrigABusUSBConditionSUSPEND, _T("Tkdpo2k3k4kTrigABusUSBConditionSUSPEND"),
		Tkdpo2k3k4kTrigABusUSBConditionRESUME, _T("Tkdpo2k3k4kTrigABusUSBConditionRESUME"),
		Tkdpo2k3k4kTrigABusUSBConditionEOP, _T("Tkdpo2k3k4kTrigABusUSBConditionEOP"),
		Tkdpo2k3k4kTrigABusUSBConditionTOKENPacket, _T("Tkdpo2k3k4kTrigABusUSBConditionTOKENPacket"),
		Tkdpo2k3k4kTrigABusUSBConditionDATAPacket, _T("Tkdpo2k3k4kTrigABusUSBConditionDATAPacket"),
		Tkdpo2k3k4kTrigABusUSBConditionHANDSHAKEPacket, _T("Tkdpo2k3k4kTrigABusUSBConditionHANDSHAKEPacket"),
		Tkdpo2k3k4kTrigABusUSBConditionSPECIALPacket, _T("Tkdpo2k3k4kTrigABusUSBConditionSPECIALPacket"),
		Tkdpo2k3k4kTrigABusUSBConditionERRor, _T("Tkdpo2k3k4kTrigABusUSBConditionERRor"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTrigABusUSBTokenTypeEnum> _converter(
		Tkdpo2k3k4kTrigABusUSBTokenTypeANY, _T("Tkdpo2k3k4kTrigABusUSBTokenTypeANY"),
		Tkdpo2k3k4kTrigABusUSBTokenTypeSOF, _T("Tkdpo2k3k4kTrigABusUSBTokenTypeSOF"),
		Tkdpo2k3k4kTrigABusUSBTokenTypeOUT, _T("Tkdpo2k3k4kTrigABusUSBTokenTypeOUT"),
		Tkdpo2k3k4kTrigABusUSBTokenTypeIN, _T("Tkdpo2k3k4kTrigABusUSBTokenTypeIN"),
		Tkdpo2k3k4kTrigABusUSBTokenTypeSETUP, _T("Tkdpo2k3k4kTrigABusUSBTokenTypeSETUP"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerSource2Enum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerSource2Enum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerSource2Enum> _converter(
		Tkdpo2k3k4kTriggerSource2CH1, _T("Tkdpo2k3k4kTriggerSource2CH1"),
		Tkdpo2k3k4kTriggerSource2CH2, _T("Tkdpo2k3k4kTriggerSource2CH2"),
		Tkdpo2k3k4kTriggerSource2CH3, _T("Tkdpo2k3k4kTriggerSource2CH3"),
		Tkdpo2k3k4kTriggerSource2CH4, _T("Tkdpo2k3k4kTriggerSource2CH4"),
		Tkdpo2k3k4kTriggerSource2D0, _T("Tkdpo2k3k4kTriggerSource2D0"),
		Tkdpo2k3k4kTriggerSource2D1, _T("Tkdpo2k3k4kTriggerSource2D1"),
		Tkdpo2k3k4kTriggerSource2D2, _T("Tkdpo2k3k4kTriggerSource2D2"),
		Tkdpo2k3k4kTriggerSource2D3, _T("Tkdpo2k3k4kTriggerSource2D3"),
		Tkdpo2k3k4kTriggerSource2D4, _T("Tkdpo2k3k4kTriggerSource2D4"),
		Tkdpo2k3k4kTriggerSource2D5, _T("Tkdpo2k3k4kTriggerSource2D5"),
		Tkdpo2k3k4kTriggerSource2D6, _T("Tkdpo2k3k4kTriggerSource2D6"),
		Tkdpo2k3k4kTriggerSource2D7, _T("Tkdpo2k3k4kTriggerSource2D7"),
		Tkdpo2k3k4kTriggerSource2D8, _T("Tkdpo2k3k4kTriggerSource2D8"),
		Tkdpo2k3k4kTriggerSource2D9, _T("Tkdpo2k3k4kTriggerSource2D9"),
		Tkdpo2k3k4kTriggerSource2D10, _T("Tkdpo2k3k4kTriggerSource2D10"),
		Tkdpo2k3k4kTriggerSource2D11, _T("Tkdpo2k3k4kTriggerSource2D11"),
		Tkdpo2k3k4kTriggerSource2D12, _T("Tkdpo2k3k4kTriggerSource2D12"),
		Tkdpo2k3k4kTriggerSource2D13, _T("Tkdpo2k3k4kTriggerSource2D13"),
		Tkdpo2k3k4kTriggerSource2D14, _T("Tkdpo2k3k4kTriggerSource2D14"),
		Tkdpo2k3k4kTriggerSource2D15, _T("Tkdpo2k3k4kTriggerSource2D15"),
		Tkdpo2k3k4kTriggerSource2EXT, _T("Tkdpo2k3k4kTriggerSource2EXT"),
		Tkdpo2k3k4kTriggerSource2Line, _T("Tkdpo2k3k4kTriggerSource2Line"),
		Tkdpo2k3k4kTriggerSource2AUX, _T("Tkdpo2k3k4kTriggerSource2AUX"),
		Tkdpo2k3k4kTriggerSource2RF, _T("Tkdpo2k3k4kTriggerSource2RF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerEdgeCouplingEnum> _converter(
		Tkdpo2k3k4kTriggerEdgeCouplingDC, _T("Tkdpo2k3k4kTriggerEdgeCouplingDC"),
		Tkdpo2k3k4kTriggerEdgeCouplingHFRej, _T("Tkdpo2k3k4kTriggerEdgeCouplingHFRej"),
		Tkdpo2k3k4kTriggerEdgeCouplingLFRej, _T("Tkdpo2k3k4kTriggerEdgeCouplingLFRej"),
		Tkdpo2k3k4kTriggerEdgeCouplingNOISErej, _T("Tkdpo2k3k4kTriggerEdgeCouplingNOISErej"),
		Tkdpo2k3k4kTriggerEdgeCouplingAC, _T("Tkdpo2k3k4kTriggerEdgeCouplingAC"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerLevelEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerLevelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerLevelEnum> _converter(
		Tkdpo2k3k4kTriggerLevelECL, _T("Tkdpo2k3k4kTriggerLevelECL"),
		Tkdpo2k3k4kTriggerLevelTTL, _T("Tkdpo2k3k4kTriggerLevelTTL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerSourceEnum> _converter(
		Tkdpo2k3k4kTriggerSourceCH1, _T("Tkdpo2k3k4kTriggerSourceCH1"),
		Tkdpo2k3k4kTriggerSourceCH2, _T("Tkdpo2k3k4kTriggerSourceCH2"),
		Tkdpo2k3k4kTriggerSourceCH3, _T("Tkdpo2k3k4kTriggerSourceCH3"),
		Tkdpo2k3k4kTriggerSourceCH4, _T("Tkdpo2k3k4kTriggerSourceCH4"),
		Tkdpo2k3k4kTriggerSourceD0, _T("Tkdpo2k3k4kTriggerSourceD0"),
		Tkdpo2k3k4kTriggerSourceD1, _T("Tkdpo2k3k4kTriggerSourceD1"),
		Tkdpo2k3k4kTriggerSourceD2, _T("Tkdpo2k3k4kTriggerSourceD2"),
		Tkdpo2k3k4kTriggerSourceD3, _T("Tkdpo2k3k4kTriggerSourceD3"),
		Tkdpo2k3k4kTriggerSourceD4, _T("Tkdpo2k3k4kTriggerSourceD4"),
		Tkdpo2k3k4kTriggerSourceD5, _T("Tkdpo2k3k4kTriggerSourceD5"),
		Tkdpo2k3k4kTriggerSourceD6, _T("Tkdpo2k3k4kTriggerSourceD6"),
		Tkdpo2k3k4kTriggerSourceD7, _T("Tkdpo2k3k4kTriggerSourceD7"),
		Tkdpo2k3k4kTriggerSourceD8, _T("Tkdpo2k3k4kTriggerSourceD8"),
		Tkdpo2k3k4kTriggerSourceD9, _T("Tkdpo2k3k4kTriggerSourceD9"),
		Tkdpo2k3k4kTriggerSourceD10, _T("Tkdpo2k3k4kTriggerSourceD10"),
		Tkdpo2k3k4kTriggerSourceD11, _T("Tkdpo2k3k4kTriggerSourceD11"),
		Tkdpo2k3k4kTriggerSourceD12, _T("Tkdpo2k3k4kTriggerSourceD12"),
		Tkdpo2k3k4kTriggerSourceD13, _T("Tkdpo2k3k4kTriggerSourceD13"),
		Tkdpo2k3k4kTriggerSourceD14, _T("Tkdpo2k3k4kTriggerSourceD14"),
		Tkdpo2k3k4kTriggerSourceD15, _T("Tkdpo2k3k4kTriggerSourceD15"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoPolarityEnum> _converter(
		Tkdpo2k3k4kTriggerVideoPolarityNegative, _T("Tkdpo2k3k4kTriggerVideoPolarityNegative"),
		Tkdpo2k3k4kTriggerVideoPolarityPositive, _T("Tkdpo2k3k4kTriggerVideoPolarityPositive"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoStandardEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoStandardEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoStandardEnum> _converter(
		Tkdpo2k3k4kTriggerVideoStandardNTSc, _T("Tkdpo2k3k4kTriggerVideoStandardNTSc"),
		Tkdpo2k3k4kTriggerVideoStandardPAL, _T("Tkdpo2k3k4kTriggerVideoStandardPAL"),
		Tkdpo2k3k4kTriggerVideoStandardSECAM, _T("Tkdpo2k3k4kTriggerVideoStandardSECAM"),
		Tkdpo2k3k4kTriggerVideoStandardCUSTom, _T("Tkdpo2k3k4kTriggerVideoStandardCUSTom"),
		Tkdpo2k3k4kTriggerVideoStandardHDtv, _T("Tkdpo2k3k4kTriggerVideoStandardHDtv"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoFieldsEnum> _converter(
		Tkdpo2k3k4kTriggerVideoFieldsODD, _T("Tkdpo2k3k4kTriggerVideoFieldsODD"),
		Tkdpo2k3k4kTriggerVideoFieldsEVEN, _T("Tkdpo2k3k4kTriggerVideoFieldsEVEN"),
		Tkdpo2k3k4kTriggerVideoFieldsALLFields, _T("Tkdpo2k3k4kTriggerVideoFieldsALLFields"),
		Tkdpo2k3k4kTriggerVideoFieldsALLLines, _T("Tkdpo2k3k4kTriggerVideoFieldsALLLines"),
		Tkdpo2k3k4kTriggerVideoFieldsNUMERic, _T("Tkdpo2k3k4kTriggerVideoFieldsNUMERic"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomFormatEnum> _converter(
		Tkdpo2k3k4kTriggerVideoCustomFormatINTERLAced, _T("Tkdpo2k3k4kTriggerVideoCustomFormatINTERLAced"),
		Tkdpo2k3k4kTriggerVideoCustomFormatPROGressive, _T("Tkdpo2k3k4kTriggerVideoCustomFormatPROGressive"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoCustomScanEnum> _converter(
		Tkdpo2k3k4kTriggerVideoCustomScanRATE15K, _T("Tkdpo2k3k4kTriggerVideoCustomScanRATE15K"),
		Tkdpo2k3k4kTriggerVideoCustomScanRATE20K, _T("Tkdpo2k3k4kTriggerVideoCustomScanRATE20K"),
		Tkdpo2k3k4kTriggerVideoCustomScanRATE25K, _T("Tkdpo2k3k4kTriggerVideoCustomScanRATE25K"),
		Tkdpo2k3k4kTriggerVideoCustomScanRATE35K, _T("Tkdpo2k3k4kTriggerVideoCustomScanRATE35K"),
		Tkdpo2k3k4kTriggerVideoCustomScanRATE50K, _T("Tkdpo2k3k4kTriggerVideoCustomScanRATE50K"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerVideoHDTvFormatEnum> _converter(
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P24, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P24"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD720P60, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD720P60"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD480P60, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD480P60"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I50, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I50"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P25, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080P25"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I60, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080I60"),
		Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080PSF24, _T("Tkdpo2k3k4kTriggerVideoHDTvFormatHD1080PSF24"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerBusTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerBusTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerBusTypeEnum> _converter(
		Tkdpo2k3k4kTriggerBusTypeI2C, _T("Tkdpo2k3k4kTriggerBusTypeI2C"),
		Tkdpo2k3k4kTriggerBusTypeSPI, _T("Tkdpo2k3k4kTriggerBusTypeSPI"),
		Tkdpo2k3k4kTriggerBusTypeCAN, _T("Tkdpo2k3k4kTriggerBusTypeCAN"),
		Tkdpo2k3k4kTriggerBusTypeRS232C, _T("Tkdpo2k3k4kTriggerBusTypeRS232C"),
		Tkdpo2k3k4kTriggerBusTypePARallel, _T("Tkdpo2k3k4kTriggerBusTypePARallel"),
		Tkdpo2k3k4kTriggerBusTypeUSB, _T("Tkdpo2k3k4kTriggerBusTypeUSB"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerModeEnum> _converter(
		Tkdpo2k3k4kTriggerModeAUTO, _T("Tkdpo2k3k4kTriggerModeAUTO"),
		Tkdpo2k3k4kTriggerModeNORMal, _T("Tkdpo2k3k4kTriggerModeNORMal"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerBByEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerBByEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerBByEnum> _converter(
		Tkdpo2k3k4kTriggerBByEvents, _T("Tkdpo2k3k4kTriggerBByEvents"),
		Tkdpo2k3k4kTriggerBByTime, _T("Tkdpo2k3k4kTriggerBByTime"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelProbeSignalEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelProbeSignalEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelProbeSignalEnum> _converter(
		Tkdpo2k3k4kChannelProbeSignalPASS, _T("Tkdpo2k3k4kChannelProbeSignalPASS"),
		Tkdpo2k3k4kChannelProbeSignalBYPASS, _T("Tkdpo2k3k4kChannelProbeSignalBYPASS"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelCouplingEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelCouplingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelCouplingEnum> _converter(
		Tkdpo2k3k4kChannelCouplingAC, _T("Tkdpo2k3k4kChannelCouplingAC"),
		Tkdpo2k3k4kChannelCouplingDC, _T("Tkdpo2k3k4kChannelCouplingDC"),
		Tkdpo2k3k4kChannelCouplingGND, _T("Tkdpo2k3k4kChannelCouplingGND"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelTerminationEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelTerminationEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelTerminationEnum> _converter(
		Tkdpo2k3k4kChannelTerminationFifty, _T("Tkdpo2k3k4kChannelTerminationFifty"),
		Tkdpo2k3k4kChannelTerminationMega, _T("Tkdpo2k3k4kChannelTerminationMega"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelBandwidthEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelBandwidthEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelBandwidthEnum> _converter(
		Tkdpo2k3k4kChannelBandwidthTwenty, _T("Tkdpo2k3k4kChannelBandwidthTwenty"),
		Tkdpo2k3k4kChannelBandwidthTwoFifty, _T("Tkdpo2k3k4kChannelBandwidthTwoFifty"),
		Tkdpo2k3k4kChannelBandwidthFull, _T("Tkdpo2k3k4kChannelBandwidthFull"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kProbeDegaussStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kProbeDegaussStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kProbeDegaussStateEnum> _converter(
		Tkdpo2k3k4kProbeDegaussStateNEEDED, _T("Tkdpo2k3k4kProbeDegaussStateNEEDED"),
		Tkdpo2k3k4kProbeDegaussStateRECOMMENDED, _T("Tkdpo2k3k4kProbeDegaussStateRECOMMENDED"),
		Tkdpo2k3k4kProbeDegaussStatePASSED, _T("Tkdpo2k3k4kProbeDegaussStatePASSED"),
		Tkdpo2k3k4kProbeDegaussStateFAILED, _T("Tkdpo2k3k4kProbeDegaussStateFAILED"),
		Tkdpo2k3k4kProbeDegaussStateRUNNING, _T("Tkdpo2k3k4kProbeDegaussStateRUNNING"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDataSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kDataSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDataSourceEnum> _converter(
		Tkdpo2k3k4kDataSourceCH1, _T("Tkdpo2k3k4kDataSourceCH1"),
		Tkdpo2k3k4kDataSourceCH2, _T("Tkdpo2k3k4kDataSourceCH2"),
		Tkdpo2k3k4kDataSourceCH3, _T("Tkdpo2k3k4kDataSourceCH3"),
		Tkdpo2k3k4kDataSourceCH4, _T("Tkdpo2k3k4kDataSourceCH4"),
		Tkdpo2k3k4kDataSourceMath, _T("Tkdpo2k3k4kDataSourceMath"),
		Tkdpo2k3k4kDataSourceREF1, _T("Tkdpo2k3k4kDataSourceREF1"),
		Tkdpo2k3k4kDataSourceREF2, _T("Tkdpo2k3k4kDataSourceREF2"),
		Tkdpo2k3k4kDataSourceREF3, _T("Tkdpo2k3k4kDataSourceREF3"),
		Tkdpo2k3k4kDataSourceREF4, _T("Tkdpo2k3k4kDataSourceREF4"),
		Tkdpo2k3k4kDataSourceD0, _T("Tkdpo2k3k4kDataSourceD0"),
		Tkdpo2k3k4kDataSourceD1, _T("Tkdpo2k3k4kDataSourceD1"),
		Tkdpo2k3k4kDataSourceD2, _T("Tkdpo2k3k4kDataSourceD2"),
		Tkdpo2k3k4kDataSourceD3, _T("Tkdpo2k3k4kDataSourceD3"),
		Tkdpo2k3k4kDataSourceD4, _T("Tkdpo2k3k4kDataSourceD4"),
		Tkdpo2k3k4kDataSourceD5, _T("Tkdpo2k3k4kDataSourceD5"),
		Tkdpo2k3k4kDataSourceD6, _T("Tkdpo2k3k4kDataSourceD6"),
		Tkdpo2k3k4kDataSourceD7, _T("Tkdpo2k3k4kDataSourceD7"),
		Tkdpo2k3k4kDataSourceD8, _T("Tkdpo2k3k4kDataSourceD8"),
		Tkdpo2k3k4kDataSourceD9, _T("Tkdpo2k3k4kDataSourceD9"),
		Tkdpo2k3k4kDataSourceD10, _T("Tkdpo2k3k4kDataSourceD10"),
		Tkdpo2k3k4kDataSourceD11, _T("Tkdpo2k3k4kDataSourceD11"),
		Tkdpo2k3k4kDataSourceD12, _T("Tkdpo2k3k4kDataSourceD12"),
		Tkdpo2k3k4kDataSourceD13, _T("Tkdpo2k3k4kDataSourceD13"),
		Tkdpo2k3k4kDataSourceD14, _T("Tkdpo2k3k4kDataSourceD14"),
		Tkdpo2k3k4kDataSourceD15, _T("Tkdpo2k3k4kDataSourceD15"),
		Tkdpo2k3k4kDataSourceDigital, _T("Tkdpo2k3k4kDataSourceDigital"),
		Tkdpo2k3k4kDataSourceRF_AMPlitude, _T("Tkdpo2k3k4kDataSourceRF_AMPlitude"),
		Tkdpo2k3k4kDataSourceRF_FREQuency, _T("Tkdpo2k3k4kDataSourceRF_FREQuency"),
		Tkdpo2k3k4kDataSourceRF_PHASe, _T("Tkdpo2k3k4kDataSourceRF_PHASe"),
		Tkdpo2k3k4kDataSourceRF_NORMal, _T("Tkdpo2k3k4kDataSourceRF_NORMal"),
		Tkdpo2k3k4kDataSourceRF_AVErage, _T("Tkdpo2k3k4kDataSourceRF_AVErage"),
		Tkdpo2k3k4kDataSourceRF_MAXHold, _T("Tkdpo2k3k4kDataSourceRF_MAXHold"),
		Tkdpo2k3k4kDataSourceRF_MINHold, _T("Tkdpo2k3k4kDataSourceRF_MINHold"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kWaveformFileFormatEnum>* GetEnumNameConverter<Tkdpo2k3k4kWaveformFileFormatEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kWaveformFileFormatEnum> _converter(
		Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor, _T("Tkdpo2k3k4kWaveformFileFormatWithoutScaleFactor"),
		Tkdpo2k3k4kWaveformFileFormatWithScaleFactor, _T("Tkdpo2k3k4kWaveformFileFormatWithScaleFactor"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTiggerPulseSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kTiggerPulseSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTiggerPulseSourceEnum> _converter(
		Tkdpo2k3k4kTiggerPulseSourceCH1, _T("Tkdpo2k3k4kTiggerPulseSourceCH1"),
		Tkdpo2k3k4kTiggerPulseSourceCH2, _T("Tkdpo2k3k4kTiggerPulseSourceCH2"),
		Tkdpo2k3k4kTiggerPulseSourceCH3, _T("Tkdpo2k3k4kTiggerPulseSourceCH3"),
		Tkdpo2k3k4kTiggerPulseSourceCH4, _T("Tkdpo2k3k4kTiggerPulseSourceCH4"),
		Tkdpo2k3k4kTiggerPulseSourceD0, _T("Tkdpo2k3k4kTiggerPulseSourceD0"),
		Tkdpo2k3k4kTiggerPulseSourceD1, _T("Tkdpo2k3k4kTiggerPulseSourceD1"),
		Tkdpo2k3k4kTiggerPulseSourceD2, _T("Tkdpo2k3k4kTiggerPulseSourceD2"),
		Tkdpo2k3k4kTiggerPulseSourceD3, _T("Tkdpo2k3k4kTiggerPulseSourceD3"),
		Tkdpo2k3k4kTiggerPulseSourceD4, _T("Tkdpo2k3k4kTiggerPulseSourceD4"),
		Tkdpo2k3k4kTiggerPulseSourceD5, _T("Tkdpo2k3k4kTiggerPulseSourceD5"),
		Tkdpo2k3k4kTiggerPulseSourceD6, _T("Tkdpo2k3k4kTiggerPulseSourceD6"),
		Tkdpo2k3k4kTiggerPulseSourceD7, _T("Tkdpo2k3k4kTiggerPulseSourceD7"),
		Tkdpo2k3k4kTiggerPulseSourceD8, _T("Tkdpo2k3k4kTiggerPulseSourceD8"),
		Tkdpo2k3k4kTiggerPulseSourceD9, _T("Tkdpo2k3k4kTiggerPulseSourceD9"),
		Tkdpo2k3k4kTiggerPulseSourceD10, _T("Tkdpo2k3k4kTiggerPulseSourceD10"),
		Tkdpo2k3k4kTiggerPulseSourceD11, _T("Tkdpo2k3k4kTiggerPulseSourceD11"),
		Tkdpo2k3k4kTiggerPulseSourceD12, _T("Tkdpo2k3k4kTiggerPulseSourceD12"),
		Tkdpo2k3k4kTiggerPulseSourceD13, _T("Tkdpo2k3k4kTiggerPulseSourceD13"),
		Tkdpo2k3k4kTiggerPulseSourceD14, _T("Tkdpo2k3k4kTiggerPulseSourceD14"),
		Tkdpo2k3k4kTiggerPulseSourceD15, _T("Tkdpo2k3k4kTiggerPulseSourceD15"),
		Tkdpo2k3k4kTiggerPulseSourceLINE, _T("Tkdpo2k3k4kTiggerPulseSourceLINE"),
		Tkdpo2k3k4kTiggerPulseSourceEXT, _T("Tkdpo2k3k4kTiggerPulseSourceEXT"),
		Tkdpo2k3k4kTiggerPulseSourceRF, _T("Tkdpo2k3k4kTiggerPulseSourceRF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerPulseWidthConditionEnum> _converter(
		Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan, _T("Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan"),
		Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan, _T("Tkdpo2k3k4kTriggerPulseWidthConditionMOREthan"),
		Tkdpo2k3k4kTriggerPulseWidthConditionEQual, _T("Tkdpo2k3k4kTriggerPulseWidthConditionEQual"),
		Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual, _T("Tkdpo2k3k4kTriggerPulseWidthConditionUNEQual"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerRuntPolarityEnum> _converter(
		Tkdpo2k3k4kTriggerRuntPolarityEITher, _T("Tkdpo2k3k4kTriggerRuntPolarityEITher"),
		Tkdpo2k3k4kTriggerRuntPolarityNEGative, _T("Tkdpo2k3k4kTriggerRuntPolarityNEGative"),
		Tkdpo2k3k4kTriggerRuntPolarityPOSitive, _T("Tkdpo2k3k4kTriggerRuntPolarityPOSitive"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerWidthPolarityEnum> _converter(
		Tkdpo2k3k4kTriggerWidthPolarityPositive, _T("Tkdpo2k3k4kTriggerWidthPolarityPositive"),
		Tkdpo2k3k4kTriggerWidthPolarityNegative, _T("Tkdpo2k3k4kTriggerWidthPolarityNegative"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSearchStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kSearchStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSearchStateEnum> _converter(
		Tkdpo2k3k4kSearchStateON, _T("Tkdpo2k3k4kSearchStateON"),
		Tkdpo2k3k4kSearchStateOFF, _T("Tkdpo2k3k4kSearchStateOFF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kTriggerPatternTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kTriggerPatternTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kTriggerPatternTypeEnum> _converter(
		Tkdpo2k3k4kTriggerPatternTypeAND, _T("Tkdpo2k3k4kTriggerPatternTypeAND"),
		Tkdpo2k3k4kTriggerPatternTypeNAND, _T("Tkdpo2k3k4kTriggerPatternTypeNAND"),
		Tkdpo2k3k4kTriggerPatternTypeNOR, _T("Tkdpo2k3k4kTriggerPatternTypeNOR"),
		Tkdpo2k3k4kTriggerPatternTypeOR, _T("Tkdpo2k3k4kTriggerPatternTypeOR"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelCalibrationEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelCalibrationEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelCalibrationEnum> _converter(
		Tkdpo2k3k4kChannelCalibrationPass, _T("Tkdpo2k3k4kChannelCalibrationPass"),
		Tkdpo2k3k4kChannelCalibrationInitialized, _T("Tkdpo2k3k4kChannelCalibrationInitialized"),
		Tkdpo2k3k4kChannelCalibrationRunning, _T("Tkdpo2k3k4kChannelCalibrationRunning"),
		Tkdpo2k3k4kChannelCalibrationFail, _T("Tkdpo2k3k4kChannelCalibrationFail"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDigitalChannelStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kDigitalChannelStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDigitalChannelStateEnum> _converter(
		Tkdpo2k3k4kDigitalChannelStateON, _T("Tkdpo2k3k4kDigitalChannelStateON"),
		Tkdpo2k3k4kDigitalChannelStateOFF, _T("Tkdpo2k3k4kDigitalChannelStateOFF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>* GetEnumNameConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kUtilityExCalibrationStatusEnum> _converter(
		Tkdpo2k3k4kUtilityExCalibrationStatusInit, _T("Tkdpo2k3k4kUtilityExCalibrationStatusInit"),
		Tkdpo2k3k4kUtilityExCalibrationStatusPass, _T("Tkdpo2k3k4kUtilityExCalibrationStatusPass"),
		Tkdpo2k3k4kUtilityExCalibrationStatusFail, _T("Tkdpo2k3k4kUtilityExCalibrationStatusFail"),
		Tkdpo2k3k4kUtilityExCalibrationStatusRunning, _T("Tkdpo2k3k4kUtilityExCalibrationStatusRunning"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>* GetEnumNameConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kUtilityExFrontPanelLockEnum> _converter(
		Tkdpo2k3k4kUtilityExFrontPanelLockAll, _T("Tkdpo2k3k4kUtilityExFrontPanelLockAll"),
		Tkdpo2k3k4kUtilityExFrontPanelLockNone, _T("Tkdpo2k3k4kUtilityExFrontPanelLockNone"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kAcquisitionSamplingModeEnum> _converter(
		Tkdpo2k3k4kAcquisitionSamplingModeRT, _T("Tkdpo2k3k4kAcquisitionSamplingModeRT"),
		Tkdpo2k3k4kAcquisitionSamplingModeET, _T("Tkdpo2k3k4kAcquisitionSamplingModeET"),
		Tkdpo2k3k4kAcquisitionSamplingModeIT, _T("Tkdpo2k3k4kAcquisitionSamplingModeIT"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerTypeEnum> _converter(
		Tkdpo2k3k4kPowerTypeNONe, _T("Tkdpo2k3k4kPowerTypeNONe"),
		Tkdpo2k3k4kPowerTypeQUALity, _T("Tkdpo2k3k4kPowerTypeQUALity"),
		Tkdpo2k3k4kPowerTypeSWITCHingloss, _T("Tkdpo2k3k4kPowerTypeSWITCHingloss"),
		Tkdpo2k3k4kPowerTypeSOA, _T("Tkdpo2k3k4kPowerTypeSOA"),
		Tkdpo2k3k4kPowerTypeHARMonics, _T("Tkdpo2k3k4kPowerTypeHARMonics"),
		Tkdpo2k3k4kPowerTypeRIPPle, _T("Tkdpo2k3k4kPowerTypeRIPPle"),
		Tkdpo2k3k4kPowerTypeMODULationanalysis, _T("Tkdpo2k3k4kPowerTypeMODULationanalysis"),
		Tkdpo2k3k4kPowerTypeDESKew, _T("Tkdpo2k3k4kPowerTypeDESKew"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSourceEnum> _converter(
		Tkdpo2k3k4kPowerSourceCH1, _T("Tkdpo2k3k4kPowerSourceCH1"),
		Tkdpo2k3k4kPowerSourceCH2, _T("Tkdpo2k3k4kPowerSourceCH2"),
		Tkdpo2k3k4kPowerSourceCH3, _T("Tkdpo2k3k4kPowerSourceCH3"),
		Tkdpo2k3k4kPowerSourceCH4, _T("Tkdpo2k3k4kPowerSourceCH4"),
		Tkdpo2k3k4kPowerSourceREF1, _T("Tkdpo2k3k4kPowerSourceREF1"),
		Tkdpo2k3k4kPowerSourceREF2, _T("Tkdpo2k3k4kPowerSourceREF2"),
		Tkdpo2k3k4kPowerSourceREF3, _T("Tkdpo2k3k4kPowerSourceREF3"),
		Tkdpo2k3k4kPowerSourceREF4, _T("Tkdpo2k3k4kPowerSourceREF4"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerGateSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerGateSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerGateSourceEnum> _converter(
		Tkdpo2k3k4kPowerGateSourceCH1, _T("Tkdpo2k3k4kPowerGateSourceCH1"),
		Tkdpo2k3k4kPowerGateSourceCH2, _T("Tkdpo2k3k4kPowerGateSourceCH2"),
		Tkdpo2k3k4kPowerGateSourceCH3, _T("Tkdpo2k3k4kPowerGateSourceCH3"),
		Tkdpo2k3k4kPowerGateSourceCH4, _T("Tkdpo2k3k4kPowerGateSourceCH4"),
		Tkdpo2k3k4kPowerGateSourceREF1, _T("Tkdpo2k3k4kPowerGateSourceREF1"),
		Tkdpo2k3k4kPowerGateSourceREF2, _T("Tkdpo2k3k4kPowerGateSourceREF2"),
		Tkdpo2k3k4kPowerGateSourceREF3, _T("Tkdpo2k3k4kPowerGateSourceREF3"),
		Tkdpo2k3k4kPowerGateSourceREF4, _T("Tkdpo2k3k4kPowerGateSourceREF4"),
		Tkdpo2k3k4kPowerGateSourceNone, _T("Tkdpo2k3k4kPowerGateSourceNone"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerGatingEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerGatingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerGatingEnum> _converter(
		Tkdpo2k3k4kPowerGatingOFF, _T("Tkdpo2k3k4kPowerGatingOFF"),
		Tkdpo2k3k4kPowerGatingSCREen, _T("Tkdpo2k3k4kPowerGatingSCREen"),
		Tkdpo2k3k4kPowerGatingCURSor, _T("Tkdpo2k3k4kPowerGatingCURSor"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerReferenceLevelTypeEnum> _converter(
		Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute, _T("Tkdpo2k3k4kPowerReferenceLevelTypeAbsolute"),
		Tkdpo2k3k4kPowerReferenceLevelTypePercent, _T("Tkdpo2k3k4kPowerReferenceLevelTypePercent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerStatisticsModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerStatisticsModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerStatisticsModeEnum> _converter(
		Tkdpo2k3k4kPowerStatisticsModeOFF, _T("Tkdpo2k3k4kPowerStatisticsModeOFF"),
		Tkdpo2k3k4kPowerStatisticsModeALL, _T("Tkdpo2k3k4kPowerStatisticsModeALL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerQualityDisplayMeasurementEnum> _converter(
		Tkdpo2k3k4kPowerQualityDisplayMeasurementAPPpwr, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementAPPpwr"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementFREQuency, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementFREQuency"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementICRESTfactor, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementICRESTfactor"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementIRMS, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementIRMS"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementPHASEangle, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementPHASEangle"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementPOWERFACtor, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementPOWERFACtor"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementREACTpwr, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementREACTpwr"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementTRUEpwr, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementTRUEpwr"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementVCRESTfactor, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementVCRESTfactor"),
		Tkdpo2k3k4kPowerQualityDisplayMeasurementVRMS, _T("Tkdpo2k3k4kPowerQualityDisplayMeasurementVRMS"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerQualityFrequencyReferenceEnum> _converter(
		Tkdpo2k3k4kPowerQualityFrequencyReferenceVoltage, _T("Tkdpo2k3k4kPowerQualityFrequencyReferenceVoltage"),
		Tkdpo2k3k4kPowerQualityFrequencyReferenceCurrent, _T("Tkdpo2k3k4kPowerQualityFrequencyReferenceCurrent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayEnum> _converter(
		Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayALL, _T("Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayALL"),
		Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayENERGYLoss, _T("Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayENERGYLoss"),
		Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayPOWERLoss, _T("Tkdpo2k3k4kPowerSwitchingLossMeasurementDisplayPOWERLoss"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerGatingPolarityEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerGatingPolarityEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerGatingPolarityEnum> _converter(
		Tkdpo2k3k4kPowerGatingPolarityFALL, _T("Tkdpo2k3k4kPowerGatingPolarityFALL"),
		Tkdpo2k3k4kPowerGatingPolarityRise, _T("Tkdpo2k3k4kPowerGatingPolarityRise"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossTypeEnum> _converter(
		Tkdpo2k3k4kPowerSwitchingLossTypePower, _T("Tkdpo2k3k4kPowerSwitchingLossTypePower"),
		Tkdpo2k3k4kPowerSwitchingLossTypeEnergy, _T("Tkdpo2k3k4kPowerSwitchingLossTypeEnergy"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsStandardEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsStandardNone, _T("Tkdpo2k3k4kPowerHarmonicsStandardNone"),
		Tkdpo2k3k4kPowerHarmonicsStandardIEC, _T("Tkdpo2k3k4kPowerHarmonicsStandardIEC"),
		Tkdpo2k3k4kPowerHarmonicsStandardMIL, _T("Tkdpo2k3k4kPowerHarmonicsStandardMIL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplaySetEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsDisplaySetOdd, _T("Tkdpo2k3k4kPowerHarmonicsDisplaySetOdd"),
		Tkdpo2k3k4kPowerHarmonicsDisplaySetEven, _T("Tkdpo2k3k4kPowerHarmonicsDisplaySetEven"),
		Tkdpo2k3k4kPowerHarmonicsDisplaySetAll, _T("Tkdpo2k3k4kPowerHarmonicsDisplaySetAll"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsDisplayTypeEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsDisplayTypeGraph, _T("Tkdpo2k3k4kPowerHarmonicsDisplayTypeGraph"),
		Tkdpo2k3k4kPowerHarmonicsDisplayTypeTable, _T("Tkdpo2k3k4kPowerHarmonicsDisplayTypeTable"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsIECClassEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsIECClassA, _T("Tkdpo2k3k4kPowerHarmonicsIECClassA"),
		Tkdpo2k3k4kPowerHarmonicsIECClassB, _T("Tkdpo2k3k4kPowerHarmonicsIECClassB"),
		Tkdpo2k3k4kPowerHarmonicsIECClassC1, _T("Tkdpo2k3k4kPowerHarmonicsIECClassC1"),
		Tkdpo2k3k4kPowerHarmonicsIECClassC2, _T("Tkdpo2k3k4kPowerHarmonicsIECClassC2"),
		Tkdpo2k3k4kPowerHarmonicsIECClassC3, _T("Tkdpo2k3k4kPowerHarmonicsIECClassC3"),
		Tkdpo2k3k4kPowerHarmonicsIECClassD, _T("Tkdpo2k3k4kPowerHarmonicsIECClassD"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsSourceEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsSourceVoltage, _T("Tkdpo2k3k4kPowerHarmonicsSourceVoltage"),
		Tkdpo2k3k4kPowerHarmonicsSourceCurrent, _T("Tkdpo2k3k4kPowerHarmonicsSourceCurrent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceVOLTage, _T("Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceVOLTage"),
		Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceCURRent, _T("Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceCURRent"),
		Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce, _T("Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceHARMSOURce"),
		Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceFIXEDFREQuency, _T("Tkdpo2k3k4kPowerHarmonicsFrequencyReferenceFIXEDFREQuency"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingEnum> _converter(
		Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS, _T("Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingMEAS"),
		Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingUSER, _T("Tkdpo2k3k4kPowerHarmonicsMILCurrentCalculatingUSER"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHamronicsMILPowerLevelEnum> _converter(
		Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow, _T("Tkdpo2k3k4kPowerHamronicsMILPowerLevelLow"),
		Tkdpo2k3k4kPowerHamronicsMILPowerLevelHigh, _T("Tkdpo2k3k4kPowerHamronicsMILPowerLevelHigh"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerHamronicsPassFailEnum> _converter(
		Tkdpo2k3k4kPowerHamronicsPassFailPASS, _T("Tkdpo2k3k4kPowerHamronicsPassFailPASS"),
		Tkdpo2k3k4kPowerHamronicsPassFailFAIL, _T("Tkdpo2k3k4kPowerHamronicsPassFailFAIL"),
		Tkdpo2k3k4kPowerHamronicsPassFailNA, _T("Tkdpo2k3k4kPowerHamronicsPassFailNA"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerRippleSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerRippleSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerRippleSourceEnum> _converter(
		Tkdpo2k3k4kPowerRippleSourceVoltage, _T("Tkdpo2k3k4kPowerRippleSourceVoltage"),
		Tkdpo2k3k4kPowerRippleSourceCurrent, _T("Tkdpo2k3k4kPowerRippleSourceCurrent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerModulationSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerModulationSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerModulationSourceEnum> _converter(
		Tkdpo2k3k4kPowerModulationSourceVoltage, _T("Tkdpo2k3k4kPowerModulationSourceVoltage"),
		Tkdpo2k3k4kPowerModulationSourceCurrent, _T("Tkdpo2k3k4kPowerModulationSourceCurrent"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerModulationTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerModulationTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerModulationTypeEnum> _converter(
		Tkdpo2k3k4kPowerModulationTypePWIdth, _T("Tkdpo2k3k4kPowerModulationTypePWIdth"),
		Tkdpo2k3k4kPowerModulationTypeNWIdth, _T("Tkdpo2k3k4kPowerModulationTypeNWIdth"),
		Tkdpo2k3k4kPowerModulationTypePERIod, _T("Tkdpo2k3k4kPowerModulationTypePERIod"),
		Tkdpo2k3k4kPowerModulationTypePDUty, _T("Tkdpo2k3k4kPowerModulationTypePDUty"),
		Tkdpo2k3k4kPowerModulationTypeNDUty, _T("Tkdpo2k3k4kPowerModulationTypeNDUty"),
		Tkdpo2k3k4kPowerModulationTypeFREQuency, _T("Tkdpo2k3k4kPowerModulationTypeFREQuency"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeEnum> _converter(
		Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG, _T("Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLOG"),
		Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear, _T("Tkdpo2k3k4kPowerSafeOperatingAreaPlotTypeLinear"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateEnum> _converter(
		Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateOFF, _T("Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateOFF"),
		Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateLIMITS, _T("Tkdpo2k3k4kPowerSafeOperatingAreaMaskStateLIMITS"),
		Tkdpo2k3k4kPowerSafeOperatingAreaMaskStatePOINTS, _T("Tkdpo2k3k4kPowerSafeOperatingAreaMaskStatePOINTS"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSafeOperatingAreaResultStateEnum> _converter(
		Tkdpo2k3k4kPowerSafeOperatingAreaResultStatePASS, _T("Tkdpo2k3k4kPowerSafeOperatingAreaResultStatePASS"),
		Tkdpo2k3k4kPowerSafeOperatingAreaResultStateFAIL, _T("Tkdpo2k3k4kPowerSafeOperatingAreaResultStateFAIL"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>* GetEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kPowerSwitchingLossConductionCalculationEnum> _converter(
		Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVoltage, _T("Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVoltage"),
		Tkdpo2k3k4kPowerSwitchingLossConductionCalculationRDSOn, _T("Tkdpo2k3k4kPowerSwitchingLossConductionCalculationRDSOn"),
		Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVCESat, _T("Tkdpo2k3k4kPowerSwitchingLossConductionCalculationVCESat"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumTraceTypeEnum> _converter(
		Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal, _T("Tkdpo2k3k4kFrequencySpectrumTraceTypeNormal"),
		Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold, _T("Tkdpo2k3k4kFrequencySpectrumTraceTypeMinHold"),
		Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold, _T("Tkdpo2k3k4kFrequencySpectrumTraceTypeMaxHold"),
		Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage, _T("Tkdpo2k3k4kFrequencySpectrumTraceTypeAverage"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFTraceTypeEnum> _converter(
		Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude, _T("Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude"),
		Tkdpo2k3k4kFrequencyRFTraceTypeFrequency, _T("Tkdpo2k3k4kFrequencyRFTraceTypeFrequency"),
		Tkdpo2k3k4kFrequencyRFTraceTypePhase, _T("Tkdpo2k3k4kFrequencyRFTraceTypePhase"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionModeEnum> _converter(
		Tkdpo2k3k4kFrequencyRFDetectionModeAuto, _T("Tkdpo2k3k4kFrequencyRFDetectionModeAuto"),
		Tkdpo2k3k4kFrequencyRFDetectionModeManual, _T("Tkdpo2k3k4kFrequencyRFDetectionModeManual"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFDetectionMethodEnum> _converter(
		Tkdpo2k3k4kFrequencyRFDetectionMethodMINUSpeak, _T("Tkdpo2k3k4kFrequencyRFDetectionMethodMINUSpeak"),
		Tkdpo2k3k4kFrequencyRFDetectionMethodSAMple, _T("Tkdpo2k3k4kFrequencyRFDetectionMethodSAMple"),
		Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak, _T("Tkdpo2k3k4kFrequencyRFDetectionMethodPLUSpeak"),
		Tkdpo2k3k4kFrequencyRFDetectionMethodAVErage, _T("Tkdpo2k3k4kFrequencyRFDetectionMethodAVErage"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencySpectrumModeEnum> _converter(
		Tkdpo2k3k4kFrequencySpectrumModeTRIGgered, _T("Tkdpo2k3k4kFrequencySpectrumModeTRIGgered"),
		Tkdpo2k3k4kFrequencySpectrumModeFREErun, _T("Tkdpo2k3k4kFrequencySpectrumModeFREErun"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFVerticalUnitsEnum> _converter(
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDBM, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDBM"),
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUW, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUW"),
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMV, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMV"),
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDMUV, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDMUV"),
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMA, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDBMA"),
		Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUA, _T("Tkdpo2k3k4kFrequencyRFVerticalUnitsDBUA"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFWindowEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFWindowEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFWindowEnum> _converter(
		Tkdpo2k3k4kFrequencyRFWindowRECTangular, _T("Tkdpo2k3k4kFrequencyRFWindowRECTangular"),
		Tkdpo2k3k4kFrequencyRFWindowHAMming, _T("Tkdpo2k3k4kFrequencyRFWindowHAMming"),
		Tkdpo2k3k4kFrequencyRFWindowHANning, _T("Tkdpo2k3k4kFrequencyRFWindowHANning"),
		Tkdpo2k3k4kFrequencyRFWindowBLAckmanharris, _T("Tkdpo2k3k4kFrequencyRFWindowBLAckmanharris"),
		Tkdpo2k3k4kFrequencyRFWindowKAIser, _T("Tkdpo2k3k4kFrequencyRFWindowKAIser"),
		Tkdpo2k3k4kFrequencyRFWindowFLATtop, _T("Tkdpo2k3k4kFrequencyRFWindowFLATtop"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFMeasurementTypeEnum> _converter(
		Tkdpo2k3k4kFrequencyRFMeasurementTypeNONe, _T("Tkdpo2k3k4kFrequencyRFMeasurementTypeNONe"),
		Tkdpo2k3k4kFrequencyRFMeasurementTypeCP, _T("Tkdpo2k3k4kFrequencyRFMeasurementTypeCP"),
		Tkdpo2k3k4kFrequencyRFMeasurementTypeACPR, _T("Tkdpo2k3k4kFrequencyRFMeasurementTypeACPR"),
		Tkdpo2k3k4kFrequencyRFMeasurementTypeOBW, _T("Tkdpo2k3k4kFrequencyRFMeasurementTypeOBW"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRBWModeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRBWModeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRBWModeEnum> _converter(
		Tkdpo2k3k4kFrequencyRBWModeAuto, _T("Tkdpo2k3k4kFrequencyRBWModeAuto"),
		Tkdpo2k3k4kFrequencyRBWModeManual, _T("Tkdpo2k3k4kFrequencyRBWModeManual"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>* GetEnumNameConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kFrequencyRFMarkerTypeEnum> _converter(
		Tkdpo2k3k4kFrequencyRFMarkerTypeDelta, _T("Tkdpo2k3k4kFrequencyRFMarkerTypeDelta"),
		Tkdpo2k3k4kFrequencyRFMarkerTypeAbsolute, _T("Tkdpo2k3k4kFrequencyRFMarkerTypeAbsolute"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kCursorSourceEnum>* GetEnumNameConverter<Tkdpo2k3k4kCursorSourceEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kCursorSourceEnum> _converter(
		Tkdpo2k3k4kCursorSourceCH1, _T("Tkdpo2k3k4kCursorSourceCH1"),
		Tkdpo2k3k4kCursorSourceCH2, _T("Tkdpo2k3k4kCursorSourceCH2"),
		Tkdpo2k3k4kCursorSourceCH3, _T("Tkdpo2k3k4kCursorSourceCH3"),
		Tkdpo2k3k4kCursorSourceCH4, _T("Tkdpo2k3k4kCursorSourceCH4"),
		Tkdpo2k3k4kCursorSourceMath, _T("Tkdpo2k3k4kCursorSourceMath"),
		Tkdpo2k3k4kCursorSourceREF1, _T("Tkdpo2k3k4kCursorSourceREF1"),
		Tkdpo2k3k4kCursorSourceREF2, _T("Tkdpo2k3k4kCursorSourceREF2"),
		Tkdpo2k3k4kCursorSourceREF3, _T("Tkdpo2k3k4kCursorSourceREF3"),
		Tkdpo2k3k4kCursorSourceREF4, _T("Tkdpo2k3k4kCursorSourceREF4"),
		Tkdpo2k3k4kCursorSourceD0, _T("Tkdpo2k3k4kCursorSourceD0"),
		Tkdpo2k3k4kCursorSourceD1, _T("Tkdpo2k3k4kCursorSourceD1"),
		Tkdpo2k3k4kCursorSourceD2, _T("Tkdpo2k3k4kCursorSourceD2"),
		Tkdpo2k3k4kCursorSourceD3, _T("Tkdpo2k3k4kCursorSourceD3"),
		Tkdpo2k3k4kCursorSourceD4, _T("Tkdpo2k3k4kCursorSourceD4"),
		Tkdpo2k3k4kCursorSourceD5, _T("Tkdpo2k3k4kCursorSourceD5"),
		Tkdpo2k3k4kCursorSourceD6, _T("Tkdpo2k3k4kCursorSourceD6"),
		Tkdpo2k3k4kCursorSourceD7, _T("Tkdpo2k3k4kCursorSourceD7"),
		Tkdpo2k3k4kCursorSourceD8, _T("Tkdpo2k3k4kCursorSourceD8"),
		Tkdpo2k3k4kCursorSourceD9, _T("Tkdpo2k3k4kCursorSourceD9"),
		Tkdpo2k3k4kCursorSourceD10, _T("Tkdpo2k3k4kCursorSourceD10"),
		Tkdpo2k3k4kCursorSourceD11, _T("Tkdpo2k3k4kCursorSourceD11"),
		Tkdpo2k3k4kCursorSourceD12, _T("Tkdpo2k3k4kCursorSourceD12"),
		Tkdpo2k3k4kCursorSourceD13, _T("Tkdpo2k3k4kCursorSourceD13"),
		Tkdpo2k3k4kCursorSourceD14, _T("Tkdpo2k3k4kCursorSourceD14"),
		Tkdpo2k3k4kCursorSourceD15, _T("Tkdpo2k3k4kCursorSourceD15"),
		Tkdpo2k3k4kCursorSourceAUTO, _T("Tkdpo2k3k4kCursorSourceAUTO"),
		Tkdpo2k3k4kCursorSourceRFAmplitude, _T("Tkdpo2k3k4kCursorSourceRFAmplitude"),
		Tkdpo2k3k4kCursorSourceRFFrequency, _T("Tkdpo2k3k4kCursorSourceRFFrequency"),
		Tkdpo2k3k4kCursorSourceRFPhase, _T("Tkdpo2k3k4kCursorSourceRFPhase"),
		Tkdpo2k3k4kCursorSourceBUS1, _T("Tkdpo2k3k4kCursorSourceBUS1"),
		Tkdpo2k3k4kCursorSourceBUS2, _T("Tkdpo2k3k4kCursorSourceBUS2"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kChannelChannelEnum>* GetEnumNameConverter<Tkdpo2k3k4kChannelChannelEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kChannelChannelEnum> _converter(
		Tkdpo2k3k4kChannelChannel1, _T("Tkdpo2k3k4kChannelChannel1"),
		Tkdpo2k3k4kChannelChannel2, _T("Tkdpo2k3k4kChannelChannel2"),
		Tkdpo2k3k4kChannelChannel3, _T("Tkdpo2k3k4kChannelChannel3"),
		Tkdpo2k3k4kChannelChannel4, _T("Tkdpo2k3k4kChannelChannel4"),
		Tkdpo2k3k4kChannelChannelRF, _T("Tkdpo2k3k4kChannelChannelRF"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kSource1Enum>* GetEnumNameConverter<Tkdpo2k3k4kSource1Enum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kSource1Enum> _converter(
		Tkdpo2k3k4kSource1CH1, _T("Tkdpo2k3k4kSource1CH1"),
		Tkdpo2k3k4kSource1CH2, _T("Tkdpo2k3k4kSource1CH2"),
		Tkdpo2k3k4kSource1CH3, _T("Tkdpo2k3k4kSource1CH3"),
		Tkdpo2k3k4kSource1CH4, _T("Tkdpo2k3k4kSource1CH4"),
		Tkdpo2k3k4kSource1MATH, _T("Tkdpo2k3k4kSource1MATH"),
		Tkdpo2k3k4kSource1REF1, _T("Tkdpo2k3k4kSource1REF1"),
		Tkdpo2k3k4kSource1REF2, _T("Tkdpo2k3k4kSource1REF2"),
		Tkdpo2k3k4kSource1REF3, _T("Tkdpo2k3k4kSource1REF3"),
		Tkdpo2k3k4kSource1REF4, _T("Tkdpo2k3k4kSource1REF4"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDataCompositionEnum>* GetEnumNameConverter<Tkdpo2k3k4kDataCompositionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDataCompositionEnum> _converter(
		Tkdpo2k3k4kDataCompositionCompositeYT, _T("Tkdpo2k3k4kDataCompositionCompositeYT"),
		Tkdpo2k3k4kDataCompositionCompositeEnvelope, _T("Tkdpo2k3k4kDataCompositionCompositeEnvelope"),
		Tkdpo2k3k4kDataCompositionSingularYT, _T("Tkdpo2k3k4kDataCompositionSingularYT"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<Tkdpo2k3k4kDataResolutionEnum>* GetEnumNameConverter<Tkdpo2k3k4kDataResolutionEnum>()
{
	static CEnumNameConverter<Tkdpo2k3k4kDataResolutionEnum> _converter(
		Tkdpo2k3k4kDataResolutionFull, _T("Tkdpo2k3k4kDataResolutionFull"),
		Tkdpo2k3k4kDataResolutionReduced, _T("Tkdpo2k3k4kDataResolutionReduced"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeInterpolationEnum>* GetEnumNameConverter<IviScopeInterpolationEnum>()
{
	static CEnumNameConverter<IviScopeInterpolationEnum> _converter(
		IviScopeInterpolationNone, _T("IviScopeInterpolationNone"),
		IviScopeInterpolationSineX, _T("IviScopeInterpolationSineX"),
		IviScopeInterpolationLinear, _T("IviScopeInterpolationLinear"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeSampleModeEnum>* GetEnumNameConverter<IviScopeSampleModeEnum>()
{
	static CEnumNameConverter<IviScopeSampleModeEnum> _converter(
		IviScopeSampleModeRealTime, _T("IviScopeSampleModeRealTime"),
		IviScopeSampleModeEquivalentTime, _T("IviScopeSampleModeEquivalentTime"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeAcquisitionTypeEnum>* GetEnumNameConverter<IviScopeAcquisitionTypeEnum>()
{
	static CEnumNameConverter<IviScopeAcquisitionTypeEnum> _converter(
		IviScopeAcquisitionTypeNormal, _T("IviScopeAcquisitionTypeNormal"),
		IviScopeAcquisitionTypePeakDetect, _T("IviScopeAcquisitionTypePeakDetect"),
		IviScopeAcquisitionTypeHiRes, _T("IviScopeAcquisitionTypeHiRes"),
		IviScopeAcquisitionTypeEnvelope, _T("IviScopeAcquisitionTypeEnvelope"),
		IviScopeAcquisitionTypeAverage, _T("IviScopeAcquisitionTypeAverage"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeVerticalCouplingEnum>* GetEnumNameConverter<IviScopeVerticalCouplingEnum>()
{
	static CEnumNameConverter<IviScopeVerticalCouplingEnum> _converter(
		IviScopeVerticalCouplingAC, _T("IviScopeVerticalCouplingAC"),
		IviScopeVerticalCouplingDC, _T("IviScopeVerticalCouplingDC"),
		IviScopeVerticalCouplingGnd, _T("IviScopeVerticalCouplingGnd"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeMeasurementEnum>* GetEnumNameConverter<IviScopeMeasurementEnum>()
{
	static CEnumNameConverter<IviScopeMeasurementEnum> _converter(
		IviScopeMeasurementRiseTime, _T("IviScopeMeasurementRiseTime"),
		IviScopeMeasurementFallTime, _T("IviScopeMeasurementFallTime"),
		IviScopeMeasurementFrequency, _T("IviScopeMeasurementFrequency"),
		IviScopeMeasurementPeriod, _T("IviScopeMeasurementPeriod"),
		IviScopeMeasurementVoltageRMS, _T("IviScopeMeasurementVoltageRMS"),
		IviScopeMeasurementVoltagePeakToPeak, _T("IviScopeMeasurementVoltagePeakToPeak"),
		IviScopeMeasurementVoltageMax, _T("IviScopeMeasurementVoltageMax"),
		IviScopeMeasurementVoltageMin, _T("IviScopeMeasurementVoltageMin"),
		IviScopeMeasurementVoltageHigh, _T("IviScopeMeasurementVoltageHigh"),
		IviScopeMeasurementVoltageLow, _T("IviScopeMeasurementVoltageLow"),
		IviScopeMeasurementVoltageAverage, _T("IviScopeMeasurementVoltageAverage"),
		IviScopeMeasurementWidthNeg, _T("IviScopeMeasurementWidthNeg"),
		IviScopeMeasurementWidthPos, _T("IviScopeMeasurementWidthPos"),
		IviScopeMeasurementDutyCycleNeg, _T("IviScopeMeasurementDutyCycleNeg"),
		IviScopeMeasurementDutyCyclePos, _T("IviScopeMeasurementDutyCyclePos"),
		IviScopeMeasurementAmplitude, _T("IviScopeMeasurementAmplitude"),
		IviScopeMeasurementVoltageCycleRMS, _T("IviScopeMeasurementVoltageCycleRMS"),
		IviScopeMeasurementVoltageCycleAverage, _T("IviScopeMeasurementVoltageCycleAverage"),
		IviScopeMeasurementOverShoot, _T("IviScopeMeasurementOverShoot"),
		IviScopeMeasurementPreshoot, _T("IviScopeMeasurementPreshoot"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeAcquisitionStatusEnum>* GetEnumNameConverter<IviScopeAcquisitionStatusEnum>()
{
	static CEnumNameConverter<IviScopeAcquisitionStatusEnum> _converter(
		IviScopeAcqComplete, _T("IviScopeAcqComplete"),
		IviScopeAcqInProgress, _T("IviScopeAcqInProgress"),
		IviScopeAcqStatusUnknown, _T("IviScopeAcqStatusUnknown"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTriggerTypeEnum>* GetEnumNameConverter<IviScopeTriggerTypeEnum>()
{
	static CEnumNameConverter<IviScopeTriggerTypeEnum> _converter(
		IviScopeTriggerEdge, _T("IviScopeTriggerEdge"),
		IviScopeTriggerWidth, _T("IviScopeTriggerWidth"),
		IviScopeTriggerRunt, _T("IviScopeTriggerRunt"),
		IviScopeTriggerGlitch, _T("IviScopeTriggerGlitch"),
		IviScopeTriggerTV, _T("IviScopeTriggerTV"),
		IviScopeTriggerImmediate, _T("IviScopeTriggerImmediate"),
		IviScopeTriggerACLine, _T("IviScopeTriggerACLine"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTriggerCouplingEnum>* GetEnumNameConverter<IviScopeTriggerCouplingEnum>()
{
	static CEnumNameConverter<IviScopeTriggerCouplingEnum> _converter(
		IviScopeTriggerCouplingAC, _T("IviScopeTriggerCouplingAC"),
		IviScopeTriggerCouplingDC, _T("IviScopeTriggerCouplingDC"),
		IviScopeTriggerCouplingHFReject, _T("IviScopeTriggerCouplingHFReject"),
		IviScopeTriggerCouplingLFReject, _T("IviScopeTriggerCouplingLFReject"),
		IviScopeTriggerCouplingNoiseReject, _T("IviScopeTriggerCouplingNoiseReject"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTriggerModifierEnum>* GetEnumNameConverter<IviScopeTriggerModifierEnum>()
{
	static CEnumNameConverter<IviScopeTriggerModifierEnum> _converter(
		IviScopeTriggerModifierNone, _T("IviScopeTriggerModifierNone"),
		IviScopeTriggerModifierAuto, _T("IviScopeTriggerModifierAuto"),
		IviScopeTriggerModifierAutoLevel, _T("IviScopeTriggerModifierAutoLevel"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeACLineSlopeEnum>* GetEnumNameConverter<IviScopeACLineSlopeEnum>()
{
	static CEnumNameConverter<IviScopeACLineSlopeEnum> _converter(
		IviScopeACLinePositive, _T("IviScopeACLinePositive"),
		IviScopeACLineNegative, _T("IviScopeACLineNegative"),
		IviScopeACLineEither, _T("IviScopeACLineEither"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTriggerSlopeEnum>* GetEnumNameConverter<IviScopeTriggerSlopeEnum>()
{
	static CEnumNameConverter<IviScopeTriggerSlopeEnum> _converter(
		IviScopeTriggerSlopePositive, _T("IviScopeTriggerSlopePositive"),
		IviScopeTriggerSlopeNegative, _T("IviScopeTriggerSlopeNegative"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeGlitchPolarityEnum>* GetEnumNameConverter<IviScopeGlitchPolarityEnum>()
{
	static CEnumNameConverter<IviScopeGlitchPolarityEnum> _converter(
		IviScopeGlitchPolarityPositive, _T("IviScopeGlitchPolarityPositive"),
		IviScopeGlitchPolarityNegative, _T("IviScopeGlitchPolarityNegative"),
		IviScopeGlitchPolarityEither, _T("IviScopeGlitchPolarityEither"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeGlitchConditionEnum>* GetEnumNameConverter<IviScopeGlitchConditionEnum>()
{
	static CEnumNameConverter<IviScopeGlitchConditionEnum> _converter(
		IviScopeGlitchConditionLessThan, _T("IviScopeGlitchConditionLessThan"),
		IviScopeGlitchConditionGreaterThan, _T("IviScopeGlitchConditionGreaterThan"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeRuntPolarityEnum>* GetEnumNameConverter<IviScopeRuntPolarityEnum>()
{
	static CEnumNameConverter<IviScopeRuntPolarityEnum> _converter(
		IviScopeRuntPolarityPositive, _T("IviScopeRuntPolarityPositive"),
		IviScopeRuntPolarityNegative, _T("IviScopeRuntPolarityNegative"),
		IviScopeRuntPolarityEither, _T("IviScopeRuntPolarityEither"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTVSignalFormatEnum>* GetEnumNameConverter<IviScopeTVSignalFormatEnum>()
{
	static CEnumNameConverter<IviScopeTVSignalFormatEnum> _converter(
		IviScopeTVSignalFormatNTSC, _T("IviScopeTVSignalFormatNTSC"),
		IviScopeTVSignalFormatPAL, _T("IviScopeTVSignalFormatPAL"),
		IviScopeTVSignalFormatSECAM, _T("IviScopeTVSignalFormatSECAM"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTVTriggerEventEnum>* GetEnumNameConverter<IviScopeTVTriggerEventEnum>()
{
	static CEnumNameConverter<IviScopeTVTriggerEventEnum> _converter(
		IviScopeTVTriggerEventField1, _T("IviScopeTVTriggerEventField1"),
		IviScopeTVTriggerEventField2, _T("IviScopeTVTriggerEventField2"),
		IviScopeTVTriggerEventAnyField, _T("IviScopeTVTriggerEventAnyField"),
		IviScopeTVTriggerEventAnyLine, _T("IviScopeTVTriggerEventAnyLine"),
		IviScopeTVTriggerEventLineNumber, _T("IviScopeTVTriggerEventLineNumber"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTVTriggerPolarityEnum>* GetEnumNameConverter<IviScopeTVTriggerPolarityEnum>()
{
	static CEnumNameConverter<IviScopeTVTriggerPolarityEnum> _converter(
		IviScopeTVTriggerPolarityPositive, _T("IviScopeTVTriggerPolarityPositive"),
		IviScopeTVTriggerPolarityNegative, _T("IviScopeTVTriggerPolarityNegative"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeWidthPolarityEnum>* GetEnumNameConverter<IviScopeWidthPolarityEnum>()
{
	static CEnumNameConverter<IviScopeWidthPolarityEnum> _converter(
		IviScopeWidthPolarityPositive, _T("IviScopeWidthPolarityPositive"),
		IviScopeWidthPolarityNegative, _T("IviScopeWidthPolarityNegative"),
		IviScopeWidthPolarityEither, _T("IviScopeWidthPolarityEither"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeWidthConditionEnum>* GetEnumNameConverter<IviScopeWidthConditionEnum>()
{
	static CEnumNameConverter<IviScopeWidthConditionEnum> _converter(
		IviScopeWidthConditionWithin, _T("IviScopeWidthConditionWithin"),
		IviScopeWidthConditionOutside, _T("IviScopeWidthConditionOutside"),
		-1, NULL);

	return &_converter;
}

template <>
const CEnumNameConverter<IviScopeTimeOutEnum>* GetEnumNameConverter<IviScopeTimeOutEnum>()
{
	static CEnumNameConverter<IviScopeTimeOutEnum> _converter(
		IviScopeTimeOutInfinite, _T("IviScopeTimeOutInfinite"),
		IviScopeTimeOutImmediate, _T("IviScopeTimeOutImmediate"),
		-1, NULL);

	return &_converter;
}

