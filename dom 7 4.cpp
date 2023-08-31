#include <iostream>
using namespace std;

int main () {
    int L, N, Nc, ng = 0,nm = 10000, pos1, pos2;
    pos1 = 1;
    pos2 = 1;
    cin >> L >> N;
    for (int i = 1; i <= N; i++) {
        cin >> Nc;
        if (Nc > ng) {
            ng = Nc;
            pos1 = i;
        }
        if (Nc < nm) {
            nm = Nc;
            pos2 = i;
        }
    }
    if (pos1 < pos2) {
        cout << (pos2 - pos1) * (L / (N - 1));
    } else {
        cout << (pos1 - pos2) * (L / (N - 1));
    }

    return 0;
}
