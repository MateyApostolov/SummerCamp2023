#include <iostream>
using namespace std;

int main () {
    int K, e;
    cin >> K;
    int sum = K;
    while (sum < 10000) {
        e = sum % 10;
        sum = sum + e;
        if (e == 0) {
            break;
        }
    }
    cout << sum << endl;

    return 0;
}
