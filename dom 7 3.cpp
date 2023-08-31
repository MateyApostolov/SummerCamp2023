#include <iostream>
using namespace std;

int main () {
    int n, nc, pos, ng;
    ng = nc;
    pos = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> nc;
        if (nc == ng) {
            pos = i;
        }
        if (nc < ng) {
            ng = nc;
            pos = i;
        }
        }
    cout << pos << endl;
    return 0;
}
