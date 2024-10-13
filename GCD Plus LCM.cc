#include <bits/stdc++.h>
using namespace std;

long long lcm(long long x, long long y) {
    return (x / __gcd(x, y)) * y;  // To prevent overflow
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long z = __gcd(a, b);
        long long lcm_ab = lcm(a, b);
        long long q = z + lcm_ab;

        if (a + b == q) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    return 0;
}
