#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    // Step 1: Always check k >= 3 first
    if (k >= 3) {
        cout << 0 << "\n";
        return;
    }
    
    sort(a.begin(), a.end());
    
    // Base answer: the minimum element currently in the array
    ll ans = a[0]; 
    
    // Step 2: Handle k = 1 (check all adjacent differences)
    for (ll i = 0; i < n - 1; i++) {
        ans = min(ans, a[i + 1] - a[i]);
    }
    
    if (k == 1) {
        cout << ans << "\n";
        return;
    }
    
    // Step 3: Handle k = 2 using Binary Search
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll d = a[j] - a[i];
            
            // Find the closest element to 'd' in the sorted array
            auto it = lower_bound(a.begin(), a.end(), d);
            
            if (it != a.end()) {
                ans = min(ans, abs(*it - d));
            }
            if (it != a.begin()) {
                ans = min(ans, abs(*prev(it) - d));
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}