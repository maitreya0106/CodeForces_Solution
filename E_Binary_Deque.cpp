#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    ll ans = INT_MAX;
    unordered_map<ll, ll> mp;
    

    mp[0] = -1; 
    
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        sum += a[i];
        

        if(mp.find(sum - s) != mp.end()){
            ans = min(ans, n - (i - mp[sum - s]));
        }
        

        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    
    if(ans == INT_MAX){
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}