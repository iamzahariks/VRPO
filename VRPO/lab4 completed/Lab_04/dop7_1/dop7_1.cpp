#include <iostream>
using namespace std;

const int MAX_SIZE = 30;

int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, kMax = -1, kMin = -1, a[MAX_SIZE];
	printf("Введите размер массива(1<n<30): ");
	scanf_s("%d", &n);

	if ((n > 30) || (n < 1)) {
		printf("Вы ввели неверное число!");
		return;
	}

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 30;
		printf(" %d |", a[i]);
	}

	printf("\n");
	for (int i = 0; i < n; i++) {
		if ((kMin == -1) || (a[i] < a[kMin])) {
			kMin = i;
		}

		if ((kMax == -1) || (a[i] > a[kMax])) {
			kMax = i;
		}
	}

	printf("Минимальный элемент: %d\n", a[kMin]);
	printf("Максимальный элемент: %d\n", a[kMax]);
}