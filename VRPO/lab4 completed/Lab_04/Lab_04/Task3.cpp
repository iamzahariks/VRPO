#include "MyFunctions.h"

/*
    ���������� ������ ������������������ �� ���� � ��� ������ ����� ��������� � ��� � ASCII/Windows-1251.
*/

void launchTask3() {
    string ch;
    cout << "������� �����: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= 48) && (symbol <= 57)) {
            cout << "�����: " << symbol << ", ��� ����� �����:" << symbol + 0 << endl;
        }
        else {
            cout << "������! ������ �� �������� ������!" << endl;;
        }
    }
}