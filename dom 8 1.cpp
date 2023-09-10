#include <iostream>
using namespace std;

int main () {
    int S, N, M, Mc, st, ng = 0;
    cin >> S >> N >> M;
    st = S * 100;
    for (int i = 1; i <= M; i++) {
        cin >> Mc;
        if (Mc > ng && st - (Mc * N) >= 0) {
            ng = Mc;
        }
    }
    cout << ng << endl;

    return 0;
}
