#include <bits/stdc++.h>
using namespace std;

int main() {
    int A11,A12,A21,A22,B11,B12,B21,B22;
    cin>>A11>>A12>>A21>>A22>>B11>>B12>>B21>>B22;

    int C11=0,C12=0,C21=0,C22=0;

    C11 = (A11 *  B11) + (A12 * B21);
    C12 = (A11 *  B12) + (A12 * B22);
    C21 =  (A21 *  B11) + (A22 * B21);
    C22 =  (A21 *  B12) + (A22 * B22);
    cout<<C11<<" "<<C12<<endl;
    cout<<C21<<" "<<C22<<endl;
    return 0;
}
