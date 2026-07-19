#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    if(n==1) {cout << 1 << endl; return;}
    if(n==2) {cout << -1 << endl; return;}
    vector<ll> a = {1,2,3};
    ll cur = 6;
    for(ll i=4; i<=n; i++){
        a.push_back(cur);
        cur*=2;
    }
    for(ll i=0; i<n; i++) cout << a[i] << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
