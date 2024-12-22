#include <iostream>

// Задание 6, основное
int main() {
	float x, y;

	setlocale(LC_CTYPE, "Russian");
	printf("Введите x, y: ");
	scanf_s("%f %f", &x, &y);

	if (pow(x, 2) == y) {
		printf("Данная функция является квадратной!");
	}
	else {
		printf("Данная функция не является квадратной!");
	}
}