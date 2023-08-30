#include <iostream>
using namespace std;

int main () {
    int k, n;
    cin >> k >> n;
    for (int i = k; i <= n; i += 2) {
        if (k % 2 == 0) {
            cout << i << " ";
        } else {
            for (i = k + 1; i <= n; i += 2) {
                cout << i << " ";
            }
        }
    }


    return 0;
}
