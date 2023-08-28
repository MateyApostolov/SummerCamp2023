#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << n % 10;
    cout << n / 10 % 10;
    cout << n / 100 % 10;
    cout << n / 1000 << endl;

    return 0;
}
