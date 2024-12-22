#include <iostream>
using namespace std;

int getInc(int x) {
	static int k = 1;
	return x += k;
}

int main() {
	for (int i = 0; i <= 5; i++) {
		int k = 2;
		cout << i << ": " << getInc(i) << endl;
	}

	return 0;
}