#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

// Fast exponentiation to compute modular inverse
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, MOD - 2);
}

// Fenwick Tree / Binary Indexed Tree for fast inversion counting
struct FenwickTree {
    int n;
    vector<int> tree;
    FenwickTree(int n) : n(n) {
        tree.assign(n + 1, 0);
    }
    void add(int i, int delta) {
        for (; i <= n; i += i & -i) {
            tree[i] += delta;
        }
    }
    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & -i) {
            sum += tree[i];
        }
        return sum;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    // Base case edge handling
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }

    // Step 1: Count standard inversions strictly in array a
    long long inv_A = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                inv_A++;
            }
        }
    }

    // Step 2: Generate all n^2 products to coordinate compress
    vector<long long> vals;
    vals.reserve(n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vals.push_back(a[i] * b[j]);
        }
    }

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    int num_vals = vals.size();

    // Step 3: Count total cross-product inversions using a Fenwick Tree
    FenwickTree bit(num_vals);
    long long total_inv = 0;
    
    // Process backwards to easily count elements smaller than the current ones
    for (int i = n - 1; i >= 0; i--) {
        // Query phase
        for (int j = 0; j < n; j++) {
            long long val = a[i] * b[j];
            int idx = lower_bound(vals.begin(), vals.end(), val) - vals.begin() + 1;
            total_inv += bit.query(idx - 1);
        }
        // Insertion phase
        for (int j = 0; j < n; j++) {
            long long val = a[i] * b[j];
            int idx = lower_bound(vals.begin(), vals.end(), val) - vals.begin() + 1;
            bit.add(idx, 1);
        }
    }

    // Step 4: Subtract self-matched cases and compute the final expected value mod 998244353
    long long S = total_inv - (long long)n * inv_A;
    S %= MOD;
    if (S < 0) S += MOD;

    long long den = (long long)n * (n - 1) % MOD;
    long long ans = S * modInverse(den) % MOD;
    
    cout << ans << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}