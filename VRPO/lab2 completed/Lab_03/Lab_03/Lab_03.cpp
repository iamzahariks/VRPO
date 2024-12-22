#include <iostream>
using namespace std;

// PoznyakZakhar2006
// В Windows-1251: 50 6F 7A 6E 79 61 6B 5A 61 6B 68 61 72 32 30 30 36
// В UTF-8: 50 6F 7A 6E 79 61 6B 5A 61 6B 68 61 72 32 30 30 36
// В UTF-16: 0050 006F 007A 006E 0079 0061 006B 005A 0061 006B 0068 0061 0072 0032 0030 0030 0036

// ПознякЗахарСергеевич2006
// В Windows-1251: CF EE E7 ED FF EA C7 E0 F5 E0 F0 D1 E5 F0 E3 E5 E5 E2 E8 F7 32 30 30 36
// В UTF-8:  041F 043E 0437 043D 044F 043A 0417 0430 0445 0430 0440 0421 0435 0440 0433 0435 0435 0432 0438 0447 0032 0030 0030 0036
// В UTF-16: 041F 043E 0437 043D 044F 043A 0417 0430 0445 0430 0440 0421 0435 0440 0433 0435 0435 0432 0438 0447 0032 0030 0030 0036

// Позняк2006Zakhar5
// В Windows-1251: CF EE E7 ED FF EA 32 30 30 36 5A 61 6B 68 61 72
// В UTF-8:  041F 043E 0437 043D 044F 043A 0032 0030 0030 0036 5A 61 6B 68 61 72
// В UTF-16: 041F 043E 0437 043D 044F 043A 0032 0030 0030 0036 005A 0061 006B 0068 0061 0072

int main()
{
	int number = 0x12345678;	
	char hello[] = "Hello, ";
	char lfie[] = "PoznyakZakhar2006";
	char rfie[] = "ПознякЗахар2006";
	char lr[] = "Позняк2006Zakhar";

	wchar_t Lfie[] = L"PoznyakZakhar2006";
	wchar_t Rfie[] = L"ПознякЗахар2006";
	wchar_t LR[] = L"Позняк2006Zakhar";

	cout << hello << lfie << endl;

}