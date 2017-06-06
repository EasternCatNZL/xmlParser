// MsdnXML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <windows.h>
#include <objbase.h>
#include <msxml6.h>

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	printf("start using MSXML6\n");

	// Add your code here.

	CoUninitialize();
	return 0;
}