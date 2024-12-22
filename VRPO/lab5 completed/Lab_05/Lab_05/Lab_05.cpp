#include <iostream>
using namespace std;

int getSum(int x, int y);
int getMul(int x, int y);

int parm1 = 2;
int parm2 = 3;

int main() {
	cout << "getSum(" << parm1 << ", " << parm2 << ") = " << getSum(parm1, parm2) << endl;

	parm1 = 5;
	parm2 = 5;
	cout << "getMul(" << parm1 << ", " << parm2 << ") = " << getMul(parm1, parm2) << endl;

	return 0;
}