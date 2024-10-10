#include <iostream>
using namespace std;

int main() {
   int a,b,c=0;

    cin>>a>>b;

    for(int i=1; i<(a+b); i++){
        if((a+i)>b && (b+i)>a && (a+b)>i){
            c++;
        }
    }

    cout<<c;
    return 0;
}
