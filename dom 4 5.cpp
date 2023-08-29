#include <iostream>
using namespace std;

int main () {
    int H1, M1, H2, M2;
    cin >> H1 >> M1 >> H2 >> M2;
    int M = (H2 * 60 + M2) - (H1 * 60 + M1);
    int h = M / 60;
    int m = M % 60;
    if (M < 0) {
        M = M + 24 * 60;
    }
    if (M > 24 * 60) {
        M = M % 24 * 60;
        if (h < 10) {
            cout << "0";
        }
        cout << h << ":";
        if (m < 10) {
            cout << "0";
        }
        cout << m << endl;
        return 0;
    }
    if (M < 24 * 60) {
        if (h < 10) {
            cout << "0";
        }
        cout << h << ":";
        if (m < 10) {
            cout << "0";
        }
        cout << m << endl;
        return 0;
    }
    if (M == 24 * 60) {
        cout << "24:00\n";
    }


    return 0;
}
