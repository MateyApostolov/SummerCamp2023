#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int h1 = n / 1000;
    int s1 = n / 100 % 10;
    int d1 = n / 10 % 10;
    int e1 = n % 10;
    if (h1 * 10 + s1 == d1 * 10 + e1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
