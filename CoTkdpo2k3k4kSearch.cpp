#include "stdafx.h"
#include "CoTkdpo2k3k4kSearch.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kSearch::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kSearch::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kSearch::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_Copy(Tkdpo2k3k4kSearchCopyEnum Type)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureEdge(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum Slope)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource3CH3 ) ||  ( Source == Tkdpo2k3k4kSearchSource3CH4 ) || ( Source == Tkdpo2k3k4kSearchSource3REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource3REF4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureRunt(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerRuntConditionEnum When, Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity, double Width)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource2CH4 ) ||  ( Source == Tkdpo2k3k4kSearchSource2CH4 ) || ( Source == Tkdpo2k3k4kSearchSource2REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource2REF4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureSetupHold(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum ClockEdge, Tkdpo2k3k4kSearchSource3Enum ClockSource, double HoldTime, double SetTime, double ClockLevel)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource3CH3 ) ||  ( Source == Tkdpo2k3k4kSearchSource3CH4 ) || ( Source == Tkdpo2k3k4kSearchSource3REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource3REF4 ) || ( ClockSource  == Tkdpo2k3k4kSearchSource3CH3 ) ||  ( ClockSource  == Tkdpo2k3k4kSearchSource3CH4 ) || ( ClockSource  == Tkdpo2k3k4kSearchSource3REF3  ) ||  ( ClockSource  == Tkdpo2k3k4kSearchSource3REF4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureTransition(Tkdpo2k3k4kSearchSource2Enum Source, double DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum When, Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource2CH4 ) ||  ( Source == Tkdpo2k3k4kSearchSource2CH4 ) || ( Source == Tkdpo2k3k4kSearchSource2REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource2REF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigurePulseWidth(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity, double HighLimit, double LowLimit)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource3CH3 ) ||  ( Source == Tkdpo2k3k4kSearchSource3CH4 ) || ( Source == Tkdpo2k3k4kSearchSource3REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource3REF4 )))
						{
							return err.ChannelNotSupported();
						}
	
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadEdge(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* Slope)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Level = 0.0E+0;
		*Source = Tkdpo2k3k4kSearchSource3CH1;
		*Slope = Tkdpo2k3k4kTriggerSlopeRise;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Slope, Source, Level);

	return hr;
}


HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadRunt(Tkdpo2k3k4kSearchSource2Enum* Source, Tkdpo2k3k4kTriggerRuntConditionEnum* When, Tkdpo2k3k4kTriggerRuntPolarityEnum* Polarity, double* Width)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kSearchSource2CH1;
		*When = Tkdpo2k3k4kTriggerRuntConditionOccurs;
		*Polarity = Tkdpo2k3k4kTriggerRuntPolarityPOSitive;
		*Width = 8.0000E-9;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, When, Polarity, Width);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadSetupHold(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* ClockEdge, Tkdpo2k3k4kSearchSource3Enum* Clocksource, double* HoldTime, double* SetTime, double* ClockLevel)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Level = 9.91E+37;
		*Source = Tkdpo2k3k4kSearchSource3NONE;
		*ClockEdge = Tkdpo2k3k4kTriggerSlopeRise;
		*Clocksource = Tkdpo2k3k4kSearchSource3CH1;
		*HoldTime = 8.0000E-9;
		*SetTime = 8.0000E-9;
		*ClockLevel = 0.0E+0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Level, ClockEdge, HoldTime, SetTime, ClockLevel);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadPulseWidth(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum* Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum* Polarity)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Level = 8.0000E-9;
		*Source = Tkdpo2k3k4kSearchSource3CH1;
		*Condition = Tkdpo2k3k4kTriggerPulseWidthConditionLESSthan;
		*Polarity = Tkdpo2k3k4kTriggerWidthPolarityPositive;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Level, Source, Condition, Polarity);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_get_SearchType(Tkdpo2k3k4kSearchTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_put_SearchType(Tkdpo2k3k4kSearchTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_get_State(Tkdpo2k3k4kSearchStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_put_State(Tkdpo2k3k4kSearchStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_get_Total(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_get_Bus(ITkdpo2k3k4kSearchBus** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadARFIndependentParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kFrequencyRFTraceTypeAmplitude;
		*Level = 1.4;
		*UpperThreshold = 1;
		*LowerThreshold = 0.1;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,Level,UpperThreshold, LowerThreshold);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureARFIndependentParameters(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double Level, double UpperThreshold, double LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kChannel1;
		*Level = 0.0E+0;
		*UpperThreshold = 800.0000E-3;
		*LowerThreshold = 0.0E+0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, Level, UpperThreshold, LowerThreshold);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureAIndependentParameters(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kChannel3 ) ||  ( Source == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}



HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadSetupHoldSearchSource(Tkdpo2k3k4kSearchSource3Enum* Clocksource, Tkdpo2k3k4kSearchSource3Enum* DataSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Clocksource = Tkdpo2k3k4kSearchSource3CH1;
		*DataSource = Tkdpo2k3k4kSearchSource3NONE;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Clocksource);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadLogicClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kTriggerLogicClockSourceNone;
		*EdgeType = Tkdpo2k3k4kTriggerLogicClockEdgeTypeRise;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, EdgeType);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureLogicClock(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kTriggerLogicClockSourceCH3  ) ||  ( Source == Tkdpo2k3k4kTriggerLogicClockSourceCH4 ) || ( Source == Tkdpo2k3k4kTriggerLogicClockSourceREF3  ) ||  ( Source == Tkdpo2k3k4kTriggerLogicClockSourceREF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureLogicPattern(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum PatternType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadLogicPattern(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum* PatternType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Condition = Tkdpo2k3k4kTriggerPatternConditionTrue;
		*LessLimit = 8.0000E-9;
		*MoreLimit = 8.0000E-9;
		*PatternType = Tkdpo2k3k4kTriggerPatternTypeAND;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Condition, LessLimit, MoreLimit, PatternType);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadLogicSearchSource(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum* PatternInput)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Source = Tkdpo2k3k4kSearchSource2CH1;
		*Input = Tkdpo2k3k4kTriggerLogicInputChannelX;
		*Threshold = 0.0E+0;
		*PatternInput = Tkdpo2k3k4kTriggerLogicInputChannelX;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource2CH4 ) ||  ( Source == Tkdpo2k3k4kSearchSource2CH4 ) || ( Source == Tkdpo2k3k4kSearchSource2REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource2REF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, Input, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ConfigureLogicSearchSource(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( Source == Tkdpo2k3k4kSearchSource2CH4 ) ||  ( Source == Tkdpo2k3k4kSearchSource2CH4 ) || ( Source == Tkdpo2k3k4kSearchSource2REF3  ) ||  ( Source == Tkdpo2k3k4kSearchSource2REF4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearch_ReadTransition(Tkdpo2k3k4kSearchSource2Enum* Source, double* DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum* When, Tkdpo2k3k4kTriggerPulsePolarityEnum* Polarity)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kSearchSource2CH1;
		*DeltaTime = 8.0000E-9;
		*When = Tkdpo2k3k4kTriggerTransitionConditionSlower;
		*Polarity = Tkdpo2k3k4kTriggerPulsePolarityPositive;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, DeltaTime, When, Polarity);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_BusSource(Tkdpo2k3k4kTrigABusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_put_BusSource(Tkdpo2k3k4kTrigABusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_put_ParallelData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_Audio(ITkdpo2k3k4kSearchBusAudio** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_USB(ITkdpo2k3k4kSearchBusUSB** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_SPI(ITkdpo2k3k4kSearchBusSPI** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_RS232(ITkdpo2k3k4kSearchBusRS232** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_LIN(ITkdpo2k3k4kSearchBusLIN** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_I2C(ITkdpo2k3k4kSearchBusI2C** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_Flexray(ITkdpo2k3k4kSearchBusFlexray** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_get_CAN(ITkdpo2k3k4kSearchBusCAN** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_get_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusAudio_put_DataWord(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_DataOffset(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_Qualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_DataType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_AddressHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_EndPointValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_HandshakeType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_SOFFrameNumber(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_SpecialType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_get_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusUSB_put_TokenType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_get_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_put_DataINValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_get_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusSPI_put_DataOUTValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_get_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_put_RXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_get_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_put_RXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_get_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_put_TXDataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_get_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusRS232_put_TXDataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_DataHighValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val)
{
	HRESULT hr = S_OK;

	if((val == Tkdpo2k3k4kTrigABusLINErrorTypeHEADertime ) || (val == Tkdpo2k3k4kTrigABusLINErrorTypeRESPtime) || (val == Tkdpo2k3k4kTrigABusLINErrorTypeFRAMetime))
		hr =  err.ValueNotSupported(_T("Tkdpo2k3k4kTrigABusLINErrorType"), _T("val"));
	
	else  hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_get_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusLIN_put_IdentifierValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusI2C_put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}



HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_get_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_put_EOFType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_get_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_put_ErrorType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ReadHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*CRC = ::SysAllocString(L"XXXXXXXXXXX");
		*CycleCount = ::SysAllocString(L"XXXXXX");
		*FrameID = ::SysAllocString(L"XXXXXXXXXXX");
		*IndicatorBits = ::SysAllocString(L"XXXXX");
		*PayloadLength = ::SysAllocString(L"XXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, CRC, CycleCount, FrameID, IndicatorBits, PayloadLength);
	
	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ConfigureHeader(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ReadFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXXXXXXX");
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Value = ::SysAllocString(L"XXXXXXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT,HighValue,Qualifier,Value );

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ConfigureFrameID(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ReadData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXXXX");
		*Offset = -1;
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Size = 1;
		*Value = ::SysAllocString(L"XXXXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, HighValue, Offset, Qualifier, Size, Value);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ConfigureData(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ReadCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		BusSource = Tkdpo2k3k4kTrigABusSourceB1;
		*HighValue = ::SysAllocString(L"XXXXXX");
		*Qualifier = Tkdpo2k3k4kTrigABusFlexrayCycleCountEqual;
		*Value = ::SysAllocString(L"XXXXXX");
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, HighValue, Qualifier, Value);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusFlexray_ConfigureCycleCount(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}
HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_Condition(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_DataQualifier(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_DataValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_DataDirection(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_DataSize(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_FrameType(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_AddressMode(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_get_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBusCAN_put_AddressValue(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kSearch::ITkdpo2k3k4kSearchBus_Configure(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kBusTypeEnum BusType)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}
