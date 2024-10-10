#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == b) break; // Stop if both numbers are equal

        if ((a+b) % 2 != 0) {
            cout << "impossible" << endl;
        } else {
            cout << abs(a - b)/2 << endl;
        }
    }
    return 0;
}
