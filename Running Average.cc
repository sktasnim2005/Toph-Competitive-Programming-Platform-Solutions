#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<a[0]<<endl;
    int sum=a[0];
     for(int i=1;i<n;i++){
      cout<<(float)(sum+=a[i])/ (i+1)<<endl;
    }



    return 0;
}
