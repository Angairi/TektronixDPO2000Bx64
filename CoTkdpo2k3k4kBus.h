#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kBus.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kBus :
	public _RepCap<Tkdpo2k3k4kBus>,
	public _ITkdpo2k3k4kBus
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KBUS()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:
	bool Is2Channel() { return GetModel().GetLength() > 6 && GetModel()[6] == '2'; }

	STDMETHOD(ITkdpo2k3k4kBus_ConfigureI2C)(Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum RWInAddress);
	STDMETHOD(ITkdpo2k3k4kBus_ReadI2C)(Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusI2CRWInAddressEnum* RWInAddress);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureAudioInputs)(Tkdpo2k3k4kAudioBusTypeEnum Type, Tkdpo2k3k4kBusSourceEnum ClockSource, Tkdpo2k3k4kBusSourceEnum DataSource, Tkdpo2k3k4kBusSourceEnum WordSelectSource, Tkdpo2k3k4kBusSourceEnum FrameSyncSource);
	STDMETHOD(ITkdpo2k3k4kBus_ReadAudioInputs)(Tkdpo2k3k4kAudioBusTypeEnum* Type, Tkdpo2k3k4kBusSourceEnum* ClockSource, Tkdpo2k3k4kBusSourceEnum* DataSource, Tkdpo2k3k4kBusSourceEnum* WordSelectSource, Tkdpo2k3k4kBusSourceEnum* FrameSyncSource);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureAudio)(long BitDelay, Tkdpo2k3k4kBusBitOrderEnum BitOrder, long BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum DataPolarity, long BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum WordSelectPolarity, long ChannelsPerFrame);
	STDMETHOD(ITkdpo2k3k4kBus_ReadAudio)(long* BitDelay, Tkdpo2k3k4kBusBitOrderEnum* BitOrder, long* BitsPerChannel, Tkdpo2k3k4kAudioPolarityEnum* ClockPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* DataPolarity, long* BitsPerWord, Tkdpo2k3k4kDisplayFormatEnum* DisplayFormat, Tkdpo2k3k4kAudioPolarityEnum* FrameSyncPolarity, Tkdpo2k3k4kAudioDataPolarityEnum* WordSelectPolarity, long* ChannelsPerFrame);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureCAN)(Tkdpo2k3k4kBusSourceEnum Source, long SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum SignalType, long BitRate);
	STDMETHOD(ITkdpo2k3k4kBus_ReadCAN)(Tkdpo2k3k4kBusSourceEnum* Source, long* SamplePoint, Tkdpo2k3k4kCANProbeTypeEnum* SignalType, long* BitRate);
	STDMETHOD(ITkdpo2k3k4kBus_put_CANBitRateEnum)(Tkdpo2k3k4kCANBitRateEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_Position)(double* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_Position)(double val);
	STDMETHOD(ITkdpo2k3k4kBus_get_Label)(BSTR* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_Label)(BSTR val);
	STDMETHOD(ITkdpo2k3k4kBus_get_Type)(Tkdpo2k3k4kBusTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_Type)(Tkdpo2k3k4kBusTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_State)(Tkdpo2k3k4kBusStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_State)(Tkdpo2k3k4kBusStateEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_DisplayType)(Tkdpo2k3k4kBusDisplayTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_DisplayType)(Tkdpo2k3k4kBusDisplayTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_IsClockedParallelBus)(VARIANT_BOOL* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_IsClockedParallelBus)(VARIANT_BOOL val);
	STDMETHOD(ITkdpo2k3k4kBus_get_DisplayFormat)(Tkdpo2k3k4kBusDisplayFormatEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_DisplayFormat)(Tkdpo2k3k4kBusDisplayFormatEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_ParallelBusClockSource)(Tkdpo2k3k4kBusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_ParallelBusClockSource)(Tkdpo2k3k4kBusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_ParallelBusClockEdge)(Tkdpo2k3k4kBusParallelBusClockEdgeEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_ParallelBusClockEdge)(Tkdpo2k3k4kBusParallelBusClockEdgeEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_RS232Delimiter)(Tkdpo2k3k4kBusRS232DelimiterEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_RS232Delimiter)(Tkdpo2k3k4kBusRS232DelimiterEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_RS232DisplayMode)(Tkdpo2k3k4kBusRS232DisplayModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_RS232DisplayMode)(Tkdpo2k3k4kBusRS232DisplayModeEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_RS232TXSource)(Tkdpo2k3k4kBusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_RS232TXSource)(Tkdpo2k3k4kBusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_RS232RXSource)(Tkdpo2k3k4kBusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_RS232RXSource)(Tkdpo2k3k4kBusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_ParallelBitSource)(long Bit, Tkdpo2k3k4kBusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_ParallelBitSource)(long Bit, Tkdpo2k3k4kBusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_ParallelWidth)(long* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_ParallelWidth)(long val);
	STDMETHOD(ITkdpo2k3k4kBus_get_SPIFraming)(Tkdpo2k3k4kBusSPIFramingEnum* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_SPIFraming)(Tkdpo2k3k4kBusSPIFramingEnum val);
	STDMETHOD(ITkdpo2k3k4kBus_get_SPIIdleTime)(double* val);
	STDMETHOD(ITkdpo2k3k4kBus_put_SPIIdleTime)(double val);
	STDMETHOD(ITkdpo2k3k4kBus_SaveEventTable)(BSTR Filename);
	STDMETHOD(ITkdpo2k3k4kBus_GetUpperThreshhold)(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_SetUpperThreshhold)(Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_GetThresholdDigitalChannel)(Tkdpo2k3k4kDigitalChannelEnum InputSource, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_SetThresholdDigitalChannel)(Tkdpo2k3k4kDigitalChannelEnum InputSource, double Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_GetLowThresholdChannel)(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_GetThresholdChannel)(Tkdpo2k3k4kChannelEnum InputSource, double* Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_SetLowThreshholdChannel)(Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_SetThresholdChannel)(Tkdpo2k3k4kChannelEnum InputSource, double Threshold);
	STDMETHOD(ITkdpo2k3k4kBus_ReadUSB)(Tkdpo2k3k4kBusSourceEnum* DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum* Probe, Tkdpo2k3k4kBusUSBBitrateEnum* Bitrate, Tkdpo2k3k4kBusSourceEnum* DPLUSSource, Tkdpo2k3k4kBusSourceEnum* DMINUSSource);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureUSB)(Tkdpo2k3k4kBusSourceEnum DifferentialSource, Tkdpo2k3k4kBusUSBProbeEnum Probe, Tkdpo2k3k4kBusUSBBitrateEnum Bitrate, Tkdpo2k3k4kBusSourceEnum DPLUSSource, Tkdpo2k3k4kBusSourceEnum DMINUSSource);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureRS232)(Tkdpo2k3k4kBusSourceEnum RXSource, Tkdpo2k3k4kBusRS232PolarityEnum InputPolarity, double Bitrate, long DataBits, Tkdpo2k3k4kBusRS232ParityEnum InputParity, Tkdpo2k3k4kBusSourceEnum TXSource);
	STDMETHOD(ITkdpo2k3k4kBus_ReadRS232)(Tkdpo2k3k4kBusSourceEnum* RXSource, Tkdpo2k3k4kBusRS232PolarityEnum* InputPolarity, double* Bitrate, long* DataBits, Tkdpo2k3k4kBusRS232ParityEnum* InputParity, Tkdpo2k3k4kBusSourceEnum* TXSource);
	STDMETHOD(ITkdpo2k3k4kBus_ReadSPI)(Tkdpo2k3k4kBusSourceEnum* Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum* ClockPolarity, long* DataSize, Tkdpo2k3k4kBusSourceEnum* DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum* BitOrder, Tkdpo2k3k4kBusSourceEnum* SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum* SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum* DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum* DataMOSIPolarity);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureSPI)(Tkdpo2k3k4kBusSourceEnum Clocksource, Tkdpo2k3k4kBusSPIClockPolarityEnum ClockPolarity, long DataSize, Tkdpo2k3k4kBusSourceEnum DataMISOSource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMISOPolarity, Tkdpo2k3k4kBusSPIBitOrderEnum BitOrder, Tkdpo2k3k4kBusSourceEnum SlaveSelectSource, Tkdpo2k3k4kBusSPISlaveSelectPolarityEnum SlaveSelectPolarity, Tkdpo2k3k4kBusSourceEnum DataMOSISource, Tkdpo2k3k4kBusSPIDataPolarityEnum DataMOSIPolarity);
	STDMETHOD(ITkdpo2k3k4kBus_ReadLIN)(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kLINIDFormatEnum* IDFormat, long* BitRate, Tkdpo2k3k4kLINPolarityEnum* Polarity, long* SamplePoint, Tkdpo2k3k4kLINStandardEnum* Standard);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureLIN)(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kLINIDFormatEnum IDFormat, long BitRate, Tkdpo2k3k4kLINPolarityEnum Polarity, long SamplePoint, Tkdpo2k3k4kLINStandardEnum Standard);
	STDMETHOD(ITkdpo2k3k4kBus_ReadFlexray)(Tkdpo2k3k4kBusSourceEnum* Source, Tkdpo2k3k4kFlexrayChannelEnum* IDFormat, Tkdpo2k3k4kFlexraySignalEnum* Standard, long* BitRate);
	STDMETHOD(ITkdpo2k3k4kBus_ConfigureFlexray)(Tkdpo2k3k4kBusSourceEnum Source, Tkdpo2k3k4kFlexrayChannelEnum IDFormat, Tkdpo2k3k4kFlexraySignalEnum Standard, long BitRate);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kBus)
