#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    cout << ((b - a) / (a + 1 - a) + 1) / 2 * (b + a );
    return 0;
}
