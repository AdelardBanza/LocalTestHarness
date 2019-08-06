///////////////////////////////////////////////////////////////////////////////
// TestedCode2.cpp - TestedCode2 class definition                            //
// Author:      Adelard Banza,                                               //
///////////////////////////////////////////////////////////////////////////////
// TestedCode2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "TestedCode2.h"


extern "C"
{
	/*
	* User is responsible for deleting ITest object
	*/
	__declspec(dllexport) void _cdecl GET_TESTED_CD_2_FN_NM(ITestedCode2** itest)
	{
		*itest = new TestedCode2();
	}

}
