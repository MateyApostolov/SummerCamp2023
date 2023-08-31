#include <iostream>
using namespace std;

int main () {
    int n, nc;
    cin >> n;
    long long m = 1000000;
    for (int i = 1; i <= n; i++) {
        cin >> nc;
        if (m > nc) {
            m = nc;
        }
    }
    cout << m << endl;

    return 0;
}
