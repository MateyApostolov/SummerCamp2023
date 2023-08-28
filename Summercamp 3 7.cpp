#include <iostream>
using namespace std;

int main () {
    int k5, k6, k7, k8;
    cin >> k5 >> k6 >> k7 >> k8;
    int h = 0;
    h = k6;
    k6 = k7;
    k7 = h;
    cout << k5 << k6 << k7 << k8;

    return 0;
}
