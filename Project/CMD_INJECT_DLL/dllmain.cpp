// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include <iostream>

// Dll which will be injected
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
		while (1)
		{
			system("title %random%");
			std::cout << "INJECTOR OWNED BY ..no#6516" << std::endl;
			std::cout << "BASIC DLL BASED" << std::endl;
			system("title %random%");

		}
	return 0;

	return TRUE;
}

