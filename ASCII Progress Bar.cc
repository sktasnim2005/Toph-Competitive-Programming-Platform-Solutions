#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    int x= n/10;
    cout<<"[";
    for(int i=0;i<x;i++){
      cout<<"+";
    }
    for(int i=0;i<10-x;i++){
      cout<<".";
    }
    cout<<"] "<<(int)n<<"%";


    return 0;
}
