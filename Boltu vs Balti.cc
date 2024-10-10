// 1st way
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        if (N > M) swap(N, M); // Ensure N is the smaller value

        long long sum = 0;   
        for (int i = N; i <= M; i++) {
            sum += i;
        }
        cout << "Sum of " << N << " to " << M << " is -> " << sum << ";" << endl;
    }
    return 0;
}


//2nd way
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        // Ensure N is the smaller value
        if (N > M) swap(N, M);

        long long sum_N = static_cast<long long>(N) * (N - 1) / 2;
        long long sum_M = static_cast<long long>(M) * (M + 1) / 2;

        cout << "Sum of " << N << " to " << M << " is -> " << sum_M - sum_N << ";" << endl;
    }

    return 0;
}


//3rd way
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M;
    while (cin >> N >> M) {
        if (N > M) swap(N, M);
        long long n = N - 1;
        long long x = (n * (n + 1)) / 2;
        long long y = (M * (M + 1)) / 2;
        cout << "Sum of " << N << " to " << M << " is -> " << y - x << ";" << endl;
    }
    return 0;
}
