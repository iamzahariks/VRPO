#include "MyFunctions.h"

int main() {
	setlocale(LC_CTYPE, "Russian");
	string unicodeValueHex;
	int unicodeValueDEC;

	cout << "Введите номер символа UNICODE в 16-ой системе счисления: "; cin >> unicodeValueHex;
	unicodeValueDEC = hexToDec(unicodeValueHex);

	cout << decToHex(binToDec(convertToUTF8_Binary(getOktetCount(unicodeValueDEC), decToBin(unicodeValueDEC)))) << endl;
	return 0;
}