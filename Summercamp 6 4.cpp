#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << n;
    for (int i = n - 1; i >= 1; i--) {
        cout << ","<< i;
    }

    return 0;
}
