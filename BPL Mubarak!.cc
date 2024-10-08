#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<string> results(T);

    for (int i = 0; i < T; ++i) {
        cin >> results[i];
    }

    for (const string &S : results) {
        int legalBalls = 0;

        for (char outcome : S) {
            if (outcome >= '0' && outcome <= '6' || outcome == 'O') {
                ++legalBalls;
            }
        }

        int overs = legalBalls / 6;
        int balls = legalBalls % 6;

        if (overs > 0) {
            cout << overs << " OVER" << (overs > 1 ? "S " : " ");
        }
        if (balls > 0) {
            cout << balls << " BALL" << (balls > 1 ? "S" : "") << " ";
        }
        if (overs == 0 && balls == 0) {
            cout << "0 BALLS ";
        }
        cout << endl;
    }

    return 0;
}
