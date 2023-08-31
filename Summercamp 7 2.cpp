#include <iostream>
using namespace std;

int main () {
    int n, nc, br = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> nc;
        if (nc == 15) {
            br++;
        }
    }
    cout << br;

    return 0;
}
