#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    vector<ll> prefix(n+1,0);
    for(ll i=0; i<n; i++){
        prefix[i+1]=prefix[i]+a[i];
    }
    ll total = prefix[n];
    ll ans = 0;
    for(ll i=0; i<=k; i++){
        ll l = prefix[2*i];
        ll r = prefix[n]-prefix[n-(k-i)];
        ll sum = total - l - r;
        ans = max(ans,sum);
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