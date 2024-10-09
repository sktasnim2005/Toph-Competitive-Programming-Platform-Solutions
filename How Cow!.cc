#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  L;
        cin >> L;
        long double area = 3.1416 * L * L;
        cout << fixed << setprecision(3) << area << endl;
    }
    return 0;
}
