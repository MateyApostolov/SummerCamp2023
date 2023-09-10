#include <iostream>
using namespace std;

int main () {
    int N, sum = 0, h = N;
    cin >> N;
    h = N;
    while (N != 0) {
        sum = sum + N % 10;
        N = N / 10;
    }
    if (h % sum == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
