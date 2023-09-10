#include <iostream>
using namespace std;

int main () {
    int A, B, C, K, M = 0;
    cin >> A >> B >> C >> K;
    int rb = (A+B+C)/3;
    if (B >= rb){
        M = K * (B - rb) + K * (C - rb) * 2;
    } else {
        M = K * (rb - B) + K * (rb - A) * 2;
    }

    cout << M << endl;
    return 0;
}
