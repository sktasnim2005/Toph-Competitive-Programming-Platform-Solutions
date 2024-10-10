#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        cin >> s;
        stack<char> stk;
        bool isValid = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' ) {
                stk.push(s[i]);
            } else {
                if (stk.empty() || (s[i] == ')' && stk.top() != '(')) {
                    isValid = false;
                    break;
                }
                stk.pop();
            }
        }
        if (!stk.empty()) isValid = false;
        cout << (isValid ? "Yes" : "No") << endl;

    return 0;
}
