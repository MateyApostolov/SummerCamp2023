#include <iostream>
using namespace std;

int main () {
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    int B1, B2, B3;
    cin >> B1 >> B2 >> B3;
    int n1 = A1;
    if (A1 > A2) {
        n1 = A2;
    }
    if (n1 > A3) {
        n1 = A3;
    }
    int n3 = A1;
    if (A1 < A2) {
        n3 = A2;
    }
    if (n3 < A3) {
        n3 = A3;
    }
    int n2;
    if (A1 > n1) {
        if (A1 < n3) {
            n2 = A1;
        }
    }
    if (A2 > n1) {
        if (A2 < n3) {
            n2 = A2;
        }
    }
    if (A3 > n1) {
        if (A3 < n3) {
            n2 = A3;
        }
    }
    int x1 = B1;
    if (B1 > B2) {
        x1 = B2;
    }
    if (x1 > B3) {
        x1 = B3;
    }
    int x3 = B1;
    if (B1 < B2) {
        x3 = A2;
    }
    if (x3 < B3) {
        x3 = B3;
    }
    int x2;
    if (B1 > x1) {
        if (B1 < x3) {
            x2 = B1;
        }
    }
    if (B2 > x1) {
        if (B2 < x3) {
            x2 = B2;
        }
    }
    if (B3 > x1) {
        if (B3 < x3) {
            x2 = B3;
        }
    }
    cout << A1 * B1 + A2 * B2 + A3 * B3 << endl;

    return 0;
}
