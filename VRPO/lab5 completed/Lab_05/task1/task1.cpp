#include <iostream>
using namespace std;

int var = 1;

int main()
{
    cout << "var=" << var << endl;
    var = 2;
    cout << "var=" << var << endl;

    while (var > 0) {
        int var = 0;
        var--;
        cout << "var=" << var << endl;
    }

    return 0;
}