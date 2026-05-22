#include <bits/stdc++.h>
using namespace std;

// Precomputed number of ways to split digits into (a, b, c)
long long dp[30];

// Precompute number of (a, b, c) where a + b + c = sum (no carry, 0 <= a,b,c <= 9)
void precompute() {
    for (int a = 0; a <= 9; ++a) {
        for (int b = 0; b <= 9; ++b) {
            for (int c = 0; c <= 9; ++c) {
                dp[a + b + c]++;
            }
        }
    }
}

// For a given number n, calculate the number of good triples
long long goodTriples(int n) {
    long long res = 1;
    while (n > 0) {
        int digit = n % 10;
        res *= dp[digit];
        n /= 10;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << goodTriples(n) << "\n";
    }
    return 0;
}
