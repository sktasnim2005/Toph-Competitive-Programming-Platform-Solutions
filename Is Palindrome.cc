#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    string p=s;
    int l=s.size(),i,j;
    char ch;
    for(i=0,j=l-1;i<=l/2,j>=l/2;i++,j--){
      ch=s[i];
      s[i]=s[j];
      s[j]=ch;
    }
    if(p==s){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

    return 0;
}
