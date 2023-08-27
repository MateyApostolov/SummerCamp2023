#include <iostream>
using namespace std;

int main () {
    int H, M, S, PS;
    cin >> H >> M >> S >> PS;
    int s;
    s = H * 60 * 60 + M * 60 + S + PS;
    cout << s / 60 / 60 << " H " << s % (60 * 60) / 60 << " M " << s % 3600 % 60 << " S " << endl;

    return 0;
}

