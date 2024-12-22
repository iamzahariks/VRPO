#include <iostream>
using namespace std;

int getOktetCount(int value);
int hexToDec(string unicodeValueHex);
int binToDec(string unicodeValueBin);

string decToBin(int value);
string decToHex(int value);
string convertToUTF8_Binary(int oktetCount, string binValue);