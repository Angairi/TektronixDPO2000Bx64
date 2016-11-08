/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#pragma warning( push )
#pragma warning( disable : 4481 )	// C4481: nonstandard extension used

#include "CoTkdpo2k3k4k.h"

class CTkdpo2k3k4kErrorReporter :
	public CErrorReporter
{
public:
	CTkdpo2k3k4kErrorReporter(ICallContextProvider* pCallContextProvider)
		: CErrorReporter(__uuidof(Tkdpo2k3k4k), pCallContextProvider)
	{
	}

	// "I/O error."
	HRESULT IoError(const CString& strDetails) const
	{
		HRESULT hr = S_OK;

		IErrorInfo* pErrorInfo = NULL;
		hr = GetErrorInfo(NULL, &pErrorInfo);
		if (hr == S_OK)
		{
			CComBSTR bstrDescription;
			hr = pErrorInfo->GetDescription(&bstrDescription);
			if (SUCCEEDED(hr))
			{
				CString strDescription = COLE2T(bstrDescription);
				hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_GENERAL, LPCTSTR(strDetails), LPCTSTR(strDescription));
			}
			else
			{
				hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_GENERAL, LPCTSTR(strDetails), _T(""));
			}

			pErrorInfo->Release();
		}
		else
		{
			hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_GENERAL, LPCTSTR(strDetails), _T(""));
		}

		return hr;
	}

	// "I/O timeout error."
	HRESULT IoTimeoutError(const CString& strDetails) const
	{
		HRESULT hr = S_OK;

		IErrorInfo* pErrorInfo = NULL;
		hr = GetErrorInfo(NULL, &pErrorInfo);
		if (hr == S_OK)
		{
			CComBSTR bstrDescription;
			hr = pErrorInfo->GetDescription(&bstrDescription);
			if (SUCCEEDED(hr))
			{
				CString strDescription(bstrDescription);
				hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_TIMEOUT, LPCTSTR(strDetails), LPCTSTR(strDescription));
			}
			else
			{
				hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_TIMEOUT, LPCTSTR(strDetails), _T(""));
			}

			pErrorInfo->Release();
		}
		else
		{
			hr = ReportEx(IDS_E_TKDPO2K3K4K_IO_TIMEOUT, LPCTSTR(strDetails), _T(""));
		}

		return hr;
	}

	// "Instrument model does not support this feature: <strModel>."
	virtual HRESULT ModelNotSupported(const CString& strModel = _T(""), const CString& strDetails = _T("")) const override
	{ return ReportEx(IDS_E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED, strDetails, strModel); }

	// "Personality is not active."
	virtual HRESULT PersonalityNotActive(const CString& strDetails = _T("")) const override
	{ return ReportEx(IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE, strDetails); }

	// "Personality is not installed."
	virtual HRESULT PersonalityNotInstalled(const CString& strDetails = _T("")) const override
	{ return ReportEx(IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED, strDetails); }

	// "Personality is not licensed."
	virtual HRESULT PersonalityNotLicensed(const CString& strDetails = _T("")) const override
	{ return ReportEx(IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED, strDetails); }

	// "The driver is already initialized."
	virtual HRESULT AlreadyInitialized(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_ALREADY_INITIALIZED, strDetails); }

	// "The <pszOptionName> name in the option string is unknown."
	virtual HRESULT BadOptionName(LPCTSTR pszOptionName, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BAD_OPTION_NAME, strDetails, pszOptionName); }

	// "The <pszOptionValue> value in the option string is unknown."
	virtual HRESULT BadOptionValue(LPCTSTR pszOptionValue, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BAD_OPTION_VALUE, strDetails, pszOptionValue); }

	// "The repeated capability selector is badly-formed."
	virtual HRESULT BadlyFormedSelector(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BADLY_FORMED_SELECTOR, strDetails); }

	// "The simulation state cannot be changed."
	virtual HRESULT CannotChangeSimulateState(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE, strDetails); }

	// "Cannot open file."
	virtual HRESULT CannotOpenFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_OPEN_FILE, strDetails); }

	// "Failure cannot recover."
	virtual HRESULT CannotRecover(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_RECOVER, strDetails); }

	// "A channel name is required."
	virtual HRESULT ChannelNameRequired(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CHANNEL_NAME_REQUIRED, strDetails); }

	// "File not found."
	virtual HRESULT FileNotFound(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_FILE_NOT_FOUND, strDetails); }

	// "Instrument ID query failed."
	virtual HRESULT InstrumentIdQueryFailed(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_ID_QUERY_FAILED, strDetails); }

	// "Instrument error detected.  Use the ErrorQuery function to retrieve detailed error information."
	virtual HRESULT InstrumentStatus(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INSTRUMENT_STATUS, strDetails); }

	// "Invalid file format."
	virtual HRESULT InvalidFileFormat(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_FILE_FORMAT, strDetails); }

	// "The number of levels in the selector is not valid for the <pszRepCap> repeated capability."
	virtual HRESULT InvalidNumberOfLevelsInSelector(LPCTSTR pszRepCap, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR, strDetails, pszRepCap); }

	// "The pathname is invalid."
	virtual HRESULT InvalidPathName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_PATHNAME, strDetails); }

	// "The range <pszRange> is not valid for the repeated capability <pszRepCap>."
	virtual HRESULT InvalidRangeInSelector(LPCTSTR pszRange	, LPCTSTR pszRepCap, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_RANGE_IN_SELECTOR, strDetails, pszRange, pszRepCap); }
	
	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, const CString& strVal, const CString& strDetails = _T("")) const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, strVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, BSTR bstrVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, bstrVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, LPCTSTR pszVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, pszVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, double dVal, const CString& strFormat = _T("%.15g"), const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, dVal, strFormat, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, long lVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, lVal, strFormat, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, bool bVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, bVal, strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strVal, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, LPCTSTR(strVal), pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, BSTR bstrVal, const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, LPCTSTR(COLE2T(bstrVal)), pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, LPCTSTR pszVal, const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, pszVal, pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, double dVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(strFormat, dVal); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, long lVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(strFormat, lVal); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, bool bVal, const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(_T("%s"), bVal ? _T("True") : _T("False")); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Does not support this class-compliant feature: method <calling method>."
	virtual HRESULT MethodNotSupported(const CString& strDetails = _T("")) const override 
	{ return MethodNotSupported(GetCurrentMethod(), strDetails); }

	// "Does not support this class-compliant feature: method <pszMethod>."
	virtual HRESULT MethodNotSupported(LPCTSTR pszMethod, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_METHOD_NOT_SUPPORTED, strDetails, pszMethod); }

	// "The option string is missing an option name."
	virtual HRESULT MissingOptionName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_MISSING_OPTION_NAME, strDetails); }

	// "The option string is missing an option value."
	virtual HRESULT MissingOptionValue(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_MISSING_OPTION_VALUE, strDetails); }

	// "Does not support this class-compliant feature: property <calling property>."
	virtual HRESULT PropertyNotSupported(const CString& strDetails = _T("")) const override 
	{ return PropertyNotSupported(GetCurrentMethod(), strDetails); }

	// "Does not support this class-compliant feature: property <pszProperty>."
	virtual HRESULT PropertyNotSupported(LPCTSTR pszProperty, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, strDetails, pszProperty); }

	// "A connection to the instrument has not been established."
	virtual HRESULT NotInitialized(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_NOT_INITIALIZED, strDetails); }

	// "Null pointer passed for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT NullPointer(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_NULL_POINTER, strDetails, pszMethod, pszParam); }

	// "Null pointer passed for method <calling method>, parameter <pszParam>."
	virtual HRESULT NullPointer(LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return NullPointer(GetCurrentMethod(), pszParam, strDetails); }

	// "Operation in progress."
	virtual HRESULT OperationPending(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_OPERATION_PENDING, strDetails); }

	// "Could not allocate necessary memory."
	virtual HRESULT OutOfMemory(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_OUT_OF_MEMORY, strDetails); }

	// "Error reading file."
	virtual HRESULT ReadingFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_READING_FILE, strDetails); }

	// "Instrument reset failed."
	virtual HRESULT InstrumentResetFailed(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_RESET_FAILED, strDetails); }

	// "Unknown resource."
	virtual HRESULT ResourceUnknown(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_RESOURCE_UNKNOWN, strDetails); }

	// "The instrument status is not available."
	virtual HRESULT StatusNotAvailable(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_STATUS_NOT_AVAILABLE, strDetails); }

	// "Too many files are open."
	virtual HRESULT TooManyOpenFiles(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_TOO_MANY_OPEN_FILES, strDetails); }

	// "Unexpected response from instrument."
	virtual HRESULT UnexpectedResponse(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNEXPECTED_RESPONSE, strDetails); }

	// "Unknown channel name."
	virtual HRESULT UnknownChannelName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_CHANNEL_NAME, strDetails); }

	// "Unknown name in selector."
	virtual HRESULT UnknownNameInSelector(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR, strDetails); }

	// "Unknown physical repeated capability selector."
	virtual HRESULT UnknownPhysicalIdentifier(const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER, strDetails); }

	// "Does not support this class-compliant feature:  (enumeration) value <pszValue> passed as the value for parameter <pszParam> in method <pszMethod>."
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, LPCTSTR pszMethod, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_VALUE_NOT_SUPPORTED, strDetails, pszValue, pszParam, pszMethod); }

	// "Does not support this class-compliant feature:  (enumeration) value <pszValue> passed as the value for parameter <pszParam> in method <calling method>."
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return ValueNotSupported(pszValue, pszParam, GetCurrentMethod(), strDetails); }

	// "Error writing file."
	virtual HRESULT WritingFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_WRITING_FILE, strDetails); }

	// "Error query is not supported by this instrument."
	virtual HRESULT ErrorQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_ERROR_QUERY, strDetails); }

	// "ID Query is not supported by this instrument."
	virtual HRESULT IdQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_ID_QUERY, strDetails); }

	// "Reset is not supported by this instrument."
	virtual HRESULT ResetNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_RESET, strDetails); }

	// "Firmware revision query is not supported by this instrument."
	virtual HRESULT RevisionQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_REV_QUERY, strDetails); }

	// "Self test is not supported by this instrument."
	virtual HRESULT SelfTestNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_SELF_TEST, strDetails); }
	
	// "No acquisitions made, start acquisition."
	virtual HRESULT NoAcquisitionMade(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_TKDPO2K3K4K_NO_ACQUISITION_MADE, strDetails); }
	
	// "Channel not supported."
	virtual HRESULT ChannelNotSupported(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED, strDetails); }
	
	// "Reference channel not supported."
	virtual HRESULT ReferenceNotSupported(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED, strDetails); }
	
	// "Specified channel is not enabled."
	virtual HRESULT IviScopeChannelNotEnabled(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED, strDetails); }
	
	// "Unable to perform desired measurement operation."
	virtual HRESULT IviScopeUnableToPerformMeasurement(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT, strDetails); }
	
	// "Maximum time exceeded before the operation completed."
	virtual HRESULT IviScopeMaxTimeExceeded(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVISCOPE_MAX_TIME_EXCEEDED, strDetails); }
	
	// "Invalid acquisition type."
	virtual HRESULT IviScopeInvalidAcqType(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVISCOPE_INVALID_ACQ_TYPE, strDetails); }
	
	// "One of the elements in the waveform array is invalid."
	virtual HRESULT IviScopeInvalidWfmElement(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_S_IVISCOPE_INVALID_WFM_ELEMENT, strDetails); }


protected:

	virtual HRESULT SetError(UINT uResid, const CString& strError) const override
	{
		HRESULT hrDriverError = E_FAIL;
		CComBSTR bstrHelpFileName = OLESTR("Tkdpo2k3k4k.chm");
		DWORD dwDriverHelpContextID = 0;
		switch (uResid)
		{
			case IDS_E_TKDPO2K3K4K_IO_GENERAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_IO_GENERAL;
				break;
			case IDS_E_TKDPO2K3K4K_IO_TIMEOUT:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_IO_TIMEOUT;
				break;
			case IDS_E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_MODEL_NOT_SUPPORTED;
				break;
			case IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_PERSONALITY_NOT_ACTIVE;
				break;
			case IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_PERSONALITY_NOT_LICENSED;
				break;
			case IDS_E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_PERSONALITY_NOT_INSTALLED;
				break;
			case IDS_E_TKDPO2K3K4K_NO_ACQUISITION_MADE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_NO_ACQUISITION_MADE;
				break;
			case IDS_E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_CHANNEL_NOT_SUPPORTED;
				break;
			case IDS_E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_TKDPO2K3K4K_REFERENCE_NOT_SUPPORTED;
				break;
			case IDS_S_IVI_SUCCESS:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_SUCCESS;
				break;
			case IDS_E_IVI_CANNOT_RECOVER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_RECOVER;
				break;
			case IDS_E_IVI_INSTRUMENT_STATUS:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INSTRUMENT_STATUS;
				break;
			case IDS_E_IVI_CANNOT_OPEN_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_OPEN_FILE;
				break;
			case IDS_E_IVI_READING_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_READING_FILE;
				break;
			case IDS_E_IVI_WRITING_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_WRITING_FILE;
				break;
			case IDS_E_IVI_INVALID_PATHNAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_PATHNAME;
				break;
			case IDS_E_IVI_INVALID_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_VALUE;
				break;
			case IDS_E_IVI_METHOD_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_METHOD_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_PROPERTY_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_PROPERTY_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_VALUE_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_VALUE_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_NOT_INITIALIZED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_NOT_INITIALIZED;
				break;
			case IDS_E_IVI_UNKNOWN_CHANNEL_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_CHANNEL_NAME;
				break;
			case IDS_E_IVI_TOO_MANY_OPEN_FILES:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_TOO_MANY_OPEN_FILES;
				break;
			case IDS_E_IVI_CHANNEL_NAME_REQUIRED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CHANNEL_NAME_REQUIRED;
				break;
			case IDS_E_IVI_MISSING_OPTION_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_MISSING_OPTION_NAME;
				break;
			case IDS_E_IVI_MISSING_OPTION_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_MISSING_OPTION_VALUE;
				break;
			case IDS_E_IVI_BAD_OPTION_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BAD_OPTION_NAME;
				break;
			case IDS_E_IVI_BAD_OPTION_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BAD_OPTION_VALUE;
				break;
			case IDS_E_IVI_OUT_OF_MEMORY:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_OUT_OF_MEMORY;
				break;
			case IDS_E_IVI_OPERATION_PENDING:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_OPERATION_PENDING;
				break;
			case IDS_E_IVI_NULL_POINTER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_NULL_POINTER;
				break;
			case IDS_E_IVI_UNEXPECTED_RESPONSE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNEXPECTED_RESPONSE;
				break;
			case IDS_E_IVI_FILE_NOT_FOUND:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_FILE_NOT_FOUND;
				break;
			case IDS_E_IVI_INVALID_FILE_FORMAT:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_FILE_FORMAT;
				break;
			case IDS_E_IVI_STATUS_NOT_AVAILABLE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_STATUS_NOT_AVAILABLE;
				break;
			case IDS_E_IVI_ID_QUERY_FAILED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_ID_QUERY_FAILED;
				break;
			case IDS_E_IVI_RESET_FAILED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_RESET_FAILED;
				break;
			case IDS_E_IVI_RESOURCE_UNKNOWN:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_RESOURCE_UNKNOWN;
				break;
			case IDS_E_IVI_ALREADY_INITIALIZED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_ALREADY_INITIALIZED;
				break;
			case IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_CHANGE_SIMULATION_STATE;
				break;
			case IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR;
				break;
			case IDS_E_IVI_INVALID_RANGE_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_RANGE_IN_SELECTOR;
				break;
			case IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_NAME_IN_SELECTOR;
				break;
			case IDS_E_IVI_BADLY_FORMED_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BADLY_FORMED_SELECTOR;
				break;
			case IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER;
				break;
			case IDS_S_IVI_NSUP_ID_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_ID_QUERY;
				break;
			case IDS_S_IVI_NSUP_RESET:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_RESET;
				break;
			case IDS_S_IVI_NSUP_SELF_TEST:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_SELF_TEST;
				break;
			case IDS_S_IVI_NSUP_ERROR_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_ERROR_QUERY;
				break;
			case IDS_S_IVI_NSUP_REV_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_REV_QUERY;
				break;
			case IDS_E_IVISCOPE_CHANNEL_NOT_ENABLED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVISCOPE_CHANNEL_NOT_ENABLED;
				break;
			case IDS_E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT;
				break;
			case IDS_E_IVISCOPE_MAX_TIME_EXCEEDED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVISCOPE_MAX_TIME_EXCEEDED;
				break;
			case IDS_E_IVISCOPE_INVALID_ACQ_TYPE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVISCOPE_INVALID_ACQ_TYPE;
				break;
			case IDS_S_IVISCOPE_INVALID_WFM_ELEMENT:
				dwDriverHelpContextID = 3;
				hrDriverError = S_IVISCOPE_INVALID_WFM_ELEMENT;
				break;default:
				ATLASSERT(!_T("Unexpected error message resource ID."));
				hrDriverError = E_UNEXPECTED;
				break;
		}

		IID iid = m_pCallContextProvider->GetCurrentContext()->GetIID();

		return AtlReportError(GetDriverCLSID(), CT2OLE(strError), dwDriverHelpContextID, bstrHelpFileName, iid, hrDriverError);
	}
};

#pragma warning( pop )
