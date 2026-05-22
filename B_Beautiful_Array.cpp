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
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    ll minv = b * k;
    ll maxv = b * k + (k - 1) * (n);
    if (s < minv || s > maxv) {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n, 0);
    ans[0] = minv;
    s -= minv;
    for(ll i=0; i<n; i++){
        ll add = min(k-1,s);
        ans[i] += add;
        s -= add;
    }
    for(auto& x : ans) {
        cout << x << " ";
    }
    cout << endl;

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
