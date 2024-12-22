#include "MyFunctions.h"

int getOktetCount(int value) {
	int oktetCount = 1, i = 7;

	while (i < 31) {
		if (value > pow(2, i)) {
			oktetCount++;
			i += ((i == 7) ? 4 : 5);
		}
		else {
			break;
		}
	}

	if (i > 31) {
		cout << "Произошла ошибка! Невозможное количество октетов! Данный символ невозможно преобразовать в UTF-8, недостаточно памяти!";
	}

	return oktetCount;
}

string convertToUTF8_Binary(int oktetCount, string binValue) {
	int n = 0;
	string utf8Binary;

	if (oktetCount * 8 != binValue.length()) {
		int addBits = oktetCount * 8 - binValue.length();
		for (int i = 0; addBits > i; i++) {
			binValue = '0' + binValue;
		}
	}

	for (int i = 0; i < oktetCount; i++) {
		if (oktetCount == 1) {
			n += 1;
		}
		else {
			if (oktetCount - 1 == i) {
				n += oktetCount + 1;
			}
			else {
				n += 2;
			}
		}
	}

	for (int i = oktetCount; i > 0; i--) {
		string createdByte;

		for (int v = 0; v <= 7; v++) {
			if (i == oktetCount) {
				if (((oktetCount > 1) && (oktetCount >= v)) || (oktetCount > v)) {
					createdByte += (((oktetCount != v) && (oktetCount > 1)) ? '1' : '0');
					continue;
				}

				createdByte += binValue[n];
				n++;
			}
			else {
				if (v <= 1) {
					createdByte = createdByte + (((v == 0) ? '1' : '0'));
					continue;
				}

				createdByte += binValue[n];
				n++;
			}
		}

		utf8Binary = utf8Binary + createdByte;
	}

	return utf8Binary;
}