#include <iostream>
using namespace std;

int main () {
    int m, s;
    cin >> m >> s;
    int a, b;
    cin >> a >> b;
    int br = b - a - 1;
    cout << br << endl;
    int S;
    S = m * 100 + s;
    cout << S * (br + 1);


    return 0;
}
