#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not primes
    if (n == 2) return true; // 2 is the only even prime number
    if (n % 2 == 0) return false; // other even numbers are not primes
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false; // not prime if divisible by any odd number
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    if (isPrime(n)) {
        cout << "NO PUNISHMENT" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;
        }
    }

    return 0;
}
