#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result;

    int count = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        result = s[i] + result;
        count++;
        if (count % 3 == 0 && i != 0) {
            result = ',' + result;
        }
    }

    cout << result << endl;
    return 0;
}
