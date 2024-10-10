#include <bits/stdc++.h>
using namespace std;

int main() {
    const int MOD = 1000000007;

    long long X, N;
    cin >> X >> N;

    long long result = 1;

    while (N > 0) {
        if (N % 2 == 1) {
            result = (result * X) % MOD;
        }
        X = (X * X) % MOD;
        N /= 2;
    }

    cout << result << endl;
    return 0;
}
