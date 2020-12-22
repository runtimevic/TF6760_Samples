///////////////////////////////////////////////////////////////////////////////
// SamplePostmanEchoDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "SamplePostmanEchoDriver.h"
#include "SamplePostmanEchoClassFactory.h"

DECLARE_GENERIC_DEVICE(SAMPLEPOSTMANECHODRV)

IOSTATUS CSamplePostmanEchoDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CSamplePostmanEchoClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CSamplePostmanEchoDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CSamplePostmanEchoDriver::SAMPLEPOSTMANECHODRV_GetVersion( )
{
	return( (SAMPLEPOSTMANECHODRV_Major << 8) | SAMPLEPOSTMANECHODRV_Minor );
}

