#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x%k!=0){
            mp[k-(x%k)]++;
        }
    }
    ll ans = 0;
    for(auto it: mp){
        ll num = it.first;
        ll freq = it.second;
        ll s = num+(freq-1)*k+1;
        ans = max(ans,s);
    }
    cout << ans << endl;
    
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