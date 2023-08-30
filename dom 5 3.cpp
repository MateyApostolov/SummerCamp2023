#include <iostream>
using namespace std;

int main () {
    int N, M, K;
    cin >> N >> M >> K;
    int R = 1;
    while (K / N < M) {
        R++;
    }
    cout << R << endl;

    return 0;
}
