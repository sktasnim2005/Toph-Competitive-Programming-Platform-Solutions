#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Calculate the sum of the Nth row in Pascal's triangle
    unsigned long long sum = pow(2, N);
    
    cout << sum << endl;
    
    return 0;
}
