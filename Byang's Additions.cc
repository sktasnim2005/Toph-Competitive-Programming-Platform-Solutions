#include <iostream>
using namespace std;

bool hasCarry(int a, int b) {
    int carry = 0;
    while (a > 0 || b > 0) {
        int sum = (a % 10) + (b % 10) + carry;
        if (sum >= 10) {
            return true; // Carry occurs
        }
        carry = sum / 10;
        a /= 10;
        b /= 10;
    }
    return false; // No carry
}

int main() {
    int a, b;
    cin >> a >> b;
    if (hasCarry(a, b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
