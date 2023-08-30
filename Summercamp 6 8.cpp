#include <iostream>
using namespace std;

int main () {
    int n, o = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            o = o * i;
        }
    }
    cout << o << endl;

    return 0;
}
