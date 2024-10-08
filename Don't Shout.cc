#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;

    while (ss >> word) {
        bool isUpper = true;
        for (char ch : word) {
            if (!isupper(ch)) {
                isUpper = false;
                break;
            }
        }
        if (!isUpper) {
            cout << word << " ";
        }
    }
    cout << endl;

    return 0;
}
