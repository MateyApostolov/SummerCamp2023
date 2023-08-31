#include <iostream>
using namespace std;

int main () {
    int n, br = 0;
    cin >> n;                   d
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            br++;
        }
    }
    if (br == 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
