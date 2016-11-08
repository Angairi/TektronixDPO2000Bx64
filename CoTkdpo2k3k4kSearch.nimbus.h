/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#define DECLARE_NIMBUS_CLASS_TKDPO2K3K4KSEARCH()	\
public:	\
	DECLARE_REGISTRY_RESOURCEID(IDR_COTKDPO2K3K4KSEARCH)	\
	DECLARE_PROTECT_FINAL_CONSTRUCT()	\
	\
	BEGIN_COM_MAP(Tkdpo2k3k4kSearch)	\
		COM_INTERFACE_ENTRY(ISupportErrorInfo)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearch)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBus)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusAudio)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusUSB)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusSPI)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusRS232)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusLIN)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusI2C)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusFlexray)	\
		COM_INTERFACE_ENTRY(ITkdpo2k3k4kSearchBusCAN)	\
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
		CComObject<Tkdpo2k3k4kSearch>* pRepCap = NULL;	\
		HRESULT hr = CComObject<Tkdpo2k3k4kSearch>::CreateInstance(&pRepCap);	\
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
			CString(_T("Search1")),	\
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
