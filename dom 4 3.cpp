#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int n1 = a;
    if (a < b) {
        n1 = b;
    }
    if (n1 < c) {
        n1 = c;
    }
    int n2 = a;
    if (a > b) {
        n2 = b;
    }
    if (n2 > c) {
        n2 = c;
    }
    cout << n1 - n2 << endl;

    return 0;
}
