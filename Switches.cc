#include <bits/stdc++.h>
using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> switches(n);
        for (int i = 0; i < n; i++) {
            cin >> switches[i];
        }

        // Calculate the GCD of all switch values
        int result_gcd = switches[0];
        for (int i = 1; i < n; i++) {
            result_gcd = gcd(result_gcd, switches[i]);
            if (result_gcd == 1) break;
        }

        if (result_gcd == 1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
