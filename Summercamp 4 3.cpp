#include <iostream>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    if (m % 5 == 0) {
        cout << m + n << endl;
    } else {
        cout << m * n << endl;
    }

    return 0;
}
