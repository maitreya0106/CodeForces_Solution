
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
    ll n,x;
    cin >> n >> x;
   
    ll maxv = 0;
    ll minv = 0;
    for(ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        minv += temp;
        maxv += ceil(temp *1.0/x);
    }
    minv = ceil(minv * 1.0 / x);
    cout << minv << " " << maxv << "\n";
   
    

    
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
