#include <iostream>
#include <cctype>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
;
    int k; 
    char ch;

    while (true) {
        printf("Введите подпункт: ");
        scanf_s("%d", &k);

        if (k == 4) {
            printf("Выходим из программы!\n");
            break;
        }

        switch (k) {
            case 1: {
                printf("Введите латинскую прописную букву: ");
                cin >> ch;
                
                if (isalpha(ch)) {
                    if (isupper(ch)) {
                        printf("Разница кодов: %d\n", ch + 32 - ch);
                    }
                    else {
                        printf("Вы ввели не прописную букву!\n");
                    }
                }
                else {
                    printf("Ошибка!\n");
                }

                break;
            }
            case 2: {
                printf("Введите прописную букву кириллицы: ");
                cin >> ch;

                if (ch >= 'А' && ch <= 'Я') {
                    printf("Разница кодов: %d\n", (ch + 32) - ch);
                }
                else {
                    printf("Ошибка!\n");
;
                }

                break;
            }
            case 3: {
                printf("Введите цифру: ");
                cin >> ch;

                if (isdigit(ch)) {
                    int z = (int)(ch);
                    printf("%d\n", (char)z);
                }

                break;
            }
            default: {
                printf("Пункт был введён неверно!\n");
                break;
            }
        }

    }
    return 0;
}