#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> second;
    ll minv = LLONG_MAX;
    for(ll i=0; i<n; i++){
        ll m;
        cin >> m;
        vector<ll> a(m);
        for(auto& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        minv = min(minv, a[0]);
        second.push_back(a[1]);
    }
    sort(second.begin(), second.end());
    ll ans = 0;
    ans = accumulate(second.begin(), second.end(), 0LL);
    cout << ans + minv - second[0] << endl;
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
