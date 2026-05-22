#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll zero = 0;
    ll one = 0;
    for(ll i=0; i < n; i++) {
        ll x;
        cin >> x;
        if(x == 0) {
            zero++;
        } else if(x == 1) {
            one++;
        }
    }
    ll ways = one*(pow(2, zero));
        cout << ways << endl;


    
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
