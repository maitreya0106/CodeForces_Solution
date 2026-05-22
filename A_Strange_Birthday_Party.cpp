#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), c(m);
    for(ll i=0; i<n;i++) cin >> a[i];
    for(ll i=0; i<m; i++) cin >> c[i];

    sort(a.rbegin(),a.rend());
    ll till = 0;

    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(till<=a[i]-1){
            ans+=c[till];
            till++;
        }
        else{
            ans+=c[a[i]-1];
        }
    }
    cout << ans << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}