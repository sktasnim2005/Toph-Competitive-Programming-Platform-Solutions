#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool ans=false;
    for(int i=2;i<n;i++){
      if(n%i==0){
        ans=true;
        break;
      }
    }
     if(ans) cout<<"No";
     else cout<<"Yes";
    return 0;
}
