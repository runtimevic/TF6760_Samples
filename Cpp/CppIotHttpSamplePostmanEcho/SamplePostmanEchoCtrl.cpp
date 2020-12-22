// SamplePostmanEchoCtrl.cpp : Implementation of CTcSamplePostmanEchoCtrl
#include "TcPch.h"
#pragma hdrstop

#include "SamplePostmanEchoW32.h"
#include "SamplePostmanEchoCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CSamplePostmanEchoCtrl

CSamplePostmanEchoCtrl::CSamplePostmanEchoCtrl() 
	: ITcOCFCtrlImpl<CSamplePostmanEchoCtrl, CSamplePostmanEchoClassFactory>() 
{
}

CSamplePostmanEchoCtrl::~CSamplePostmanEchoCtrl()
{
}

