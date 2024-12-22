#include <iostream>
using namespace std;

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
		if ((createdValue.length() + 1) % 8 == 0) {
			createdValue = '0' + createdValue;
		}
	}
	
	int countBytes = ceil(createdValue.length() / 8.0), savedLength = createdValue.length();
	for (int i = 0; i < countBytes * 8 - savedLength; i++) {
		createdValue = '0' + createdValue;
	}

	return createdValue;
}

int getOktetCount(int value) {
	int oktetCount = 1, i = 7;

	while (i < 31) {
		if (value >= pow(2, i)) {
			i += ((i == 7) ? 4 : 5);
		}
		else {
			break;
		}
	}

	if (i > 31) {
		cout << "Произошла ошибка! Невозможное количество октетов!";
	}

	return oktetCount;
}

string convertToUTF8_Binary(int oktetCount, string binValue) {
	int n = 0;
	string utf8Binary;

	cout << binValue << endl;
	for (int i = oktetCount; i > 0; i--) {
		string createdByte;

		for (int v = 0; v <= 7; v++) {
			cout << createdByte << endl;
			if (i == oktetCount) {
				if ( ((oktetCount > 1) && (oktetCount >= v)) || (oktetCount > v) ) {
					createdByte += (((oktetCount != v) && (oktetCount > 1)) ? '1' : '0');
					n++;
					continue;
				}

				createdByte += binValue[n];
				n++;
			}
			else {
				if (v <= 1) {;
					createdByte = (((i == v) ? '1' : '0') + createdByte);
					n++;
					continue;
				}

				createdByte += binValue[n];
				n++;
			}
		}

		cout << createdByte << endl;
		utf8Binary = utf8Binary + createdByte;
	}

	return utf8Binary;
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	string unicodeValueHex;
	int unicodeValueDEC, utf8ValueDEC = 0;

	cout << "Введите номер символа UNICODE в 16-ой системе счисления: "; cin >> unicodeValueHex;
	unicodeValueDEC = hexToDec(unicodeValueHex);

	cout << convertToUTF8_Binary(getOktetCount(unicodeValueDEC), decToBin(unicodeValueDEC)) << endl;
	return 0;
}