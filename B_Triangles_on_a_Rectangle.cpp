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
    ll w,k;
    cin >> w >> k;
    ll a,b,c,d;
    cin >> a;
    vector<ll> x1(a);
    for (ll i = 0; i < a; i++) {
        cin >> x1[i];
    }
    cin >> b;
    vector<ll> x2(b);
    for (ll i = 0; i < b; i++) {
        cin >> x2[i];
    }
    cin >> c;
    vector<ll> y1(c);
    for (ll i = 0; i < c; i++) {
        cin >> y1[i];
    }
    cin >> d;
    vector<ll> y2(d);
    for (ll i = 0; i < d; i++) {
        cin >> y2[i];
    }
    ll ans = (x1[a-1]-x1[0])*k;
    ans = max(ans, (x2[b-1]-x2[0])*k);
    ans = max(ans, (y1[c-1]-y1[0])*w);
    ans = max(ans, (y2[d-1]-y2[0])*w);
    cout << ans << "\n";
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
