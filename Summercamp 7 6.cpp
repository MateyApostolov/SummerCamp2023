#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        if (n < 4) {
            cout << 1;
        } else {
        cout << (n - 2)/ 2;
        }
    } else {
        cout << (n - 2)/ 2 + 1;
    }

    return 0;
}