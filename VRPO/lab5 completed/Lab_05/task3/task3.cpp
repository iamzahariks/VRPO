#include <iostream>
using namespace std;

int func2(int y, int z) {
	int g = 8;
	int h = 9;
	int r = 10;
	return y + z + g + h + r;
}

int func1(int x, int v) {
	int k = 5;
	int l = 6;
	int m = 7;
	return k += func2(k, 7);
}

int main() {
	cout << func1(3, 4) << endl;
	return 0;
}