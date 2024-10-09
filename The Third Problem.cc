#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers;
    int n;
    while (cin >> n) {
        numbers.push_back(n);
        if (cin.peek() == '\n') {
            break;
        }
    }

        cout << numbers[2] << endl;


    return 0;
}
