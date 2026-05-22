
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
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll i;
    bool flag = false;
    for(i=1; i<n-1; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << i << " " << i+1 << " " << i+2 << "\n";
        
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
