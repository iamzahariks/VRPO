#include "MyFunctions.h"

/*
    Необходимо ввести последовательность из прописных латинских символов и для каждого латинского находится разница кодов прописной части и строчной.
*/

void launchTask1() {
    string ch;
    cout << "Введите латинские прописные буквы: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= 65) && (symbol <= 90)) {
            cout << "Разница кодов для символа '" << symbol << "': " << tolower(symbol) - toupper(symbol) << endl;
        }
        else {
            cout << "Ошибка! Либо символ не латиница, либо он не прописной!" << endl;
        }
    }
}