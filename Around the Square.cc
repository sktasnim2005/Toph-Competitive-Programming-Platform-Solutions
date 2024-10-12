#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        double a,r1,r2,r3,r4;
        if (!(cin >> a>>r1>>r2>>r3>>r4)) break;
        double x=((acos(-1))/4) * (r1*r1 + r2*r2 + r3*r3 + r4*r4);
        double y=a*a;
        cout<<fixed<<setprecision(3)<<y-x<<endl;
    }

    return 0;
}
