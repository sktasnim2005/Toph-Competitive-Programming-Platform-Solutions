#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        long long n,m,l;
        cin >> s;
        l=s.size();
        m=s[l-1]-'0';
        long long x = (m * m) % 10;
        cout << x << endl;
    }
    return 0;
}
