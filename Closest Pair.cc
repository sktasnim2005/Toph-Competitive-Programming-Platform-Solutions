#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

// Function to calculate the distance between two points
double calculateDistance(pair<int, int> p1, pair<int, int> p2) {
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> points(N);

    // Reading the points
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    double minDistance = numeric_limits<double>::max();

    // Brute-force approach to find the minimum distance
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            double distance = calculateDistance(points[i], points[j]);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    // Printing the minimum distance with precision
    cout.precision(15);
    cout << minDistance << endl;

    return 0;
}
