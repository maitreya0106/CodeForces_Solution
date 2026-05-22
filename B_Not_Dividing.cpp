#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        if(a[i]==1){
            a[i]++;
        }
    }
    for(ll i=0; i<n-1; i++){
        if(a[i+1]%a[i]==0){
            a[i+1]++;
        }
    }
    for(ll i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    

    
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
