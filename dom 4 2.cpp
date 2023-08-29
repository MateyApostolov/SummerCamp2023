#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    if (x % 2 == 0) {
        cout << x * y << endl;
    } else {
        cout << x - y << endl;
    }

    return 0;
}
