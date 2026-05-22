#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    ll ans = 0;

    for(ll k=1; k<=n/2; k++){
        if(n%k!=0) continue;
        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;
        for(ll i=0; i<n; i+=k){
            ll w = 0;
            for(ll j=0; j<k; j++){
                w += a[j+i];
            }
            mx = max(mx,w);
            mn = min(mn,w);
        }
        ans = max(ans,mx-mn);
    }


    cout << ans << endl;
    

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}