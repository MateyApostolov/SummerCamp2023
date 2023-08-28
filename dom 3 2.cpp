#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << n % 10 << endl;
    cout << n / 10 % 10 << endl;
    cout << n / 100 % 10 << endl;
    cout << n / 1000 << endl;
    cout << endl;
    cout << (n % 10) + (n / 10 % 10) + (n / 100 % 10) + (n / 1000) << endl;
    cout << (n % 10) * (n / 10 % 10) * (n / 100 % 10) * (n / 1000) << endl;
    cout << endl;
    int s1, e1, n1;
    s1 = n / 100 % 10;
    e1 = n % 10;
    n1 = n / 1000 * 1000 + e1 * 100 +  n1 / 10 % 10 * 10;
    cout << n1 << endl;
    cout << endl;
    int  h2, s2, d2;
    h2 = n / 1000;
    d2 = n / 100 % 10;
    s2 = 0;
    cout << d2 * 1000 << "0" <<  h2 / 10 % 10 * 10;

    return 0;
}
