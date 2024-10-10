#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        cin >> s;
        stack<char> stk;
        bool isValid = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            } else {
                if (stk.empty() || (s[i] == ')' && stk.top() != '(') || (s[i] == ']' && stk.top() != '[') || (s[i] == '}' && stk.top() != '{')) {
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
/*
Example:
Let’s use the input string: "{[()]}".

Code Execution:
Initialization:

stack<char> stk creates a stack to keep track of opening brackets.

bool isValid = true initializes the validity flag.

Input String:

The input string is "{[()]}".

Loop through Each Character:

Iterates through each character of the input string.

Push Opening Brackets:

If the character is an opening bracket ('(', '[', or '{'), it gets pushed onto the stack.

Process Each Character:

Character {:

Is an opening bracket, so it is pushed onto the stack.

Stack: ["{"]

Character [:

Is an opening bracket, so it is pushed onto the stack.

Stack: ["{", "["]

Character (:

Is an opening bracket, so it is pushed onto the stack.

Stack: ["{", "[", "("]

Character ):

Is a closing bracket, so the code checks if it matches the top of the stack:

Top of the stack is (, which matches ), so the top of the stack is popped.

Stack: ["{", "["]

Character ]:

Is a closing bracket, so the code checks if it matches the top of the stack:

Top of the stack is [, which matches ], so the top of the stack is popped.

Stack: ["{"]

Character }:

Is a closing bracket, so the code checks if it matches the top of the stack:

Top of the stack is {, which matches }, so the top of the stack is popped.

Stack: [] (Empty)

Final Check:

After processing all characters, if the stack is empty, the sequence is valid.

If stk.empty() is true, isValid remains true.

cout << (isValid ? "Yes" : "No") << endl; prints "Yes" since isValid is true.
*/
