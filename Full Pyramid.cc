#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        // Print leading spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // Print asterisks with spaces
        for(int j = 1; j <= i; j++){
            cout << "*";
            if (j < i) {
                cout << " "; // Print space after asterisk except for the last one
            }
        }
        cout << endl;
    }
    return 0;
}
