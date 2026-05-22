#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    
    map<ll,ll> freq;
    for(ll i=0; i<n; i++) freq[a[i]]++;
    ll ans = 0;
    for(auto &[ele,fre]:freq){
        ans+=max(freq[ele]-freq[ele-1],0LL);
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
