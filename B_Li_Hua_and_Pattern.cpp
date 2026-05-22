#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> grid(n, std::vector<int>(n));
    int mismatch = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] != grid[n - 1 - i][n - 1 - j]) {
                mismatch++;
            }
        }
    }
    
    // Each pair is counted twice, so we divide by 2.
    mismatch /= 2;

    if (k < mismatch) {
        std::cout << "NO\n";
        return;
    }

    long long remaining_ops = k - mismatch;

    // Check if remaining operations can be spent
    if (remaining_ops % 2 == 0) {
        std::cout << "YES\n";
    } else {
        // An odd number of remaining ops can only be spent if n is odd
        // (by flipping the center cell)
        if (n % 2 == 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}