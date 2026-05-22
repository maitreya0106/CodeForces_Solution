#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll x,y,k;
    cin >> x >> y >> k;
    ll num = y * k + k - 1;
    ll den = x - 1;
    ll a = (num + den - 1) / den;  // ceiling division
    cout << a + k << "\n";
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
