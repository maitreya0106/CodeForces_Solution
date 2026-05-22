#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    // Step 1: Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    long long ans = 1;
    
    // Step 2: Process b from largest to smallest
    for (int i = n - 1; i >= 0; i--) {
        
        // Find how many elements in 'a' are strictly greater than b[i]
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        long long count_greater = a.end() - it;
        
        // How many elements have we already assigned?
        // Since we go backwards from (n-1), the number of used elements is (n - 1) - i
        long long already_used = (n - 1) - i;
        
        // Available choices for the current b[i]
        long long choices = count_greater - already_used;
        
        // If at any point we have 0 or fewer choices, a valid ordering is impossible
        if (choices <= 0) {
            cout << 0 << "\n";
            return;
        }
        
        // Multiply the choices modulo 10^9 + 7
        ans = (ans * choices) % MOD;
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
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