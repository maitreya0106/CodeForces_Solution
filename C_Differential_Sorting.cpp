#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    bool sort = true;
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            sort = false;
            break;
        }
    }
    if(sort){
        cout << 0 << endl;
        return;
    }
    if(a[n-1]<a[n-2]){
        cout << -1 << endl;
        return;
    }
    if(a[n-1]<0){
        cout << -1 << endl;
        return;
    }

    ll num = a[n-1]-a[n-2];
    cout << n-2 << endl;
    for(ll i=0; i<n-2; i++){
        cout << i+1 << " " << n-1 << " " << n << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}