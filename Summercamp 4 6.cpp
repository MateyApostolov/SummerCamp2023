#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    int c = b - a + 1;
    if (c % 2 == 0) {
        cout << (c / 2) * (a + b) << endl;
    } else {
        cout << (c / 2) * (a + b) + (a + b) / 2;
    }

    return 0;
}
