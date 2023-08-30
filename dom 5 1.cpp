#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s, d, e;
    s = n / 100;
    d = n / 10 % 10;
    e = n % 10;
    if (s !=  d) {
        if (s != e) {
            if (e == d) {
                cout << 2;
            } else {
                cout << 3;
            }
        }
    }
    if (s != d) {
        if (s == e) {
            cout << 2;
        }
    }
    if (s != e) {
        if (s == d) {
            cout << 2;
        }
    }
    if (s == d) {
        if (s == e) {
            if (e == d) {
                cout << 0;
            }
        }
    }

    return 0;
}
