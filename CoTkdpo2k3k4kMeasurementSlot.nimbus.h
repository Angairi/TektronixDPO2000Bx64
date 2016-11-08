/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#define DECLARE_NIMBUS_CLASS_TKDPO2K3K4KMEASUREMENTSLOT()	\
public:	\
	DECLARE_REGISTRY_RESOURCEID(IDR_COTKDPO2K3K4KMEASUREMENTSLOT)	\
	DECLARE_PROTECT_FINAL_CONSTRUCT()	\
	\
	BEGIN_COM_MAP(Tkdpo2k3k4kMeasurementSlot)	\
		COM_INTERFACE_ENTRY(ISupportErrorInfo)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kMeasurementSlot)	\
	END_COM_MAP()	\
	\
	HRESULT FinalConstruct()	\
	{	\
		return InternalFinalConstruct();	\
	}	\
	\
	void FinalRelease()	\
	{	\
		InternalFinalRelease();	\
	}	\
	\
	static CRepCap* Create()	\
	{	\
		CComObject<Tkdpo2k3k4kMeasurementSlot>* pRepCap = NULL;	\
		HRESULT hr = CComObject<Tkdpo2k3k4kMeasurementSlot>::CreateInstance(&pRepCap);	\
		ATLASSERT(SUCCEEDED(hr));	\
	\
		return SUCCEEDED(hr) ? pRepCap : NULL;	\
	}	\
	\
	virtual const CString& GetClassName() const;	\
	static const CString& ClassName();	\
	\
	static const CString& RepCapName();	\
	\
	virtual const CRepCapDescriptor** GetRepCapDescriptors() const;	\
	\
	static const CString* GetStaticRepCapNames()	\
	{	\
		static const CString _names[] =		\
		{	\
			CString(_T("MeasurementSlot1")),	\
			CString(_T("MeasurementSlot2")),	\
			CString(_T("MeasurementSlot3")),	\
			CString(_T("MeasurementSlot4")),	\
			CString(_T("MeasurementSlot5")),	\
			CString(_T("MeasurementSlot6")),	\
			CString(_T("MeasurementSlot7")),	\
			CString(_T("MeasurementSlot8")),	\
			CString(_T("")),	\
		};	\
	\
		return _names;	\
	}	\
	\
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);	\
	\
	Tkdpo2k3k4k* GetRoot() const;	\
	Tkdpo2k3k4k* GetParent() const;	\
	\
	virtual IVisaCSession& GetIoSession() { return GetRoot()->GetIoSession(); }	\
	virtual IIoSession& GetIo() { return GetRoot()->GetIo(); }	\
	\
	virtual CTkdpo2k3k4kErrorReporter& GetErrorReporter() override { return GetRoot()->GetErrorReporter(); }
