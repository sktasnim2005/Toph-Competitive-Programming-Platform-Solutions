#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    vector<int> dCount(10, 0);

    // Count the occurrences of each digit
    for (char c : num) {
        dCount[c - '0']++;
    }

    int maxCount = 0;
    int mDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (dCount[i] > maxCount) {
            maxCount = dCount[i];
            mDigit = i;
        } else if (dCount[i] == maxCount && i < mDigit) {
            mDigit = i; // Update to the smaller digit in case of a tie
        }
    }

    cout << mDigit << endl;
    return 0;
}
