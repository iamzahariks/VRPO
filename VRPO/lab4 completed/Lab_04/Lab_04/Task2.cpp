#include "MyFunctions.h"

/*
    Необходимо ввести последовательность из прописных символов кириллицы и для каждого символа кириллицы находится разница кодов прописной части и строчной.
*/

void launchTask2() {
    string ch;
    cout << "Введите прописные буквы кириллицы: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= -64) && (symbol <= -33)) {
            cout << "Разница кодов для символа '" << symbol << "': " << tolower(symbol) - toupper(symbol) << endl;;
        }
        else {
            cout << "Ошибка! Либо символ не кириллица, либо он не прописной!" << endl;;
        }
    }
}