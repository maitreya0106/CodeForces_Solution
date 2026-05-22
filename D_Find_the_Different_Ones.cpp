#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> post(n,1);

    for(ll i=n-2; i>=0; i--){
        if(a[i]==a[i+1]){
            post[i]=post[i+1]+1;
        }
    }

    ll q;
    cin >> q;
    for(ll i=0; i<q; i++){
        ll l,r;
        cin >> l >> r;
        if(a[l-1]!=a[r-1]){
            cout << l << " " << r << endl;
        }
        else{
            if(post[l-1]>r-l){
                cout << -1 << " " << -1 << endl;
            }
            else{
                ll temp = post[l-1];
                cout << l+temp << " " << r << endl;
            }
        }
    }
    cout << endl;
    
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
