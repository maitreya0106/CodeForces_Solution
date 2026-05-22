#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n,q;
    cin >> n >> q;
    ll sum = 0;
    vector<pair<ll,ll>>a(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        sum+=x;
        a[i]={x,0};
    }
    pair<ll,ll> glo = {0,-1};

    for(ll i=1; i<=q; i++){
        ll t;
        cin >> t;
        if(t==2){
            ll x;
            cin >> x;
            sum = x*n;
            cout << sum << endl;
            glo = {x,i};
        }
        else if(t==1){
            ll pos,x;
            cin >> pos >> x;
            pos--;
            if(glo.second>a[pos].second){
                sum = sum-glo.first+x;
                a[pos].first = x;
                a[pos].second = i;
            }
            else{
                sum = sum-a[pos].first+x;
                a[pos].first = x;
                a[pos].second = i;
            }
            cout << sum << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
        solve();
   
    return 0;
}