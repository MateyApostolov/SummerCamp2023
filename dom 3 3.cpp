#include <iostream>
using namespace std;

int main () {
    int M, a, b, c;
    cin >> M >> a >> b >> c;
    int r = (M - (a + b + c )) / 3;
    int n1, n2, n3;
    n1 = a + r;
    n2 = b + r;
    n3 = c + r;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    int s1, d1, e1, s2, d2, e2, s3, d3, e3;
    s1 = n1 / 100;
    d1 = n1 / 10 % 10;
    e1 = n1 % 10;

    s2 = n2 / 100;
    d2 = n2 / 10 % 10;
    e2 = n2 % 10;

    s3 = n3 / 100;
    d3 = n3 / 10 % 10;
    e3 = n3 % 10;

    cout << s1 + d1 + e1 << endl;
    cout << s2 + d2 + e2 << endl;
    cout << s3 + d3 + e3 << endl;
    return 0;
}
