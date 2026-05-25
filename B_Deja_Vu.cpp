#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n),po(q);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<q; i++) cin >> po[i];
    ll prev = 31;
    for(ll i=0; i<q; i++){
        if(po[i]>=prev) continue;
        ll val = 1LL<<(po[i]);
        for(ll j=0; j<n; j++){
            if(a[j]%val==0){
                a[j]+=val/2;
            }
        }
        prev=po[i];

    }
    for(ll i=0; i<n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}