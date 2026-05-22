\
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
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<ll> v(2*n+1,0);
    ll cnt = 1;
    for(ll i=1; i<n; i++){
        if(a[i]==a[i-1]){
            cnt++;
        }
        else{
            v[a[i-1]]=max(v[a[i-1]], cnt);
            cnt = 1;
        }
    }
    v[a[n-1]]=max(v[a[n-1]], cnt);  
    vector<ll> v1(2*n+1,0);
    cnt = 1;
    for(ll i=1; i<n; i++){
        if(b[i]==b[i-1]){
            cnt++;
        }
        else{
            v1[b[i-1]]=max(v1[b[i-1]], cnt);
            cnt = 1;
        }
    }
    v1[b[n-1]]=max(v1[b[n-1]], cnt);
    ll ans = -1;
    for(int i=1; i<=2*n; i++){
        ans = max(ans, v[i]+v1[i]);
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
