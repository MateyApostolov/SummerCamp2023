#include <iostream>
using namespace std;

int main () {
    int L, Lg, Lb, Db, Dg;
    cin >> L >> Lg >> Lb >> Db >> Dg;
    int L1, L2, S1 = Lg, S2 = Lb, dop1 = 0, dop2 = 0;
    for (int i = 1; i < 26172172; i++) {
        dop1 += Db;
        dop2 += Dg;
        S2 = S2 + Dg + dop2;
        S1 = S1 + Db + dop1;
        if (S1 + S2 == L) {
            cout << i << endl;
            return 0;
        }
        if (S1 + S2 > L) {
            cout << i + 1 << endl;
            return 0;
        }

    }

    return 0;
}
