#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      int x=(a+b)/2;
      if(x%2!=0) cout<<"Oops!"<<endl;
      else cout<<"Sadia will be happy."<<endl;
    }
    return 0;
}
