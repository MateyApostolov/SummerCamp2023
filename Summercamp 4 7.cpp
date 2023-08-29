#include <iostream>
using namespace std;

int main () {
    int N, pn, pm, vn, vm, tn;
    cin >> N >> pn >> pm >> vn >> vm >> tn;
    int Ns = N * 2;
    int p = pm - pn + 1;
    int v = vm - vn + 1;
    int t = Ns - tn + 1;
    cout << p + v + t;

    return 0;
}
