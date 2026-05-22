#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>> a[i];

    ll diff = -1;
    for(ll i=1; i<n; i++){
        if(a[i]!=a[0]){
            diff = i;
            break;
        }
    }
    if(diff==-1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(ll i=1; i<n; i++){
        if(a[i]!=a[0]){
            cout << 1 << " " << i+1 << endl;
        }
    }
    for(ll i=1; i<n; i++){
        if(a[i]==a[0]){
            cout << diff+1 << " " << i+1 << endl;
        }
    }


    
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
