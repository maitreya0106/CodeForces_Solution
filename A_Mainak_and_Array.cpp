
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll maxi = INT_MIN;
    ll maxn = INT_MIN;
    ll minn = INT_MAX;
    minn = min(minn, a[0]);
    maxn = max(maxn, a[0]);
    for(int i=1; i<n; i++){
        maxn = max(maxn, a[i]);
        minn = min(minn, a[i]);
        maxi = max(maxi, a[i-1] - a[i]);
    }
    maxi = max(maxi, a[n-1]-a[0]);
    maxi = max(maxi, maxn - a[0]);
    maxi = max(maxi, a[n-1] - minn);
    cout << maxi << endl;
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
