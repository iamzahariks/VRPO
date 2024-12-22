#include "MyFunctions.h"

/*
    Необходимо ввести последовательность из цифр и для каждой цифры выводится её код в ASCII/Windows-1251.
*/

void launchTask3() {
    string ch;
    cout << "Введите цифры: "; cin >> ch;

    for (int i = 0; i < ch.length(); i++) {
        char symbol = ch[i];

        if ((symbol >= 48) && (symbol <= 57)) {
            cout << "Число: " << symbol << ", код этого числа:" << symbol + 0 << endl;
        }
        else {
            cout << "Ошибка! Символ не является цифрой!" << endl;;
        }
    }
}