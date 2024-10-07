#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[0] = toupper(s[0]);


    for (char &c : s) {
        if (c == 's') {
            cout << "$";
        } else if (c == 'i') {
            cout << "!";
        } else if (c == 'o') {
            cout << "()";
        } else {
            cout << c;
        }
    }

    cout << "." << endl;
    return 0;
}
