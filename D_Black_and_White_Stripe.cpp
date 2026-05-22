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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = INT_MAX;
    vector<ll> pre(n+1,0);
    for(ll i=0; i<n; i++){
        pre[i+1]=pre[i]+(s[i]=='W');
    }
    for(ll i=0; i<=n-k; i++){
        ans = min(ans,pre[i+k]-pre[i]);
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
