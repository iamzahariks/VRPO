#include "MyFunctions.h"

int hexToDec(string unicodeValueHex) {
	int createdValue = 0;

	for (int i = 0; i < unicodeValueHex.length(); i++) {
		int value = 0;

		if ((unicodeValueHex[i] >= 48) && (unicodeValueHex[i] <= 57)) {
			value = (int)(unicodeValueHex[i]) - 48;
		}

		if ((unicodeValueHex[i] >= 65) && (unicodeValueHex[i] <= 70)) {
			value = (int)(unicodeValueHex[i]) - 65 + 10;
		}

		createdValue += pow(16, unicodeValueHex.length() - 1 - i) * value;
	}

	return createdValue;
}

string decToHex(int value) {
	string createdValue = "";

	while (value != 0) {
		if (value % 16 < 10) {
			createdValue = (char)(value % 16 + 48) + createdValue;
		}
		else {
			createdValue = (char)(value % 16 - 10 + 65) + createdValue;
		}

		value /= 16;
	}

	return createdValue;
}