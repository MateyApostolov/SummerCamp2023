#include <iostream>
using namespace std;

int main () {
    int n1, n2;
    cin >> n1 >> n2;
    int h1, s1, d1, e1, h2, s2, d2, e2;
    h1 = n1 / 1000;
    s1 = n1 / 100 % 10;
    d1 = n1 / 10 % 10;
    e1 = n1 % 10;

    h2 = n2 / 1000;
    s2 = n2 / 100 % 10;
    d2 = n2 / 10 % 10;
    e2 = n2 % 10;

    if (n1 > n2) {
        cout << h1 + h2 + s1 + s2 + d1 + d2 + e1 + e2 << endl;
    } else {
        cout << h1 * h2 * s1 * s2 * d1 * d2 * e1 * e2 << endl;
    }

    return 0;
}
