#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s2, e2, n2;
    s2 = n / 100 % 10;
    e2 = n % 10;
    n2 = n / 1000 * 1000 + e2 * 100 +  n / 10 % 10 * 10 + s2;
    cout << n2;
    return 0;
}
