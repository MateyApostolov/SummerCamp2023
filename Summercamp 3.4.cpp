#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s, e;
    s = n / 100 % 10;
    e = n % 10;
    n = n / 1000 * 1000 + e * 100 +  n / 10 % 10 * 10 + n / 100 % 10;
    cout << n << endl;
    return 0;
}
