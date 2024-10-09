#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  a;
        cin >> a;
        long double area = ((3*sqrt(3) )/2) *a*a ;
        cout << fixed << setprecision(5) << area << endl;
    }
    return 0;
}
