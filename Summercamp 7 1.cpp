#include <iostream>
using namespace std;

int main () {
    int n, nc;
    long long nm = 1000000000;
    cin >> n;
    for (int i = 1; i <= n -1; i++) {
        cin >> nc;
        if (nm > nc) {
            nm = nc;
        }
    }
    cout << nm << endl;

    return 0;
}
