#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    int x;
    cin >> x;
    if (x > a && x < b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
