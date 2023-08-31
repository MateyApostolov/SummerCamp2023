#include <iostream>
using namespace std;

int main () {
    int k, n, nc, br = 0;
    cin >> k;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> nc;
        if (nc == k) {
            br++;
        }
    }
    cout << br;

    return 0;
}

