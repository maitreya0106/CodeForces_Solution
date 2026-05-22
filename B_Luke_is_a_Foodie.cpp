#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





void solve() {
    ll n,x;
    cin >> n >> x;
    vector<pair<ll,ll>> a(n);
    for(ll i=0; i<n; i++){
        ll y;
        cin >> y;
        a[i]={y-x,y+x};
    }
    ll ans = 0;
    ll l = a[0].first;
    ll r = a[0].second;
    for(ll i=1; i<n; i++){
        l = max(l, a[i].first);
        r = min(r, a[i].second);
        if(l>r){
            l = a[i].first;
            r = a[i].second;
            ans++;
        }
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
