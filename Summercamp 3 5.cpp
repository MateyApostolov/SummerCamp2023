#include <iostream>
using namespace std;

int main () {
    int n1, n2;
    cin >> n1 >> n2;
    int h1, s1;
    s1 = n1 / 1000;
    h1 = n1 / 100 % 10;
    n1 = h1 * 1000 + s1 * 100 +  n1 / 10 % 10 * 10 + n1 % 10;
    int s2, e2;
    s2 = n2 / 100 % 10;
    e2 = n2 % 10;
    n2 = n2 / 1000 * 1000 + e2 * 100 +  n2 / 10 % 10 * 10 + s2;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << (n2 + n1) * 10;

    return 0;
}
