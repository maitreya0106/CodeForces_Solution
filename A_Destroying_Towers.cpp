#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    ll minv = INT_MAX;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        minv = min(minv,x);
        ans+=minv;
    }
    cout << ans << endl;

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