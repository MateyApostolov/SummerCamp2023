#include <iostream>
using namespace std;

int main () {
    int a, b, c, p;
    cin >> a >> b >> c >> p;
    int pa, pb, pc;
    pa = a / p;
    if (a % p != 0) {
        pa = pa + 1;
    }
    pb = b / p;
    if (b % p != 0) {
        pb = pb + 1;
    }
    pc = c / p;
    if (c % p != 0) {
        pc = pc + 1;
    }
    int S1, S2, P;
    S1 = pa * pc;
    S2 = pb * pc;
    P = pa * pb;
    cout << (2 * S1 + 2 * S2 + P) - 50;

    return 0;
}
