#include <iostream>
using namespace std;

int main () {
    int N;
    long long sum1 = 1, sum2 = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum2 = sum2 + sum1;
        sum1 = sum1 * 2;
    }
    cout << sum2 / 1000000 + (sum2 % 1000000 != 0) << endl;

    return 0;
}
