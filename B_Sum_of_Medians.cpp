
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
    vector<ll> a(n*k);
    for(ll i = 0; i < n * k; i++) {
        cin >> a[i];
    }
    ll temp = n/2+1;
    ll ans = 0;
    ll temp2 = k;
    while(temp2--){
        ans+=a[n*k-temp];
        temp+=n/2+1;
        
    }
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
