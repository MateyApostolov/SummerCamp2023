#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}
