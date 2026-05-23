#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the minimum required k, which is L
    long long max_val = 0;
    long long L = 0;
    for (int i = 0; i < n; i++) {
        if (max_val > a[i]) {
            L = max(L, max_val - a[i]);
        }
        max_val = max(max_val, a[i]);
    }

    // If L is 0, the array is already sorted
    if (L == 0) {
        cout << "YES\n";
        return;
    }

    // DP State definitions
    bool can0 = true;
    bool can1 = true;

    // Check if there is any valid sequence of (+0) and (+L) operations
    for (int i = 1; i < n; i++) {
        bool next0 = false;
        bool next1 = false;

        // Transitions from assigning 0 to the previous element
        if (can0) {
            if (a[i - 1] <= a[i]) next0 = true;
            next1 = true; // a[i-1] <= a[i] + L is structurally guaranteed
        }
        // Transitions from assigning 1 (+L) to the previous element
        if (can1) {
            if (a[i - 1] + L <= a[i]) next0 = true;
            if (a[i - 1] <= a[i]) next1 = true;
        }

        can0 = next0;
        can1 = next1;
    }

    // If at least one valid path finishes sorting the array
    if (can0 || can1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}