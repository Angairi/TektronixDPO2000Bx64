#include "stdafx.h"
#include "CoTkdpo2k3k4kBus.h"
#include "CoTkdpo2k3k4k.h"


void Tkdpo2k3k4kBus::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

HRESULT Tkdpo2k3k4kBus::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	

	HRESULT hr = S_OK;

    return hr;
}

HRESULT Tkdpo2k3k4kBus::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureI2C(Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadI2C(Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum* RWInAddress)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*ClockSource = Tkdpo2k3k4kBusSourceCH1;
		*DataSource = Tkdpo2k3k4kBusSourceCH2;
		*RWInAddress = Tkdpo2k3k4kBusI2CRWInAddressNO;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, ClockSource, DataSource, RWInAddress);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureAudioInputs(Tkdpo2k3k4kAudioBusTypeEnum Type, Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusSourceEnum WordSelectSource, Tkdpo2k3k4kBusSourceEnum FrameSyncSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadAudioInputs(Tkdpo2k3k4kAudioBusTypeEnum* Type, Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusSourceEnum* WordSelectSource, Tkdpo2k3k4kBusSourceEnum* FrameSyncSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Type = Tkdpo2k3k4kAudioBusTypeI2S;
		*ClockSource = Tkdpo2k3k4kBusSourceCH1;
		*DataSource = Tkdpo2k3k4kBusSourceCH2;
		*WordSelectSource = Tkdpo2k3k4kBusSourceCH2;
		*FrameSyncSource = Tkdpo2k3k4kBusSourceCH2;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Type, ClockSource, DataSource, WordSelectSource, FrameSyncSource);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureAudio(long BitDelay, Tkdpo2k3k4kBusBitOrderEnum BitOrder, long BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity, long BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity, long ChannelsPerFrame)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadAudio(long* BitDelay, Tkdpo2k3k4kBusBitOrderEnum* BitOrder, long* BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum* ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* DataPolarity, long* BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum* DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum* FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* WordSelectPolarity, long* ChannelsPerFrame)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*BitDelay = (long)1;
		*BitOrder = Tkdpo2k3k4kBusBitOrderMSB;
		*BitsPerChannel = (long)24; 
		*ClockPolarity = Tkdpo2k3k4kAudioPolarityRise;
		*DataPolarity = Tkdpo2k3k4kAudioDataPolarityNormal;
		*BitsPerWord = (long)24;
		*DisplayFormat = Tkdpo2k3k4kDisplayFormatSignedDecimal;
		*FrameSyncPolarity = Tkdpo2k3k4kAudioPolarityRise;
		*WordSelectPolarity = Tkdpo2k3k4kAudioDataPolarityNormal;
		*ChannelsPerFrame = (long)8;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, BitDelay, BitOrder, BitsPerChannel, ClockPolarity, DataPolarity, BitsPerWord, DisplayFormat, FrameSyncPolarity, WordSelectPolarity, ChannelsPerFrame);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureCAN(Tkdpo2k3k4kBusSourceEnum Source, long SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum SignalType, long BitRate)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadCAN(Tkdpo2k3k4kBusSourceEnum* Source, long* SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum* SignalType, long* BitRate)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kBusSourceCH1;
		*SamplePoint = 50;
		*SignalType = Tkdpo2k3k4kCANProbeTypeCANH;
		*BitRate = (long)500000;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, SamplePoint, SignalType, BitRate);

	return hr;
}


HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_CANBitRateEnum(Tkdpo2k3k4kCANBitRateEnum val)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_Position(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_Position(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_Label(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_Label(BSTR val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_Type(Tkdpo2k3k4kBusTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_Type(Tkdpo2k3k4kBusTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_State(Tkdpo2k3k4kBusStateEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_State(Tkdpo2k3k4kBusStateEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_DisplayType(Tkdpo2k3k4kBusDisplayTypeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_DisplayType(Tkdpo2k3k4kBusDisplayTypeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_IsClockedParallelBus(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_IsClockedParallelBus(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_DisplayFormat(Tkdpo2k3k4kBusDisplayFormatEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_DisplayFormat(Tkdpo2k3k4kBusDisplayFormatEnum val)
{
	HRESULT hr = S_OK;

	if((InstrumentInFamily(_T("DPO2000 Series")) || InstrumentInFamily(_T("MSO2000 Series"))) && (val == Tkdpo2k3k4kBusDisplayFormatMixed2))
		hr=err.ValueNotSupported(_T("Tkdpo2k3k4kBusDisplayFormatMixed2"), _T("val"));
	else
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_ParallelBusClockSource(Tkdpo2k3k4kBusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_ParallelBusClockSource(Tkdpo2k3k4kBusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_ParallelBusClockEdge(Tkdpo2k3k4kBusParallelBusClockEdgeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_ParallelBusClockEdge(Tkdpo2k3k4kBusParallelBusClockEdgeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_RS232Delimiter(Tkdpo2k3k4kBusRS232DelimiterEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_RS232Delimiter(Tkdpo2k3k4kBusRS232DelimiterEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_RS232DisplayMode(Tkdpo2k3k4kBusRS232DisplayModeEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_RS232DisplayMode(Tkdpo2k3k4kBusRS232DisplayModeEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_RS232TXSource(Tkdpo2k3k4kBusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_RS232TXSource(Tkdpo2k3k4kBusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_RS232RXSource(Tkdpo2k3k4kBusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_RS232RXSource(Tkdpo2k3k4kBusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_ParallelBitSource(long Bit, Tkdpo2k3k4kBusSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_ParallelBitSource(long Bit, Tkdpo2k3k4kBusSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_ParallelWidth(long* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_ParallelWidth(long val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_SPIFraming(Tkdpo2k3k4kBusSPIFramingEnum* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_SPIFraming(Tkdpo2k3k4kBusSPIFramingEnum val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_get_SPIIdleTime(double* val)
{
	HRESULT hr = S_OK;

	hr = InstrQueryResponse(CUR_TIMEOUT, val);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_put_SPIIdleTime(double val)
{
	HRESULT hr = S_OK;

	hr = InstrPrintCommand();

	return hr;
}


HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_SaveEventTable(BSTR Filename)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_GetUpperThreshhold(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Threshold = 800.0000E-3;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( InputSource  == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrQueryResponse(CUR_TIMEOUT, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_SetUpperThreshhold(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( InputSource  == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrQueryResponse(CUR_TIMEOUT, Threshold);
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_GetThresholdDigitalChannel(Tkdpo2k3k4kDigitalChannelEnum InputSource, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Threshold = 0;
		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_SetThresholdDigitalChannel(Tkdpo2k3k4kDigitalChannelEnum InputSource, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_GetLowThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Threshold = 0.0E+0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( InputSource == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_GetThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		Threshold = 0;
		return hr;
	}
	if ( ( Is2Channel())  &&  ( ( InputSource == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrQueryResponse(CUR_TIMEOUT, Threshold);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_SetLowThreshholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( InputSource == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}
	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_SetThresholdChannel(Tkdpo2k3k4kChannelEnum InputSource, double Threshold)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	if ( ( Is2Channel())  &&  ( ( InputSource == Tkdpo2k3k4kChannel3 ) ||  ( InputSource  == Tkdpo2k3k4kChannel4 )))
						{
							return err.ChannelNotSupported();
						}

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadUSB(Tkdpo2k3k4kBusSourceEnum* DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum* Probe, Tkdpo2k3k4kBusUSBBitrateEnum* Bitrate, Tkdpo2k3k4kBusSourceEnum* DPLUSSource, Tkdpo2k3k4kBusSourceEnum* DMINUSSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*DifferentialSource = Tkdpo2k3k4kBusSourceCH1;
		*Probe = Tkdpo2k3k4kBusUSBProbeDifferential;
		*Bitrate = Tkdpo2k3k4kBusUSBBitrateFull;
		*DPLUSSource = Tkdpo2k3k4kBusSourceCH1;
		*DMINUSSource = Tkdpo2k3k4kBusSourceCH2;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, DifferentialSource, Probe, Bitrate, DPLUSSource, DMINUSSource);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureUSB(Tkdpo2k3k4kBusSourceEnum DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum Probe, Tkdpo2k3k4kBusUSBBitrateEnum Bitrate, Tkdpo2k3k4kBusSourceEnum DPLUSSource, Tkdpo2k3k4kBusSourceEnum DMINUSSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureRS232(Tkdpo2k3k4kBusSourceEnum RXSource, Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity, double Bitrate, long DataBits, Tkdpo2k3k4kBusRS232ParityEnum InputParity, Tkdpo2k3k4kBusSourceEnum TXSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadRS232(Tkdpo2k3k4kBusSourceEnum* RXSource, Tkdpo2k3k4kBusRS232PolarityEnum* InputPolarity, double* Bitrate, long* DataBits, Tkdpo2k3k4kBusRS232ParityEnum* InputParity, Tkdpo2k3k4kBusSourceEnum* TXSource)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*RXSource = Tkdpo2k3k4kBusSourceCH1;
		*InputPolarity = Tkdpo2k3k4kBusRS232PolarityNormal;
		*Bitrate = (double)9600;
		*DataBits = (long)8;
		*InputParity = Tkdpo2k3k4kBusRS232ParityNone;
		*TXSource = Tkdpo2k3k4kBusSourceCH1;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, RXSource, InputPolarity, Bitrate, DataBits, InputParity, TXSource);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadSPI(Tkdpo2k3k4kBusSourceEnum* Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum* ClockPolarity, long* DataSize, Tkdpo2k3k4kBusSourceEnum* DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum* BitOrder, Tkdpo2k3k4kBusSourceEnum* SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum* SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum* DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMOSIPolarity)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Clocksource = Tkdpo2k3k4kBusSourceCH1;
		*ClockPolarity = Tkdpo2k3k4kBusSPIClockPolarityRISE;
		*DataSize = (long)8;
		*DataMISOSource = Tkdpo2k3k4kBusSourceCH1;
		*DataMISOPolarity = Tkdpo2k3k4kBusSPIDataPolarityHIGH;
		*BitOrder = Tkdpo2k3k4kBusSPIBitOrderMSB;
		*SlaveSelectSource = Tkdpo2k3k4kBusSourceCH2;
		*SlaveSelectPolarity = Tkdpo2k3k4kBusSPISlaveSelectPolarityLOW;
		*DataMOSISource = Tkdpo2k3k4kBusSourceCH3;
		*DataMOSIPolarity = Tkdpo2k3k4kBusSPIDataPolarityHIGH;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Clocksource, ClockPolarity, DataSize, DataMISOSource, DataMISOPolarity, BitOrder, SlaveSelectSource, SlaveSelectPolarity, DataMOSISource, DataMOSIPolarity);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureSPI(Tkdpo2k3k4kBusSourceEnum Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity, long DataSize, Tkdpo2k3k4kBusSourceEnum DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder, Tkdpo2k3k4kBusSourceEnum SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadLIN(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kLINIDFormatEnum* IDFormat, long* BitRate, Tkdpo2k3k4kLINPolarityEnum* Polarity, long* SamplePoint, Tkdpo2k3k4kLINStandardEnum* Standard)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kBusSourceCH1;
		*IDFormat = Tkdpo2k3k4kLINIDFormatNoParity;
		*BitRate = (long)19200;
		*Polarity = Tkdpo2k3k4kLINPolarityNormal;
		*SamplePoint = (long)50;
		*Standard = Tkdpo2k3k4kLINStandardV2X;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, BitRate, IDFormat, Polarity, SamplePoint, Standard);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureLIN(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kLINIDFormatEnum IDFormat, long BitRate, Tkdpo2k3k4kLINPolarityEnum Polarity, long SamplePoint, Tkdpo2k3k4kLINStandardEnum Standard)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ReadFlexray(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kFlexrayChannelEnum* IDFormat, Tkdpo2k3k4kFlexraySignalEnum* Standard, long* BitRate)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		*Source = Tkdpo2k3k4kBusSourceCH1;
		*IDFormat = Tkdpo2k3k4kFlexrayChannelA;
		*Standard = Tkdpo2k3k4kFlexraySignalBDIFFBP;
		*BitRate = (long)10000000;

		return hr;
	}
	hr = InstrQueryResponse(CUR_TIMEOUT, Source, IDFormat, Standard, BitRate);

	return hr;
}

HRESULT Tkdpo2k3k4kBus::ITkdpo2k3k4kBus_ConfigureFlexray(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kFlexrayChannelEnum IDFormat, Tkdpo2k3k4kFlexraySignalEnum Standard, long BitRate)
{
	HRESULT hr = S_OK;

	if (GetSimulate())
		return hr;

	hr = InstrPrintCommand();

	return hr;
}
