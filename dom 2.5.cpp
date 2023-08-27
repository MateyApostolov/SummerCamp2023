#include <iostream>
using namespace std;

int main () {
    int H1, M1, H2, M2;
    cin >> H1 >> M1 >> H2 >> M2;
    int m;
    m = (H2 * 60  + M2) - (H1 * 60 + M1);
    cout << m / 60 << " H " << m % 60 << " M " << endl;

    return 0;
}
