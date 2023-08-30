#include <iostream>
using namespace std;

int main () {
    int L, h1, w1, g1, h2, w2, g2;
    cin >> L >> h1 >> w1 >> g1 >> h2 >> w2 >> g2;
    if (h1 + h2 == L || h1 + h2 == L || h1 + g2 == L || w1 + h2 == L || w1 + g2 == L || g1 + h2 == L || g1 + w2 == L || g1 + g2 == L) {
        cout << "YES\n";
        return 0;
    }
    if (h1 + h2 != L && h1 + h2 != L && h1 + g2 != L && w1 + w2 != L && w1 + g2 != L && g1 + h2 != L && g1 + w2 != L && g1 + g2 != L) {
        cout << "NO\n";
    }

    return 0;
}
