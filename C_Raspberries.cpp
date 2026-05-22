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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll even = 0;
    ll ans = INT_MAX;
    for(ll i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }
        if(a[i]%k==0){
            ans = 0;
        }
        ans = min(ans, k-a[i]%k);
    }
    if(k==4){
        if(even>=2){
            ans = min(ans, 0LL);
        }
        else if(even==1){
            ans = min(ans, 1LL);
        }
        else if(even==0){
            ans = min(ans, 2LL);
        }
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
