///////////////////////////////////////////////////////////////////////////////
// SamplePostmanEchoCtrl.h

#ifndef __SAMPLEPOSTMANECHOCTRL_H__
#define __SAMPLEPOSTMANECHOCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "SamplePostmanEchoW32.h"
#include "TcBase.h"
#include "SamplePostmanEchoClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CSamplePostmanEchoCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CSamplePostmanEchoCtrl, &CLSID_SamplePostmanEchoCtrl>
	, public ISamplePostmanEchoCtrl
	, public ITcOCFCtrlImpl<CSamplePostmanEchoCtrl, CSamplePostmanEchoClassFactory>
{
public:
	CSamplePostmanEchoCtrl();
	virtual ~CSamplePostmanEchoCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_SAMPLEPOSTMANECHOCTRL)
DECLARE_NOT_AGGREGATABLE(CSamplePostmanEchoCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CSamplePostmanEchoCtrl)
	COM_INTERFACE_ENTRY(ISamplePostmanEchoCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __SAMPLEPOSTMANECHOCTRL_H__
