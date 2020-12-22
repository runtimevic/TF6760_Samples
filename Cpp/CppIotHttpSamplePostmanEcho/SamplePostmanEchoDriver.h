///////////////////////////////////////////////////////////////////////////////
// SamplePostmanEchoDriver.h

#ifndef __SAMPLEPOSTMANECHODRIVER_H__
#define __SAMPLEPOSTMANECHODRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define SAMPLEPOSTMANECHODRV_NAME        "SAMPLEPOSTMANECHO"
#define SAMPLEPOSTMANECHODRV_Major       1
#define SAMPLEPOSTMANECHODRV_Minor       0

#define DEVICE_CLASS CSamplePostmanEchoDriver

#include "ObjDriver.h"

class CSamplePostmanEchoDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl SAMPLEPOSTMANECHODRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(SAMPLEPOSTMANECHODRV)
	VxD_Service( SAMPLEPOSTMANECHODRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __SAMPLEPOSTMANECHODRIVER_H__