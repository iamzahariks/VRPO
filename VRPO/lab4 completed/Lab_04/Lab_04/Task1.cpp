#include "MyFunctions.h"

/*
    ���������� ������ ������������������ �� ��������� ��������� �������� � ��� ������� ���������� ��������� ������� ����� ��������� ����� � ��������.
*/

void launchTask1() {
    string ch;
    cout << "������� ��������� ��������� �����: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= 65) && (symbol <= 90)) {
            cout << "������� ����� ��� ������� '" << symbol << "': " << tolower(symbol) - toupper(symbol) << endl;
        }
        else {
            cout << "������! ���� ������ �� ��������, ���� �� �� ���������!" << endl;
        }
    }
}