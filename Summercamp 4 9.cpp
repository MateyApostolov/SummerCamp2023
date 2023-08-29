#include <iostream>
using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int a, b, c;
    cin >> a >> b >> c;
    int n = a;
    if (a > b) {
        n = b;
    }
    if (n > c) {
        n = c;
    }
    cout << n;
    if (n > d) {
        n = d;
    }

    cout << n;


    return 0;
}
