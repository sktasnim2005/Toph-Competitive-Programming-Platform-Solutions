#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N,M;
        cin>>N>>M;
        int x= M*N*N;
        int y=(M-1)*(N*N/2);
        cout<<x-y<<endl;
    }
    return 0;
}
