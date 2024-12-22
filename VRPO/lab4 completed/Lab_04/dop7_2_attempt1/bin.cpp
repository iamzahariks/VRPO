#include "MyFunctions.h"

int binToDec(string unicodeValueBin) {
	int createdValue = 0;

	for (int i = 0; i < unicodeValueBin.length(); i++) {
		int value = (int)(unicodeValueBin[i]) - 48;
		createdValue += pow(2, unicodeValueBin.length() - 1 - i) * value;
	}

	return createdValue;
}

string decToBin(int value) {
	string createdValue = "";

	while (value != 0) {
		if (value % 2 == 1) {
			createdValue = '1' + createdValue;
		}
		else {
			createdValue = '0' + createdValue;
		}

		value /= 2;
		if ((((createdValue.length() + 1) % 8 == 0) && (value == 0)) || ((createdValue[0] == '1') && (value == 0))) {
			createdValue = '0' + createdValue;
		}
	}

	int countBytes = ceil(createdValue.length() / 8.0), savedLength = createdValue.length();
	for (int i = 0; i < countBytes * 8 - savedLength; i++) {
		createdValue = '0' + createdValue;
	}

	return createdValue;
}