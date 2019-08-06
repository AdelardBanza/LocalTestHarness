///////////////////////////////////////////////////////////////////////////////
// TestedCode2.cpp - TestedCode2 class definition                            //
// ver 1.0                                                                   //
// Language:    C++, Visual Studio 2017                                      //
// Platform:    HP G1 800, Windows 10                                        //
// Application: Local Test Harness Project2, CSE687 - Object Oriented Design //
// Author:      Adelard Banza,                                               //
//              abanza@syr.edu                                               //
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
