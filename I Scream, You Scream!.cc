#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589;

int main() {
    int T;
    cin >> T;
    while (T--) {
        double R;
        cin >> R;

        double V_sphere = (4.0 / 3.0) * PI * pow(R, 3);

        cout << fixed << setprecision(8) << V_sphere << endl;
    }
    return 0;
}
