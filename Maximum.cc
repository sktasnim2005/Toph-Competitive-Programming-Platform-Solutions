#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x=0;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      x=max(x,a[i]);
    }
     cout<<x;
    return 0;
}
