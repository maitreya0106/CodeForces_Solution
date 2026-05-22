#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll ans = 0;
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        if(mp.find(a[i]-i)!=mp.end()){
            ans+=mp[a[i]-i];
        }
        mp[a[i]-i]++;
    }
    cout << ans << endl;
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