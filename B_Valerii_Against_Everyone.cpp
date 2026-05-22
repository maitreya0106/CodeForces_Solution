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
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }
    if(s.size()<n){
        cout << "YES\n";
    }else{
        cout << "NO\n";

    }
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
