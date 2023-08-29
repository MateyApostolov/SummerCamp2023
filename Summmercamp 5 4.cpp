#include <iostream>
using namespace std;

int main () {
    int a, b, v, k;
    cin >> a >> b >> v >> k;
    int pa1, pb1;
    pa1 = a / v;
    if (a % v != 0) {
        pa1++;
    }
    pb1 = b / k;
    if (b % k != 0) {
        pb1++;
    }
    int B1;
    B1 = pa1 * pb1;
    int pa2, pb2;
    pa2 = a / k;
    if (a % k != 0) {
        pa2++;
    }
    pb2 = b / v;
    if (b % v != 0) {
        pb2++;
    }
    int B2;
    B2 = pa2 * pb2;
    if (B1 > B2) {
        cout << B2 << endl;
    } else {
        cout << B1 << endl;
    }

    return 0;
}
