#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count1 = 0, count5 = 0, count10 = 0, count50 = 0, count100 = 0, count500 = 0;

    vector<int> result;

    while (x >= 500) {
        x -= 500;
        result.push_back(500);
    }
    while (x >= 100) {
        x -= 100;
        result.push_back(100);
    }
    while (x >= 50) {
        x -= 50;
        result.push_back(50);
    }
    while (x >= 10) {
        x -= 10;
        result.push_back(10);
    }
    while (x >= 5) {
        x -= 5;
        result.push_back(5);
    }
    while (x >= 1) {
        x -= 1;
        result.push_back(1);
    }

    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
