#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n>>a>>b;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
      cin>>ar[i];
    }
    int sum=0;
   for(int i=a;i<=b;i++){
        sum+=ar[i];
    }
     cout<<sum;

    return 0;
}
