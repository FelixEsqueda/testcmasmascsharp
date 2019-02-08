#include "Mixed_Mode.h"
#include "String.h"

extern "C"
{
	__declspec(dllexport) int __stdcall mixed_mode_multiply(wchar_t *buff, int length) {
		char *destino = reinterpret_cast<char *>(buff);
		*destino = 0;
		const wchar_t *cadena1 = L"1esta es una cadena1";
		const  wchar_t* cadena2 = L"2esta es una cadena2";
		const  wchar_t* cadena3 = L"3esta es una cadena3";
		const  wchar_t* cadena4 = L"4esta es una cadena4";
		strncpy(destino, (const char *)cadena1, wcslen(cadena1) * sizeof(wchar_t));
//		destino += ((wcslen(cadena1) + 1) * sizeof(wchar_t));
		strncpy(destino, (const char *)cadena2, wcslen(cadena2) * sizeof(wchar_t));
		/*destino += ((wcslen(cadena2) + 1) * sizeof(wchar_t));
		strncpy(destino, (const char *)cadena3, wcslen(cadena3) * sizeof(wchar_t));
		destino += ((wcslen(cadena3) + 1) * sizeof(wchar_t));
		strncpy(destino, (const char *)cadena4, wcslen(cadena4) * sizeof(wchar_t));
		destino += ((wcslen(cadena4) + 1) * sizeof(wchar_t));*/
		return 0;
	}
}