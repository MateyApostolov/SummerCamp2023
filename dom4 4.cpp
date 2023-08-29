#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int n1 = a;
    if (a > b) {
        n1 = b;
    }
    if (n1 > c) {
        n1 = c;
    }
    int n3 = a;
    if (a < b) {
        n3 = b;
    }
    if (n3 < c) {
        n3 = c;
    }
    int n2;
    if (a > n1 && a < n3) {
        n2 = a;
    }
    if (b > n1 && b < n3) {
        n2 = b;
    }
    if (c > n1 && c < n3) {
        n2 = c;
    }
    if (n2 == n1) {
        n2 = n1;
    }
    if (n2 == n3) {
        n2 = n3;
    }
    cout << n1 << " " << n2 << " " << n3 << endl;


    return 0;
}
