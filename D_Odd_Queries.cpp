
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll> pre(n+1);
    pre[0] = 0; // Initialize prefix sum array
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        pre[i+1] = sum;
    }
    while(q--){
        ll l,r,k;
        cin >> l >> r >> k;
        ll temp = sum;
        temp += k*(r-l+1);
        temp -= pre[r]-pre[l-1]; 
        if(temp%2!=0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
