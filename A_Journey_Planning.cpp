#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n+1);
    for(ll i=0; i<=n; i++) cin >> a[i];

    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll d = a[i]-i;
        mp[d]=mp[d]+a[i];
    }
    ll ans = 0;
    for(auto it: mp){
        ans = max(ans,it.second);
    }
    cout << ans << endl;
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
        solve();
    
    return 0;
}