#include <iostream>
using namespace std;

int main () {
    int n, ng = 0;
    cin >> n;
    while (n != 0) {
        if (ng < n % 10) {
            ng = n % 10;
        }
        n = n / 10;
    }
    cout << ng << endl;

    return 0;
}
