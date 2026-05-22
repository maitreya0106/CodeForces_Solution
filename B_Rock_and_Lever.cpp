#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> bit(31,0);
    for(ll i=0; i<n; i++){
        for(ll j=30; j>=0; j--){
            if(a[i]&(1<<j)){
                bit[j]++;
                break;
            }
        }
    }
    ll ans = 0;
    for(ll i=0; i<31; i++){
        ans+=(bit[i]*(bit[i]-1))/2;
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
