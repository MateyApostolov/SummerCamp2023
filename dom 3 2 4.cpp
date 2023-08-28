#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int  h2, s2, d2;
    h2 = n / 1000;
    d2 = n / 10 % 10;
    s2 = 0;
    cout << d2 << "0" <<  h2 << n % 10;
    return 0;
}
