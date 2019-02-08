#include "Mixed_Mode.h"
#include "String.h"

extern "C"
{
	__declspec(dllexport) int __stdcall mixed_mode_multiply(wchar_t *buff, int length) {
		//char *destino = reinterpret_cast<char *>(buff);
		wchar_t *destino = buff;
		*destino = 0;
		const wchar_t *cadena1 = L"1esta es una cadena1";
		const  wchar_t* cadena2 = L"2esta es una cadena2";
		const  wchar_t* cadena3 = L"3esta es una cadena3";
		const  wchar_t* cadena4 = L"4esta es una cadena4";
		const wchar_t* separador = L"&&";
		wcscpy(destino,cadena1);
		destino += (wcslen(cadena1) );
		//Agrego separador
		wcscpy(destino, separador);
		destino += (wcslen(separador));
		wcscpy(destino, cadena2);
	    destino += (wcslen(cadena2) );
		wcscpy(destino, separador);
		destino += (wcslen(separador));
		wcscpy(destino, cadena3);
		destino += (wcslen(cadena3));
		wcscpy(destino, separador);
		destino += (wcslen(separador));
		wcscpy(destino, cadena4);
		destino += (wcslen(cadena4));
		return 0;
	}
}