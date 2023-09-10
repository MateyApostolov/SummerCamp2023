#include <iostream>
using namespace std;

int main () {
    int c5, sum = 0, br = 0;
    while (sum <= 5) {
        cin >> c5;
        sum = sum + c5;
        br++;
    }
    cout << br << endl;

    return 0;
}
