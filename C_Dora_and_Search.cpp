#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    ll min_val = 1;
    ll max_val = n;

    ll l = 0;
    ll r = n-1;

    while(l<r){
        if(a[l]==min_val){
            l++;
            min_val++;
        }
        else if(a[l]==max_val){
            l++;
            max_val--;
        }
        else if(a[r]==min_val){
            r--;
            min_val++;
        }
        else if(a[r]==max_val){
            r--;
            max_val--;
        }
        else break;
    }
    if(l>=r) cout << -1 << endl;
    else{
        cout << l+1 << " " << r+1 << endl;
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
