#include <iostream>
using namespace std;

int main () {
    int V, h1, h2;
    cin >> V >> h1 >> h2;
    int S1, S2;
    S1 = (V / 100) * (h1 / 100);
    S2 = (V / 100) * (h2 / 100);
    cout << (S1 * 2 + S2) / 2;

    return 0;
}
