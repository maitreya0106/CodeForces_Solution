#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    vector<ll> a(n);
    ll total_cnt = 0;
    
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        total_cnt += a[i] / x;
    }

    ll ans = -1;
    

    for(ll i = 0; i < n; i++) {
        ll current_target_val = a[i] + (total_cnt - (a[i] / x)) * y;
        ans = max(ans, current_target_val);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}