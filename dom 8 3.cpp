#include <iostream>
using namespace std;

int main () {
    int A, B, C, K, M = 0;
    cin >> A >> B >> C >> K;
    if (A < B && B < C) {
        while (A != B && B != C) {
            A++;
            C--;
            M = (M + 2) * K;
        }
    }
    if (A == B && B < C) {
        while (B < C) {
            C = C / 2;
            A = A + C / 4;
            B = B + C / 4;
            M = (M + 3) * K;
        }
    }
    if (A < B && B == C) {
        while (B < C) {
            C = C / 6 * 5;
            B = B / 6 * 5;
            A = A + C / 6 + B / 6;
            M = (M + 3) * K;
        }
    }
    cout << M << endl;


    return 0;
}
