#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int c;
    int o = 1;
    for (int i = 1; i <= n; i++) {
        cin >> c;
        if (c % 2 == 0) {
            o = o + c;
        }
    }
    cout << o << endl;

    return 0;
}
