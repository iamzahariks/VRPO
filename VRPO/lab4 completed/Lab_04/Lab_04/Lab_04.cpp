#include "MyFunctions.h"

typedef void (*func) ();
func functionsForK[3] = { launchTask1, launchTask2, launchTask3 };

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int k;
    while (true) {
        cout << "Введите подпункт: "; cin >> k;

        if (k == 4) {
            cout << "Выход из программы" << endl;
            break;
        }

        if (functionsForK[k-1]) {
            functionsForK[k-1]();
        }
        else {
            cout << "Пункт был введён неверно!" << endl;
        }
    }

    return 0;
}