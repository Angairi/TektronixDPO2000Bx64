#pragma once

#include "_Tkdpo2k3k4k.h"
#include "CoTkdpo2k3k4k.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoTkdpo2k3k4kSearch.nimbus.h"

class ATL_NO_VTABLE Tkdpo2k3k4kSearch :
	public _RepCap<Tkdpo2k3k4kSearch>,
	public _ITkdpo2k3k4kSearch,
	public _ITkdpo2k3k4kSearchBus,
	public _ITkdpo2k3k4kSearchBusAudio,
	public _ITkdpo2k3k4kSearchBusUSB,
	public _ITkdpo2k3k4kSearchBusSPI,
	public _ITkdpo2k3k4kSearchBusRS232,
	public _ITkdpo2k3k4kSearchBusLIN,
	public _ITkdpo2k3k4kSearchBusI2C,
	public _ITkdpo2k3k4kSearchBusFlexray,
	public _ITkdpo2k3k4kSearchBusCAN
{
	DECLARE_NIMBUS_CLASS_TKDPO2K3K4KSEARCH()

	__declspec(property(get=GetIoSession)) IVisaCSession& io;
	__declspec(property(get=GetErrorReporter)) CTkdpo2k3k4kErrorReporter& err;

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

public:
	bool Is2Channel() { return GetModel().GetLength() > 6 && GetModel()[6] == '2'; }

	STDMETHOD(ITkdpo2k3k4kSearch_Copy)(Tkdpo2k3k4kSearchCopyEnum Type);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureEdge)(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum Slope);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureRunt)(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerRuntConditionEnum When, Tkdpo2k3k4kTriggerRuntPolarityEnum Polarity, double Width);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureSetupHold)(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerSlopeEnum ClockEdge, Tkdpo2k3k4kSearchSource3Enum ClockSource, double HoldTime, double SetTime, double ClockLevel);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureTransition)(Tkdpo2k3k4kSearchSource2Enum Source, double DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum When, Tkdpo2k3k4kTriggerPulsePolarityEnum Polarity);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigurePulseWidth)(double Level, Tkdpo2k3k4kSearchSource3Enum Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum Polarity, double HighLimit, double LowLimit);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadEdge)(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* Slope);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadRunt)(Tkdpo2k3k4kSearchSource2Enum* Source, Tkdpo2k3k4kTriggerRuntConditionEnum* When, Tkdpo2k3k4kTriggerRuntPolarityEnum* Polarity, double* Width);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadSetupHold)(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerSlopeEnum* ClockEdge, Tkdpo2k3k4kSearchSource3Enum* Clocksource, double* HoldTime, double* SetTime, double* ClockLevel);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadPulseWidth)(double* Level, Tkdpo2k3k4kSearchSource3Enum* Source, Tkdpo2k3k4kTriggerPulseWidthConditionEnum* Condition, Tkdpo2k3k4kTriggerWidthPolarityEnum* Polarity);
	STDMETHOD(ITkdpo2k3k4kSearch_get_SearchType)(Tkdpo2k3k4kSearchTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearch_put_SearchType)(Tkdpo2k3k4kSearchTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearch_get_State)(Tkdpo2k3k4kSearchStateEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearch_put_State)(Tkdpo2k3k4kSearchStateEnum val);
	STDMETHOD(ITkdpo2k3k4kSearch_get_Total)(long* val);
	STDMETHOD(ITkdpo2k3k4kSearch_get_Bus)(ITkdpo2k3k4kSearchBus** val);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadARFIndependentParameters)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureARFIndependentParameters)(Tkdpo2k3k4kFrequencyRFTraceTypeEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadAIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double* Level, double* UpperThreshold, double* LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureAIndependentParameters)(Tkdpo2k3k4kChannelEnum Source, double Level, double UpperThreshold, double LowerThreshold);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadSetupHoldSearchSource)(Tkdpo2k3k4kSearchSource3Enum* Clocksource, Tkdpo2k3k4kSearchSource3Enum* DataSource);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadLogicClock)(Tkdpo2k3k4kTriggerLogicClockSourceEnum* Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum* EdgeType);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureLogicClock)(Tkdpo2k3k4kTriggerLogicClockSourceEnum Source, Tkdpo2k3k4kTriggerLogicClockEdgeTypeEnum EdgeType);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureLogicPattern)(Tkdpo2k3k4kTriggerPatternConditionEnum Condition, double LessLimit, double MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum PatternType);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadLogicPattern)(Tkdpo2k3k4kTriggerPatternConditionEnum* Condition, double* LessLimit, double* MoreLimit, Tkdpo2k3k4kTriggerPatternTypeEnum* PatternType);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadLogicSearchSource)(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum* Input, double* Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum* PatternInput);
	STDMETHOD(ITkdpo2k3k4kSearch_ConfigureLogicSearchSource)(Tkdpo2k3k4kSearchSource2Enum Source, Tkdpo2k3k4kTriggerLogicInputChannelEnum Input, double Threshold, Tkdpo2k3k4kTriggerLogicInputChannelEnum PatternInput);
	STDMETHOD(ITkdpo2k3k4kSearch_ReadTransition)(Tkdpo2k3k4kSearchSource2Enum* Source, double* DeltaTime, Tkdpo2k3k4kTriggerTransitionConditionEnum* When, Tkdpo2k3k4kTriggerPulsePolarityEnum* Polarity);

	STDMETHOD(ITkdpo2k3k4kSearchBus_get_BusSource)(Tkdpo2k3k4kTrigABusSourceEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_put_BusSource)(Tkdpo2k3k4kTrigABusSourceEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_ParallelData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_put_ParallelData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_Audio)(ITkdpo2k3k4kSearchBusAudio** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_USB)(ITkdpo2k3k4kSearchBusUSB** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_SPI)(ITkdpo2k3k4kSearchBusSPI** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_RS232)(ITkdpo2k3k4kSearchBusRS232** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_LIN)(ITkdpo2k3k4kSearchBusLIN** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_I2C)(ITkdpo2k3k4kSearchBusI2C** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_Flexray)(ITkdpo2k3k4kSearchBusFlexray** val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_get_CAN)(ITkdpo2k3k4kSearchBusCAN** val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_get_DataWord)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusAudio_put_DataWord)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusAudioDataAlignmentEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_DataOffset)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_Qualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_Qualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_DataType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_DataType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBDATATypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_AddressHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_AddressHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_EndPointValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_EndPointValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBERRTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_HandshakeType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_HandshakeType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBHandshakeTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_SOFFrameNumber)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_SOFFrameNumber)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_SpecialType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_SpecialType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBSpecialTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_get_TokenType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusUSB_put_TokenType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusUSBTokenTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusSPIConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_get_DataINValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_put_DataINValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_get_DataOUTValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusSPI_put_DataOUTValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusRS232ConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_get_RXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_put_RXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_get_RXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_put_RXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_get_TXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_put_TXDataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_get_TXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusRS232_put_TXDataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_DataHighValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusLINErrorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_get_IdentifierValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusLIN_put_IdentifierValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CDataDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CTrigConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_get_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusI2C_put_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusI2CAddrModeEnum val);

	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_get_EOFType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_put_EOFType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayEOFTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_get_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_put_ErrorType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayErrorTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_get_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_put_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusFlexrayFrameTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ReadHeader)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* CRC, BSTR* CycleCount, BSTR* FrameID, BSTR* IndicatorBits, BSTR* PayloadLength);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ConfigureHeader)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR CRC, BSTR CycleCount, BSTR FrameID, BSTR IndicatorBits, BSTR PayloadLength);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ReadFrameID)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ConfigureFrameID)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ReadData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, long* Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, long* Size, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ConfigureData)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, long Offset, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, long Size, BSTR Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ReadCycleCount)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum* Qualifier, BSTR* Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusFlexray_ConfigureCycleCount)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR HighValue, Tkdpo2k3k4kTrigABusFlexrayCycleCountEnum Qualifier, BSTR Value);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_Condition)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANConditionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_DataQualifier)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANQualifierEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_DataValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_DataDirection)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANDataDirectionEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_DataSize)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, long val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_FrameType)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANFrameTypeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_AddressMode)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kTrigABusCANAddressModeEnum val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_get_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR* val);
	STDMETHOD(ITkdpo2k3k4kSearchBusCAN_put_AddressValue)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, BSTR val);
	STDMETHOD(ITkdpo2k3k4kSearchBus_Configure)(Tkdpo2k3k4kTrigABusSourceEnum BusSource, Tkdpo2k3k4kBusTypeEnum BusType);
};

NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Tkdpo2k3k4kSearch)
