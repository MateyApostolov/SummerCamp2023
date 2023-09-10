#include <iostream>
using namespace std;

int main () {
    int n, br;
    cin >> n;
    while (n > 0) {
        n = n / 10;
        br++;
    }
    cout << br;

    return 0;
}
