#include "MyFunctions.h"

/*
    ���������� ������ ������������������ �� ��������� �������� ��������� � ��� ������� ������� ��������� ��������� ������� ����� ��������� ����� � ��������.
*/

void launchTask2() {
    string ch;
    cout << "������� ��������� ����� ���������: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= -64) && (symbol <= -33)) {
            cout << "������� ����� ��� ������� '" << symbol << "': " << tolower(symbol) - toupper(symbol) << endl;;
        }
        else {
            cout << "������! ���� ������ �� ���������, ���� �� �� ���������!" << endl;;
        }
    }
}