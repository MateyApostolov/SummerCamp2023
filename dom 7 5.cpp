#include <iostream>
using namespace std;

int main () {
    int L, Sg, Sb, Db, Dg, br = 0;
    cin >> L >> Sg >> Sb >> Db >> Dg;
    for (int i = 1; i < L; i++) {
        br++
        if (L - (Sg + Sb) > 0) {
            Sb + = Db;
            Sg += Dg
        } else {
            cout << br << endl;
            return 0;
        }
    }

    return 0;
}
